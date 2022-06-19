// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Media/NDIMediaSoundWave.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaSoundWave() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSoundWave_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSoundWave();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References
	void UNDIMediaSoundWave::StaticRegisterNativesUNDIMediaSoundWave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaSoundWave);
	UClass* Z_Construct_UClass_UNDIMediaSoundWave_NoRegister()
	{
		return UNDIMediaSoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaSoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaSoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWave,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSoundWave_Statics::Class_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""Defines a SoundWave object used by an NDI Media Receiver object for capturing audio from\n\x09""a network source\n*/" },
		{ "DisplayName", "NDI Media Sound Wave" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Objects/Media/NDIMediaSoundWave.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSoundWave.h" },
		{ "ToolTip", "Defines a SoundWave object used by an NDI Media Receiver object for capturing audio from\na network source" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaSoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSoundWave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSoundWave_Statics::ClassParams = {
		&UNDIMediaSoundWave::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSoundWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaSoundWave()
	{
		if (!Z_Registration_Info_UClass_UNDIMediaSoundWave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaSoundWave.OuterSingleton, Z_Construct_UClass_UNDIMediaSoundWave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIMediaSoundWave.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIMediaSoundWave>()
	{
		return UNDIMediaSoundWave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSoundWave);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNDIMediaSoundWave)
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSoundWave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSoundWave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaSoundWave, UNDIMediaSoundWave::StaticClass, TEXT("UNDIMediaSoundWave"), &Z_Registration_Info_UClass_UNDIMediaSoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaSoundWave), 1075837859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSoundWave_h_129717238(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSoundWave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
