// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Structures/NDIConnectionInformation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIConnectionInformation() {}
// Cross Module References
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UEnum* Z_Construct_UEnum_NDIIO_ENDISourceBandwidth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIConnectionInformation;
class UScriptStruct* FNDIConnectionInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIConnectionInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIConnectionInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIConnectionInformation, Z_Construct_UPackage__Script_NDIIO(), TEXT("NDIConnectionInformation"));
	}
	return Z_Registration_Info_UScriptStruct_NDIConnectionInformation.OuterSingleton;
}
template<> NDIIO_API UScriptStruct* StaticStruct<FNDIConnectionInformation>()
{
	return FNDIConnectionInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MachineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bandwidth_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Bandwidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentlyConnected_MetaData[];
#endif
		static void NewProp_bIsCurrentlyConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyConnected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""Describes essential properties used for connection objects over NDI?\n*/" },
		{ "DisplayName", "NDI Connection Information" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
		{ "ToolTip", "Describes essential properties used for connection objects over NDI?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIConnectionInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** A user-friendly name of the source */" },
		{ "DisplayName", "Source Name" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
		{ "ToolTip", "A user-friendly name of the source" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIConnectionInformation, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_SourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_MachineName_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The machine name of the source */" },
		{ "DisplayName", "Machine Name" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
		{ "ToolTip", "The machine name of the source" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIConnectionInformation, MachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_MachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_MachineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_StreamName_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The stream name of the source */" },
		{ "DisplayName", "Stream Name" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
		{ "ToolTip", "The stream name of the source" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_StreamName = { "StreamName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIConnectionInformation, StreamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_StreamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_StreamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** A location on the network for which this source exists */" },
		{ "DisplayName", "Url" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
		{ "ToolTip", "A location on the network for which this source exists" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIConnectionInformation, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Indicates the current bandwidth mode used for this connection */" },
		{ "DisplayName", "Bandwidth" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
		{ "ToolTip", "Indicates the current bandwidth mode used for this connection" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIConnectionInformation, Bandwidth), Z_Construct_UEnum_NDIIO_ENDISourceBandwidth, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth_MetaData)) }; // 3082769496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bIsCurrentlyConnected_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Indicates whether the source that uses this object is current connected to another NDI? source */" },
		{ "DispalyName", "Is Currently Connected?" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
		{ "ToolTip", "Indicates whether the source that uses this object is current connected to another NDI? source" },
	};
#endif
	void Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bIsCurrentlyConnected_SetBit(void* Obj)
	{
		((FNDIConnectionInformation*)Obj)->bIsCurrentlyConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bIsCurrentlyConnected = { "bIsCurrentlyConnected", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNDIConnectionInformation), &Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bIsCurrentlyConnected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bIsCurrentlyConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bIsCurrentlyConnected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_MachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_StreamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bIsCurrentlyConnected,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
		nullptr,
		&NewStructOps,
		"NDIConnectionInformation",
		sizeof(FNDIConnectionInformation),
		alignof(FNDIConnectionInformation),
		Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_NDIConnectionInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIConnectionInformation.InnerSingleton, Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDIConnectionInformation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIConnectionInformation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIConnectionInformation_h_Statics::ScriptStructInfo[] = {
		{ FNDIConnectionInformation::StaticStruct, Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewStructOps, TEXT("NDIConnectionInformation"), &Z_Registration_Info_UScriptStruct_NDIConnectionInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIConnectionInformation), 2095790156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIConnectionInformation_h_2734848324(TEXT("/Script/NDIIO"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIConnectionInformation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Structures_NDIConnectionInformation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
