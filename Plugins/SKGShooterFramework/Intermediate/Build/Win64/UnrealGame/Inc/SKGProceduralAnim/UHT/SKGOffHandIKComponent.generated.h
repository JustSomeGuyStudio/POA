// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGOffHandIKComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class UMeshComponent;
class UPrimitiveComponent;
#ifdef SKGPROCEDURALANIM_SKGOffHandIKComponent_generated_h
#error "SKGOffHandIKComponent.generated.h already included, missing '#pragma once' in SKGOffHandIKComponent.h"
#endif
#define SKGPROCEDURALANIM_SKGOffHandIKComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOffHandIKMesh); \
	DECLARE_FUNCTION(execGetOffHandIKPose); \
	DECLARE_FUNCTION(execGetOffHandIKOffset); \
	DECLARE_FUNCTION(execUpdateOffHandIK);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGOffHandIKComponent(); \
	friend struct Z_Construct_UClass_USKGOffHandIKComponent_Statics; \
public: \
	DECLARE_CLASS(USKGOffHandIKComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGProceduralAnim"), NO_API) \
	DECLARE_SERIALIZER(USKGOffHandIKComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USKGOffHandIKComponent*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USKGOffHandIKComponent(USKGOffHandIKComponent&&); \
	NO_API USKGOffHandIKComponent(const USKGOffHandIKComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGOffHandIKComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGOffHandIKComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGOffHandIKComponent) \
	NO_API virtual ~USKGOffHandIKComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_25_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGPROCEDURALANIM_API UClass* StaticClass<class USKGOffHandIKComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
