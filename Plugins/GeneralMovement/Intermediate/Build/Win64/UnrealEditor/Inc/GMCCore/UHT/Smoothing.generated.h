// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Smoothing.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMCCORE_Smoothing_generated_h
#error "Smoothing.generated.h already included, missing '#pragma once' in Smoothing.h"
#endif
#define GMCCORE_Smoothing_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Replication_Smoothing_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_MatchLatestPersistentParams>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Replication_Smoothing_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_FixedDelayPersistentParams>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Replication_Smoothing_h_251_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_AdaptiveDelayPersistentParams>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Replication_Smoothing_h_435_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_AdaptiveDelayServerPacket>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Replication_Smoothing_h_463_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_AdaptiveDelayClientPacket>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Replication_Smoothing_h_487_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_UniformSimulationPersistentParams>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Replication_Smoothing_h_565_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_CumulativeSimulationPersistentParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Replication_Smoothing_h


#define FOREACH_ENUM_EGMC_INTERPOLATIONMODE(op) \
	op(EGMC_InterpolationMode::None) \
	op(EGMC_InterpolationMode::MatchLatest) \
	op(EGMC_InterpolationMode::FixedDelay) \
	op(EGMC_InterpolationMode::AdaptiveDelay) \
	op(EGMC_InterpolationMode::UniformSimulation) \
	op(EGMC_InterpolationMode::CumulativeSimulation) 

enum class EGMC_InterpolationMode : uint8;
template<> struct TIsUEnumClass<EGMC_InterpolationMode> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_InterpolationMode>();

#define FOREACH_ENUM_EGMC_INTERPOLATIONSTATES(op) \
	op(EGMC_InterpolationStates::Input) \
	op(EGMC_InterpolationStates::Output) 

enum class EGMC_InterpolationStates : uint8;
template<> struct TIsUEnumClass<EGMC_InterpolationStates> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_InterpolationStates>();

#define FOREACH_ENUM_EGMC_NETWORKTOLERANCE(op) \
	op(EGMC_NetworkTolerance::Auto) \
	op(EGMC_NetworkTolerance::Low) \
	op(EGMC_NetworkTolerance::Normal) \
	op(EGMC_NetworkTolerance::High) \
	op(EGMC_NetworkTolerance::VeryHigh) \
	op(EGMC_NetworkTolerance::Manual) 

enum class EGMC_NetworkTolerance : uint8;
template<> struct TIsUEnumClass<EGMC_NetworkTolerance> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_NetworkTolerance>();

#define FOREACH_ENUM_EGMC_EXTRAPOLATIONMODE(op) \
	op(EGMC_ExtrapolationMode::None) \
	op(EGMC_ExtrapolationMode::DeadReckoning) \
	op(EGMC_ExtrapolationMode::UniformSimulation) \
	op(EGMC_ExtrapolationMode::CumulativeSimulation) 

enum class EGMC_ExtrapolationMode : uint8;
template<> struct TIsUEnumClass<EGMC_ExtrapolationMode> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_ExtrapolationMode>();

#define FOREACH_ENUM_EGMC_INTERPOLATIONFUNCTION(op) \
	op(EGMC_InterpolationFunction::NearestNeighbour) \
	op(EGMC_InterpolationFunction::StartValue) \
	op(EGMC_InterpolationFunction::TargetValue) \
	op(EGMC_InterpolationFunction::Linear) \
	op(EGMC_InterpolationFunction::Cubic) \
	op(EGMC_InterpolationFunction::Custom1) \
	op(EGMC_InterpolationFunction::Custom2) \
	op(EGMC_InterpolationFunction::Custom3) \
	op(EGMC_InterpolationFunction::Custom4) \
	op(EGMC_InterpolationFunction::Custom5) \
	op(EGMC_InterpolationFunction::Custom6) \
	op(EGMC_InterpolationFunction::Custom7) \
	op(EGMC_InterpolationFunction::Custom8) 

enum class EGMC_InterpolationFunction : uint8;
template<> struct TIsUEnumClass<EGMC_InterpolationFunction> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_InterpolationFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
