// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Media/NDIMediaReceiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaReceiver() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData();
// End Cross Module References
	DEFINE_FUNCTION(UNDIMediaReceiver::execChangeVideoTexture)
	{
		P_GET_OBJECT(UNDIMediaTexture2D,Z_Param_InVideoTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeVideoTexture(Z_Param_InVideoTexture);
		P_NATIVE_END;
	}
	void UNDIMediaReceiver::StaticRegisterNativesUNDIMediaReceiver()
	{
		UClass* Class = UNDIMediaReceiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeVideoTexture", &UNDIMediaReceiver::execChangeVideoTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics
	{
		struct NDIMediaReceiver_eventChangeVideoTexture_Parms
		{
			UNDIMediaTexture2D* InVideoTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVideoTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::NewProp_InVideoTexture = { "InVideoTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIMediaReceiver_eventChangeVideoTexture_Parms, InVideoTexture), Z_Construct_UClass_UNDIMediaTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::NewProp_InVideoTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09\x09""Attempts to change the Video Texture object used as the video frame capture object\n\x09*/" },
		{ "CPP_Default_InVideoTexture", "None" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
		{ "ToolTip", "Attempts to change the Video Texture object used as the video frame capture object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "ChangeVideoTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::NDIMediaReceiver_eventChangeVideoTexture_Parms), Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaReceiver);
	UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister()
	{
		return UNDIMediaReceiver::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncTimecodeToSource_MetaData[];
#endif
		static void NewProp_bSyncTimecodeToSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncTimecodeToSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerformsRGBtoLinear_MetaData[];
#endif
		static void NewProp_bPerformsRGBtoLinear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformsRGBtoLinear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionInformation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionInformation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerformanceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIMediaReceiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture, "ChangeVideoTexture" }, // 3160820404
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""A Media object representing the NDI Receiver for being able to receive Audio, Video, and Metadata over NDI?\n*/" },
		{ "DisplayName", "NDI Media Receiver" },
		{ "HideCategories", "Platforms Information Object Object" },
		{ "IncludePath", "Objects/Media/NDIMediaReceiver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
		{ "ToolTip", "A Media object representing the NDI Receiver for being able to receive Audio, Video, and Metadata over NDI?" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_Timecode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The current frame count, seconds, minutes, and hours in time-code notation\n\x09*/" },
		{ "DisplayName", "Timecode" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
		{ "ToolTip", "The current frame count, seconds, minutes, and hours in time-code notation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaReceiver, Timecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_Timecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_Timecode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_FrameRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The desired number of frames (per second) for video to be displayed\n\x09*/" },
		{ "DisplayName", "Frame Rate" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
		{ "ToolTip", "The desired number of frames (per second) for video to be displayed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaReceiver, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09Indicates whether the timecode should be synced to the Source Timecode value\n\x09*/" },
		{ "DisplayName", "Sync Timecode to Source" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
		{ "ToolTip", "Indicates whether the timecode should be synced to the Source Timecode value" },
	};
#endif
	void Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource_SetBit(void* Obj)
	{
		((UNDIMediaReceiver*)Obj)->bSyncTimecodeToSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource = { "bSyncTimecodeToSource", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNDIMediaReceiver), &Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09Should perform the sRGB to Linear color space conversion\n\x09*/" },
		{ "DisplayName", "Perform sRGB to Linear?" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
		{ "ToolTip", "Should perform the sRGB to Linear color space conversion" },
	};
#endif
	void Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear_SetBit(void* Obj)
	{
		((UNDIMediaReceiver*)Obj)->bPerformsRGBtoLinear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear = { "bPerformsRGBtoLinear", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNDIMediaReceiver), &Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_ConnectionInformation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09Information describing detailed information about the sender this receiver is connected to\n\x09*/" },
		{ "DisplayName", "Connection Information" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
		{ "ToolTip", "Information describing detailed information about the sender this receiver is connected to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_ConnectionInformation = { "ConnectionInformation", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaReceiver, ConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_ConnectionInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_ConnectionInformation_MetaData)) }; // 2095790156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_PerformanceData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09Information describing detailed information about the receiver performance when connected to an NDI? sender\n\x09*/" },
		{ "DisplayName", "Performance Data" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
		{ "ToolTip", "Information describing detailed information about the receiver performance when connected to an NDI? sender" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_PerformanceData = { "PerformanceData", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaReceiver, PerformanceData), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_PerformanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_PerformanceData_MetaData)) }; // 1761139838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_VideoTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "ChangeVideoTexture" },
		{ "Category", "Content" },
		{ "Comment", "/**\n\x09\x09Provides an NDI Video Texture object to render videos frames from the source onto\n\x09*/" },
		{ "DisplayName", "Video Texture" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
		{ "ToolTip", "Provides an NDI Video Texture object to render videos frames from the source onto" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_VideoTexture = { "VideoTexture", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaReceiver, VideoTexture), Z_Construct_UClass_UNDIMediaTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_VideoTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_VideoTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIMediaReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_Timecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_ConnectionInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_PerformanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_VideoTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaReceiver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaReceiver_Statics::ClassParams = {
		&UNDIMediaReceiver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNDIMediaReceiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaReceiver()
	{
		if (!Z_Registration_Info_UClass_UNDIMediaReceiver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaReceiver.OuterSingleton, Z_Construct_UClass_UNDIMediaReceiver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIMediaReceiver.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIMediaReceiver>()
	{
		return UNDIMediaReceiver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaReceiver);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaReceiver, UNDIMediaReceiver::StaticClass, TEXT("UNDIMediaReceiver"), &Z_Registration_Info_UClass_UNDIMediaReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaReceiver), 3204920674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_2340145428(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
