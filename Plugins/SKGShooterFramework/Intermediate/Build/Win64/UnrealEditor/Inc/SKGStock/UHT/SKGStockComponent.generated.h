// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGStockComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SKGSTOCK_SKGStockComponent_generated_h
#error "SKGStockComponent.generated.h already included, missing '#pragma once' in SKGStockComponent.h"
#endif
#define SKGSTOCK_SKGStockComponent_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_9_DELEGATE \
SKGSTOCK_API void FOnFolded_DelegateWrapper(const FMulticastScriptDelegate& OnFolded, bool Folded);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_10_DELEGATE \
SKGSTOCK_API void FOnLengthOfPullChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLengthOfPullChanged, float NewLengthOfPull);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetFoldedState_Validate(bool ); \
	virtual void Server_SetFoldedState_Implementation(bool bFold); \
	DECLARE_FUNCTION(execGetLengthOfPull); \
	DECLARE_FUNCTION(execIsFolded); \
	DECLARE_FUNCTION(execGetFoldedLengthOfPull); \
	DECLARE_FUNCTION(execGetUnfoldedLengthOfPull); \
	DECLARE_FUNCTION(execCanBeFolded); \
	DECLARE_FUNCTION(execToggleFold); \
	DECLARE_FUNCTION(execUnfold); \
	DECLARE_FUNCTION(execFold); \
	DECLARE_FUNCTION(execSetOffset); \
	DECLARE_FUNCTION(execServer_SetFoldedState); \
	DECLARE_FUNCTION(execOnRep_LengthOfPull); \
	DECLARE_FUNCTION(execOnRep_IsFolded);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_15_CALLBACK_WRAPPERS
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGStockComponent(); \
	friend struct Z_Construct_UClass_USKGStockComponent_Statics; \
public: \
	DECLARE_CLASS(USKGStockComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGStock"), NO_API) \
	DECLARE_SERIALIZER(USKGStockComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsFolded=NETFIELD_REP_START, \
		LengthOfPull, \
		NETFIELD_REP_END=LengthOfPull	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGStockComponent(USKGStockComponent&&); \
	USKGStockComponent(const USKGStockComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGStockComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGStockComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGStockComponent) \
	NO_API virtual ~USKGStockComponent();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_12_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_15_CALLBACK_WRAPPERS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGSTOCK_API UClass* StaticClass<class USKGStockComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
