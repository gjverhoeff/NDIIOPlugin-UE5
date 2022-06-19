// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Enumerations/NDISourceBandwidth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDISourceBandwidth() {}
// Cross Module References
	NDIIO_API UEnum* Z_Construct_UEnum_NDIIO_ENDISourceBandwidth();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISourceBandwidth;
	static UEnum* ENDISourceBandwidth_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDISourceBandwidth.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDISourceBandwidth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NDIIO_ENDISourceBandwidth, Z_Construct_UPackage__Script_NDIIO(), TEXT("ENDISourceBandwidth"));
		}
		return Z_Registration_Info_UEnum_ENDISourceBandwidth.OuterSingleton;
	}
	template<> NDIIO_API UEnum* StaticEnum<ENDISourceBandwidth>()
	{
		return ENDISourceBandwidth_StaticEnum();
	}
	struct Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enumerators[] = {
		{ "ENDISourceBandwidth::MetadataOnly", (int64)ENDISourceBandwidth::MetadataOnly },
		{ "ENDISourceBandwidth::AudioOnly", (int64)ENDISourceBandwidth::AudioOnly },
		{ "ENDISourceBandwidth::Lowest", (int64)ENDISourceBandwidth::Lowest },
		{ "ENDISourceBandwidth::Highest", (int64)ENDISourceBandwidth::Highest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enum_MetaDataParams[] = {
		{ "AudioOnly.Comment", "/** Receive metadata, audio */" },
		{ "AudioOnly.DisplayName", "Audio Only" },
		{ "AudioOnly.Name", "ENDISourceBandwidth::AudioOnly" },
		{ "AudioOnly.ToolTip", "Receive metadata, audio" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Receiver Bandwidth modes\n*/" },
		{ "DisplayName", "NDI Source Bandwidth" },
		{ "Highest.Comment", "// Receive metadata, audio, video at full resolution.\n" },
		{ "Highest.DisplayName", "Highest" },
		{ "Highest.Name", "ENDISourceBandwidth::Highest" },
		{ "Highest.ToolTip", "Receive metadata, audio, video at full resolution." },
		{ "Lowest.Comment", "/** Receive metadata, audio, video at a lower bandwidth and resolution. */" },
		{ "Lowest.DisplayName", "Lowest" },
		{ "Lowest.Name", "ENDISourceBandwidth::Lowest" },
		{ "Lowest.ToolTip", "Receive metadata, audio, video at a lower bandwidth and resolution." },
		{ "MetadataOnly.Comment", "/** Receive metadata. */" },
		{ "MetadataOnly.DisplayName", "Metadata Only" },
		{ "MetadataOnly.Name", "ENDISourceBandwidth::MetadataOnly" },
		{ "MetadataOnly.ToolTip", "Receive metadata." },
		{ "ModuleRelativePath", "Public/Enumerations/NDISourceBandwidth.h" },
		{ "ToolTip", "Receiver Bandwidth modes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NDIIO,
		nullptr,
		"ENDISourceBandwidth",
		"ENDISourceBandwidth",
		Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NDIIO_ENDISourceBandwidth()
	{
		if (!Z_Registration_Info_UEnum_ENDISourceBandwidth.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISourceBandwidth.InnerSingleton, Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDISourceBandwidth.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Enumerations_NDISourceBandwidth_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Enumerations_NDISourceBandwidth_h_Statics::EnumInfo[] = {
		{ ENDISourceBandwidth_StaticEnum, TEXT("ENDISourceBandwidth"), &Z_Registration_Info_UEnum_ENDISourceBandwidth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3082769496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Enumerations_NDISourceBandwidth_h_4078695822(TEXT("/Script/NDIIO"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Enumerations_NDISourceBandwidth_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Enumerations_NDISourceBandwidth_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
