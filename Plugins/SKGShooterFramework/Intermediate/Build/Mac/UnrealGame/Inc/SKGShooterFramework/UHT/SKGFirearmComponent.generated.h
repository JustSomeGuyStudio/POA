// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGFirearmComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USKGAttachmentManagerComponent;
class USKGFirearmAttachmentStatComponent;
class USKGLightLaserComponent;
class USKGMuzzleComponent;
class USKGOffHandIKComponent;
class USKGOpticComponent;
class USKGProceduralAnimComponent;
class USKGStockComponent;
struct FGameplayTag;
struct FSKGFirearmStats;
struct FSKGMuzzleTransform;
struct FSKGProceduralStats;
struct FSKGToFromCurveSettings;
#ifdef SKGSHOOTERFRAMEWORK_SKGFirearmComponent_generated_h
#error "SKGFirearmComponent.generated.h already included, missing '#pragma once' in SKGFirearmComponent.h"
#endif
#define SKGSHOOTERFRAMEWORK_SKGFirearmComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics; \
	SKGSHOOTERFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<struct FSKGFirearmCollisionSettings>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_58_DELEGATE \
SKGSHOOTERFRAMEWORK_API void FOnProceduralAnimComponentsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnProceduralAnimComponentsUpdated);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_59_DELEGATE \
SKGSHOOTERFRAMEWORK_API void FOnMuzzleComponentUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMuzzleComponentUpdated);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_60_DELEGATE \
SKGSHOOTERFRAMEWORK_API void FOnHeld_DelegateWrapper(const FMulticastScriptDelegate& OnHeld);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_61_DELEGATE \
SKGSHOOTERFRAMEWORK_API void FOnAimingDeviceCycled_DelegateWrapper(const FMulticastScriptDelegate& OnAimingDeviceCycled, USKGProceduralAnimComponent* ProceduralAnimComponent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_62_DELEGATE \
SKGSHOOTERFRAMEWORK_API void FOnFirearmStatsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFirearmStatsChanged, FSKGFirearmStats FirearmStats);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetAimingDevice_Validate(USKGProceduralAnimComponent* ); \
	virtual void Server_SetAimingDevice_Implementation(USKGProceduralAnimComponent* AnimComponent); \
 \
	DECLARE_FUNCTION(execGetCurrentStockComponent); \
	DECLARE_FUNCTION(execGetCurrentOpticComponent); \
	DECLARE_FUNCTION(execGetCurrentMuzzleComponent); \
	DECLARE_FUNCTION(execGetCurrentOffHandIKComponent); \
	DECLARE_FUNCTION(execGetCurrentProceduralAnimComponent); \
	DECLARE_FUNCTION(execGetAttachmentManagerComponent); \
	DECLARE_FUNCTION(execSetFirearmStats); \
	DECLARE_FUNCTION(execGetFirearmStats); \
	DECLARE_FUNCTION(execGetAttachmentStatComponents); \
	DECLARE_FUNCTION(execGetMuzzleComponents); \
	DECLARE_FUNCTION(execGetLightLaserComponents); \
	DECLARE_FUNCTION(execGetOffHandIKComponents); \
	DECLARE_FUNCTION(execGetProceduralAnimComponents); \
	DECLARE_FUNCTION(execGetAimSocketWorldTransform); \
	DECLARE_FUNCTION(execIsPointAiming); \
	DECLARE_FUNCTION(execStopPointAiming); \
	DECLARE_FUNCTION(execStartPointAiming); \
	DECLARE_FUNCTION(execCycleAimingDevice); \
	DECLARE_FUNCTION(execGetPose); \
	DECLARE_FUNCTION(execGetMuzzleTransform); \
	DECLARE_FUNCTION(execGetMuzzleProjectileTransforms); \
	DECLARE_FUNCTION(execGetMuzzleProjectileTransform); \
	DECLARE_FUNCTION(execZeroOpticsForZeroAtLocation); \
	DECLARE_FUNCTION(execShotPerformed); \
	DECLARE_FUNCTION(execGetProceduralStats); \
	DECLARE_FUNCTION(execSetProceduralStats); \
	DECLARE_FUNCTION(execServer_SetAimingDevice); \
	DECLARE_FUNCTION(execOnStockOffsetChanged); \
	DECLARE_FUNCTION(execOnAttachmentRemoved); \
	DECLARE_FUNCTION(execOnAttachmentAdded); \
	DECLARE_FUNCTION(execCalculateProceduralValues); \
	DECLARE_FUNCTION(execRemoveFirearmAttachmentStats); \
	DECLARE_FUNCTION(execAddFirearmAttachmentStats); \
	DECLARE_FUNCTION(execOnRep_CurrentStockComponent); \
	DECLARE_FUNCTION(execOnRep_CurrentOpticComponent); \
	DECLARE_FUNCTION(execOnRep_CurrentMuzzleComponent); \
	DECLARE_FUNCTION(execOnRep_CurrentOffHandIKComponent); \
	DECLARE_FUNCTION(execOnRep_CurrentProceduralAnimComponent); \
	DECLARE_FUNCTION(execOnRep_AttachmentStatComponents); \
	DECLARE_FUNCTION(execOnRep_MuzzleComponents); \
	DECLARE_FUNCTION(execOnRep_LightLaserComponents); \
	DECLARE_FUNCTION(execOnRep_OffHandIKComponents); \
	DECLARE_FUNCTION(execOnRep_ProceduralAnimComponents); \
	DECLARE_FUNCTION(execOnRep_FirearmStats);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGFirearmComponent(); \
	friend struct Z_Construct_UClass_USKGFirearmComponent_Statics; \
public: \
	DECLARE_CLASS(USKGFirearmComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGShooterFramework"), NO_API) \
	DECLARE_SERIALIZER(USKGFirearmComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USKGFirearmComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		FirearmStats=NETFIELD_REP_START, \
		ProceduralAnimComponents, \
		OffHandIKComponents, \
		LightLaserComponents, \
		MuzzleComponents, \
		AttachmentStatComponents, \
		CurrentProceduralAnimComponent, \
		CurrentOffHandIKComponent, \
		CurrentMuzzleComponent, \
		CurrentOpticComponent, \
		CurrentStockComponent, \
		NETFIELD_REP_END=CurrentStockComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USKGFirearmComponent(USKGFirearmComponent&&); \
	NO_API USKGFirearmComponent(const USKGFirearmComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGFirearmComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGFirearmComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGFirearmComponent) \
	NO_API virtual ~USKGFirearmComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_64_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGSHOOTERFRAMEWORK_API UClass* StaticClass<class USKGFirearmComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
