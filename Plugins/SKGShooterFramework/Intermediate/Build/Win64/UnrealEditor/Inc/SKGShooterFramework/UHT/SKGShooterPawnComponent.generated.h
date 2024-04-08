// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGShooterPawnComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UAnimInstance;
class UCameraComponent;
class USkeletalMeshComponent;
class USKGFirearmComponent;
class USKGLightLaserComponent;
class USKGOpticComponent;
class USKGProceduralAnimComponent;
class USKGShooterFrameworkAnimInstance;
struct FGameplayTag;
struct FSKGCurveSettings;
struct FSKGFirstAndThirdPersonCurveSettings;
struct FSKGProceduralPoseReplicationData;
struct FSKGProceduralShooterPawnData;
struct FSKGToFromCurveSettings;
#ifdef SKGSHOOTERFRAMEWORK_SKGShooterPawnComponent_generated_h
#error "SKGShooterPawnComponent.generated.h already included, missing '#pragma once' in SKGShooterPawnComponent.h"
#endif
#define SKGSHOOTERFRAMEWORK_SKGShooterPawnComponent_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics; \
	SKGSHOOTERFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<struct FSKGFreeLookSettings>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_44_DELEGATE \
SKGSHOOTERFRAMEWORK_API void FOnPoseComplete_DelegateWrapper(const FMulticastScriptDelegate& OnPoseComplete, FSKGProceduralPoseReplicationData const& CurrentPoseData);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_45_DELEGATE \
SKGSHOOTERFRAMEWORK_API void FOnHeldActorSet_DelegateWrapper(const FMulticastScriptDelegate& OnHeldActorSet, AActor* NewHeldActor, AActor* OldHeldActor);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multi_PlayCustomCurve_Validate(FSKGFirstAndThirdPersonCurveSettings const& ); \
	virtual void Multi_PlayCustomCurve_Implementation(FSKGFirstAndThirdPersonCurveSettings const& CurveData); \
	virtual bool Server_PerformCustomCurve_Validate(FSKGFirstAndThirdPersonCurveSettings const& ); \
	virtual void Server_PerformCustomCurve_Implementation(FSKGFirstAndThirdPersonCurveSettings const& CurveData); \
	virtual bool Multi_PlayCustomCurveUnreliable_Validate(FSKGFirstAndThirdPersonCurveSettings const& ); \
	virtual void Multi_PlayCustomCurveUnreliable_Implementation(FSKGFirstAndThirdPersonCurveSettings const& CurveData); \
	virtual bool Server_SetRemoteYaw_Validate(uint8 ); \
	virtual void Server_SetRemoteYaw_Implementation(uint8 Yaw); \
	virtual bool Server_PerformCustomCurveUnreliable_Validate(FSKGFirstAndThirdPersonCurveSettings const& ); \
	virtual void Server_PerformCustomCurveUnreliable_Implementation(FSKGFirstAndThirdPersonCurveSettings const& CurveData); \
	virtual bool Server_SetFreeLook_Validate(bool ); \
	virtual void Server_SetFreeLook_Implementation(bool bFreeLook); \
	virtual bool Server_SetOffHandIKHand_Validate(bool ); \
	virtual void Server_SetOffHandIKHand_Implementation(bool bLeftHand); \
	virtual bool Server_PerformProceduralPose_Validate(FGameplayTag const& , bool ); \
	virtual void Server_PerformProceduralPose_Implementation(FGameplayTag const& Tag, bool bExitPose); \
	virtual bool Server_Lean_Validate(const uint8 ); \
	virtual void Server_Lean_Implementation(const uint8 TargetAngle); \
	virtual bool Server_SetAiming_Validate(bool ); \
	virtual void Server_SetAiming_Implementation(bool bAim); \
	DECLARE_FUNCTION(execGetProceduralPoseData); \
	DECLARE_FUNCTION(execGetOffHandIKIsLeftHand); \
	DECLARE_FUNCTION(execGetCurrentProceduralPoseReplicationData); \
	DECLARE_FUNCTION(execSetOffHandIKToRightHand); \
	DECLARE_FUNCTION(execSetOffHandIKToLeftHand); \
	DECLARE_FUNCTION(execPerformCustomCurve); \
	DECLARE_FUNCTION(execPerformProceduralPose); \
	DECLARE_FUNCTION(execDisableInfraredMode); \
	DECLARE_FUNCTION(execEnableInfraredMode); \
	DECLARE_FUNCTION(execPerformProceduralRecoil); \
	DECLARE_FUNCTION(execGetHeldActor); \
	DECLARE_FUNCTION(execGetShooterFrameworkAnimInstance); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetPawnMesh); \
	DECLARE_FUNCTION(execGetCameraComponent); \
	DECLARE_FUNCTION(execGetProceduralShooterPawnData); \
	DECLARE_FUNCTION(execGetTargetLeanAngle); \
	DECLARE_FUNCTION(execGetCurrentLightLaserComponents); \
	DECLARE_FUNCTION(execGetCurrentOpticComponent); \
	DECLARE_FUNCTION(execGetCurrentProceduralAnimComponent); \
	DECLARE_FUNCTION(execGetCurrentFirearmComponent); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execUseFirstPersonProceduralsAsLocal); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execGetUsingCustomSwayMultiplier); \
	DECLARE_FUNCTION(execResetSwayMultiplier); \
	DECLARE_FUNCTION(execSetSwayMultiplier); \
	DECLARE_FUNCTION(execSetUseThirdPersonProceduralsAsLocal); \
	DECLARE_FUNCTION(execSetUseFirstPersonProceduralsAsLocal); \
	DECLARE_FUNCTION(execStopAiming); \
	DECLARE_FUNCTION(execStartAiming); \
	DECLARE_FUNCTION(execStopLeaningRight); \
	DECLARE_FUNCTION(execStopLeaningLeft); \
	DECLARE_FUNCTION(execLeanRight); \
	DECLARE_FUNCTION(execLeanLeft); \
	DECLARE_FUNCTION(execClearHeldActor); \
	DECLARE_FUNCTION(execSetHeldActor); \
	DECLARE_FUNCTION(execGetSensitivityMultiplier); \
	DECLARE_FUNCTION(execGetMagnificationSensitivityMultiplier); \
	DECLARE_FUNCTION(execIsFreeLooking); \
	DECLARE_FUNCTION(execStopFreeLook); \
	DECLARE_FUNCTION(execStartFreeLook); \
	DECLARE_FUNCTION(execGetControlRotation); \
	DECLARE_FUNCTION(execSetMouseInput); \
	DECLARE_FUNCTION(execCanAddPitch); \
	DECLARE_FUNCTION(execCanAddYaw); \
	DECLARE_FUNCTION(execUnlinkAnimLayerClassByInstance); \
	DECLARE_FUNCTION(execUnlinkAnimLayerClass); \
	DECLARE_FUNCTION(execLinkAnimLayerClassByInstance); \
	DECLARE_FUNCTION(execLinkAnimLayerClass); \
	DECLARE_FUNCTION(execMulti_PlayCustomCurve); \
	DECLARE_FUNCTION(execServer_PerformCustomCurve); \
	DECLARE_FUNCTION(execMulti_PlayCustomCurveUnreliable); \
	DECLARE_FUNCTION(execServer_SetRemoteYaw); \
	DECLARE_FUNCTION(execServer_PerformCustomCurveUnreliable); \
	DECLARE_FUNCTION(execServer_SetFreeLook); \
	DECLARE_FUNCTION(execServer_SetOffHandIKHand); \
	DECLARE_FUNCTION(execServer_PerformProceduralPose); \
	DECLARE_FUNCTION(execServer_Lean); \
	DECLARE_FUNCTION(execServer_SetAiming); \
	DECLARE_FUNCTION(execOnRep_CurrentProceduralPoseData); \
	DECLARE_FUNCTION(execOnRep_IsAiming); \
	DECLARE_FUNCTION(execOnRep_HeldActor); \
	DECLARE_FUNCTION(execOnRep_InFreeLook); \
	DECLARE_FUNCTION(execOnRep_TargetLeanAngleCompressed);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_50_CALLBACK_WRAPPERS
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGShooterPawnComponent(); \
	friend struct Z_Construct_UClass_USKGShooterPawnComponent_Statics; \
public: \
	DECLARE_CLASS(USKGShooterPawnComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGShooterFramework"), NO_API) \
	DECLARE_SERIALIZER(USKGShooterPawnComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USKGShooterPawnComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TargetLeanAngleCompressed=NETFIELD_REP_START, \
		HeldActor, \
		bIsAiming, \
		CurrentProceduralPoseData, \
		bOffHandIKIsLeftHand, \
		bInFreeLook, \
		RemoteViewYaw, \
		NETFIELD_REP_END=RemoteViewYaw	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGShooterPawnComponent(USKGShooterPawnComponent&&); \
	USKGShooterPawnComponent(const USKGShooterPawnComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGShooterPawnComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGShooterPawnComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGShooterPawnComponent) \
	NO_API virtual ~USKGShooterPawnComponent();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_47_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_50_CALLBACK_WRAPPERS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_50_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGSHOOTERFRAMEWORK_API UClass* StaticClass<class USKGShooterPawnComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
