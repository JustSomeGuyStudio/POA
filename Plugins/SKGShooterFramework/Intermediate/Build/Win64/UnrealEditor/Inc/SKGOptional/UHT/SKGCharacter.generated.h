// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/SKGCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SKGOPTIONAL_SKGCharacter_generated_h
#error "SKGCharacter.generated.h already included, missing '#pragma once' in SKGCharacter.h"
#endif
#define SKGOPTIONAL_SKGCharacter_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASKGCharacter(); \
	friend struct Z_Construct_UClass_ASKGCharacter_Statics; \
public: \
	DECLARE_CLASS(ASKGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGOptional"), NO_API) \
	DECLARE_SERIALIZER(ASKGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASKGCharacter*>(this); }


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASKGCharacter(ASKGCharacter&&); \
	ASKGCharacter(const ASKGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASKGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASKGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASKGCharacter) \
	NO_API virtual ~ASKGCharacter();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_11_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGOPTIONAL_API UClass* StaticClass<class ASKGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
