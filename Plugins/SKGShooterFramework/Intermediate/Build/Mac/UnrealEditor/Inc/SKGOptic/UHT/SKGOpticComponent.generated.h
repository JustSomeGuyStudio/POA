// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGOpticComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshComponent;
#ifdef SKGOPTIC_SKGOpticComponent_generated_h
#error "SKGOpticComponent.generated.h already included, missing '#pragma once' in SKGOpticComponent.h"
#endif
#define SKGOPTIC_SKGOpticComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics; \
	SKGOPTIC_API static class UScriptStruct* StaticStruct();


template<> SKGOPTIC_API UScriptStruct* StaticStruct<struct FSKGOpticStartingZeroSettings>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics; \
	SKGOPTIC_API static class UScriptStruct* StaticStruct();


template<> SKGOPTIC_API UScriptStruct* StaticStruct<struct FSKGOpticZeroSettings>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics; \
	SKGOPTIC_API static class UScriptStruct* StaticStruct();


template<> SKGOPTIC_API UScriptStruct* StaticStruct<struct FSKGOpticReticleSettings>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics; \
	SKGOPTIC_API static class UScriptStruct* StaticStruct();


template<> SKGOPTIC_API UScriptStruct* StaticStruct<struct FSKGOpticMagnificationSettings>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStoppedAiming); \
	DECLARE_FUNCTION(execStartedAiming); \
	DECLARE_FUNCTION(execGetOpticMesh); \
	DECLARE_FUNCTION(execApplyLookAtRotationZero); \
	DECLARE_FUNCTION(execPointOfImpactRight); \
	DECLARE_FUNCTION(execPointOfImpactLeft); \
	DECLARE_FUNCTION(execPointOfImpactDown); \
	DECLARE_FUNCTION(execPointOfImpactUp); \
	DECLARE_FUNCTION(execPointOfImpactLeftRightDefault); \
	DECLARE_FUNCTION(execPointOfImpactUpDownDefault); \
	DECLARE_FUNCTION(execGetCurrentMagnification); \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execToggleReticleNightVisionSetting); \
	DECLARE_FUNCTION(execDecreaseReticleBrightness); \
	DECLARE_FUNCTION(execIncreaseReticleBrightness); \
	DECLARE_FUNCTION(execCycleReticle); \
	DECLARE_FUNCTION(execIsMagnifiedOptic);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGOpticComponent(); \
	friend struct Z_Construct_UClass_USKGOpticComponent_Statics; \
public: \
	DECLARE_CLASS(USKGOpticComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGOptic"), NO_API) \
	DECLARE_SERIALIZER(USKGOpticComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USKGOpticComponent*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USKGOpticComponent(USKGOpticComponent&&); \
	NO_API USKGOpticComponent(const USKGOpticComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGOpticComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGOpticComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGOpticComponent) \
	NO_API virtual ~USKGOpticComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_257_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGOPTIC_API UClass* StaticClass<class USKGOpticComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h


#define FOREACH_ENUM_ESKGOPTICADJUSTMENTTYPE(op) \
	op(ESKGOpticAdjustmentType::MOA) \
	op(ESKGOpticAdjustmentType::MRAD) 

enum class ESKGOpticAdjustmentType : uint8;
template<> struct TIsUEnumClass<ESKGOpticAdjustmentType> { enum { Value = true }; };
template<> SKGOPTIC_API UEnum* StaticEnum<ESKGOpticAdjustmentType>();

#define FOREACH_ENUM_ESKGMRADADJUSTMENT(op) \
	op(ESKGMRADAdjustment::PointOne) 

enum class ESKGMRADAdjustment : uint8;
template<> struct TIsUEnumClass<ESKGMRADAdjustment> { enum { Value = true }; };
template<> SKGOPTIC_API UEnum* StaticEnum<ESKGMRADAdjustment>();

#define FOREACH_ENUM_ESKGMOAADJUSTMENT(op) \
	op(ESKGMOAAdjustment::OneEighth) \
	op(ESKGMOAAdjustment::OneQuarter) \
	op(ESKGMOAAdjustment::OneHalf) \
	op(ESKGMOAAdjustment::One) 

enum class ESKGMOAAdjustment : uint8;
template<> struct TIsUEnumClass<ESKGMOAAdjustment> { enum { Value = true }; };
template<> SKGOPTIC_API UEnum* StaticEnum<ESKGMOAAdjustment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
