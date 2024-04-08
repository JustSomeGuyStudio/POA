// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKGRangeFinderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshComponent;
class UTextRenderComponent;
#ifdef SKGRANGEFINDER_SKGRangeFinderComponent_generated_h
#error "SKGRangeFinderComponent.generated.h already included, missing '#pragma once' in SKGRangeFinderComponent.h"
#endif
#define SKGRANGEFINDER_SKGRangeFinderComponent_generated_h

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics; \
	SKGRANGEFINDER_API static class UScriptStruct* StaticStruct();


template<> SKGRANGEFINDER_API UScriptStruct* StaticStruct<struct FSKGMeasurementSymbols>();

#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_31_DELEGATE \
SKGRANGEFINDER_API void FOnRanged_DelegateWrapper(const FMulticastScriptDelegate& OnRanged, float Distance);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRangeAsString); \
	DECLARE_FUNCTION(execGetRange); \
	DECLARE_FUNCTION(execGetTextRenderComponent); \
	DECLARE_FUNCTION(execGetRangeFinderMesh);


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSKGRangeFinderComponent(); \
	friend struct Z_Construct_UClass_USKGRangeFinderComponent_Statics; \
public: \
	DECLARE_CLASS(USKGRangeFinderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SKGRangeFinder"), NO_API) \
	DECLARE_SERIALIZER(USKGRangeFinderComponent)


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USKGRangeFinderComponent(USKGRangeFinderComponent&&); \
	USKGRangeFinderComponent(const USKGRangeFinderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USKGRangeFinderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USKGRangeFinderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USKGRangeFinderComponent) \
	NO_API virtual ~USKGRangeFinderComponent();


#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_33_PROLOG
#define FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKGRANGEFINDER_API UClass* StaticClass<class USKGRangeFinderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
