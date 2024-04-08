// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGFirearmAttachmentStatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USKGPDAFirearmAttachmentStats;
#ifdef SKGSTATS_SKGFirearmAttachmentStatComponent_generated_h
#error "SKGFirearmAttachmentStatComponent.generated.h already included, missing '#pragma once' in SKGFirearmAttachmentStatComponent.h"
#endif
#define SKGSTATS_SKGFirearmAttachmentStatComponent_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttachmentStats);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGFirearmAttachmentStatComponent(); \
	friend struct Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics; \
public: \
	DECLARE_CLASS(USKGFirearmAttachmentStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGStats"), NO_API) \
	DECLARE_SERIALIZER(USKGFirearmAttachmentStatComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USKGFirearmAttachmentStatComponent*>(this); }


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGFirearmAttachmentStatComponent(USKGFirearmAttachmentStatComponent&&); \
	USKGFirearmAttachmentStatComponent(const USKGFirearmAttachmentStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGFirearmAttachmentStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGFirearmAttachmentStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGFirearmAttachmentStatComponent) \
	NO_API virtual ~USKGFirearmAttachmentStatComponent();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_13_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGSTATS_API UClass* StaticClass<class USKGFirearmAttachmentStatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
