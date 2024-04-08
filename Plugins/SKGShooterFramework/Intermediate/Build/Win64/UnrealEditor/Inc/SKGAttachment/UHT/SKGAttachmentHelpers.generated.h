// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Statics/SKGAttachmentHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class USKGAttachmentComponent;
class USKGAttachmentManagerComponent;
struct FSKGAttachmentActor;
#ifdef SKGATTACHMENT_SKGAttachmentHelpers_generated_h
#error "SKGAttachmentHelpers.generated.h already included, missing '#pragma once' in SKGAttachmentHelpers.h"
#endif
#define SKGATTACHMENT_SKGAttachmentHelpers_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllFiles); \
	DECLARE_FUNCTION(execLoadFileToString); \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execConstructActorFromAttachmentManagerData); \
	DECLARE_FUNCTION(execDeserializeAttachmentManagerJson); \
	DECLARE_FUNCTION(execSerializeAttachmentManagerToJson); \
	DECLARE_FUNCTION(execConstructAttachmentManagerData); \
	DECLARE_FUNCTION(execGetAttachmentComponents); \
	DECLARE_FUNCTION(execGetAttachmentManagerComponent);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGAttachmentHelpers(); \
	friend struct Z_Construct_UClass_USKGAttachmentHelpers_Statics; \
public: \
	DECLARE_CLASS(USKGAttachmentHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SKGAttachment"), NO_API) \
	DECLARE_SERIALIZER(USKGAttachmentHelpers)


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USKGAttachmentHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGAttachmentHelpers(USKGAttachmentHelpers&&); \
	USKGAttachmentHelpers(const USKGAttachmentHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGAttachmentHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGAttachmentHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USKGAttachmentHelpers) \
	NO_API virtual ~USKGAttachmentHelpers();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_16_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGATTACHMENT_API UClass* StaticClass<class USKGAttachmentHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
