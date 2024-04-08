// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGMuzzleComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FSKGMuzzleTransform;
#ifdef SKGMUZZLE_SKGMuzzleComponent_generated_h
#error "SKGMuzzleComponent.generated.h already included, missing '#pragma once' in SKGMuzzleComponent.h"
#endif
#define SKGMUZZLE_SKGMuzzleComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics; \
	SKGMUZZLE_API static class UScriptStruct* StaticStruct();


template<> SKGMUZZLE_API UScriptStruct* StaticStruct<struct FSKGMuzzleTransform>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_61_DELEGATE \
SKGMUZZLE_API void FOnMuzzleTemperatureChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMuzzleTemperatureChanged, float Temperature);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMuzzleProjectileTransform); \
	DECLARE_FUNCTION(execGetMuzzleProjectileTransformCompensated); \
	DECLARE_FUNCTION(execGetMuzzleTransform); \
	DECLARE_FUNCTION(execIsUsingMuzzleTemperatureSystem); \
	DECLARE_FUNCTION(execGetMuzzleTemperatureNormalized); \
	DECLARE_FUNCTION(execGetMuzzleTemperature); \
	DECLARE_FUNCTION(execShotPerformed); \
	DECLARE_FUNCTION(execGetMuzzleTag);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGMuzzleComponent(); \
	friend struct Z_Construct_UClass_USKGMuzzleComponent_Statics; \
public: \
	DECLARE_CLASS(USKGMuzzleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGMuzzle"), NO_API) \
	DECLARE_SERIALIZER(USKGMuzzleComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USKGMuzzleComponent*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USKGMuzzleComponent(USKGMuzzleComponent&&); \
	NO_API USKGMuzzleComponent(const USKGMuzzleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGMuzzleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGMuzzleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGMuzzleComponent) \
	NO_API virtual ~USKGMuzzleComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_63_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGMUZZLE_API UClass* StaticClass<class USKGMuzzleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
