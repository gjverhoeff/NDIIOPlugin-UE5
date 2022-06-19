// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/Factories/NDIMediaReceiverFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaReceiverFactory() {}
// Cross Module References
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaReceiverFactory_NoRegister();
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaReceiverFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NDIIOEditor();
// End Cross Module References
	void UNDIMediaReceiverFactory::StaticRegisterNativesUNDIMediaReceiverFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaReceiverFactory);
	UClass* Z_Construct_UClass_UNDIMediaReceiverFactory_NoRegister()
	{
		return UNDIMediaReceiverFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaReceiverFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIOEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n\x09""Factory Class used to create assets via content browser for NDI Receiver objects\n*/" },
		{ "IncludePath", "Factories/NDIMediaReceiverFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/NDIMediaReceiverFactory.h" },
		{ "ToolTip", "Factory Class used to create assets via content browser for NDI Receiver objects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaReceiverFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::ClassParams = {
		&UNDIMediaReceiverFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaReceiverFactory()
	{
		if (!Z_Registration_Info_UClass_UNDIMediaReceiverFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaReceiverFactory.OuterSingleton, Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIMediaReceiverFactory.OuterSingleton;
	}
	template<> NDIIOEDITOR_API UClass* StaticClass<UNDIMediaReceiverFactory>()
	{
		return UNDIMediaReceiverFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaReceiverFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaReceiverFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaReceiverFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaReceiverFactory, UNDIMediaReceiverFactory::StaticClass, TEXT("UNDIMediaReceiverFactory"), &Z_Registration_Info_UClass_UNDIMediaReceiverFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaReceiverFactory), 1262687622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaReceiverFactory_h_2646238035(TEXT("/Script/NDIIOEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaReceiverFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Editor_Public_Factories_NDIMediaReceiverFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
