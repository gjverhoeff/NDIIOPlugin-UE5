/*
	All rights reserved. Copyright(c) 2018-2021, NewTek Inc.

	This file and it's use within a Product is bound by the terms of NDI SDK license that was provided
	as part of the NDI SDK. For more information, please review the license and the NDI SDK documentation.
*/

#pragma once

#include "CoreMinimal.h"
#include "RHI.h"
#include "RenderResource.h"
#include "Shader.h"
#include "GlobalShader.h"
#include "ShaderParameterUtils.h"
#include "RHIStaticStates.h"

#include "Logging/LogMacros.h"

DECLARE_LOG_CATEGORY_EXTERN(LogNDIIOShaders, Log, All);


class FNDIIOShaderVS : public FGlobalShader
{
	DECLARE_EXPORTED_SHADER_TYPE(FNDIIOShaderVS, Global, NDIIOSHADERS_API);

public:
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::ES3_1);
	}

	FNDIIOShaderVS()
	{}

	FNDIIOShaderVS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FGlobalShader(Initializer)
	{}
};


class FNDIIOShaderPS : public FGlobalShader
{
public:
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::ES3_1);
	}

	FNDIIOShaderPS()
	{}

	FNDIIOShaderPS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FGlobalShader(Initializer)
	{}

	struct Params
	{
		Params(const TRefCountPtr<FRHITexture2D>& InputTargetIn, FIntPoint OutputSizeIn, bool LinearToSrgbIn)
			: InputTarget(InputTargetIn)
			, OutputSize(OutputSizeIn)
			, LinearToSrgb(LinearToSrgbIn)
		{}

		TRefCountPtr<FRHITexture2D> InputTarget;
		FIntPoint OutputSize;
		bool LinearToSrgb;
	};

	NDIIOSHADERS_API void SetParameters(FRHICommandList& CommandList, const Params& params);

protected:
};


class FNDIIOShaderBGRAtoUYVYPS : public FNDIIOShaderPS
{
	DECLARE_EXPORTED_SHADER_TYPE(FNDIIOShaderBGRAtoUYVYPS, Global, NDIIOSHADERS_API);

public:
	using FNDIIOShaderPS::FNDIIOShaderPS;
};

class FNDIIOShaderUYVYtoBGRAPS : public FNDIIOShaderPS
{
	DECLARE_EXPORTED_SHADER_TYPE(FNDIIOShaderUYVYtoBGRAPS, Global, NDIIOSHADERS_API);

public:
	using FNDIIOShaderPS::FNDIIOShaderPS;
};


class INDIIOShaders : public IModuleInterface
{
public:
};
