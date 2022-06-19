// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNDIFinderComponent;
struct FNDIConnectionInformation;
#ifdef NDIIO_NDIFinderComponent_generated_h
#error "NDIFinderComponent.generated.h already included, missing '#pragma once' in NDIFinderComponent.h"
#endif
#define NDIIO_NDIFinderComponent_generated_h

#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_20_DELEGATE \
struct _Script_NDIIO_eventNDIFinderServiceCollectionChangedDelegate_Parms \
{ \
	UNDIFinderComponent* InComponent; \
}; \
static inline void FNDIFinderServiceCollectionChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& NDIFinderServiceCollectionChangedDelegate, UNDIFinderComponent* InComponent) \
{ \
	_Script_NDIIO_eventNDIFinderServiceCollectionChangedDelegate_Parms Parms; \
	Parms.InComponent=InComponent; \
	NDIFinderServiceCollectionChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_SPARSE_DATA
#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNetworkSourceCollectionChangedEvent); \
	DECLARE_FUNCTION(execGetNetworkSources); \
	DECLARE_FUNCTION(execFindNetworkSourceByName);


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNetworkSourceCollectionChangedEvent); \
	DECLARE_FUNCTION(execGetNetworkSources); \
	DECLARE_FUNCTION(execFindNetworkSourceByName);


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_EVENT_PARMS
#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIFinderComponent(); \
	friend struct Z_Construct_UClass_UNDIFinderComponent_Statics; \
public: \
	DECLARE_CLASS(UNDIFinderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIFinderComponent)


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUNDIFinderComponent(); \
	friend struct Z_Construct_UClass_UNDIFinderComponent_Statics; \
public: \
	DECLARE_CLASS(UNDIFinderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIFinderComponent)


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIFinderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIFinderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIFinderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIFinderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIFinderComponent(UNDIFinderComponent&&); \
	NO_API UNDIFinderComponent(const UNDIFinderComponent&); \
public:


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIFinderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIFinderComponent(UNDIFinderComponent&&); \
	NO_API UNDIFinderComponent(const UNDIFinderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIFinderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIFinderComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIFinderComponent)


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_29_PROLOG \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_EVENT_PARMS


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_SPARSE_DATA \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_RPC_WRAPPERS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_INCLASS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_SPARSE_DATA \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDIFinderComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIFinderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIFinderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
