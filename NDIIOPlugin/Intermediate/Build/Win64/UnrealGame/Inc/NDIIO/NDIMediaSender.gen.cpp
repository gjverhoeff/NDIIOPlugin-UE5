// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Media/NDIMediaSender.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaSender() {}
// Cross Module References
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms
		{
			UNDIMediaSender* Sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""A delegate used for notifications on property changes on the NDIMediaSender object\n*/" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "A delegate used for notifications on property changes on the NDIMediaSender object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaSenderPropertyChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UNDIMediaSender::StaticRegisterNativesUNDIMediaSender()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaSender);
	UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister()
	{
		return UNDIMediaSender::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaSender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerformsRGBtoLinear_MetaData[];
#endif
		static void NewProp_bPerformsRGBtoLinear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformsRGBtoLinear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBroadcastConfigurationChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBroadcastConfigurationChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaSender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""Defines a media object representing an NDI? Sender object. This object is used with the\n\x09NDI Broadcast Component to send Audio / Video / Metadata to a 'receiving' NDI object.\n*/" },
		{ "DisplayName", "NDI Sender Object" },
		{ "HideCategories", "Platforms Object Object" },
		{ "IncludePath", "Objects/Media/NDIMediaSender.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Defines a media object representing an NDI? Sender object. This object is used with the\nNDI Broadcast Component to send Audio / Video / Metadata to a 'receiving' NDI object." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Describes a user-friendly name of the output stream to differentiate from other output streams on the current\n\x09 * machine */" },
		{ "DisplayName", "Source Name" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Describes a user-friendly name of the output stream to differentiate from other output streams on the current\nmachine" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaSender, SourceName), METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Describes the output frame size while sending video frame over NDI */" },
		{ "DisplayName", "Frame Size" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Describes the output frame size while sending video frame over NDI" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize = { "FrameSize", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaSender, FrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Represents the desired number of frames (per second) for video to be sent over NDI */" },
		{ "DisplayName", "Frame Rate" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Represents the desired number of frames (per second) for video to be sent over NDI" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaSender, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Content" },
		{ "Comment", "/** Indicates the texture to send over NDI */" },
		{ "DisplayName", "Render Target" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Indicates the texture to send over NDI" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaSender, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformsRGBtoLinear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09Should perform the sRGB to Linear color space conversion\n\x09*/" },
		{ "DisplayName", "Perform sRGB to Linear?" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
		{ "ToolTip", "Should perform the sRGB to Linear color space conversion" },
	};
#endif
	void Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformsRGBtoLinear_SetBit(void* Obj)
	{
		((UNDIMediaSender*)Obj)->bPerformsRGBtoLinear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformsRGBtoLinear = { "bPerformsRGBtoLinear", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNDIMediaSender), &Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformsRGBtoLinear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformsRGBtoLinear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformsRGBtoLinear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSender.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged = { "OnBroadcastConfigurationChanged", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIMediaSender, OnBroadcastConfigurationChanged), Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged_MetaData)) }; // 3950976538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIMediaSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_bPerformsRGBtoLinear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSender_Statics::NewProp_OnBroadcastConfigurationChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaSender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSender>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSender_Statics::ClassParams = {
		&UNDIMediaSender::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNDIMediaSender_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaSender()
	{
		if (!Z_Registration_Info_UClass_UNDIMediaSender.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaSender.OuterSingleton, Z_Construct_UClass_UNDIMediaSender_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIMediaSender.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIMediaSender>()
	{
		return UNDIMediaSender::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSender);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaSender, UNDIMediaSender::StaticClass, TEXT("UNDIMediaSender"), &Z_Registration_Info_UClass_UNDIMediaSender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaSender), 3663252628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_424681207(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
