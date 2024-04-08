// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/SKGShooterWorldSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
struct FLinearColor;
#ifdef SKGSHOOTERFRAMEWORKCORE_SKGShooterWorldSubsystem_generated_h
#error "SKGShooterWorldSubsystem.generated.h already included, missing '#pragma once' in SKGShooterWorldSubsystem.h"
#endif
#define SKGSHOOTERFRAMEWORKCORE_SKGShooterWorldSubsystem_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsInfraredModeEnabledOnPlayer); \
	DECLARE_FUNCTION(execGetInfraredDevices); \
	DECLARE_FUNCTION(execUnregisterInfraredDevice); \
	DECLARE_FUNCTION(execRegisterInfraredDevice); \
	DECLARE_FUNCTION(execDisableInfraredMode); \
	DECLARE_FUNCTION(execEnableInfraredMode); \
	DECLARE_FUNCTION(execSetNightVisionColor);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGShooterWorldSubsystem(); \
	friend struct Z_Construct_UClass_USKGShooterWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(USKGShooterWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SKGShooterFrameworkCore"), NO_API) \
	DECLARE_SERIALIZER(USKGShooterWorldSubsystem)


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGShooterWorldSubsystem(USKGShooterWorldSubsystem&&); \
	USKGShooterWorldSubsystem(const USKGShooterWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGShooterWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGShooterWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGShooterWorldSubsystem) \
	NO_API virtual ~USKGShooterWorldSubsystem();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_12_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<class USKGShooterWorldSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
