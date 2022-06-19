// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNDIReceiverPerformanceData;
struct FNDIConnectionInformation;
struct FTimecode;
struct FFrameRate;
#ifdef NDIIO_NDIReceiverComponent_generated_h
#error "NDIReceiverComponent.generated.h already included, missing '#pragma once' in NDIReceiverComponent.h"
#endif
#define NDIIO_NDIReceiverComponent_generated_h

#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_SPARSE_DATA
#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPerformanceData); \
	DECLARE_FUNCTION(execGetCurrentConnectionInformation); \
	DECLARE_FUNCTION(execGetCurrentTimecode); \
	DECLARE_FUNCTION(execGetCurrentFrameRate); \
	DECLARE_FUNCTION(execShutdownReceiver); \
	DECLARE_FUNCTION(execSendTallyInformation); \
	DECLARE_FUNCTION(execSendMetadataFrame); \
	DECLARE_FUNCTION(execChangeConnection); \
	DECLARE_FUNCTION(execStartReceiver);


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPerformanceData); \
	DECLARE_FUNCTION(execGetCurrentConnectionInformation); \
	DECLARE_FUNCTION(execGetCurrentTimecode); \
	DECLARE_FUNCTION(execGetCurrentFrameRate); \
	DECLARE_FUNCTION(execShutdownReceiver); \
	DECLARE_FUNCTION(execSendTallyInformation); \
	DECLARE_FUNCTION(execSendMetadataFrame); \
	DECLARE_FUNCTION(execChangeConnection); \
	DECLARE_FUNCTION(execStartReceiver);


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIReceiverComponent(); \
	friend struct Z_Construct_UClass_UNDIReceiverComponent_Statics; \
public: \
	DECLARE_CLASS(UNDIReceiverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIReceiverComponent)


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUNDIReceiverComponent(); \
	friend struct Z_Construct_UClass_UNDIReceiverComponent_Statics; \
public: \
	DECLARE_CLASS(UNDIReceiverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIReceiverComponent)


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIReceiverComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIReceiverComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIReceiverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIReceiverComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIReceiverComponent(UNDIReceiverComponent&&); \
	NO_API UNDIReceiverComponent(const UNDIReceiverComponent&); \
public:


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIReceiverComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIReceiverComponent(UNDIReceiverComponent&&); \
	NO_API UNDIReceiverComponent(const UNDIReceiverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIReceiverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIReceiverComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIReceiverComponent)


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_22_PROLOG
#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_SPARSE_DATA \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_RPC_WRAPPERS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_INCLASS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_SPARSE_DATA \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDIReceiverComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIReceiverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIReceiverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
