// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/Factories/NDIMediaSenderFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaSenderFactory() {}
// Cross Module References
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSenderFactory_NoRegister();
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSenderFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NDIIOEditor();
// End Cross Module References
	void UNDIMediaSenderFactory::StaticRegisterNativesUNDIMediaSenderFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaSenderFactory);
	UClass* Z_Construct_UClass_UNDIMediaSenderFactory_NoRegister()
	{
		return UNDIMediaSenderFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaSenderFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaSenderFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIOEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSenderFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Factory Class used to create assets via content browser for NDI Sender objects\n*/" },
		{ "IncludePath", "Factories/NDIMediaSenderFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/NDIMediaSenderFactory.h" },
		{ "ToolTip", "Factory Class used to create assets via content browser for NDI Sender objects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaSenderFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSenderFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSenderFactory_Statics::ClassParams = {
		&UNDIMediaSenderFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSenderFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSenderFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaSenderFactory()
	{
		if (!Z_Registration_Info_UClass_UNDIMediaSenderFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaSenderFactory.OuterSingleton, Z_Construct_UClass_UNDIMediaSenderFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIMediaSenderFactory.OuterSingleton;
	}
	template<> NDIIOEDITOR_API UClass* StaticClass<UNDIMediaSenderFactory>()
	{
		return UNDIMediaSenderFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSenderFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaSenderFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaSenderFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaSenderFactory, UNDIMediaSenderFactory::StaticClass, TEXT("UNDIMediaSenderFactory"), &Z_Registration_Info_UClass_UNDIMediaSenderFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaSenderFactory), 2999503167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaSenderFactory_h_2145088801(TEXT("/Script/NDIIOEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaSenderFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaSenderFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
