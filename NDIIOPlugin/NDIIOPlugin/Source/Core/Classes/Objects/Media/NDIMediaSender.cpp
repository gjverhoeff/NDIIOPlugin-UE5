/*
	All rights reserved. Copyright(c) 2018-2021, NewTek Inc.

	This file and it's use within a Product is bound by the terms of NDI SDK license that was provided
	as part of the NDI SDK. For more information, please review the license and the NDI SDK documentation.
*/

#include <Objects/Media/NDIMediaSender.h>
#include <Misc/CoreDelegates.h>
#include <RenderTargetPool.h>

#include <GlobalShader.h>
#include <ShaderParameterUtils.h>
#include <Services/NDIConnectionService.h>

#include <Async/Async.h>

#include "NDIShaders.h"

#if WITH_EDITOR
#include <Editor.h>
#endif

UNDIMediaSender::UNDIMediaSender(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{}

/**
	Attempts to perform initialization logic for creating a sender through the NDI® sdk api
*/
void UNDIMediaSender::Initialize()
{
	if (this->p_send_instance == nullptr)
	{
		// Create valid settings to be seen on the network
		NDIlib_send_create_t settings;
		settings.clock_audio = false;
		settings.clock_video = false;
		settings.p_ndi_name = TCHAR_TO_UTF8(*this->SourceName);

		// create the instance and store it
		p_send_instance = NDIlib_send_create(&settings);

		// If it's valid then lets do some engine related setup
		if (p_send_instance != nullptr)
		{
			// Update the Render Target Configuration
			ChangeRenderTargetConfiguration(FrameSize, FrameRate);

			// Send audio frames at the end of the 'update' loop
			FNDIConnectionService::EventOnSendAudioFrame.AddUObject(this, &UNDIMediaSender::TrySendAudioFrame);

			// We don't want to limit the engine rendering speed to the sync rate of the connection hook
			// into the core delegates render thread 'EndFrame'
			FNDIConnectionService::EventOnSendVideoFrame.AddUObject(this, &UNDIMediaSender::TrySendVideoFrame);

			// Initialize the 'LastRender' timecode
			LastRenderTime = FTimecode::FromTimespan(0, FrameRate, FTimecode::IsDropFormatTimecodeSupported(FrameRate),
													 true // use roll-over timecode
			);

			// Default to 240p
			static int32 DefaultWidth = 352;
			static int32 DefaultHeight = 240;

			// Set the default video texture to reference nothing
			TRefCountPtr<FRHITexture2D> ShaderTexture2D;
			TRefCountPtr<FRHITexture2D> RenderableTexture;
			//FRHIResourceCreateInfo CreateInfo = {FClearValueBinding(FLinearColor(0.0f, 0.0f, 0.0f))};
			FRHIResourceCreateInfo CreateInfo = FRHIResourceCreateInfo
			(
				TEXT("NDIVideoTextureBuffer"),
				FClearValueBinding(FLinearColor(0.0f, 0.0f, 0.0f))
			)
				;

			RHICreateTargetableShaderResource2D(DefaultWidth, DefaultHeight, PF_B8G8R8A8, 1, TexCreate_None,
												TexCreate_RenderTargetable, false, CreateInfo, RenderableTexture,
												ShaderTexture2D);

			DefaultVideoTextureRHI = (FTexture2DRHIRef&)RenderableTexture;

#if UE_EDITOR

			// We don't want to provide perceived issues with the plugin not working so
			// when we get a Pre-exit message, forcefully shutdown the receiver
			FCoreDelegates::OnPreExit.AddWeakLambda(this, [&]() {
				this->Shutdown();
				FCoreDelegates::OnPreExit.RemoveAll(this);
			});

			// We handle this in the 'Play In Editor' versions as well.
			FEditorDelegates::PrePIEEnded.AddWeakLambda(this, [&](const bool) {
				this->Shutdown();
				FEditorDelegates::PrePIEEnded.RemoveAll(this);
			});

#endif
		}
	}
}

/**
	Changes the name of the sender object as seen on the network for remote connections
*/
void UNDIMediaSender::ChangeSourceName(const FString& InSourceName)
{
	this->SourceName = InSourceName;

	if (p_send_instance != nullptr)
	{
		FScopeLock AudioLock(&AudioSyncContext);
		FScopeLock RenderLock(&RenderSyncContext);

		// Get the command list interface
		FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();

		// send an empty frame over NDI to be able to cleanup the buffers
		ReadbackTextures.Flush(RHICmdList, p_send_instance);

		// free up the old sender instance
		NDIlib_send_destroy(p_send_instance);

		// Create valid settings to be seen on the network
		NDIlib_send_create_t settings;
		settings.clock_audio = false;
		settings.clock_video = false;
		settings.p_ndi_name = TCHAR_TO_UTF8(*this->SourceName);

		// create the instance and store it
		p_send_instance = NDIlib_send_create(&settings);
	}
}

/**
	Attempts to change the Broadcast information associated with this media object
*/
void UNDIMediaSender::ChangeBroadcastConfiguration(const FNDIBroadcastConfiguration& InConfiguration)
{
	bIsChangingBroadcastSize = true;

	// Determine if we need to prevent the audio / video threads from updating frames
	if (p_send_instance != nullptr)
	{
		FScopeLock AudioLock(&AudioSyncContext);
		FScopeLock RenderLock(&RenderSyncContext);

		// Get the command list interface
		FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();

		// send an empty frame over NDI to be able to cleanup the buffers
		ReadbackTextures.Flush(RHICmdList, p_send_instance);

		// Change the render target configuration based on the incoming configuration
		ChangeRenderTargetConfiguration(InConfiguration.FrameSize, InConfiguration.FrameRate);
	}
	else
	{
		// Change the render target configuration based on the incoming configuration
		ChangeRenderTargetConfiguration(InConfiguration.FrameSize, InConfiguration.FrameRate);
	}

	bIsChangingBroadcastSize = false;
}

/**
	This will attempt to generate an audio frame, add the frame to the stack and return immediately,
	having scheduled the frame asynchronously.
*/
void UNDIMediaSender::TrySendAudioFrame(int64 time_code)
{
	// Currently unsupported
}

/**
	This will attempt to generate a video frame, add the frame to the stack and return immediately,
	having scheduled the frame asynchronously.
*/
void UNDIMediaSender::TrySendVideoFrame(int64 time_code)
{
	// This function is called on the Engine's Main Rendering Thread. Be very careful when doing stuff here.
	// Make sure things are done quick and efficient.

	if (p_send_instance != nullptr && !bIsChangingBroadcastSize)
	{
		FScopeLock Lock(&RenderSyncContext);

		if (IsValid(this->RenderTarget) && RenderTarget->Resource != nullptr)
		{
			// Alright time to perform the magic :D
			if (NDIlib_send_get_no_connections(p_send_instance, 0) > 0)
			{
				FTimecode RenderTimecode =
					FTimecode::FromTimespan(FTimespan::FromSeconds(time_code / (float)1e+7), FrameRate,
											FTimecode::IsDropFormatTimecodeSupported(FrameRate),
											true // use roll-over timecode
					);

				if (RenderTimecode.Frames != LastRenderTime.Frames)
				{
					// Get the command list interface
					FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();

					// alright, lets hope the render target hasn't changed sizes
					NDI_video_frame.timecode = time_code;

					// performing color conversion if necessary and copy pixels into the data buffer for sending
					if (DrawRenderTarget(RHICmdList))
					{
						int32 Width = 0, Height = 0;

						// Map the staging surface so we can copy the buffer for the NDI SDK to use
						ReadbackTextures.Map(RHICmdList, Width, Height);
						// Readback texture is used in 4:2:2 format, so actual width in pixels is double
						Width *= 2;

						// If we don't have a draw result, ensure we send an empty frame and resize our frame
						if (FrameSize != FIntPoint(Width, Height))
						{
							// send an empty frame over NDI to be able to cleanup the buffers
							ReadbackTextures.Flush(RHICmdList, p_send_instance);

							// Change the render target configuration based on what the RHI determines the size to be
							ChangeRenderTargetConfiguration(FIntPoint(Width, Height), this->FrameRate);
						}
						else
						{
							// send the frame over NDI
							ReadbackTextures.Send(RHICmdList, p_send_instance, NDI_video_frame);

							// Update the Last Render Time to the current Render Timecode
							LastRenderTime = RenderTimecode;
						}
					}
				}
			}
		}
	}
}

/**
	Perform the color conversion (if any) and bit copy from the gpu
*/
bool UNDIMediaSender::DrawRenderTarget(FRHICommandListImmediate& RHICmdList)
{
	bool DrawResult = false;

	// We should only do conversions and pixel copies, if we have something to work with
	if (!bIsChangingBroadcastSize && IsValid(this->RenderTarget) && RenderTarget->Resource != nullptr)
	{
		// Get the underlying texture to use for the color conversion
		FTexture2DRHIRef SourceTexture = (FTexture2DRHIRef&)RenderTarget->Resource->TextureRHI;

		// Validate the Source Texture
		if (SourceTexture.IsValid())
		{
			// We have something to draw
			DrawResult = true;

			// Define the RenderTargetPool
			TRefCountPtr<IPooledRenderTarget> RenderTargetTexturePool;

			// Find a free target-able texture from the render pool
			GRenderTargetPool.FindFreeElement(RHICmdList, RenderTargetDescriptor, RenderTargetTexturePool,
												TEXT("NDIIO"));
			FSceneRenderTargetItem RenderTargetItem = RenderTargetTexturePool->GetRenderTargetItem();
			FTextureRHIRef TargetableTexture = RenderTargetItem.TargetableTexture;

			// Initialize the Graphics Pipeline State Object
			FGraphicsPipelineStateInitializer GraphicsPSOInit;

			// Initialize the Render pass with the conversion texture
			FRHITexture* ConversionTexture = TargetableTexture.GetReference();
			FRHIRenderPassInfo RPInfo(ConversionTexture, ERenderTargetActions::DontLoad_Store);

			// Configure shaders
			FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);

			// Construct the shaders
			TShaderMapRef<FNDIIOShaderVS> VertexShader(ShaderMap);
			TShaderMapRef<FNDIIOShaderBGRAtoUYVYPS> ConvertShader(ShaderMap);

			// Get the target size of the conversion
			FIntPoint TargetSize = SourceTexture->GetSizeXY();

			// Calculate the rectangle in which to draw the source, maintaining aspect ratio
			float FrameRatio = FrameSize.X / (float)FrameSize.Y;
			float TargetRatio = TargetSize.X / (float)TargetSize.Y;

			FIntPoint NewFrameSize = FrameSize;

			if (TargetRatio > FrameRatio)
			{
				// letterbox
				NewFrameSize.Y = FMath::RoundToInt(FrameSize.X / TargetRatio);
			}
			else if (TargetRatio < FrameRatio)
			{
				// pillarbox
				NewFrameSize.X = FMath::RoundToInt(FrameSize.Y * TargetRatio);
			}

			FBufferRHIRef VertexBuffer = CreateTempMediaVertexBuffer(
					(NewFrameSize.X - FrameSize.X) / (float)(2*NewFrameSize.X),
					(NewFrameSize.X + FrameSize.X) / (float)(2*NewFrameSize.X),
					(NewFrameSize.Y - FrameSize.Y) / (float)(2*NewFrameSize.Y),
					(NewFrameSize.Y + FrameSize.Y) / (float)(2*NewFrameSize.Y)
			);

			// Scaled drawing pass with conversion to UYVY
			{
				RHICmdList.BeginRenderPass(RPInfo, TEXT("NDI Send Scaling Conversion"));

				// Do as it suggests
				RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
				// Set the state objects
				GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
				GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
				GraphicsPSOInit.BlendState = TStaticBlendStateWriteMask<CW_RGBA, CW_NONE, CW_NONE, CW_NONE, CW_NONE,
																		CW_NONE, CW_NONE, CW_NONE>::GetRHI();
				// Perform binding operations for the shaders to be used
				GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GMediaVertexDeclaration.VertexDeclarationRHI;
				GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
				GraphicsPSOInit.BoundShaderState.PixelShaderRHI = ConvertShader.GetPixelShader();
				// Going to draw triangle strips
				GraphicsPSOInit.PrimitiveType = PT_TriangleStrip;

				// Ensure the pipeline state is set to the one we've configured
				SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

				// Set the stream source
				RHICmdList.SetStreamSource(0, VertexBuffer, 0);

				// Set the texture parameter of the conversion shader
				ConvertShader->SetParameters(RHICmdList, FNDIIOShaderBGRAtoUYVYPS::Params(SourceTexture, FrameSize, bPerformsRGBtoLinear));

				// Draw the texture
				RHICmdList.DrawPrimitive(0, 2, 1);

				// Release the reference to SourceTexture from the shader
				// The SourceTexture may be the viewport's backbuffer, and Unreal does not like
				// extra references to the backbuffer when the viewport is resized
				ConvertShader->SetParameters(RHICmdList, FNDIIOShaderBGRAtoUYVYPS::Params(DefaultVideoTextureRHI, FrameSize, bPerformsRGBtoLinear));

				RHICmdList.EndRenderPass();
			}

			// Copy to resolve target...
			// This is by far the most expensive in terms of cost, since we are having to pull
			// data from the gpu, while in the render thread.
			ReadbackTextures.Resolve(RHICmdList, TargetableTexture);

			// Release the reference to SourceTexture from the shader
			// The SourceTexture may be the viewport's backbuffer, and Unreal does not like
			// extra references to the backbuffer when the viewport is resized
			RHICmdList.ImmediateFlush(EImmediateFlushType::FlushRHIThreadFlushResources);
		}
	}

	return DrawResult;
}

/**
	Change the render target configuration based on the passed in parameters

	@param InFrameSize The frame size to resize the render target to
	@param InFrameRate The frame rate at which we should be sending frames via NDI
*/
void UNDIMediaSender::ChangeRenderTargetConfiguration(FIntPoint InFrameSize, FFrameRate InFrameRate)
{
	// Ensure that the frame size matches what we are told the frame size is
	this->FrameSize = InFrameSize;
	this->FrameRate = InFrameRate;

	// reiterate the properties that the frame needs to be when sent
	NDI_video_frame.xres = FrameSize.X;
	NDI_video_frame.yres = FrameSize.Y;
	NDI_video_frame.line_stride_in_bytes = FrameSize.X * 2;
	NDI_video_frame.frame_rate_D = FrameRate.Denominator;
	NDI_video_frame.frame_rate_N = FrameRate.Numerator;
	NDI_video_frame.FourCC = NDIlib_FourCC_type_UYVY;

	// Create readback textures, suitably sized for UYVY
	this->ReadbackTextures.Create(FIntPoint(FrameSize.X/2,FrameSize.Y));

	// Create the RenderTarget descriptor, suitably sized for UYVY
	RenderTargetDescriptor = FPooledRenderTargetDesc::Create2DDesc(FIntPoint(FrameSize.X/2,FrameSize.Y), PF_B8G8R8A8, FClearValueBinding::None,
																   TexCreate_None, TexCreate_RenderTargetable, false);

	// If our RenderTarget is valid change the size
	if (IsValid(this->RenderTarget))
	{
		// Ensure that our render target is the same size as we expect
		this->RenderTarget->ResizeTarget(FrameSize.X, FrameSize.Y);
	}

	// determine if the notifier is bound
	if (this->OnBroadcastConfigurationChanged.IsBound())
	{
		// broadcast the notification to all interested parties
		OnBroadcastConfigurationChanged.Broadcast(this);
	}
}

/**
	This will add a metadata frame and return immediately, having schedule the frame asynchronously.
*/
void UNDIMediaSender::SendMetadataFrame()
{
	// Currently Metadata is not supported
}

/**
	Attempts to change the RenderTarget used in sending video frames over NDI
*/
void UNDIMediaSender::ChangeVideoTexture(UTextureRenderTarget2D* VideoTexture)
{
	// Wait render thread so that we can do something
	FScopeLock RenderLock(&RenderSyncContext);

	// Set our Render Target to the incoming video texture
	this->RenderTarget = VideoTexture;
}

/**
	Determines the current tally information. If you specify a timeout then it will wait until it has
	changed, otherwise it will simply poll it and return the current tally immediately

	@param IsOnPreview - A state indicating whether this source in on preview of a receiver
	@param IsOnProgram - A state indicating whether this source is on program of a receiver
	@param TimeOut	- Indicates the amount of time to wait (in milliseconds) until a change has occurred
*/
void UNDIMediaSender::GetTallyInformation(bool& IsOnPreview, bool& IsOnProgram, uint32 Timeout)
{
	// reset the parameters with the default values
	IsOnPreview = IsOnProgram = false;

	// validate our sender object
	if (p_send_instance != nullptr)
	{
		// construct a tally structure
		NDIlib_tally_t tally_info;

		// retrieve the tally information from the SDK
		NDIlib_send_get_tally(p_send_instance, &tally_info, 0);

		// perform a copy from the tally info object to our parameters
		IsOnPreview = tally_info.on_preview;
		IsOnProgram = tally_info.on_program;
	}
}

/**
	Gets the current number of receivers connected to this source. This can be used to avoid rendering
	when nothing is connected to the video source. which can significantly improve the efficiency if
	you want to make a lot of sources available on the network
*/
void UNDIMediaSender::GetNumberOfConnections(int32& Result)
{
	// reset the result
	Result = 0;

	// have we created a sender object
	if (p_send_instance != nullptr)
	{
		// call the SDK to get the current number of connection for the sender instance of this object
		Result = NDIlib_send_get_no_connections(p_send_instance, 0);
	}
}

/**
	Attempts to immediately stop sending frames over NDI to any connected receivers
*/
void UNDIMediaSender::Shutdown()
{
	// Perform cleanup on the audio related materials
	{
		FScopeLock Lock(&AudioSyncContext);

		// Remove ourselves from the 'LoopbackAudioDevice

		// Remove the handler for the send audio frame
		FNDIConnectionService::EventOnSendAudioFrame.RemoveAll(this);
	}

	// Perform cleanup on the renderer related materials
	{
		FScopeLock RenderLock(&RenderSyncContext);

		// destroy the sender
		if (p_send_instance != nullptr)
		{
			// Get the command list interface
			FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();

			// send an empty frame over NDI to be able to cleanup the buffers
			this->ReadbackTextures.Flush(RHICmdList, p_send_instance);

			NDIlib_send_destroy(p_send_instance);
			p_send_instance = nullptr;
		}

		this->DefaultVideoTextureRHI.SafeRelease();

		this->ReadbackTextures.Destroy();

		this->RenderTargetDescriptor.Reset();
	}
}

/**
   Called before destroying the object.  This is called immediately upon deciding to destroy the object,
   to allow the object to begin an asynchronous cleanup process.
 */
void UNDIMediaSender::BeginDestroy()
{
	// Call the shutdown procedure here.
	this->Shutdown();

	// Call the base implementation of 'BeginDestroy'
	Super::BeginDestroy();
}

/**
	Set whether or not a RGB to Linear conversion is made
*/
void UNDIMediaSender::PerformsRGBToLinearConversion(bool Value)
{
	this->bPerformsRGBtoLinear = Value;
}

/**
	Returns the Render Target used for sending a frame over NDI
*/
UTextureRenderTarget2D* UNDIMediaSender::GetRenderTarget()
{
	return this->RenderTarget;
}





/**
	A texture with CPU readback
*/

/**
	Check that the MappedTexture is not mapped, and the readback texture has been destroyed.
*/
UNDIMediaSender::MappedTexture::~MappedTexture()
{
	check(Texture.IsValid() == false);
	check(pData == nullptr);
}

/**
	Create the readback texture. If the texture was already created it will first be destroyed.
	The MappedTexture must currently not be mapped.
*/
void UNDIMediaSender::MappedTexture::Create(FIntPoint FrameSize)
{
	Destroy();

	check(Texture.IsValid() == false);
	check(pData == nullptr);

	// Resource creation structure
	//FRHIResourceCreateInfo CreateInfo;
	FRHIResourceCreateInfo CreateInfo = FRHIResourceCreateInfo(TEXT("NDISourceTextureBuffer"));

	// Recreate the read back texture
	Texture = RHICreateTexture2D(FrameSize.X, FrameSize.Y, PF_B8G8R8A8, 1, 1, TexCreate_CPUReadback, CreateInfo);
	pData = nullptr;

	check(Texture.IsValid() == true);
	check(pData == nullptr);
}

/**
	Destroy the readback texture (if not already destroyed). The MappedTexture must currently not be mapped.
*/
void UNDIMediaSender::MappedTexture::Destroy()
{
	check(pData == nullptr);

	if (Texture.IsValid())
	{
		Texture.SafeRelease();
		Texture = nullptr;
	}
	pData = nullptr;

	check(Texture.IsValid() == false);
	check(pData == nullptr);
}

FIntPoint UNDIMediaSender::MappedTexture::GetSizeXY() const
{
	if (Texture.IsValid())
		return Texture->GetSizeXY();
	else
		return FIntPoint();
}

/**
	Resolve the source texture to the readback texture. The readback texture must have been created.
	The MappedTexture must currently not be mapped.
*/
void UNDIMediaSender::MappedTexture::Resolve(FRHICommandListImmediate& RHICmdList, FRHITexture* SourceTextureRHI)
{
	check(Texture.IsValid() == true);
	check(pData == nullptr);
	check(SourceTextureRHI != nullptr);

	// Copy to resolve target...
	// This is by far the most expensive in terms of cost, since we are having to pull
	// data from the gpu, while in the render thread.
	RHICmdList.CopyToResolveTarget(SourceTextureRHI, Texture, FResolveParams());
}

/**
	Map the readback texture so that its content can be read by the CPU.
	The readback texture must have been created. The MappedTexture must currently not be mapped.
*/
void UNDIMediaSender::MappedTexture::Map(FRHICommandListImmediate& RHICmdList, int32& OutWidth, int32& OutHeight)
{
	check(Texture.IsValid() == true);
	check(pData == nullptr);

	// Map the staging surface so we can copy the buffer for the NDI SDK to use
	RHICmdList.MapStagingSurface(Texture, pData, OutWidth, OutHeight);

	check(pData != nullptr);
}

/**
	Return a pointer to the mapped readback texture content.
	The MappedTexture must currently be mapped.
*/
void* UNDIMediaSender::MappedTexture::MappedData() const
{
	check(pData != nullptr);

	return pData;
}

/**
	Unmap the readback texture (if currently mapped).
*/
void UNDIMediaSender::MappedTexture::Unmap(FRHICommandListImmediate& RHICmdList)
{
	if(pData != nullptr)
	{
		check(Texture.IsValid() == true);

		RHICmdList.UnmapStagingSurface(Texture);
		pData = nullptr;
	}

	check(pData == nullptr);
}



/**
	Class for managing the sending of mapped texture data to an NDI video stream.
	Sending is done asynchronously, so mapping and unmapping of texture data must
	be managed so that CPU accessible texture content remains valid until the
	sending of the frame is guaranteed to have been completed. This is achieved
	by double-buffering readback textures.
*/

/**
	Create the mapped texture sender. If the mapped texture sender was already created
	it will first be destroyed. No texture must currently be mapped.
*/
void UNDIMediaSender::MappedTextureASyncSender::Create(FIntPoint FrameSize)
{
	Destroy();

	MappedTexture& CurrentMappedTexture = MappedTextures[CurrentIndex];
	CurrentMappedTexture.Create(FrameSize);

	MappedTexture& PreviousMappedTexture = MappedTextures[1-CurrentIndex];
	PreviousMappedTexture.Create(FrameSize);
}

/**
	Destroy the mapped texture sender (if not already destroyed). No texture must currently be mapped.
*/
void UNDIMediaSender::MappedTextureASyncSender::Destroy()
{
	MappedTexture& CurrentMappedTexture = MappedTextures[CurrentIndex];
	CurrentMappedTexture.Destroy();

	MappedTexture& PreviousMappedTexture = MappedTextures[1-CurrentIndex];
	PreviousMappedTexture.Destroy();
}

FIntPoint UNDIMediaSender::MappedTextureASyncSender::GetSizeXY() const
{
	const MappedTexture& CurrentMappedTexture = MappedTextures[CurrentIndex];
	return CurrentMappedTexture.GetSizeXY();
}

/**
	Resolve the source texture to the current texture of the mapped texture sender.
	The mapped texture sender must have been created. The current texture must currently not be mapped.
*/
void UNDIMediaSender::MappedTextureASyncSender::Resolve(FRHICommandListImmediate& RHICmdList, FRHITexture* SourceTextureRHI)
{
	// Copy to resolve target...
	// This is by far the most expensive in terms of cost, since we are having to pull
	// data from the gpu, while in the render thread.
	MappedTexture& CurrentMappedTexture = MappedTextures[CurrentIndex];
	CurrentMappedTexture.Resolve(RHICmdList, SourceTextureRHI);
}

/**
	Map the current texture of the mapped texture sender so that its content can be read by the CPU.
	The mapped texture sender must have been created. The current texture must currently not be mapped.
*/
void UNDIMediaSender::MappedTextureASyncSender::Map(FRHICommandListImmediate& RHICmdList, int32& OutWidth, int32& OutHeight)
{
	// Map the staging surface so we can copy the buffer for the NDI SDK to use
	MappedTexture& CurrentMappedTexture = MappedTextures[CurrentIndex];
	CurrentMappedTexture.Map(RHICmdList, OutWidth, OutHeight);
}

/**
	Send the current texture of the mapped texture sender to an NDI video stream, then swaps the textures.
	The mapped texture sender must have been created. The current texture must currently be mapped.
*/
void UNDIMediaSender::MappedTextureASyncSender::Send(FRHICommandListImmediate& RHICmdList, NDIlib_send_instance_t p_send_instance, NDIlib_video_frame_v2_t& p_video_data)
{
	// Send the currently mapped data to an NDI stream asynchronously

	check(p_send_instance != nullptr);

	MappedTexture& CurrentMappedTexture = MappedTextures[CurrentIndex];

	p_video_data.p_data = (uint8_t*)CurrentMappedTexture.MappedData();

	NDIlib_send_send_video_async_v2(p_send_instance, &p_video_data);

	// After send_video_async returns, the frame sent before this one is guaranteed to have been processed
	// So the texture for the previous frame can be unmapped
	MappedTexture& PreviousMappedTexture = MappedTextures[1-CurrentIndex];
	PreviousMappedTexture.Unmap(RHICmdList);

	// Switch the current and previous textures
	CurrentIndex = 1 - CurrentIndex;
}

/**
	Flushes the NDI video stream, and unmaps the textures (if mapped)
*/
void UNDIMediaSender::MappedTextureASyncSender::Flush(FRHICommandListImmediate& RHICmdList, NDIlib_send_instance_t p_send_instance)
{
	// Flush the asynchronous NDI stream and unmap all the textures

	check(p_send_instance != nullptr);

	NDIlib_send_send_video_async_v2(p_send_instance, nullptr);

	// After send_video_async returns, the frame sent before this one is guaranteed to have been processed
	// So the texture for the previous frame can be unmapped
	MappedTexture& PreviousMappedTexture = MappedTextures[1-CurrentIndex];
	PreviousMappedTexture.Unmap(RHICmdList);

	// As the send queue was flushed, also unmap the current frame as it is not used
	MappedTexture& CurrentMappedTexture = MappedTextures[CurrentIndex];
	CurrentMappedTexture.Unmap(RHICmdList);

	// Switch the current and previous textures
	CurrentIndex = 1 - CurrentIndex;
}
