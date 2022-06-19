// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Actors/NDIBroadcastActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIBroadcastActor() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_ANDIBroadcastActor_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_ANDIBroadcastActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIViewportCaptureComponent_NoRegister();
// End Cross Module References
	void ANDIBroadcastActor::StaticRegisterNativesANDIBroadcastActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANDIBroadcastActor);
	UClass* Z_Construct_UClass_ANDIBroadcastActor_NoRegister()
	{
		return ANDIBroadcastActor::StaticClass();
	}
	struct Z_Construct_UClass_ANDIBroadcastActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDIMediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDIMediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportCaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportCaptureComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANDIBroadcastActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIBroadcastActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""A quick and easy way to capture the from the perspective of a camera that starts broadcasting the viewport\n\x09immediate upon 'BeginPlay'\n*/" },
		{ "DisplayName", "NDI Broadcast Actor" },
		{ "IncludePath", "Actors/NDIBroadcastActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/NDIBroadcastActor.h" },
		{ "ToolTip", "A quick and easy way to capture the from the perspective of a camera that starts broadcasting the viewport\nimmediate upon 'BeginPlay'" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_NDIMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09The NDI Media Sender representing the configuration of the network source to send audio, video, and metadata\n\x09*/" },
		{ "DisplayName", "NDI Media Source" },
		{ "ModuleRelativePath", "Public/Actors/NDIBroadcastActor.h" },
		{ "ToolTip", "The NDI Media Sender representing the configuration of the network source to send audio, video, and metadata" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_NDIMediaSource = { "NDIMediaSource", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDIBroadcastActor, NDIMediaSource), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_NDIMediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_NDIMediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_ViewportCaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""A component used to capture an additional viewport for broadcasting over NDI\n\x09*/" },
		{ "DisplayName", "Viewport Capture Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/NDIBroadcastActor.h" },
		{ "ToolTip", "A component used to capture an additional viewport for broadcasting over NDI" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_ViewportCaptureComponent = { "ViewportCaptureComponent", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDIBroadcastActor, ViewportCaptureComponent), Z_Construct_UClass_UNDIViewportCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_ViewportCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_ViewportCaptureComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANDIBroadcastActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_NDIMediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_ViewportCaptureComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANDIBroadcastActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANDIBroadcastActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANDIBroadcastActor_Statics::ClassParams = {
		&ANDIBroadcastActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANDIBroadcastActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANDIBroadcastActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANDIBroadcastActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIBroadcastActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANDIBroadcastActor()
	{
		if (!Z_Registration_Info_UClass_ANDIBroadcastActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANDIBroadcastActor.OuterSingleton, Z_Construct_UClass_ANDIBroadcastActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANDIBroadcastActor.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<ANDIBroadcastActor>()
	{
		return ANDIBroadcastActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANDIBroadcastActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANDIBroadcastActor, ANDIBroadcastActor::StaticClass, TEXT("ANDIBroadcastActor"), &Z_Registration_Info_UClass_ANDIBroadcastActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANDIBroadcastActor), 888054017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_1530714596(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
