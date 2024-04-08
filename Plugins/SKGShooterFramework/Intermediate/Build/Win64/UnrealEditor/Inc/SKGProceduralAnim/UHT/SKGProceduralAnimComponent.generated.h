// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGProceduralAnimComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshComponent;
class UPrimitiveComponent;
struct FGameplayTag;
struct FSKGProceduralAimingSettings;
struct FSKGToFromCurveSettings;
#ifdef SKGPROCEDURALANIM_SKGProceduralAnimComponent_generated_h
#error "SKGProceduralAnimComponent.generated.h already included, missing '#pragma once' in SKGProceduralAnimComponent.h"
#endif
#define SKGPROCEDURALANIM_SKGProceduralAnimComponent_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetAimSocketIndex_Validate(uint8 ); \
	virtual void Server_SetAimSocketIndex_Implementation(uint8 Index); \
	DECLARE_FUNCTION(execGetProceduralAnimMesh); \
	DECLARE_FUNCTION(execGetAimOffset); \
	DECLARE_FUNCTION(execGetPose); \
	DECLARE_FUNCTION(execUpdateAimOffsetWithSocket); \
	DECLARE_FUNCTION(execUpdateAimOffset); \
	DECLARE_FUNCTION(execStopPointAiming); \
	DECLARE_FUNCTION(execStartPointAiming); \
	DECLARE_FUNCTION(execCycleAimSocket); \
	DECLARE_FUNCTION(execGetAimMuzzleTransform); \
	DECLARE_FUNCTION(execGetAimWorldTransform); \
	DECLARE_FUNCTION(execSetCanAim); \
	DECLARE_FUNCTION(execGetCanAim); \
	DECLARE_FUNCTION(execGetProceduralAimingSettings); \
	DECLARE_FUNCTION(execServer_SetAimSocketIndex);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_17_CALLBACK_WRAPPERS
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGProceduralAnimComponent(); \
	friend struct Z_Construct_UClass_USKGProceduralAnimComponent_Statics; \
public: \
	DECLARE_CLASS(USKGProceduralAnimComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGProceduralAnim"), NO_API) \
	DECLARE_SERIALIZER(USKGProceduralAnimComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USKGProceduralAnimComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AimSocketIndex=NETFIELD_REP_START, \
		NETFIELD_REP_END=AimSocketIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGProceduralAnimComponent(USKGProceduralAnimComponent&&); \
	USKGProceduralAnimComponent(const USKGProceduralAnimComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGProceduralAnimComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGProceduralAnimComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGProceduralAnimComponent) \
	NO_API virtual ~USKGProceduralAnimComponent();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_14_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_17_CALLBACK_WRAPPERS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGPROCEDURALANIM_API UClass* StaticClass<class USKGProceduralAnimComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
