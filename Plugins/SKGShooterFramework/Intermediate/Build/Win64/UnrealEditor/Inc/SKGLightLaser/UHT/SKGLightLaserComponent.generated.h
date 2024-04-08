// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGLightLaserComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULightComponent;
class UStaticMeshComponent;
enum class ESKGLaserMode : uint8;
enum class ESKGLightMode : uint8;
struct FHitResult;
struct FSKGLightLaserCycleMode;
#ifdef SKGLIGHTLASER_SKGLightLaserComponent_generated_h
#error "SKGLightLaserComponent.generated.h already included, missing '#pragma once' in SKGLightLaserComponent.h"
#endif
#define SKGLIGHTLASER_SKGLightLaserComponent_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics; \
	SKGLIGHTLASER_API static class UScriptStruct* StaticStruct();


template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<struct FSKGLaserMaterial>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGLaserState_Statics; \
	SKGLIGHTLASER_API static class UScriptStruct* StaticStruct();


template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<struct FSKGLaserState>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGLaserSettings_Statics; \
	SKGLIGHTLASER_API static class UScriptStruct* StaticStruct();


template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<struct FSKGLaserSettings>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGLightState_Statics; \
	SKGLIGHTLASER_API static class UScriptStruct* StaticStruct();


template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<struct FSKGLightState>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGLightSettings_Statics; \
	SKGLIGHTLASER_API static class UScriptStruct* StaticStruct();


template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<struct FSKGLightSettings>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics; \
	SKGLIGHTLASER_API static class UScriptStruct* StaticStruct();


template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<struct FSKGLightLaserCycleMode>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics; \
	SKGLIGHTLASER_API static class UScriptStruct* StaticStruct();


template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<struct FSKGLightLaserCycleModes>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_205_DELEGATE \
SKGLIGHTLASER_API void FOnLaserStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLaserStateChanged, ESKGLaserMode LaserMode);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_206_DELEGATE \
SKGLIGHTLASER_API void FOnLightModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLightModeChanged, ESKGLightMode LightMode);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_207_DELEGATE \
SKGLIGHTLASER_API void FOnInfraredModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInfraredModeChanged, bool bInInfraredMode);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_208_DELEGATE \
SKGLIGHTLASER_API void FOnLightStrobed_DelegateWrapper(const FMulticastScriptDelegate& OnLightStrobed, bool bOn);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_209_DELEGATE \
SKGLIGHTLASER_API void FOnLaserImpact_DelegateWrapper(const FMulticastScriptDelegate& OnLaserImpact, FHitResult const& HitResult, bool bHit);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetLightLaserMode_Validate(FSKGLightLaserCycleMode const& ); \
	virtual void Server_SetLightLaserMode_Implementation(FSKGLightLaserCycleMode const& LightLaserMode); \
	virtual bool Server_SetLightIntensityIndex_Validate(int32 ); \
	virtual void Server_SetLightIntensityIndex_Implementation(int32 Index); \
	virtual bool Server_SetLightMode_Validate(ESKGLightMode ); \
	virtual void Server_SetLightMode_Implementation(ESKGLightMode LightMode); \
	virtual bool Server_SetLaserMode_Validate(ESKGLaserMode ); \
	virtual void Server_SetLaserMode_Implementation(ESKGLaserMode LaserMode); \
	virtual bool Server_SetInfraredMode_Validate(bool ); \
	virtual void Server_SetInfraredMode_Implementation(bool bInfraredOn); \
	DECLARE_FUNCTION(execIsInInfraredMode); \
	DECLARE_FUNCTION(execGetLaserDot); \
	DECLARE_FUNCTION(execGetLaserMesh); \
	DECLARE_FUNCTION(execGetLightSource); \
	DECLARE_FUNCTION(execCycleLightLaserMode); \
	DECLARE_FUNCTION(execCycleLightIntensity); \
	DECLARE_FUNCTION(execSetLightIntensityIndex); \
	DECLARE_FUNCTION(execIsLightOn); \
	DECLARE_FUNCTION(execGetLightMode); \
	DECLARE_FUNCTION(execSetLightMode); \
	DECLARE_FUNCTION(execIsLaserOn); \
	DECLARE_FUNCTION(execGetLaserMode); \
	DECLARE_FUNCTION(execSetLaserMode); \
	DECLARE_FUNCTION(execSetInfraredMode); \
	DECLARE_FUNCTION(execServer_SetLightLaserMode); \
	DECLARE_FUNCTION(execServer_SetLightIntensityIndex); \
	DECLARE_FUNCTION(execServer_SetLightMode); \
	DECLARE_FUNCTION(execServer_SetLaserMode); \
	DECLARE_FUNCTION(execServer_SetInfraredMode); \
	DECLARE_FUNCTION(execOnRep_LightState); \
	DECLARE_FUNCTION(execOnRep_LaserState); \
	DECLARE_FUNCTION(execOnRep_DeviceInfraredOn);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_214_CALLBACK_WRAPPERS
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_214_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGLightLaserComponent(); \
	friend struct Z_Construct_UClass_USKGLightLaserComponent_Statics; \
public: \
	DECLARE_CLASS(USKGLightLaserComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGLightLaser"), NO_API) \
	DECLARE_SERIALIZER(USKGLightLaserComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USKGLightLaserComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDeviceInfraredOn=NETFIELD_REP_START, \
		LaserState, \
		LightState, \
		NETFIELD_REP_END=LightState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_214_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGLightLaserComponent(USKGLightLaserComponent&&); \
	USKGLightLaserComponent(const USKGLightLaserComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGLightLaserComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGLightLaserComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGLightLaserComponent) \
	NO_API virtual ~USKGLightLaserComponent();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_211_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_214_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_214_CALLBACK_WRAPPERS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_214_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_214_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGLIGHTLASER_API UClass* StaticClass<class USKGLightLaserComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h


#define FOREACH_ENUM_ESKGLASERMODE(op) \
	op(ESKGLaserMode::Off) \
	op(ESKGLaserMode::On) 

enum class ESKGLaserMode : uint8;
template<> struct TIsUEnumClass<ESKGLaserMode> { enum { Value = true }; };
template<> SKGLIGHTLASER_API UEnum* StaticEnum<ESKGLaserMode>();

#define FOREACH_ENUM_ESKGLIGHTMODE(op) \
	op(ESKGLightMode::Off) \
	op(ESKGLightMode::On) \
	op(ESKGLightMode::Strobe) 

enum class ESKGLightMode : uint8;
template<> struct TIsUEnumClass<ESKGLightMode> { enum { Value = true }; };
template<> SKGLIGHTLASER_API UEnum* StaticEnum<ESKGLightMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
