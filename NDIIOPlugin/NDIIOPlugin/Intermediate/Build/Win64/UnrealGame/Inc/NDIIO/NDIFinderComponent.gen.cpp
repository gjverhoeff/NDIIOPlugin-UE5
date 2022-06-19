// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Components/NDIFinderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIFinderComponent() {}
// Cross Module References
	NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UClass* Z_Construct_UClass_UNDIFinderComponent_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIFinderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_NDIIO_eventNDIFinderServiceCollectionChangedDelegate_Parms
		{
			UNDIFinderComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIFinderServiceCollectionChangedDelegate_Parms, InComponent), Z_Construct_UClass_UNDIFinderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegates **/" },
		{ "ModuleRelativePath", "Public/Components/NDIFinderComponent.h" },
		{ "ToolTip", "Delegates *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIFinderServiceCollectionChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::_Script_NDIIO_eventNDIFinderServiceCollectionChangedDelegate_Parms), Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UNDIFinderComponent::execOnNetworkSourceCollectionChangedEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNetworkSourceCollectionChangedEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIFinderComponent::execGetNetworkSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNDIConnectionInformation>*)Z_Param__Result=P_THIS->GetNetworkSources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIFinderComponent::execFindNetworkSourceByName)
	{
		P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_ConnectionInformation);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindNetworkSourceByName(Z_Param_Out_ConnectionInformation,Z_Param_InSourceName);
		P_NATIVE_END;
	}
	static FName NAME_UNDIFinderComponent_OnNetworkSourcesChangedEvent = FName(TEXT("OnNetworkSourcesChangedEvent"));
	void UNDIFinderComponent::OnNetworkSourcesChangedEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNDIFinderComponent_OnNetworkSourcesChangedEvent),NULL);
	}
	void UNDIFinderComponent::StaticRegisterNativesUNDIFinderComponent()
	{
		UClass* Class = UNDIFinderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindNetworkSourceByName", &UNDIFinderComponent::execFindNetworkSourceByName },
			{ "GetNetworkSources", &UNDIFinderComponent::execGetNetworkSources },
			{ "OnNetworkSourceCollectionChangedEvent", &UNDIFinderComponent::execOnNetworkSourceCollectionChangedEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics
	{
		struct NDIFinderComponent_eventFindNetworkSourceByName_Parms
		{
			FNDIConnectionInformation ConnectionInformation;
			FString InSourceName;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_ConnectionInformation = { "ConnectionInformation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIFinderComponent_eventFindNetworkSourceByName_Parms, ConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_InSourceName = { "InSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIFinderComponent_eventFindNetworkSourceByName_Parms, InSourceName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIFinderComponent_eventFindNetworkSourceByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIFinderComponent_eventFindNetworkSourceByName_Parms), &Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_ConnectionInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_InSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Attempts to find a network source by the supplied name.\n\n\x09\x09@param ConnectionInformation An existing source information structure which contains the source name\n\x09\x09@param InSourceName A string value representing the name of the source to find\n\x09\x09@result A value indicating whether a source with the supplied name was found\n\x09*/" },
		{ "CPP_Default_InSourceName", "" },
		{ "DisplayName", "Find Network Source by Name" },
		{ "ModuleRelativePath", "Public/Components/NDIFinderComponent.h" },
		{ "ToolTip", "Attempts to find a network source by the supplied name.\n\n@param ConnectionInformation An existing source information structure which contains the source name\n@param InSourceName A string value representing the name of the source to find\n@result A value indicating whether a source with the supplied name was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIFinderComponent, nullptr, "FindNetworkSourceByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::NDIFinderComponent_eventFindNetworkSourceByName_Parms), Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics
	{
		struct NDIFinderComponent_eventGetNetworkSources_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIFinderComponent_eventGetNetworkSources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::NewProp_ReturnValue_MetaData)) }; // 2095790156
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns the current collection of sources found on the network\n\x09*/" },
		{ "DisplayName", "Get Network Sources" },
		{ "ModuleRelativePath", "Public/Components/NDIFinderComponent.h" },
		{ "ToolTip", "Returns the current collection of sources found on the network" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIFinderComponent, nullptr, "GetNetworkSources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::NDIFinderComponent_eventGetNetworkSources_Parms), Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourceCollectionChangedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourceCollectionChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09""An Event handler for when the NDI Finder Service notifies listeners that changes have been\n\x09\x09""detected in the network source collection\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/NDIFinderComponent.h" },
		{ "ToolTip", "An Event handler for when the NDI Finder Service notifies listeners that changes have been\ndetected in the network source collection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourceCollectionChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIFinderComponent, nullptr, "OnNetworkSourceCollectionChangedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourceCollectionChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourceCollectionChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourceCollectionChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourceCollectionChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourcesChangedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourcesChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** An override function for when the network source collection has been changed */" },
		{ "DisplayName", "On Network Sources Changed Event" },
		{ "ModuleRelativePath", "Public/Components/NDIFinderComponent.h" },
		{ "ToolTip", "An override function for when the network source collection has been changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourcesChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIFinderComponent, nullptr, "OnNetworkSourcesChangedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourcesChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourcesChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourcesChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourcesChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIFinderComponent);
	UClass* Z_Construct_UClass_UNDIFinderComponent_NoRegister()
	{
		return UNDIFinderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNDIFinderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkSourceCollection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkSourceCollection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NetworkSourceCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNetworkSourcesChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNetworkSourcesChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIFinderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIFinderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIFinderComponent_FindNetworkSourceByName, "FindNetworkSourceByName" }, // 1775419688
		{ &Z_Construct_UFunction_UNDIFinderComponent_GetNetworkSources, "GetNetworkSources" }, // 314362821
		{ &Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourceCollectionChangedEvent, "OnNetworkSourceCollectionChangedEvent" }, // 935148405
		{ &Z_Construct_UFunction_UNDIFinderComponent_OnNetworkSourcesChangedEvent, "OnNetworkSourcesChangedEvent" }, // 463777549
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIFinderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""A component used for essential functionality when dealing with the finder service. Allowing you to\n\x09get a collection of sources found on the network.\n*/" },
		{ "DisplayName", "NDI Finder Component" },
		{ "IncludePath", "Components/NDIFinderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NDIFinderComponent.h" },
		{ "ToolTip", "A component used for essential functionality when dealing with the finder service. Allowing you to\nget a collection of sources found on the network." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_NetworkSourceCollection_Inner = { "NetworkSourceCollection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) }; // 2095790156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_NetworkSourceCollection_MetaData[] = {
		{ "Comment", "/** A collection of the current sources and their information, found on the network */" },
		{ "ModuleRelativePath", "Public/Components/NDIFinderComponent.h" },
		{ "ToolTip", "A collection of the current sources and their information, found on the network" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_NetworkSourceCollection = { "NetworkSourceCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIFinderComponent, NetworkSourceCollection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_NetworkSourceCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_NetworkSourceCollection_MetaData)) }; // 2095790156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_OnNetworkSourcesChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Comment", "/** A delegate which is broadcast when any change to the network source collection has been detected */" },
		{ "DisplayName", "On Network Sources Changed" },
		{ "ModuleRelativePath", "Public/Components/NDIFinderComponent.h" },
		{ "ToolTip", "A delegate which is broadcast when any change to the network source collection has been detected" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_OnNetworkSourcesChanged = { "OnNetworkSourcesChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIFinderComponent, OnNetworkSourcesChanged), Z_Construct_UDelegateFunction_NDIIO_NDIFinderServiceCollectionChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_OnNetworkSourcesChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_OnNetworkSourcesChanged_MetaData)) }; // 1756168623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIFinderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_NetworkSourceCollection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_NetworkSourceCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIFinderComponent_Statics::NewProp_OnNetworkSourcesChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIFinderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIFinderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIFinderComponent_Statics::ClassParams = {
		&UNDIFinderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNDIFinderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDIFinderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIFinderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIFinderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIFinderComponent()
	{
		if (!Z_Registration_Info_UClass_UNDIFinderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIFinderComponent.OuterSingleton, Z_Construct_UClass_UNDIFinderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIFinderComponent.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIFinderComponent>()
	{
		return UNDIFinderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIFinderComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIFinderComponent, UNDIFinderComponent::StaticClass, TEXT("UNDIFinderComponent"), &Z_Registration_Info_UClass_UNDIFinderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIFinderComponent), 3106073392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_2256030234(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
