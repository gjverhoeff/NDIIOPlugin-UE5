/*
	All rights reserved. Copyright(c) 2018-2021, NewTek Inc.

	This file and it's use within a Product is bound by the terms of NDI SDK license that was provided
	as part of the NDI SDK. For more information, please review the license and the NDI SDK documentation.
*/

#include <Objects/Media/NDIMediaReceiver.h>
#include <Misc/CoreDelegates.h>
#include <RenderTargetPool.h>
#include <GlobalShader.h>
#include <ShaderParameterUtils.h>
#include <MediaShaders.h>
#include <Materials/MaterialInstanceDynamic.h>
#include <Async/Async.h>
#include <GenericPlatform/GenericPlatformProcess.h>

#include "NDIShaders.h"

#if WITH_EDITOR
#include <Editor.h>
#endif

UNDIMediaReceiver::UNDIMediaReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}

/**
	Attempts to perform initialization logic for creating a receiver through the NDI® sdk api
*/
bool UNDIMediaReceiver::Initialize(const FNDIConnectionInformation& InConnectionInformation)
{
	if (this->p_receive_instance == nullptr)
	{
		// create a non-connected receiver instance
		NDIlib_recv_create_v3_t settings;
		settings.allow_video_fields = false;
		settings.bandwidth = NDIlib_recv_bandwidth_highest;
		settings.color_format = NDIlib_recv_color_format_fastest;

		p_receive_instance = NDIlib_recv_create_v3(&settings);

		// check if it was successful
		if (p_receive_instance != nullptr)
		{
			// If the incoming connection information is valid
			if (InConnectionInformation.IsValid())
			{
				// ensure that we force the switch on the initial connection
				bIsInitialConnection = true;

				//// Alright we created a non-connected receiver. Lets actually connect
				ChangeConnection(InConnectionInformation);
			}

			// We don't want to limit the engine rendering speed to the sync rate of the connection hook
			// into the core delegates render thread 'EndFrame'
			FCoreDelegates::OnEndFrameRT.Remove(FrameEndRTHandle);
			FrameEndRTHandle = FCoreDelegates::OnEndFrameRT.AddLambda([this]() { this->CaptureConnectedVideo(); });

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

			return true;
		}
	}

	return false;
}

/**
	Attempts to change the connection to another NDI® sender source
*/
void UNDIMediaReceiver::ChangeConnection(const FNDIConnectionInformation& InConnectionInformation)
{
	// Ensure some thread-safety because our 'Capture Connected Video' function is called on the render thread
	FScopeLock AudioLock(&AudioSyncContext);
	FScopeLock RenderLock(&RenderSyncContext);

	// We should only worry about connections that are already created
	if (p_receive_instance != nullptr)
	{
		// Lock the Connection SyncContext for offline updates
		FScopeLock ConnectionLock(&ConnectionSyncContext);

		// Make sure to add our connection information to the ConnectionQueue
		ConnectionQueue.Add(InConnectionInformation);

		// If we are not trying to connect to a new queue item already
		if (!bIsConnectingToQueueItem)
		{
			// ensure we don't re-enter this code
			bIsConnectingToQueueItem = true;

			AsyncTask(ENamedThreads::AnyBackgroundHiPriTask, [&] {
				while (ConnectionQueue.Num() > 0)
				{
					// Get the New Connection in queue (and empty)
					auto Connection = GetNextConnectionInQueue();

					if (ConnectionInformation != Connection)
					{
						if (Connection.IsValid())
						{
							// create a non-connected receiver instance
							NDIlib_recv_create_v3_t settings;
							settings.allow_video_fields = false;
							settings.bandwidth = NDIlib_recv_bandwidth_highest;
							settings.color_format = NDIlib_recv_color_format_fastest;

							// Do the implicit conversion on the connection information
							NDIlib_source_t connection;
							connection.p_url_address = TCHAR_TO_UTF8(*Connection.Url);
							connection.p_ndi_name = TCHAR_TO_UTF8(*Connection.SourceName);

							// Create a receiver and connect to the source
							auto* receive_instance = NDIlib_recv_create_v3(&settings);
							NDIlib_recv_connect(receive_instance, &connection);

							// Wait for the connection to process
							FPlatformProcess::Sleep(2.05f);

							// Only change the connection if this is the initial connector or we don't have any other
							// items in the queue
							if (ConnectionQueue.Num() == 0 || bIsInitialConnection)
							{
								// Ensure some thread-safety because our 'Capture Connected Video' function is called on
								// the render thread
								FScopeLock AudioLock(&AudioSyncContext);
								FScopeLock RenderLock(&RenderSyncContext);

								// destroy the previous framesync_instance
								if (p_framesync_instance != nullptr)
									NDIlib_framesync_destroy(p_framesync_instance);

								// Free the old receiver
								NDIlib_recv_destroy(p_receive_instance);

								// set the receiver to the new connection
								p_receive_instance = receive_instance;

								// Copy the InConnection structure to our ConnectionInformation
								this->ConnectionInformation = Connection;

								// create a new frame sync instance
								p_framesync_instance = NDIlib_framesync_create(p_receive_instance);

								// state that the initial connection has been created
								bIsInitialConnection = false;
							}

							// Free the temporary receiver
							else
								NDIlib_recv_destroy(receive_instance);
						}
						else
						{
							// Ensure some thread-safety because our 'Capture Connected Video' function is called on the
							// render thread
							FScopeLock AudioLock(&AudioSyncContext);
							FScopeLock RenderLock(&RenderSyncContext);

							// reset the connection information
							NDIlib_recv_connect(p_receive_instance, nullptr);
							this->ConnectionInformation.Reset();

							// Create a frame sync instance if one doesn't exist
							if (p_framesync_instance == nullptr)
							{
								// create a new frame sync instance
								p_framesync_instance = NDIlib_framesync_create(p_receive_instance);
							}
						}
					}

					// Don't spin up too fast
					FPlatformProcess::Sleep(0.1f);
				}

				// set a state to allow re-entry
				bIsConnectingToQueueItem = false;
			});
		}
	}
}

/**
	Attempts to change the Video Texture object used as the video frame capture object
*/
void UNDIMediaReceiver::ChangeVideoTexture(UNDIMediaTexture2D* InVideoTexture)
{
	FScopeLock Lock(&RenderSyncContext);

	if (IsValid(this->VideoTexture))
	{
		// make sure that the old texture is not referencing the rendering of this texture
		this->VideoTexture->UpdateTextureReference(FRHICommandListExecutor::GetImmediateCommandList(), nullptr);
	}

	// Just copy the new texture here.
	this->VideoTexture = InVideoTexture;
}

/**
	Attempts to generate the pcm data required by the 'AudioWave' object
*/
int32 UNDIMediaReceiver::GeneratePCMData(UNDIMediaSoundWave* AudioWave, uint8* PCMData, const int32 SamplesNeeded)
{
	FScopeLock Lock(&AudioSyncContext);

	int32 samples_generated = 0;
	int32 sample_rate = IsValid(AudioWave) ? AudioWave->GetSampleRateForCurrentPlatform() : 48000;
	int32 channels = IsValid(AudioWave) ? AudioWave->NumChannels : 1;

	if (p_framesync_instance != nullptr)
	{
		NDIlib_audio_frame_v2_t audio_frame;
		NDIlib_framesync_capture_audio(p_framesync_instance, &audio_frame, sample_rate, channels,
									   SamplesNeeded / channels);

		const int32 available_samples = audio_frame.no_samples * channels;

		for (int32 iter = 0; iter < available_samples; ++iter)
		{
			// convert float to int16
			int32 index_sample = FMath::RoundToInt(audio_frame.p_data[iter] * 32767.0f);

			// perform clamp between different integer types
			int16 sample = index_sample < INT16_MIN ? INT16_MIN : index_sample > INT16_MAX ? INT16_MAX : index_sample;

			PCMData[iter * 2] = sample & 0xff;
			PCMData[iter * 2 + 1] = (sample >> 8) & 0xff;
		}

		// clean up our audio frame
		NDIlib_framesync_free_audio(p_framesync_instance, &audio_frame);

		samples_generated = available_samples * sizeof(int16);
	}

	return samples_generated;
}

/**
	Attempts to register a sound wave object with this object
*/
void UNDIMediaReceiver::RegisterAudioWave(UNDIMediaSoundWave* InAudioWave)
{
	FScopeLock Lock(&AudioSyncContext);

	// Determine if the audio wave being passed into this object is valid
	if (IsValid(InAudioWave))
	{
		// Only add sources which are not already apart of this receiver
		if (!AudioSourceCollection.ContainsByPredicate(
				[&](UNDIMediaSoundWave* Source) { return Source == InAudioWave; }))
		{

			AudioSourceCollection.Add(InAudioWave);
			InAudioWave->SetConnectionSource(this);
		}
	}
}

/**
	This will add a metadata frame and return immediately, having scheduled the frame asynchronously
*/
void UNDIMediaReceiver::SendMetadataFrame(const FString& metadata)
{
	// Currently unsupported
}

/**
	This will set the up-stream tally notifications. If no streams are connected, it will automatically
	send the tally state upon connection
*/
void UNDIMediaReceiver::SendTallyInformation(const bool& IsOnPreview, const bool& IsOnProgram)
{
	// Currently unsupported
}

/**
	Attempts to immediately stop receiving frames from the connected NDI sender
*/
void UNDIMediaReceiver::Shutdown()
{
	// Unregister render thread frame end delegate lambda.
	FCoreDelegates::OnEndFrameRT.Remove(FrameEndRTHandle);
	FrameEndRTHandle.Reset();

	{
		FScopeLock AudioLock(&AudioSyncContext);

		// get the number of available audio sources within the collection
		int32 source_count = AudioSourceCollection.Num();

		// iterate the collection of available audio sources
		for (int32 iter = source_count - 1; iter >= 0; --iter)
		{
			// Define and Determine the validity of an item within the collection
			if (auto* AudioWave = AudioSourceCollection[iter])
			{
				// ensure that we remove the audio source reference
				AudioSourceCollection.RemoveAt(iter);

				// Remove ourselves from the Audio wave object which is trying to render audio frames
				// as fast as possible
				AudioWave->SetConnectionSource(nullptr);
			}
		}
	}

	{
		FScopeLock RenderLock(&RenderSyncContext);

		if (p_receive_instance != nullptr)
		{
			if (p_framesync_instance != nullptr)
			{
				NDIlib_framesync_destroy(p_framesync_instance);
				p_framesync_instance = nullptr;
			}

			NDIlib_recv_destroy(p_receive_instance);
			p_receive_instance = nullptr;
		}
	}

	this->bWasConnected = false;
	this->bIsCurrentlyConnected = false;

	this->ConnectionInformation.Reset();
	this->PerformanceData.Reset();
	this->FrameRate = FFrameRate(60, 1);
	this->Timecode = FTimecode(0, FrameRate, true, true);
}

/**
	Remove the AudioWave object from this object (if it was previously registered)

	@param InAudioWave An NDIMediaSoundWave object registered with this object
*/
void UNDIMediaReceiver::UnregisterAudioWave(UNDIMediaSoundWave* InAudioWave)
{
	FScopeLock Lock(&AudioSyncContext);

	// Determine if the audio wave being passed into this object is valid
	if (IsValid(InAudioWave))
	{
		// We don't care about the order of the collection,
		// we only care to remove the object as fast as possible
		this->AudioSourceCollection.RemoveSwap(InAudioWave);
	}
}

/**
	Updates the DynamicMaterial with the VideoTexture of this object
*/
void UNDIMediaReceiver::UpdateMaterialTexture(UMaterialInstanceDynamic* MaterialInstance, FString ParameterName)
{
	// Ensure that both the material instance and the video texture are valid
	if (IsValid(MaterialInstance) && IsValid(this->VideoTexture))
	{
		// Call the function to set the texture parameter with the proper texture
		MaterialInstance->SetTextureParameterValue(FName(*ParameterName), this->VideoTexture);
	}
}

/**
   Called before destroying the object.  This is called immediately upon deciding to destroy the object,
   to allow the object to begin an asynchronous cleanup process.
 */
void UNDIMediaReceiver::BeginDestroy()
{
	// Call the shutdown procedure here.
	this->Shutdown();

	// Call the base implementation of 'BeginDestroy'
	Super::BeginDestroy();
}

/**
	Attempts to immediately update the 'VideoTexture' object with the last capture video frame
	from the connected source
*/
void UNDIMediaReceiver::CaptureConnectedVideo()
{
	// This function is called on the Engine's Main Rendering Thread. Be very careful when doing stuff here.
	// Make sure things are done quick and efficient.

	// check for our frame sync object and that we are actually connected to the end point
	if (p_framesync_instance != nullptr)
	{
		// Ensure thread safety
		FScopeLock Lock(&RenderSyncContext);

		// Ensure we have something to render on to
		if (IsValid(this->VideoTexture) && VideoTexture->Resource != nullptr)
		{
			// Using a frame-sync we can always get data which is the magic and it will adapt
			// to the frame-rate that it is being called with.
			NDIlib_video_frame_v2_t video_frame;
			NDIlib_framesync_capture_video(p_framesync_instance, &video_frame, NDIlib_frame_format_type_progressive);

			if (video_frame.p_data)
			{
				// Ensure that we start the audio capture for those that need to be notified
				if (!bWasConnected && OnNDIReceiverConnectedEvent.IsBound())
				{
					AsyncTask(ENamedThreads::GameThread, [&]() {
						// Broadcast the event
						OnNDIReceiverConnectedEvent.Broadcast(this);
					});

					// ensure that we store the state
					bWasConnected = true;
					bIsCurrentlyConnected = true;
				}

				// Update the Framerate, if it has changed
				this->FrameRate.Numerator = video_frame.frame_rate_N;
				this->FrameRate.Denominator = video_frame.frame_rate_D;

				if (bSyncTimecodeToSource)
				{
					int64_t SourceTime = video_frame.timecode % 864000000000; // Modulo the number of 100ns intervals in 24 hours
					// Update the timecode from the current 'SourceTime' value
					this->Timecode = FTimecode::FromTimespan(FTimespan::FromSeconds(SourceTime / (float)1e+7), FrameRate,
															 FTimecode::IsDropFormatTimecodeSupported(FrameRate),
															 true // use roll-over timecode
					);
				}
				else
				{
					int64_t SystemTime = FDateTime::Now().GetTimeOfDay().GetTicks();
					// Update the timecode from the current 'SystemTime' value
					this->Timecode = FTimecode::FromTimespan(FTimespan::FromSeconds(SystemTime / (float)1e+7), FrameRate,
															 FTimecode::IsDropFormatTimecodeSupported(FrameRate),
															 true // use roll-over timecode
					);
				}

				// Redraw if:
				// - timestamp is undefined, or
				// - timestamp has changed, or
				// - frame format type has changed (e.g. different field)
				if ((video_frame.timestamp == NDIlib_recv_timestamp_undefined) ||
					(video_frame.timestamp != LastFrameTimestamp) ||
					(video_frame.frame_format_type != LastFrameFormatType))
				{
					LastFrameTimestamp = video_frame.timestamp;
					LastFrameFormatType = video_frame.frame_format_type;

					// we need a command list to work with
					FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();

					// Actually draw the video frame from cpu to gpu
					switch(video_frame.frame_format_type)
					{
						case NDIlib_frame_format_type_progressive:
							DrawProgressiveVideoFrame(RHICmdList, video_frame);
							break;
						case NDIlib_frame_format_type_field_0:
						case NDIlib_frame_format_type_field_1:
							DrawInterlacedVideoFrame(RHICmdList, video_frame);
							break;
					}
				}
			}

			// Reset the connection status of this object
			else if (bWasConnected)
			{
				this->bWasConnected = false;
				this->bIsCurrentlyConnected = false;
			}

			// Release the video. You could keep the frame if you want and release it later.
			NDIlib_framesync_free_video(p_framesync_instance, &video_frame);

			// Update our Performance Metrics
			GatherPerformanceMetrics();
		}
	}
}

FNDIConnectionInformation UNDIMediaReceiver::GetNextConnectionInQueue()
{
	FNDIConnectionInformation Result;

	FScopeLock Lock(&ConnectionSyncContext);

	if (ConnectionQueue.Num() > 0)
	{
		Result = ConnectionQueue.Last();
		ConnectionQueue.Empty();
	}

	return Result;
}

/**
	Perform the color conversion (if any) and bit copy from the gpu
*/
void UNDIMediaReceiver::DrawProgressiveVideoFrame(FRHICommandListImmediate& RHICmdList, NDIlib_video_frame_v2_t& Result)
{
	// Ensure thread safety
	FScopeLock Lock(&RenderSyncContext);

	// check for our frame sync object and that we are actually connected to the end point
	if (p_framesync_instance != nullptr)
	{
		// Initialize the frame size parameter
		FIntPoint FrameSize = FIntPoint(Result.xres, Result.yres);

		if (!RenderTargetDescriptor.IsValid() ||
			RenderTargetDescriptor.GetSize() != FIntVector(FrameSize.X, FrameSize.Y, 0))
		{
			// Create the RenderTarget descriptor
			RenderTargetDescriptor = FPooledRenderTargetDesc::Create2DDesc(
				FrameSize, PF_B8G8R8A8, FClearValueBinding::None, TexCreate_None, TexCreate_RenderTargetable, false);

			// Update the shader resource for the 'SourceTexture'
			// The source texture will be given UYVY data, so make it half-width
			//FRHIResourceCreateInfo CreateInfo;
			FRHIResourceCreateInfo CreateInfo = FRHIResourceCreateInfo(TEXT("NDISourceTextureBuffer"));
			TRefCountPtr<FRHITexture2D> DummyTexture2DRHI;
			RHICreateTargetableShaderResource2D(FrameSize.X/2, FrameSize.Y, PF_B8G8R8A8, 1, TexCreate_Dynamic,
												TexCreate_RenderTargetable, false, CreateInfo, SourceTexture,
												DummyTexture2DRHI);

			// Find a free target-able texture from the render pool
			GRenderTargetPool.FindFreeElement(RHICmdList, RenderTargetDescriptor, RenderTarget,
												TEXT("NDIIO"));
		}

		FSceneRenderTargetItem RenderTargetItem = RenderTarget->GetRenderTargetItem();
		FTextureRHIRef TargetableTexture = RenderTargetItem.TargetableTexture;

		// Initialize the Graphics Pipeline State Object
		FGraphicsPipelineStateInitializer GraphicsPSOInit;

		// Initialize the Render pass with the conversion texture
		FRHITexture* ConversionTexture = TargetableTexture.GetReference();
		FRHIRenderPassInfo RPInfo(ConversionTexture, ERenderTargetActions::DontLoad_Store);

		// configure media shaders
		FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);

		// construct the shaders
		TShaderMapRef<FNDIIOShaderVS> VertexShader(ShaderMap);
		TShaderMapRef<FNDIIOShaderUYVYtoBGRAPS> ConvertShader(ShaderMap);

		FBufferRHIRef VertexBuffer = CreateTempMediaVertexBuffer();

		// Needs to be called *before* ApplyCachedRenderTargets, since BeginRenderPass is caching the render targets.
		RHICmdList.BeginRenderPass(RPInfo, TEXT("NDI Recv Color Conversion"));

		// do as it suggests
		RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);

		// set the state objects
		GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
		GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
		GraphicsPSOInit.BlendState = TStaticBlendStateWriteMask<CW_RGBA, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE,
																CW_NONE, CW_NONE>::GetRHI();
		// perform binding operations for the shaders to be used
		GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GMediaVertexDeclaration.VertexDeclarationRHI;
		GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
		GraphicsPSOInit.BoundShaderState.PixelShaderRHI = ConvertShader.GetPixelShader();
		// Going to draw triangle strips
		GraphicsPSOInit.PrimitiveType = PT_TriangleStrip;

		// Ensure the pipeline state is set to the one we've configured
		SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

		// set the stream source
		RHICmdList.SetStreamSource(0, VertexBuffer, 0);

		// set the texture parameter of the conversion shader
		ConvertShader->SetParameters(RHICmdList, FNDIIOShaderUYVYtoBGRAPS::Params(SourceTexture, FrameSize, bPerformsRGBtoLinear));

		// Create the update region structure
		FUpdateTextureRegion2D Region(0, 0, 0, 0, FrameSize.X/2, FrameSize.Y);

		// Set the Pixel data of the NDI Frame to the SourceTexture
		RHIUpdateTexture2D(SourceTexture, 0, Region, Result.line_stride_in_bytes, (uint8*&)Result.p_data);

		// begin our drawing
		{
			RHICmdList.SetViewport(0, 0, 0.0f, FrameSize.X, FrameSize.Y, 1.0f);
			RHICmdList.DrawPrimitive(0, 2, 1);
		}

		RHICmdList.EndRenderPass();

		this->VideoTexture->UpdateTextureReference(RHICmdList, (FTexture2DRHIRef&)ConversionTexture);
	}
}

void UNDIMediaReceiver::DrawInterlacedVideoFrame(FRHICommandListImmediate& RHICmdList, NDIlib_video_frame_v2_t& Result)
{
	// Ensure thread safety
	FScopeLock Lock(&RenderSyncContext);

	// check for our frame sync object and that we are actually connected to the end point
	if (p_framesync_instance != nullptr)
	{
		// Initialize the frame size parameter
		FIntPoint FieldSize = FIntPoint(Result.xres, Result.yres);
		FIntPoint FrameSize = FIntPoint(Result.xres, Result.yres*2);

		if (!RenderTargetDescriptor.IsValid() ||
			RenderTargetDescriptor.GetSize() != FIntVector(FrameSize.X, FrameSize.Y, 0))
		{
			// Create the RenderTarget descriptor
			RenderTargetDescriptor = FPooledRenderTargetDesc::Create2DDesc(
				FrameSize, PF_B8G8R8A8, FClearValueBinding::None, TexCreate_None, TexCreate_RenderTargetable, false);

			// Update the shader resource for the 'SourceTexture'
			// The source texture will be given UYVY data, so make it half-width
			//FRHIResourceCreateInfo CreateInfo;
			FRHIResourceCreateInfo CreateInfo = FRHIResourceCreateInfo(TEXT("NDISourceTextureBuffer"));
			TRefCountPtr<FRHITexture2D> DummyTexture2DRHI;
			RHICreateTargetableShaderResource2D(FieldSize.X/2, FieldSize.Y, PF_B8G8R8A8, 1, TexCreate_Dynamic,
												TexCreate_RenderTargetable, false, CreateInfo, SourceTexture,
												DummyTexture2DRHI);

			// Find a free target-able texture from the render pool
			GRenderTargetPool.FindFreeElement(RHICmdList, RenderTargetDescriptor, RenderTarget,
												TEXT("NDIIO"));
		}

		FSceneRenderTargetItem RenderTargetItem = RenderTarget->GetRenderTargetItem();
		FTextureRHIRef TargetableTexture = RenderTargetItem.TargetableTexture;

		// Initialize the Graphics Pipeline State Object
		FGraphicsPipelineStateInitializer GraphicsPSOInit;

		// Initialize the Render pass with the conversion texture
		FRHITexture* ConversionTexture = TargetableTexture.GetReference();
		FRHIRenderPassInfo RPInfo(ConversionTexture, ERenderTargetActions::DontLoad_Store);

		// configure media shaders
		FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);

		// construct the shaders
		TShaderMapRef<FNDIIOShaderVS> VertexShader(ShaderMap);
		TShaderMapRef<FNDIIOShaderUYVYtoBGRAPS> ConvertShader(ShaderMap);

		float FieldUVOffset = (Result.frame_format_type == NDIlib_frame_format_type_field_1) ? 0.5f/Result.yres : 0.f;
		FBufferRHIRef VertexBuffer = CreateTempMediaVertexBuffer(0.f, 1.f, 0.f-FieldUVOffset, 1.f-FieldUVOffset);

		// Needs to be called *before* ApplyCachedRenderTargets, since BeginRenderPass is caching the render targets.
		RHICmdList.BeginRenderPass(RPInfo, TEXT("NDI Recv Color Conversion"));

		// do as it suggests
		RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);

		// set the state objects
		GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
		GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
		GraphicsPSOInit.BlendState = TStaticBlendStateWriteMask<CW_RGBA, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE,
																CW_NONE, CW_NONE>::GetRHI();
		// perform binding operations for the shaders to be used
		GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GMediaVertexDeclaration.VertexDeclarationRHI;
		GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
		GraphicsPSOInit.BoundShaderState.PixelShaderRHI = ConvertShader.GetPixelShader();
		// Going to draw triangle strips
		GraphicsPSOInit.PrimitiveType = PT_TriangleStrip;

		// Ensure the pipeline state is set to the one we've configured
		SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

		// set the stream source
		RHICmdList.SetStreamSource(0, VertexBuffer, 0);

		// set the texture parameter of the conversion shader
		ConvertShader->SetParameters(RHICmdList, FNDIIOShaderUYVYtoBGRAPS::Params(SourceTexture, FrameSize, bPerformsRGBtoLinear));

		// Create the update region structure
		FUpdateTextureRegion2D Region(0, 0, 0, 0, FieldSize.X/2, FieldSize.Y);

		// Set the Pixel data of the NDI Frame to the SourceTexture
		RHIUpdateTexture2D(SourceTexture, 0, Region, Result.line_stride_in_bytes, (uint8*&)Result.p_data);

		// begin our drawing
		{
			RHICmdList.SetViewport(0, 0, 0.0f, FrameSize.X, FrameSize.Y, 1.0f);
			RHICmdList.DrawPrimitive(0, 2, 1);
		}

		RHICmdList.EndRenderPass();

		this->VideoTexture->UpdateTextureReference(RHICmdList, (FTexture2DRHIRef&)ConversionTexture);
	}
}

/**
	Attempts to gather the performance metrics of the connection to the remote source
*/
void UNDIMediaReceiver::GatherPerformanceMetrics()
{
	// provide references to store the values
	NDIlib_recv_performance_t stable_performance;
	NDIlib_recv_performance_t dropped_performance;

	// get the performance values from the SDK
	NDIlib_recv_get_performance(p_receive_instance, &stable_performance, &dropped_performance);

	// update our structure with the updated values
	this->PerformanceData.AudioFrames = stable_performance.audio_frames;
	this->PerformanceData.DroppedAudioFrames = dropped_performance.audio_frames;
	this->PerformanceData.DroppedMetadataFrames = dropped_performance.metadata_frames;
	this->PerformanceData.DroppedVideoFrames = dropped_performance.video_frames;
	this->PerformanceData.MetadataFrames = stable_performance.metadata_frames;
	this->PerformanceData.VideoFrames = stable_performance.video_frames;
}

/**
	Returns the current performance data of the receiver while connected to the source
*/
const FNDIReceiverPerformanceData& UNDIMediaReceiver::GetPerformanceData() const
{
	return this->PerformanceData;
}

/**
	Returns a value indicating whether this object is currently connected to the sender source
*/
const bool UNDIMediaReceiver::GetIsCurrentlyConnected() const
{
	return bIsCurrentlyConnected;
}

/**
	Returns the current connection information of the connected source
*/
const FNDIConnectionInformation& UNDIMediaReceiver::GetCurrentConnectionInformation() const
{
	return this->ConnectionInformation;
}

/**
	Returns the current timecode of the connected source
*/
const FTimecode& UNDIMediaReceiver::GetCurrentTimecode() const
{
	return this->Timecode;
}

/**
	Set whether or not a RGB to Linear conversion is made
*/
void UNDIMediaReceiver::PerformsRGBToLinearConversion(bool Value)
{
	this->bPerformsRGBtoLinear = Value;
}

/**
	Returns the current framerate of the connected source
*/
const FFrameRate& UNDIMediaReceiver::GetCurrentFrameRate() const
{
	return this->FrameRate;
}
