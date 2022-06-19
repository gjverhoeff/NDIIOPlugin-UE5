// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NDIIO_NDISourceBandwidth_generated_h
#error "NDISourceBandwidth.generated.h already included, missing '#pragma once' in NDISourceBandwidth.h"
#endif
#define NDIIO_NDISourceBandwidth_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Enumerations_NDISourceBandwidth_h


#define FOREACH_ENUM_ENDISOURCEBANDWIDTH(op) \
	op(ENDISourceBandwidth::MetadataOnly) \
	op(ENDISourceBandwidth::AudioOnly) \
	op(ENDISourceBandwidth::Lowest) \
	op(ENDISourceBandwidth::Highest) 

enum class ENDISourceBandwidth : uint8;
template<> NDIIO_API UEnum* StaticEnum<ENDISourceBandwidth>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
