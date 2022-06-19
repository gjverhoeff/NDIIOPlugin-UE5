// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/Factories/NDIMediaTexture2DFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaTexture2DFactory() {}
// Cross Module References
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaTexture2DFactory_NoRegister();
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaTexture2DFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NDIIOEditor();
// End Cross Module References
	void UNDIMediaTexture2DFactory::StaticRegisterNativesUNDIMediaTexture2DFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaTexture2DFactory);
	UClass* Z_Construct_UClass_UNDIMediaTexture2DFactory_NoRegister()
	{
		return UNDIMediaTexture2DFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaTexture2DFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaTexture2DFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIOEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaTexture2DFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Factory Class used to create assets via content browser for NDI Texture2D objects\n*/" },
		{ "IncludePath", "Factories/NDIMediaTexture2DFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/NDIMediaTexture2DFactory.h" },
		{ "ToolTip", "Factory Class used to create assets via content browser for NDI Texture2D objects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaTexture2DFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaTexture2DFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaTexture2DFactory_Statics::ClassParams = {
		&UNDIMediaTexture2DFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaTexture2DFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaTexture2DFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaTexture2DFactory()
	{
		if (!Z_Registration_Info_UClass_UNDIMediaTexture2DFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaTexture2DFactory.OuterSingleton, Z_Construct_UClass_UNDIMediaTexture2DFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIMediaTexture2DFactory.OuterSingleton;
	}
	template<> NDIIOEDITOR_API UClass* StaticClass<UNDIMediaTexture2DFactory>()
	{
		return UNDIMediaTexture2DFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaTexture2DFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaTexture2DFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaTexture2DFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaTexture2DFactory, UNDIMediaTexture2DFactory::StaticClass, TEXT("UNDIMediaTexture2DFactory"), &Z_Registration_Info_UClass_UNDIMediaTexture2DFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaTexture2DFactory), 738277220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaTexture2DFactory_h_194129637(TEXT("/Script/NDIIOEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaTexture2DFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaTexture2DFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
