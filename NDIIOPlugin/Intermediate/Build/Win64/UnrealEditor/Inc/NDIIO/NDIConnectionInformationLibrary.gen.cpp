// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Libraries/NDIConnectionInformationLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIConnectionInformationLibrary() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIConnectionInformationLibrary_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIConnectionInformationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
// End Cross Module References
	DEFINE_FUNCTION(UNDIConnectionInformationLibrary::execK2_NDIConnectionInformation_Reset)
	{
		P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_ConnectionInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNDIConnectionInformation*)Z_Param__Result=UNDIConnectionInformationLibrary::K2_NDIConnectionInformation_Reset(Z_Param_Out_ConnectionInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIConnectionInformationLibrary::execK2_NDIConnectionInformation_IsValid)
	{
		P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_ConnectionInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDIConnectionInformationLibrary::K2_NDIConnectionInformation_IsValid(Z_Param_Out_ConnectionInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIConnectionInformationLibrary::execK2_Compare_Not_NDIConnectionInformation)
	{
		P_GET_STRUCT(FNDIConnectionInformation,Z_Param_A);
		P_GET_STRUCT(FNDIConnectionInformation,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDIConnectionInformationLibrary::K2_Compare_Not_NDIConnectionInformation(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIConnectionInformationLibrary::execK2_Compare_NDIConnectionInformation)
	{
		P_GET_STRUCT(FNDIConnectionInformation,Z_Param_A);
		P_GET_STRUCT(FNDIConnectionInformation,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDIConnectionInformationLibrary::K2_Compare_NDIConnectionInformation(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	void UNDIConnectionInformationLibrary::StaticRegisterNativesUNDIConnectionInformationLibrary()
	{
		UClass* Class = UNDIConnectionInformationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_Compare_NDIConnectionInformation", &UNDIConnectionInformationLibrary::execK2_Compare_NDIConnectionInformation },
			{ "K2_Compare_Not_NDIConnectionInformation", &UNDIConnectionInformationLibrary::execK2_Compare_Not_NDIConnectionInformation },
			{ "K2_NDIConnectionInformation_IsValid", &UNDIConnectionInformationLibrary::execK2_NDIConnectionInformation_IsValid },
			{ "K2_NDIConnectionInformation_Reset", &UNDIConnectionInformationLibrary::execK2_NDIConnectionInformation_Reset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics
	{
		struct NDIConnectionInformationLibrary_eventK2_Compare_NDIConnectionInformation_Parms
		{
			FNDIConnectionInformation A;
			FNDIConnectionInformation B;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIConnectionInformationLibrary_eventK2_Compare_NDIConnectionInformation_Parms, A), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIConnectionInformationLibrary_eventK2_Compare_NDIConnectionInformation_Parms, B), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
	void Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIConnectionInformationLibrary_eventK2_Compare_NDIConnectionInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIConnectionInformationLibrary_eventK2_Compare_NDIConnectionInformation_Parms), &Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns a value indicating whether the two structures are comparably equal\n\n\x09\x09@param A The structure used as the source comparator\n\x09\x09@param B The structure used as the target comparator\n\x09\x09@return The resulting value of the comparator operator\n\x09*/" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equals (NDI Connection Information)" },
		{ "Keywords", "= == Equals" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIConnectionInformationLibrary.h" },
		{ "ToolTip", "Returns a value indicating whether the two structures are comparably equal\n\n@param A The structure used as the source comparator\n@param B The structure used as the target comparator\n@return The resulting value of the comparator operator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIConnectionInformationLibrary, nullptr, "K2_Compare_NDIConnectionInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::NDIConnectionInformationLibrary_eventK2_Compare_NDIConnectionInformation_Parms), Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics
	{
		struct NDIConnectionInformationLibrary_eventK2_Compare_Not_NDIConnectionInformation_Parms
		{
			FNDIConnectionInformation A;
			FNDIConnectionInformation B;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIConnectionInformationLibrary_eventK2_Compare_Not_NDIConnectionInformation_Parms, A), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIConnectionInformationLibrary_eventK2_Compare_Not_NDIConnectionInformation_Parms, B), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
	void Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIConnectionInformationLibrary_eventK2_Compare_Not_NDIConnectionInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIConnectionInformationLibrary_eventK2_Compare_Not_NDIConnectionInformation_Parms), &Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns a value indicating whether the two structures are NOT comparably equal\n\n\x09\x09@param A The structure used as the source comparator\n\x09\x09@param B The structure used as the target comparator\n\x09\x09@return The resulting value of the comparator operator\n\x09*/" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equals (NDI Connection Information)" },
		{ "Keywords", "! != Not Equals" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIConnectionInformationLibrary.h" },
		{ "ToolTip", "Returns a value indicating whether the two structures are NOT comparably equal\n\n@param A The structure used as the source comparator\n@param B The structure used as the target comparator\n@return The resulting value of the comparator operator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIConnectionInformationLibrary, nullptr, "K2_Compare_Not_NDIConnectionInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::NDIConnectionInformationLibrary_eventK2_Compare_Not_NDIConnectionInformation_Parms), Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics
	{
		struct NDIConnectionInformationLibrary_eventK2_NDIConnectionInformation_IsValid_Parms
		{
			FNDIConnectionInformation ConnectionInformation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionInformation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::NewProp_ConnectionInformation = { "ConnectionInformation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIConnectionInformationLibrary_eventK2_NDIConnectionInformation_IsValid_Parms, ConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
	void Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIConnectionInformationLibrary_eventK2_NDIConnectionInformation_IsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIConnectionInformationLibrary_eventK2_NDIConnectionInformation_IsValid_Parms), &Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::NewProp_ConnectionInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns a value indicating whether the property values of the supplied structure is valid\n\n\x09\x09@param ConnectionInformation The structure to validate\n\x09\x09@return An indication of the supplied structures validity\n\x09*/" },
		{ "DisplayName", "Is Valid?" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIConnectionInformationLibrary.h" },
		{ "ToolTip", "Returns a value indicating whether the property values of the supplied structure is valid\n\n@param ConnectionInformation The structure to validate\n@return An indication of the supplied structures validity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIConnectionInformationLibrary, nullptr, "K2_NDIConnectionInformation_IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::NDIConnectionInformationLibrary_eventK2_NDIConnectionInformation_IsValid_Parms), Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics
	{
		struct NDIConnectionInformationLibrary_eventK2_NDIConnectionInformation_Reset_Parms
		{
			FNDIConnectionInformation ConnectionInformation;
			FNDIConnectionInformation ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionInformation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::NewProp_ConnectionInformation = { "ConnectionInformation", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIConnectionInformationLibrary_eventK2_NDIConnectionInformation_Reset_Parms, ConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIConnectionInformationLibrary_eventK2_NDIConnectionInformation_Reset_Parms, ReturnValue), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::NewProp_ConnectionInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Resets the structure's properties to their default values\n\n\x09\x09@param ConnectionInformation The structure to reset to the default value\n\x09\x09@return The reference to the passed in structure after the 'reset' has been completed\n\x09*/" },
		{ "DisplayName", "Reset Connection Information" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIConnectionInformationLibrary.h" },
		{ "ToolTip", "Resets the structure's properties to their default values\n\n@param ConnectionInformation The structure to reset to the default value\n@return The reference to the passed in structure after the 'reset' has been completed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIConnectionInformationLibrary, nullptr, "K2_NDIConnectionInformation_Reset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::NDIConnectionInformationLibrary_eventK2_NDIConnectionInformation_Reset_Parms), Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIConnectionInformationLibrary);
	UClass* Z_Construct_UClass_UNDIConnectionInformationLibrary_NoRegister()
	{
		return UNDIConnectionInformationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_NDIConnectionInformation, "K2_Compare_NDIConnectionInformation" }, // 3786289275
		{ &Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_Compare_Not_NDIConnectionInformation, "K2_Compare_Not_NDIConnectionInformation" }, // 4216101457
		{ &Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_IsValid, "K2_NDIConnectionInformation_IsValid" }, // 2564246375
		{ &Z_Construct_UFunction_UNDIConnectionInformationLibrary_K2_NDIConnectionInformation_Reset, "K2_NDIConnectionInformation_Reset" }, // 3776758914
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "DisplayName", "NDI Connection Information Library" },
		{ "IncludePath", "Objects/Libraries/NDIConnectionInformationLibrary.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIConnectionInformationLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIConnectionInformationLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics::ClassParams = {
		&UNDIConnectionInformationLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIConnectionInformationLibrary()
	{
		if (!Z_Registration_Info_UClass_UNDIConnectionInformationLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIConnectionInformationLibrary.OuterSingleton, Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIConnectionInformationLibrary.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIConnectionInformationLibrary>()
	{
		return UNDIConnectionInformationLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIConnectionInformationLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIConnectionInformationLibrary, UNDIConnectionInformationLibrary::StaticClass, TEXT("UNDIConnectionInformationLibrary"), &Z_Registration_Info_UClass_UNDIConnectionInformationLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIConnectionInformationLibrary), 2636496617U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_1285140724(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
