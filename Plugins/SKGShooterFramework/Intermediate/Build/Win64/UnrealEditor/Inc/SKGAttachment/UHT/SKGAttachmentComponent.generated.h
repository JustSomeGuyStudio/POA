// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGAttachmentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMeshComponent;
class UObject;
class UTexture2D;
struct FSKGAttachmentOffsetSettings;
struct FSKGDAAttachment;
#ifdef SKGATTACHMENT_SKGAttachmentComponent_generated_h
#error "SKGAttachmentComponent.generated.h already included, missing '#pragma once' in SKGAttachmentComponent.h"
#endif
#define SKGATTACHMENT_SKGAttachmentComponent_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics; \
	SKGATTACHMENT_API static class UScriptStruct* StaticStruct();


template<> SKGATTACHMENT_API UScriptStruct* StaticStruct<struct FSKGAttachmentOffsetSettings>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics; \
	SKGATTACHMENT_API static class UScriptStruct* StaticStruct();


template<> SKGATTACHMENT_API UScriptStruct* StaticStruct<struct FSKGAttachmentAttachRules>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_55_DELEGATE \
SKGATTACHMENT_API void FOnAttachmentChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentChanged);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_56_DELEGATE \
SKGATTACHMENT_API void FOnAttachmentAdded_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentAdded, AActor* NewAttachment);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_57_DELEGATE \
SKGATTACHMENT_API void FOnAttachmentRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentRemoved, AActor* OldAttachment);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_58_DELEGATE \
SKGATTACHMENT_API void FOnAttachmentDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentDestroyed, AActor* OldAttachment);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_59_DELEGATE \
SKGATTACHMENT_API void FOnOffsetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOffsetChanged, float Offset);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetAttachmentOffset_Validate(const float ); \
	virtual void Server_SetAttachmentOffset_Implementation(const float Offset); \
	virtual bool Server_DestroyAttachment_Validate(); \
	virtual void Server_DestroyAttachment_Implementation(); \
	virtual bool Server_RemoveAttachment_Validate(); \
	virtual void Server_RemoveAttachment_Implementation(); \
	virtual bool Server_TrySetupExistingAttachmentNoAttach_Validate(AActor* ); \
	virtual void Server_TrySetupExistingAttachmentNoAttach_Implementation(AActor* AttachmentToSetup); \
	virtual bool Server_TrySetupExistingAttachment_Validate(AActor* ); \
	virtual void Server_TrySetupExistingAttachment_Implementation(AActor* AttachmentToSetup); \
	virtual bool Server_TrySetupAttachment_Validate(UClass* ); \
	virtual void Server_TrySetupAttachment_Implementation(UClass* AttachmentClass); \
	DECLARE_FUNCTION(execGetIsRequiredToFunction); \
	DECLARE_FUNCTION(execGetAttachmentOffset); \
	DECLARE_FUNCTION(execGetAttachment); \
	DECLARE_FUNCTION(execGetAttachToMesh); \
	DECLARE_FUNCTION(execGetDefaultAttachment); \
	DECLARE_FUNCTION(execGetComponentImage); \
	DECLARE_FUNCTION(execGetComponentName); \
	DECLARE_FUNCTION(execGetAttachToSocket); \
	DECLARE_FUNCTION(execGetAttachSnapPoints); \
	DECLARE_FUNCTION(execGetAttachEndTransform); \
	DECLARE_FUNCTION(execGetAttachStartTransform); \
	DECLARE_FUNCTION(execGetAttachTransform); \
	DECLARE_FUNCTION(execGetAttachOffsetTransform); \
	DECLARE_FUNCTION(execDestroyPreviewAttachment); \
	DECLARE_FUNCTION(execSetPreviewAttachment); \
	DECLARE_FUNCTION(execHasAttachment); \
	DECLARE_FUNCTION(execIsAttachmentCompatible); \
	DECLARE_FUNCTION(execIsAttachmentClassCompatible); \
	DECLARE_FUNCTION(execGetCompatibleAttachments); \
	DECLARE_FUNCTION(execDestroyAttachment); \
	DECLARE_FUNCTION(execRemoveAttachment); \
	DECLARE_FUNCTION(execTrySetupExistingAttachmentNoAttach); \
	DECLARE_FUNCTION(execTrySetupExistingAttachment); \
	DECLARE_FUNCTION(execTrySetupAttachment); \
	DECLARE_FUNCTION(execTryLoadSetupAttachment); \
	DECLARE_FUNCTION(execGetOffsetSettings); \
	DECLARE_FUNCTION(execCanAttachmentBeOffset); \
	DECLARE_FUNCTION(execDecrementOffset); \
	DECLARE_FUNCTION(execIncrementOffset); \
	DECLARE_FUNCTION(execSetAttachmentOffset); \
	DECLARE_FUNCTION(execFinalizeAttachmentOffset); \
	DECLARE_FUNCTION(execServer_SetAttachmentOffset); \
	DECLARE_FUNCTION(execServer_DestroyAttachment); \
	DECLARE_FUNCTION(execServer_RemoveAttachment); \
	DECLARE_FUNCTION(execServer_TrySetupExistingAttachmentNoAttach); \
	DECLARE_FUNCTION(execServer_TrySetupExistingAttachment); \
	DECLARE_FUNCTION(execServer_TrySetupAttachment); \
	DECLARE_FUNCTION(execOnRep_AttachmentOffset); \
	DECLARE_FUNCTION(execOnRep_Attachment);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_64_CALLBACK_WRAPPERS
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGAttachmentComponent(); \
	friend struct Z_Construct_UClass_USKGAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(USKGAttachmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGAttachment"), NO_API) \
	DECLARE_SERIALIZER(USKGAttachmentComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USKGAttachmentComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Attachment=NETFIELD_REP_START, \
		AttachmentOffset, \
		NETFIELD_REP_END=AttachmentOffset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGAttachmentComponent(USKGAttachmentComponent&&); \
	USKGAttachmentComponent(const USKGAttachmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGAttachmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGAttachmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGAttachmentComponent) \
	NO_API virtual ~USKGAttachmentComponent();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_61_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_64_CALLBACK_WRAPPERS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_64_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGATTACHMENT_API UClass* StaticClass<class USKGAttachmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
