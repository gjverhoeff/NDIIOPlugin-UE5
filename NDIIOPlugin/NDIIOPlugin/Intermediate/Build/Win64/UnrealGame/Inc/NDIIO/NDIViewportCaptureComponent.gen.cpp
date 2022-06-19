// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Components/NDIViewportCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIViewportCaptureComponent() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIViewportCaptureComponent_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIViewportCaptureComponent();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNDIViewportCaptureComponent::execOnBroadcastConfigurationChanged)
	{
		P_GET_OBJECT(UNDIMediaSender,Z_Param_Sender);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBroadcastConfigurationChanged(Z_Param_Sender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIViewportCaptureComponent::execGetNumberOfConnections)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNumberOfConnections(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIViewportCaptureComponent::execGetTallyInformation)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsOnPreview);
		P_GET_UBOOL_REF(Z_Param_Out_IsOnProgram);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTallyInformation(Z_Param_Out_IsOnPreview,Z_Param_Out_IsOnProgram);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIViewportCaptureComponent::execChangeCaptureSettings)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_InCaptureSize);
		P_GET_STRUCT(FFrameRate,Z_Param_InCaptureRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeCaptureSettings(Z_Param_InCaptureSize,Z_Param_InCaptureRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIViewportCaptureComponent::execChangeBroadcastTexture)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_BroadcastTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBroadcastTexture(Z_Param_BroadcastTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIViewportCaptureComponent::execChangeBroadcastConfiguration)
	{
		P_GET_STRUCT_REF(FNDIBroadcastConfiguration,Z_Param_Out_InConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBroadcastConfiguration(Z_Param_Out_InConfiguration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIViewportCaptureComponent::execChangeSourceName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSourceName(Z_Param_InSourceName);
		P_NATIVE_END;
	}
	void UNDIViewportCaptureComponent::StaticRegisterNativesUNDIViewportCaptureComponent()
	{
		UClass* Class = UNDIViewportCaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBroadcastConfiguration", &UNDIViewportCaptureComponent::execChangeBroadcastConfiguration },
			{ "ChangeBroadcastTexture", &UNDIViewportCaptureComponent::execChangeBroadcastTexture },
			{ "ChangeCaptureSettings", &UNDIViewportCaptureComponent::execChangeCaptureSettings },
			{ "ChangeSourceName", &UNDIViewportCaptureComponent::execChangeSourceName },
			{ "GetNumberOfConnections", &UNDIViewportCaptureComponent::execGetNumberOfConnections },
			{ "GetTallyInformation", &UNDIViewportCaptureComponent::execGetTallyInformation },
			{ "OnBroadcastConfigurationChanged", &UNDIViewportCaptureComponent::execOnBroadcastConfigurationChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics
	{
		struct NDIViewportCaptureComponent_eventChangeBroadcastConfiguration_Parms
		{
			FNDIBroadcastConfiguration InConfiguration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration = { "InConfiguration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIViewportCaptureComponent_eventChangeBroadcastConfiguration_Parms, InConfiguration), Z_Construct_UScriptStruct_FNDIBroadcastConfiguration, METADATA_PARAMS(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration_MetaData)) }; // 3166999952
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Attempts to change the Broadcast information associated with this media object\n\n\x09\x09@param InConfiguration The new configuration to broadcast\n\x09*/" },
		{ "DisplayName", "Change Broadcast Configuration" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "Attempts to change the Broadcast information associated with this media object\n\n@param InConfiguration The new configuration to broadcast" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIViewportCaptureComponent, nullptr, "ChangeBroadcastConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::NDIViewportCaptureComponent_eventChangeBroadcastConfiguration_Parms), Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics
	{
		struct NDIViewportCaptureComponent_eventChangeBroadcastTexture_Parms
		{
			UTextureRenderTarget2D* BroadcastTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BroadcastTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::NewProp_BroadcastTexture = { "BroadcastTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIViewportCaptureComponent_eventChangeBroadcastTexture_Parms, BroadcastTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::NewProp_BroadcastTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Attempts to change the RenderTarget used in sending video frames over NDI\n\n\x09\x09@param BroadcastTexture The texture to use as video, while broadcasting over NDI\n\x09*/" },
		{ "CPP_Default_BroadcastTexture", "None" },
		{ "DisplayName", "Change Broadcast Texture" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "Attempts to change the RenderTarget used in sending video frames over NDI\n\n@param BroadcastTexture The texture to use as video, while broadcasting over NDI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIViewportCaptureComponent, nullptr, "ChangeBroadcastTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::NDIViewportCaptureComponent_eventChangeBroadcastTexture_Parms), Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct NDIViewportCaptureComponent_eventChangeCaptureSettings_Parms
		{
			FIntPoint InCaptureSize;
			FFrameRate InCaptureRate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCaptureSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCaptureRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::NewProp_InCaptureSize = { "InCaptureSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIViewportCaptureComponent_eventChangeCaptureSettings_Parms, InCaptureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::NewProp_InCaptureRate = { "InCaptureRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIViewportCaptureComponent_eventChangeCaptureSettings_Parms, InCaptureRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::NewProp_InCaptureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::NewProp_InCaptureRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Change the capture settings of the viewport capture and overrides the NDI Media Sender settings\n\n\x09\x09@param InCaptureSize The Capture size of the frame to capture of the viewport\n\x09\x09@param InCaptureRate A framerate at which to capture frames of the viewport\n\x09*/" },
		{ "DisplayName", "Change Capture Settings" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "Change the capture settings of the viewport capture and overrides the NDI Media Sender settings\n\n@param InCaptureSize The Capture size of the frame to capture of the viewport\n@param InCaptureRate A framerate at which to capture frames of the viewport" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIViewportCaptureComponent, nullptr, "ChangeCaptureSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::NDIViewportCaptureComponent_eventChangeCaptureSettings_Parms), Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics
	{
		struct NDIViewportCaptureComponent_eventChangeSourceName_Parms
		{
			FString InSourceName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::NewProp_InSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::NewProp_InSourceName = { "InSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIViewportCaptureComponent_eventChangeSourceName_Parms, InSourceName), METADATA_PARAMS(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::NewProp_InSourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::NewProp_InSourceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::NewProp_InSourceName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Changes the name of the sender object as seen on the network for remote connections\n\n\x09\x09@param InSourceName The new name of the source to be identified as on the network\n\x09*/" },
		{ "DisplayName", "Change Source Name" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "Changes the name of the sender object as seen on the network for remote connections\n\n@param InSourceName The new name of the source to be identified as on the network" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIViewportCaptureComponent, nullptr, "ChangeSourceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::NDIViewportCaptureComponent_eventChangeSourceName_Parms), Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics
	{
		struct NDIViewportCaptureComponent_eventGetNumberOfConnections_Parms
		{
			int32 Result;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIViewportCaptureComponent_eventGetNumberOfConnections_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Gets the current number of receivers connected to this source. This can be used to avoid rendering\n\x09\x09when nothing is connected to the video source. which can significantly improve the efficiency if\n\x09\x09you want to make a lot of sources available on the network\n\n\x09\x09@param Result The total number of connected receivers attached to the broadcast of this object\n\x09*/" },
		{ "DisplayName", "Get Number of Connections" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "Gets the current number of receivers connected to this source. This can be used to avoid rendering\nwhen nothing is connected to the video source. which can significantly improve the efficiency if\nyou want to make a lot of sources available on the network\n\n@param Result The total number of connected receivers attached to the broadcast of this object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIViewportCaptureComponent, nullptr, "GetNumberOfConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::NDIViewportCaptureComponent_eventGetNumberOfConnections_Parms), Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics
	{
		struct NDIViewportCaptureComponent_eventGetTallyInformation_Parms
		{
			bool IsOnPreview;
			bool IsOnProgram;
		};
		static void NewProp_IsOnPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnPreview;
		static void NewProp_IsOnProgram_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnProgram;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::NewProp_IsOnPreview_SetBit(void* Obj)
	{
		((NDIViewportCaptureComponent_eventGetTallyInformation_Parms*)Obj)->IsOnPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::NewProp_IsOnPreview = { "IsOnPreview", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIViewportCaptureComponent_eventGetTallyInformation_Parms), &Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::NewProp_IsOnPreview_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::NewProp_IsOnProgram_SetBit(void* Obj)
	{
		((NDIViewportCaptureComponent_eventGetTallyInformation_Parms*)Obj)->IsOnProgram = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::NewProp_IsOnProgram = { "IsOnProgram", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIViewportCaptureComponent_eventGetTallyInformation_Parms), &Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::NewProp_IsOnProgram_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::NewProp_IsOnPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::NewProp_IsOnProgram,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Determines the current tally information. If you specify a timeout then it will wait until it has\n\x09\x09""changed, otherwise it will simply poll it and return the current tally immediately\n\n\x09\x09@param IsOnPreview - A state indicating whether this source in on preview of a receiver\n\x09\x09@param IsOnProgram - A state indicating whether this source is on program of a receiver\n\x09*/" },
		{ "DisplayName", "Get Tally Information" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "Determines the current tally information. If you specify a timeout then it will wait until it has\nchanged, otherwise it will simply poll it and return the current tally immediately\n\n@param IsOnPreview - A state indicating whether this source in on preview of a receiver\n@param IsOnProgram - A state indicating whether this source is on program of a receiver" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIViewportCaptureComponent, nullptr, "GetTallyInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::NDIViewportCaptureComponent_eventGetTallyInformation_Parms), Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics
	{
		struct NDIViewportCaptureComponent_eventOnBroadcastConfigurationChanged_Parms
		{
			UNDIMediaSender* Sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIViewportCaptureComponent_eventOnBroadcastConfigurationChanged_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::NewProp_Sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIViewportCaptureComponent, nullptr, "OnBroadcastConfigurationChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::NDIViewportCaptureComponent_eventOnBroadcastConfigurationChanged_Parms), Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIViewportCaptureComponent);
	UClass* Z_Construct_UClass_UNDIViewportCaptureComponent_NoRegister()
	{
		return UNDIViewportCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNDIViewportCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBroadcastSettings_MetaData[];
#endif
		static void NewProp_bOverrideBroadcastSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBroadcastSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDIMediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDIMediaSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCineCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastConfiguration, "ChangeBroadcastConfiguration" }, // 2187440405
		{ &Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeBroadcastTexture, "ChangeBroadcastTexture" }, // 130815324
		{ &Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeCaptureSettings, "ChangeCaptureSettings" }, // 1480073191
		{ &Z_Construct_UFunction_UNDIViewportCaptureComponent_ChangeSourceName, "ChangeSourceName" }, // 373942568
		{ &Z_Construct_UFunction_UNDIViewportCaptureComponent_GetNumberOfConnections, "GetNumberOfConnections" }, // 1463032126
		{ &Z_Construct_UFunction_UNDIViewportCaptureComponent_GetTallyInformation, "GetTallyInformation" }, // 847228495
		{ &Z_Construct_UFunction_UNDIViewportCaptureComponent_OnBroadcastConfigurationChanged, "OnBroadcastConfigurationChanged" }, // 1931149719
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""A component used to capture an additional viewport for broadcasting over NDI\n*/" },
		{ "DisplayName", "NDI Viewport Capture Component" },
		{ "HideCategories", "CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "Components/NDIViewportCaptureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "A component used to capture an additional viewport for broadcasting over NDI" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_bOverrideBroadcastSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Capture Settings" },
		{ "Comment", "/**\n\x09\x09If true, will allow you to override the capture settings by ignoring the default Broadcast Settings\n\x09\x09in the NDI Media Sender, Potentially Requiring a texture rescale of the capture frame when broadcasting\n\x09\x09over NDI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "If true, will allow you to override the capture settings by ignoring the default Broadcast Settings\nin the NDI Media Sender, Potentially Requiring a texture rescale of the capture frame when broadcasting\nover NDI." },
	};
#endif
	void Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_bOverrideBroadcastSettings_SetBit(void* Obj)
	{
		((UNDIViewportCaptureComponent*)Obj)->bOverrideBroadcastSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_bOverrideBroadcastSettings = { "bOverrideBroadcastSettings", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNDIViewportCaptureComponent), &Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_bOverrideBroadcastSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_bOverrideBroadcastSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_bOverrideBroadcastSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Capture Settings" },
		{ "Comment", "/**\n\x09\x09""Describes the Height and Width of the viewport frame to capture.\n\x09*/" },
		{ "DisplayName", "Capture Size" },
		{ "EditCondition", "bOverrideBroadcastSettings" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "Describes the Height and Width of the viewport frame to capture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureSize = { "CaptureSize", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIViewportCaptureComponent, CaptureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Capture Settings" },
		{ "Comment", "/**\n\x09\x09Represents the desired number of frames (per second) to capture the viewport\n\x09*/" },
		{ "DisplayName", "Capture Rate" },
		{ "EditCondition", "bOverrideBroadcastSettings" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "Represents the desired number of frames (per second) to capture the viewport" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureRate = { "CaptureRate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIViewportCaptureComponent, CaptureRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_NDIMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09\x09The NDI Media Sender representing the configuration of the network source to send audio, video, and metadata\n\x09*/" },
		{ "DisplayName", "NDI Media Source" },
		{ "ModuleRelativePath", "Public/Components/NDIViewportCaptureComponent.h" },
		{ "ToolTip", "The NDI Media Sender representing the configuration of the network source to send audio, video, and metadata" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_NDIMediaSource = { "NDIMediaSource", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIViewportCaptureComponent, NDIMediaSource), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_NDIMediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_NDIMediaSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_bOverrideBroadcastSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_CaptureRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::NewProp_NDIMediaSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIViewportCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::ClassParams = {
		&UNDIViewportCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIViewportCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UNDIViewportCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIViewportCaptureComponent.OuterSingleton, Z_Construct_UClass_UNDIViewportCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIViewportCaptureComponent.OuterSingleton;
	}
	template<> NDIIO_API UClass* StaticClass<UNDIViewportCaptureComponent>()
	{
		return UNDIViewportCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIViewportCaptureComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIViewportCaptureComponent, UNDIViewportCaptureComponent::StaticClass, TEXT("UNDIViewportCaptureComponent"), &Z_Registration_Info_UClass_UNDIViewportCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIViewportCaptureComponent), 3844321281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_1647485719(TEXT("/Script/NDIIO"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
