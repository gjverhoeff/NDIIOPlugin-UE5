// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIIO_init() {}
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature();
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NDIIO;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NDIIO()
	{
		if (!Z_Registration_Info_UPackage__Script_NDIIO.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NDIIO_NDIMediaSenderPropertyChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NDIIO",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4B4C4A96,
				0xB4B101CB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NDIIO.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NDIIO.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NDIIO(Z_Construct_UPackage__Script_NDIIO, TEXT("/Script/NDIIO"), Z_Registration_Info_UPackage__Script_NDIIO, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4B4C4A96, 0xB4B101CB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
