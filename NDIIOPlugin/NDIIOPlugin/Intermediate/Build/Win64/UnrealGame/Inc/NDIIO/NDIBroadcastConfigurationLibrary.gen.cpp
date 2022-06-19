// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Libraries/NDIBroadcastConfigurationLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIBroadcastConfigurationLibrary() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIBroadcastConfigurationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration();
// End Cross Module References
	DEFINE_FUNCTION(UNDIBroadcastConfigurationLibrary::execK2_Compare_Not_NDIBroadcastConfiguration)
	{
		P_GET_STRUCT(FNDIBroadcastConfiguration,Z_Param_A);
		P_GET_STRUCT(FNDIBroadcastConfiguration,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDIBroadcastConfigurationLibrary::K2_Compare_Not_NDIBroadcastConfiguration(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIBroadcastConfigurationLibrary::execK2_Compare_NDIBroadcastConfiguration)
	{
		P_GET_STRUCT(FNDIBroadcastConfiguration,Z_Param_A);
		P_GET_STRUCT(FNDIBroadcastConfiguration,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDIBroadcastConfigurationLibrary::K2_Compare_NDIBroadcastConfiguration(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	void UNDIBroadcastConfigurationLibrary::StaticRegisterNativesUNDIBroadcastConfigurationLibrary()
	{
		UClass* Class = UNDIBroadcastConfigurationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_Compare_NDIBroadcastConfiguration", &UNDIBroadcastConfigurationLibrary::execK2_Compare_NDIBroadcastConfiguration },
			{ "K2_Compare_Not_NDIBroadcastConfiguration", &UNDIBroadcastConfigurationLibrary::execK2_Compare_Not_NDIBroadcastConfiguration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics
	{
		struct NDIBroadcastConfigurationLibrary_eventK2_Compare_NDIBroadcastConfiguration_Parms
		{
			FNDIBroadcastConfiguration A;
			FNDIBroadcastConfiguration B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIBroadcastConfigurationLibrary_eventK2_Compare_NDIBroadcastConfiguration_Parms, A), Z_Construct_UScriptStruct_FNDIBroadcastConfiguration, METADATA_PARAMS(nullptr, 0) }; // 3166999952
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIBroadcastConfigurationLibrary_eventK2_Compare_NDIBroadcastConfiguration_Parms, B), Z_Construct_UScriptStruct_FNDIBroadcastConfiguration, METADATA_PARAMS(nullptr, 0) }; // 3166999952
	void Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIBroadcastConfigurationLibrary_eventK2_Compare_NDIBroadcastConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIBroadcastConfigurationLibrary_eventK2_Compare_NDIBroadcastConfiguration_Parms), &Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns a value indicating whether the two structures are comparably equal\n\n\x09\x09@param A The structure used as the source comparator\n\x09\x09@param B The structure used as the target comparator\n\x09\x09@return The resulting value of the comparator operator\n\x09*/" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equals (NDI Broadcast Configuration)" },
		{ "Keywords", "= == Equals" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIBroadcastConfigurationLibrary.h" },
		{ "ToolTip", "Returns a value indicating whether the two structures are comparably equal\n\n@param A The structure used as the source comparator\n@param B The structure used as the target comparator\n@return The resulting value of the comparator operator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIBroadcastConfigurationLibrary, nullptr, "K2_Compare_NDIBroadcastConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::NDIBroadcastConfigurationLibrary_eventK2_Compare_NDIBroadcastConfiguration_Parms), Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics
	{
		struct NDIBroadcastConfigurationLibrary_eventK2_Compare_Not_NDIBroadcastConfiguration_Parms
		{
			FNDIBroadcastConfiguration A;
			FNDIBroadcastConfiguration B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIBroadcastConfigurationLibrary_eventK2_Compare_Not_NDIBroadcastConfiguration_Parms, A), Z_Construct_UScriptStruct_FNDIBroadcastConfiguration, METADATA_PARAMS(nullptr, 0) }; // 3166999952
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIBroadcastConfigurationLibrary_eventK2_Compare_Not_NDIBroadcastConfiguration_Parms, B), Z_Construct_UScriptStruct_FNDIBroadcastConfiguration, METADATA_PARAMS(nullptr, 0) }; // 3166999952
	void Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIBroadcastConfigurationLibrary_eventK2_Compare_Not_NDIBroadcastConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIBroadcastConfigurationLibrary_eventK2_Compare_Not_NDIBroadcastConfiguration_Parms), &Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns a value indicating whether the two structures are NOT comparably equal\n\n\x09\x09@param A The structure used as the source comparator\n\x09\x09@param B The structure used as the target comparator\n\x09\x09@return The resulting value of the comparator operator\n\x09*/" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equals (NDI Broadcast Configuration)" },
		{ "Keywords", "! != Not Equals" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIBroadcastConfigurationLibrary.h" },
		{ "ToolTip", "Returns a value indicating whether the two structures are NOT comparably equal\n\n@param A The structure used as the source comparator\n@param B The structure used as the target comparator\n@return The resulting value of the comparator operator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIBroadcastConfigurationLibrary, nullptr, "K2_Compare_Not_NDIBroadcastConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::NDIBroadcastConfigurationLibrary_eventK2_Compare_Not_NDIBroadcastConfiguration_Parms), Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIBroadcastConfigurationLibrary);
	UClass* Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_NoRegister()
	{
		return UNDIBroadcastConfigurationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_NDIBroadcastConfiguration, "K2_Compare_NDIBroadcastConfiguration" }, // 4091643381
		{ &Z_Construct_UFunction_UNDIBroadcastConfigurationLibrary_K2_Compare_Not_NDIBroadcastConfiguration, "K2_Compare_Not_NDIBroadcastConfiguration" }, // 3077286013
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "DisplayName", "NDI Broadcast Configuration Library" },
		{ "IncludePath", "Objects/Libraries/NDIBroadcastConfigurationLibrary.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIBroadcastConfigurationLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIBroadcastConfigurationLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_Statics::ClassParams = {
		&UNDIBroadcastConfigurationLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIBroadcastConfigurationLibrary()
	{
		if (!Z_Registration_Info_UClass_UNDIBroadcastConfigurationLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIBroadcastConfigurationLibrary.OuterSingleton, Z_Construct_UClass_UNDIBroadcastConfigurationLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIBroadcastConfigurationLibrary.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIBroadcastConfigurationLibrary>()
	{
		return UNDIBroadcastConfigurationLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIBroadcastConfigurationLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIBroadcastConfigurationLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIBroadcastConfigurationLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIBroadcastConfigurationLibrary, UNDIBroadcastConfigurationLibrary::StaticClass, TEXT("UNDIBroadcastConfigurationLibrary"), &Z_Registration_Info_UClass_UNDIBroadcastConfigurationLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIBroadcastConfigurationLibrary), 3140292587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIBroadcastConfigurationLibrary_h_3231547383(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIBroadcastConfigurationLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIBroadcastConfigurationLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
