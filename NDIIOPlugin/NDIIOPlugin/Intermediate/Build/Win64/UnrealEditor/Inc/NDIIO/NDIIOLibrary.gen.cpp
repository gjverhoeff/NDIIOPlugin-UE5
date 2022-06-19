// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Libraries/NDIIOLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIIOLibrary() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIIOLibrary_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIIOLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNDIIOLibrary::execK2_GetNDIMediaSender)
	{
		P_GET_OBJECT(UNDIMediaSender,Z_Param_Sender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNDIMediaSender**)Z_Param__Result=UNDIIOLibrary::K2_GetNDIMediaSender(Z_Param_Sender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIIOLibrary::execK2_GetNDIMediaReceiver)
	{
		P_GET_OBJECT(UNDIMediaReceiver,Z_Param_Receiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNDIMediaReceiver**)Z_Param__Result=UNDIIOLibrary::K2_GetNDIMediaReceiver(Z_Param_Receiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIIOLibrary::execK2_StopBroadcastingActiveViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNDIIOLibrary::K2_StopBroadcastingActiveViewport(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIIOLibrary::execK2_BeginBroadcastingActiveViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDIIOLibrary::K2_BeginBroadcastingActiveViewport(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIIOLibrary::execK2_FindNetworkSourceByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_ConnectionInformation);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDIIOLibrary::K2_FindNetworkSourceByName(Z_Param_WorldContextObject,Z_Param_Out_ConnectionInformation,Z_Param_InSourceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIIOLibrary::execK2_GetNDISourceCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNDIConnectionInformation>*)Z_Param__Result=UNDIIOLibrary::K2_GetNDISourceCollection();
		P_NATIVE_END;
	}
	void UNDIIOLibrary::StaticRegisterNativesUNDIIOLibrary()
	{
		UClass* Class = UNDIIOLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_BeginBroadcastingActiveViewport", &UNDIIOLibrary::execK2_BeginBroadcastingActiveViewport },
			{ "K2_FindNetworkSourceByName", &UNDIIOLibrary::execK2_FindNetworkSourceByName },
			{ "K2_GetNDIMediaReceiver", &UNDIIOLibrary::execK2_GetNDIMediaReceiver },
			{ "K2_GetNDIMediaSender", &UNDIIOLibrary::execK2_GetNDIMediaSender },
			{ "K2_GetNDISourceCollection", &UNDIIOLibrary::execK2_GetNDISourceCollection },
			{ "K2_StopBroadcastingActiveViewport", &UNDIIOLibrary::execK2_StopBroadcastingActiveViewport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics
	{
		struct NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms), &Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Attempts to start broadcasting the active viewport. The output of the active viewport is the current camera\n\x09\x09that is actively being viewed (through), and does not have to be an NDI Broadcast Viewport Component.\n\n\x09\x09@return The result of whether broadcasting the active viewport was started\n\x09*/" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Begin Broadcasting Active Viewport" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
		{ "ToolTip", "Attempts to start broadcasting the active viewport. The output of the active viewport is the current camera\nthat is actively being viewed (through), and does not have to be an NDI Broadcast Viewport Component.\n\n@return The result of whether broadcasting the active viewport was started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_BeginBroadcastingActiveViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms), Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics
	{
		struct NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms
		{
			UObject* WorldContextObject;
			FNDIConnectionInformation ConnectionInformation;
			FString InSourceName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionInformation;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ConnectionInformation = { "ConnectionInformation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms, ConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_InSourceName = { "InSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms, InSourceName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms), &Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ConnectionInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_InSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Attempts to search the NDI Source Collection for the source name, returning a result indicating\n\x09\x09success with the ConnectionInformation parameter filled with the found connection\n\n\x09\x09@param ConnectionInformation The connection information for a successful find with the supplied InSourceName\n\x09\x09@param InSourceName The name of the source to find within the collection of NDI sources\n\n\x09\x09@return The result of whether the search was successful\n\x09*/" },
		{ "CPP_Default_InSourceName", "" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Find Network Source by Name" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
		{ "ToolTip", "Attempts to search the NDI Source Collection for the source name, returning a result indicating\nsuccess with the ConnectionInformation parameter filled with the found connection\n\n@param ConnectionInformation The connection information for a successful find with the supplied InSourceName\n@param InSourceName The name of the source to find within the collection of NDI sources\n\n@return The result of whether the search was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_FindNetworkSourceByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms), Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics
	{
		struct NDIIOLibrary_eventK2_GetNDIMediaReceiver_Parms
		{
			UNDIMediaReceiver* Receiver;
			UNDIMediaReceiver* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Receiver;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDIMediaReceiver_Parms, Receiver), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDIMediaReceiver_Parms, ReturnValue), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NewProp_Receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns an NDI Media Receiver object\n\n\x09\x09@param Receiver The Receiver object to return\n\x09\x09@return The selected Receiver object\n\x09*/" },
		{ "CPP_Default_Receiver", "None" },
		{ "DisplayName", "Get NDI Media Receiver" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
		{ "ToolTip", "Returns an NDI Media Receiver object\n\n@param Receiver The Receiver object to return\n@return The selected Receiver object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_GetNDIMediaReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NDIIOLibrary_eventK2_GetNDIMediaReceiver_Parms), Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics
	{
		struct NDIIOLibrary_eventK2_GetNDIMediaSender_Parms
		{
			UNDIMediaSender* Sender;
			UNDIMediaSender* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDIMediaSender_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDIMediaSender_Parms, ReturnValue), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NewProp_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns an NDI Media Sender object\n\n\x09\x09@param Sender The Sender object to return\n\x09\x09@return The selected Sender object\n\x09*/" },
		{ "CPP_Default_Sender", "None" },
		{ "DisplayName", "Get NDI Media Sender" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
		{ "ToolTip", "Returns an NDI Media Sender object\n\n@param Sender The Sender object to return\n@return The selected Sender object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_GetNDIMediaSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NDIIOLibrary_eventK2_GetNDIMediaSender_Parms), Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics
	{
		struct NDIIOLibrary_eventK2_GetNDISourceCollection_Parms
		{
			TArray<FNDIConnectionInformation> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDISourceCollection_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue_MetaData)) }; // 2095790156
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Retrieves a collection of NDI sources appearing on the network\n\n\x09\x09@return A collection of NDI Sources appearing on the network\n\x09*/" },
		{ "DisplayName", "Get NDI Source Collection" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
		{ "ToolTip", "Retrieves a collection of NDI sources appearing on the network\n\n@return A collection of NDI Sources appearing on the network" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_GetNDISourceCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NDIIOLibrary_eventK2_GetNDISourceCollection_Parms), Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics
	{
		struct NDIIOLibrary_eventK2_StopBroadcastingActiveViewport_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_StopBroadcastingActiveViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Will stop broadcasting the active viewport, which was started by a previous call to 'Begin Broadcasting Active\n\x09   Viewport'\n\x09*/" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Stop Broadcasting Active Viewport" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
		{ "ToolTip", "Will stop broadcasting the active viewport, which was started by a previous call to 'Begin Broadcasting Active\nViewport'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_StopBroadcastingActiveViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::NDIIOLibrary_eventK2_StopBroadcastingActiveViewport_Parms), Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIIOLibrary);
	UClass* Z_Construct_UClass_UNDIIOLibrary_NoRegister()
	{
		return UNDIIOLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNDIIOLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIIOLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIIOLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport, "K2_BeginBroadcastingActiveViewport" }, // 4244904358
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName, "K2_FindNetworkSourceByName" }, // 2172049184
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver, "K2_GetNDIMediaReceiver" }, // 2461569969
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender, "K2_GetNDIMediaSender" }, // 1771616709
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection, "K2_GetNDISourceCollection" }, // 2455287466
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport, "K2_StopBroadcastingActiveViewport" }, // 2092035794
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIIOLibrary_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "NDI IO Library" },
		{ "IncludePath", "Objects/Libraries/NDIIOLibrary.h" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIIOLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIIOLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIIOLibrary_Statics::ClassParams = {
		&UNDIIOLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNDIIOLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIIOLibrary()
	{
		if (!Z_Registration_Info_UClass_UNDIIOLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIIOLibrary.OuterSingleton, Z_Construct_UClass_UNDIIOLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIIOLibrary.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIIOLibrary>()
	{
		return UNDIIOLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIIOLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIIOLibrary, UNDIIOLibrary::StaticClass, TEXT("UNDIIOLibrary"), &Z_Registration_Info_UClass_UNDIIOLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIIOLibrary), 1465412509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_1363783726(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
