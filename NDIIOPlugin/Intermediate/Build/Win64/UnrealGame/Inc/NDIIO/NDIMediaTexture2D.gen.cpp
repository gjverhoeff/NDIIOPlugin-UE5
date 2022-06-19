// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Media/NDIMediaTexture2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaTexture2D() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaTexture2D_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References
	void UNDIMediaTexture2D::StaticRegisterNativesUNDIMediaTexture2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaTexture2D);
	UClass* Z_Construct_UClass_UNDIMediaTexture2D_NoRegister()
	{
		return UNDIMediaTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaTexture2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""A Texture Object used by an NDI Media Receiver object for capturing video from\n\x09""a network source\n*/" },
		{ "DisplayName", "NDI Media Texture 2D" },
		{ "HideCategories", "ImportSettings Compression Texture Adjustments Compositing LevelOfDetail Object" },
		{ "IncludePath", "Objects/Media/NDIMediaTexture2D.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaTexture2D.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "A Texture Object used by an NDI Media Receiver object for capturing video from\na network source" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaTexture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaTexture2D_Statics::ClassParams = {
		&UNDIMediaTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x049000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaTexture2D()
	{
		if (!Z_Registration_Info_UClass_UNDIMediaTexture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaTexture2D.OuterSingleton, Z_Construct_UClass_UNDIMediaTexture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIMediaTexture2D.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIMediaTexture2D>()
	{
		return UNDIMediaTexture2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaTexture2D);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaTexture2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaTexture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaTexture2D, UNDIMediaTexture2D::StaticClass, TEXT("UNDIMediaTexture2D"), &Z_Registration_Info_UClass_UNDIMediaTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaTexture2D), 3739668815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaTexture2D_h_3433103691(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaTexture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaTexture2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
