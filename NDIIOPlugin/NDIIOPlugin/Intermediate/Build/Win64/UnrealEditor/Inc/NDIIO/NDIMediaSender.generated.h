// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNDIMediaSender;
#ifdef NDIIO_NDIMediaSender_generated_h
#error "NDIMediaSender.generated.h already included, missing '#pragma once' in NDIMediaSender.h"
#endif
#define NDIIO_NDIMediaSender_generated_h

#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_25_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms \
{ \
	UNDIMediaSender* Sender; \
}; \
static inline void FNDIMediaSenderPropertyChanged_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderPropertyChanged, UNDIMediaSender* Sender) \
{ \
	_Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms Parms; \
	Parms.Sender=Sender; \
	NDIMediaSenderPropertyChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_SPARSE_DATA
#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_RPC_WRAPPERS
#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaSender(); \
	friend struct Z_Construct_UClass_UNDIMediaSender_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaSender, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaSender)


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUNDIMediaSender(); \
	friend struct Z_Construct_UClass_UNDIMediaSender_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaSender, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaSender)


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaSender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaSender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaSender(UNDIMediaSender&&); \
	NO_API UNDIMediaSender(const UNDIMediaSender&); \
public:


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaSender(UNDIMediaSender&&); \
	NO_API UNDIMediaSender(const UNDIMediaSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaSender); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaSender)


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_32_PROLOG
#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_RPC_WRAPPERS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_INCLASS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDIMediaSender."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIMediaSender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
