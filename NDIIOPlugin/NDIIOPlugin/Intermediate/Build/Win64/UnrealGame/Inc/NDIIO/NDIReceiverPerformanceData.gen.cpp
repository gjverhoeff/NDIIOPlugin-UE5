// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Structures/NDIReceiverPerformanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIReceiverPerformanceData() {}
// Cross Module References
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIReceiverPerformanceData;
class UScriptStruct* FNDIReceiverPerformanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIReceiverPerformanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIReceiverPerformanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, Z_Construct_UPackage__Script_NDIIO(), TEXT("NDIReceiverPerformanceData"));
	}
	return Z_Registration_Info_UScriptStruct_NDIReceiverPerformanceData.OuterSingleton;
}
template<> NDIIO_API UScriptStruct* StaticStruct<FNDIReceiverPerformanceData>()
{
	return FNDIReceiverPerformanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioFrames_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_AudioFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroppedVideoFrames_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DroppedVideoFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroppedAudioFrames_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DroppedAudioFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroppedMetadataFrames_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DroppedMetadataFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataFrames_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_MetadataFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoFrames_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_VideoFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""A structure holding data allowing you to determine the current performance levels of the receiver with the\n\x09""ability to detect whether frames has been dropped\n*/" },
		{ "DisplayName", "NDI Receiver Performance Data" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "A structure holding data allowing you to determine the current performance levels of the receiver with the\nability to detect whether frames has been dropped" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIReceiverPerformanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of audio frames received from the NDI sender\n\x09*/" },
		{ "DisplayName", "Audio Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of audio frames received from the NDI sender" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames = { "AudioFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, AudioFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of video frames dropped in transit from an NDI sender\n\x09*/" },
		{ "DisplayName", "Dropped Video Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of video frames dropped in transit from an NDI sender" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames = { "DroppedVideoFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, DroppedVideoFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of audio frames dropped in transit from the NDI sender\n\x09*/" },
		{ "DisplayName", "Dropped Audio Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of audio frames dropped in transit from the NDI sender" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames = { "DroppedAudioFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, DroppedAudioFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of metadata frames dropped in transit from the NDI sender\n\x09*/" },
		{ "DisplayName", "Dropped Metadata Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of metadata frames dropped in transit from the NDI sender" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames = { "DroppedMetadataFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, DroppedMetadataFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of metadata frames received from the NDI sender\n\x09*/" },
		{ "DisplayName", "Metadata Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of metadata frames received from the NDI sender" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames = { "MetadataFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, MetadataFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of video frames received from the NDI sender\n\x09*/" },
		{ "DisplayName", "Video Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of video frames received from the NDI sender" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames = { "VideoFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, VideoFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
		nullptr,
		&NewStructOps,
		"NDIReceiverPerformanceData",
		sizeof(FNDIReceiverPerformanceData),
		alignof(FNDIReceiverPerformanceData),
		Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_NDIReceiverPerformanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIReceiverPerformanceData.InnerSingleton, Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDIReceiverPerformanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIReceiverPerformanceData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIReceiverPerformanceData_h_Statics::ScriptStructInfo[] = {
		{ FNDIReceiverPerformanceData::StaticStruct, Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewStructOps, TEXT("NDIReceiverPerformanceData"), &Z_Registration_Info_UScriptStruct_NDIReceiverPerformanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIReceiverPerformanceData), 1761139838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIReceiverPerformanceData_h_3769025053(TEXT("/Script/NDIIO"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIReceiverPerformanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIReceiverPerformanceData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
