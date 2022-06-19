// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Structures/NDIBroadcastConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIBroadcastConfiguration() {}
// Cross Module References
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIBroadcastConfiguration;
class UScriptStruct* FNDIBroadcastConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIBroadcastConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIBroadcastConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration, Z_Construct_UPackage__Script_NDIIO(), TEXT("NDIBroadcastConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_NDIBroadcastConfiguration.OuterSingleton;
}
template<> NDIIO_API UScriptStruct* StaticStruct<FNDIBroadcastConfiguration>()
{
	return FNDIBroadcastConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""Describes essential properties used for modifying the broadcast configuration of an Sender object\n*/" },
		{ "DisplayName", "NDI Broadcast Configuration" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structures/NDIBroadcastConfiguration.h" },
		{ "ToolTip", "Describes essential properties used for modifying the broadcast configuration of an Sender object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIBroadcastConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize_MetaData[] = {
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Describes the output frame size while sending video frame over NDI */" },
		{ "DisplayName", "Frame Size" },
		{ "ModuleRelativePath", "Public/Structures/NDIBroadcastConfiguration.h" },
		{ "ToolTip", "Describes the output frame size while sending video frame over NDI" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize = { "FrameSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIBroadcastConfiguration, FrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Represents the desired number of frames (per second) for video to be sent over NDI */" },
		{ "DisplayName", "Frame Rate" },
		{ "ModuleRelativePath", "Public/Structures/NDIBroadcastConfiguration.h" },
		{ "ToolTip", "Represents the desired number of frames (per second) for video to be sent over NDI" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIBroadcastConfiguration, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
		nullptr,
		&NewStructOps,
		"NDIBroadcastConfiguration",
		sizeof(FNDIBroadcastConfiguration),
		alignof(FNDIBroadcastConfiguration),
		Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_NDIBroadcastConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIBroadcastConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDIBroadcastConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIBroadcastConfiguration_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIBroadcastConfiguration_h_Statics::ScriptStructInfo[] = {
		{ FNDIBroadcastConfiguration::StaticStruct, Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewStructOps, TEXT("NDIBroadcastConfiguration"), &Z_Registration_Info_UScriptStruct_NDIBroadcastConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIBroadcastConfiguration), 3166999952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIBroadcastConfiguration_h_4270105215(TEXT("/Script/NDIIO"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIBroadcastConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIBroadcastConfiguration_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
