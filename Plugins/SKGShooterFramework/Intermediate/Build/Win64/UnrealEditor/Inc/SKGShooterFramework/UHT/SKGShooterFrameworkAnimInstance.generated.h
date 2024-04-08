// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/SKGShooterFrameworkAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
struct FSKGFirstAndThirdPersonCurveSettings;
#ifdef SKGSHOOTERFRAMEWORK_SKGShooterFrameworkAnimInstance_generated_h
#error "SKGShooterFrameworkAnimInstance.generated.h already included, missing '#pragma once' in SKGShooterFrameworkAnimInstance.h"
#endif
#define SKGSHOOTERFRAMEWORK_SKGShooterFrameworkAnimInstance_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentPoseValues); \
	DECLARE_FUNCTION(execSetTestPose); \
	DECLARE_FUNCTION(execTestHit); \
	DECLARE_FUNCTION(execPerformCustomCurve);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_25_CALLBACK_WRAPPERS
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGShooterFrameworkAnimInstance(); \
	friend struct Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USKGShooterFrameworkAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SKGShooterFramework"), NO_API) \
	DECLARE_SERIALIZER(USKGShooterFrameworkAnimInstance)


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USKGShooterFrameworkAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGShooterFrameworkAnimInstance(USKGShooterFrameworkAnimInstance&&); \
	USKGShooterFrameworkAnimInstance(const USKGShooterFrameworkAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGShooterFrameworkAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGShooterFrameworkAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USKGShooterFrameworkAnimInstance) \
	NO_API virtual ~USKGShooterFrameworkAnimInstance();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_22_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_25_CALLBACK_WRAPPERS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGSHOOTERFRAMEWORK_API UClass* StaticClass<class USKGShooterFrameworkAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
