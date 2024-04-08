// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Statics/SKGMuzzleHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSKGMuzzleTransform;
#ifdef SKGMUZZLE_SKGMuzzleHelpers_generated_h
#error "SKGMuzzleHelpers.generated.h already included, missing '#pragma once' in SKGMuzzleHelpers.h"
#endif
#define SKGMUZZLE_SKGMuzzleHelpers_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_MuzzleTransformsToTransforms); \
	DECLARE_FUNCTION(execConv_MuzzleTransformToTransform);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGMuzzleHelpers(); \
	friend struct Z_Construct_UClass_USKGMuzzleHelpers_Statics; \
public: \
	DECLARE_CLASS(USKGMuzzleHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SKGMuzzle"), NO_API) \
	DECLARE_SERIALIZER(USKGMuzzleHelpers)


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USKGMuzzleHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGMuzzleHelpers(USKGMuzzleHelpers&&); \
	USKGMuzzleHelpers(const USKGMuzzleHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGMuzzleHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGMuzzleHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USKGMuzzleHelpers) \
	NO_API virtual ~USKGMuzzleHelpers();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_13_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGMUZZLE_API UClass* StaticClass<class USKGMuzzleHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
