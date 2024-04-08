// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicalMaterial/SKGPhysicalMaterial.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FHitResult;
struct FSKGPhysMatEffect;
#ifdef SKGPHYSICALMATERIALMODULE_SKGPhysicalMaterial_generated_h
#error "SKGPhysicalMaterial.generated.h already included, missing '#pragma once' in SKGPhysicalMaterial.h"
#endif
#define SKGPHYSICALMATERIALMODULE_SKGPhysicalMaterial_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics; \
	SKGPHYSICALMATERIALMODULE_API static class UScriptStruct* StaticStruct();


template<> SKGPHYSICALMATERIALMODULE_API UScriptStruct* StaticStruct<struct FSKGPhysMatSoundSettings>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics; \
	SKGPHYSICALMATERIALMODULE_API static class UScriptStruct* StaticStruct();


template<> SKGPHYSICALMATERIALMODULE_API UScriptStruct* StaticStruct<struct FSKGPhysMatVisualSettings>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics; \
	SKGPHYSICALMATERIALMODULE_API static class UScriptStruct* StaticStruct();


template<> SKGPHYSICALMATERIALMODULE_API UScriptStruct* StaticStruct<struct FSKGPhysMatEffect>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffect); \
	DECLARE_FUNCTION(execGetEffects); \
	DECLARE_FUNCTION(execPlayEffect);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGPhysicalMaterial(); \
	friend struct Z_Construct_UClass_USKGPhysicalMaterial_Statics; \
public: \
	DECLARE_CLASS(USKGPhysicalMaterial, UPhysicalMaterial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SKGPhysicalMaterialModule"), NO_API) \
	DECLARE_SERIALIZER(USKGPhysicalMaterial) \
	virtual UObject* _getUObject() const override { return const_cast<USKGPhysicalMaterial*>(this); }


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USKGPhysicalMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGPhysicalMaterial(USKGPhysicalMaterial&&); \
	USKGPhysicalMaterial(const USKGPhysicalMaterial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGPhysicalMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGPhysicalMaterial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USKGPhysicalMaterial) \
	NO_API virtual ~USKGPhysicalMaterial();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_75_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_78_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGPHYSICALMATERIALMODULE_API UClass* StaticClass<class USKGPhysicalMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
