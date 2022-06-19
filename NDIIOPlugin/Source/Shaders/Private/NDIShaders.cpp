/*
	All rights reserved. Copyright(c) 2018-2021, NewTek Inc.

	This file and it's use within a Product is bound by the terms of NDI SDK license that was provided
	as part of the NDI SDK. For more information, please review the license and the NDI SDK documentation.
*/

#include "NDIShaders.h"

#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

#include "Misc/Paths.h"
#include "Misc/EngineVersionComparison.h"

#include "Engine/TextureRenderTarget2D.h"
#include "Engine/World.h"
#include "PipelineStateCache.h"
#include "SceneUtils.h"
#include "SceneInterface.h"



BEGIN_GLOBAL_SHADER_PARAMETER_STRUCT(FNDIIOShaderUB, )
	SHADER_PARAMETER(uint32, InputWidth)
	SHADER_PARAMETER(uint32, InputHeight)
	SHADER_PARAMETER(uint32, OutputWidth)
	SHADER_PARAMETER(uint32, OutputHeight)
	SHADER_PARAMETER(uint32, LinearToSrgb)
	SHADER_PARAMETER_TEXTURE(Texture2D, InputTarget)
	SHADER_PARAMETER_SAMPLER(SamplerState, SamplerP)
	SHADER_PARAMETER_SAMPLER(SamplerState, SamplerB)
END_GLOBAL_SHADER_PARAMETER_STRUCT()

IMPLEMENT_GLOBAL_SHADER_PARAMETER_STRUCT(FNDIIOShaderUB, "NDIIOShaderUB");

IMPLEMENT_GLOBAL_SHADER(FNDIIOShaderVS, "/Plugin/NDIIOPlugin/Private/NDIIOShaders.usf", "NDIIOMainVS", SF_Vertex);
IMPLEMENT_GLOBAL_SHADER(FNDIIOShaderBGRAtoUYVYPS, "/Plugin/NDIIOPlugin/Private/NDIIOShaders.usf", "NDIIOBGRAtoUYVYPS", SF_Pixel);
IMPLEMENT_GLOBAL_SHADER(FNDIIOShaderUYVYtoBGRAPS, "/Plugin/NDIIOPlugin/Private/NDIIOShaders.usf", "NDIIOUYVYtoBGRAPS", SF_Pixel);



void FNDIIOShaderPS::SetParameters(FRHICommandList& CommandList, const Params& params)
{
	FNDIIOShaderUB UB;
	{
		UB.InputWidth = params.InputTarget->GetSizeX();
		UB.InputHeight = params.InputTarget->GetSizeY();
		UB.OutputWidth = params.OutputSize.X;
		UB.OutputHeight = params.OutputSize.Y;
		UB.LinearToSrgb = params.LinearToSrgb;
		UB.InputTarget = params.InputTarget;
		UB.SamplerP = TStaticSamplerState<SF_Trilinear>::GetRHI();
		UB.SamplerB = TStaticSamplerState<SF_Bilinear>::GetRHI();
	}

	TUniformBufferRef<FNDIIOShaderUB> Data = TUniformBufferRef<FNDIIOShaderUB>::CreateUniformBufferImmediate(UB, UniformBuffer_SingleFrame);
	SetUniformBufferParameter(CommandList, CommandList.GetBoundPixelShader(), GetUniformBufferParameter<FNDIIOShaderUB>(), Data);
}


class FNDIIOShaders : public INDIIOShaders
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override
	{
		FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("NDIIOPlugin"))->GetBaseDir(), TEXT("Shaders"));
		AddShaderSourceDirectoryMapping(TEXT("/Plugin/NDIIOPlugin"), PluginShaderDir);
   }
	virtual void ShutdownModule() override
	{
	}
};

IMPLEMENT_MODULE( FNDIIOShaders, NDIIOShaders )
