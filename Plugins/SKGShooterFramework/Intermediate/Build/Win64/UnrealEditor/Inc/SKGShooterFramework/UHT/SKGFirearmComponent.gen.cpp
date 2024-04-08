// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFramework/Public/Components/SKGFirearmComponent.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGMuzzle/Public/Components/SKGMuzzleComponent.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGProceduralAnim/Public/DataTypes/SKGProceduralDataTypes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFramework/Public/DataTypes/SKGShooterFrameworkDataTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGFirearmComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister();
SKGLIGHTLASER_API UClass* Z_Construct_UClass_USKGLightLaserComponent_NoRegister();
SKGMUZZLE_API UClass* Z_Construct_UClass_USKGMuzzleComponent_NoRegister();
SKGMUZZLE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMuzzleTransform();
SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticComponent_NoRegister();
SKGPROCEDURALANIM_API UClass* Z_Construct_UClass_USKGOffHandIKComponent_NoRegister();
SKGPROCEDURALANIM_API UClass* Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGToFromCurveSettings();
SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGFirearmComponent();
SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGFirearmComponent_NoRegister();
SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature();
SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature();
SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature();
SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature();
SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirearmStats();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralStats();
SKGSTATS_API UClass* Z_Construct_UClass_USKGFirearmAttachmentStatComponent_NoRegister();
SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmStats_NoRegister();
SKGSTOCK_API UClass* Z_Construct_UClass_USKGStockComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGShooterFramework();
// End Cross Module References

// Begin ScriptStruct FSKGFirearmCollisionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGFirearmCollisionSettings;
class UScriptStruct* FSKGFirearmCollisionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirearmCollisionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGFirearmCollisionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings, (UObject*)Z_Construct_UPackage__Script_SKGShooterFramework(), TEXT("SKGFirearmCollisionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGFirearmCollisionSettings.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<FSKGFirearmCollisionSettings>()
{
	return FSKGFirearmCollisionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFirearmCollision_MetaData[] = {
		{ "Category", "SKGFirearmComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not to use firearm collision\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to use firearm collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDiameter_MetaData[] = {
		{ "Category", "SKGFirearmComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The diameter to be used for the firearm collision trace (runs down the barrel)\n" },
#endif
		{ "EditCondition", "bUseFirearmCollision" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The diameter to be used for the firearm collision trace (runs down the barrel)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopAimingDistance_MetaData[] = {
		{ "Category", "SKGFirearmComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far you can go into firearm collision before it stops/prevents aiming\n" },
#endif
		{ "EditCondition", "bUseFirearmCollision" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far you can go into firearm collision before it stops/prevents aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseLocationCurve_MetaData[] = {
		{ "Category", "SKGFirearmComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The curve in which the firearm moves to as it moves through firearm collision\n" },
#endif
		{ "EditCondition", "bUseFirearmCollision" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The curve in which the firearm moves to as it moves through firearm collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseRotationCurve_MetaData[] = {
		{ "Category", "SKGFirearmComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The curve in which the firearm rotates to as it moves through firearm collision\n" },
#endif
		{ "EditCondition", "bUseFirearmCollision" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The curve in which the firearm rotates to as it moves through firearm collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseScale_MetaData[] = {
		{ "Category", "SKGFirearmComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Higher value = further iteration through the curve for each unit of distance pushed from collision\n" },
#endif
		{ "EditCondition", "bUseFirearmCollision" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher value = further iteration through the curve for each unit of distance pushed from collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseLocationInterpSpeed_MetaData[] = {
		{ "Category", "SKGFirearmComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The speed in which the firearm collision interpolates to a new value in the curve\n" },
#endif
		{ "EditCondition", "bUseFirearmCollision" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speed in which the firearm collision interpolates to a new value in the curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseRotationInterpSpeed_MetaData[] = {
		{ "Category", "SKGFirearmComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The speed in which the firearm collision interpolates to a new value in the curve\n" },
#endif
		{ "EditCondition", "bUseFirearmCollision" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speed in which the firearm collision interpolates to a new value in the curve" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUseFirearmCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFirearmCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDiameter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopAimingDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseLocationCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseRotationCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseLocationInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseRotationInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGFirearmCollisionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_bUseFirearmCollision_SetBit(void* Obj)
{
	((FSKGFirearmCollisionSettings*)Obj)->bUseFirearmCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_bUseFirearmCollision = { "bUseFirearmCollision", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGFirearmCollisionSettings), &Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_bUseFirearmCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFirearmCollision_MetaData), NewProp_bUseFirearmCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_TraceDiameter = { "TraceDiameter", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionSettings, TraceDiameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDiameter_MetaData), NewProp_TraceDiameter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_StopAimingDistance = { "StopAimingDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionSettings, StopAimingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopAimingDistance_MetaData), NewProp_StopAimingDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseLocationCurve = { "PoseLocationCurve", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionSettings, PoseLocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseLocationCurve_MetaData), NewProp_PoseLocationCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseRotationCurve = { "PoseRotationCurve", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionSettings, PoseRotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseRotationCurve_MetaData), NewProp_PoseRotationCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseScale = { "PoseScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionSettings, PoseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseScale_MetaData), NewProp_PoseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseLocationInterpSpeed = { "PoseLocationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionSettings, PoseLocationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseLocationInterpSpeed_MetaData), NewProp_PoseLocationInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseRotationInterpSpeed = { "PoseRotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionSettings, PoseRotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseRotationInterpSpeed_MetaData), NewProp_PoseRotationInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_bUseFirearmCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_TraceDiameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_StopAimingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseLocationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseRotationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseLocationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewProp_PoseRotationInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	nullptr,
	&NewStructOps,
	"SKGFirearmCollisionSettings",
	Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::PropPointers),
	sizeof(FSKGFirearmCollisionSettings),
	alignof(FSKGFirearmCollisionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirearmCollisionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGFirearmCollisionSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGFirearmCollisionSettings.InnerSingleton;
}
// End ScriptStruct FSKGFirearmCollisionSettings

// Begin Delegate FOnProceduralAnimComponentsUpdated
struct Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGShooterFramework, nullptr, "OnProceduralAnimComponentsUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnProceduralAnimComponentsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnProceduralAnimComponentsUpdated)
{
	OnProceduralAnimComponentsUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnProceduralAnimComponentsUpdated

// Begin Delegate FOnMuzzleComponentUpdated
struct Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGShooterFramework, nullptr, "OnMuzzleComponentUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMuzzleComponentUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMuzzleComponentUpdated)
{
	OnMuzzleComponentUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMuzzleComponentUpdated

// Begin Delegate FOnHeld
struct Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGShooterFramework, nullptr, "OnHeld__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHeld_DelegateWrapper(const FMulticastScriptDelegate& OnHeld)
{
	OnHeld.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHeld

// Begin Delegate FOnAimingDeviceCycled
struct Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics
{
	struct _Script_SKGShooterFramework_eventOnAimingDeviceCycled_Parms
	{
		USKGProceduralAnimComponent* ProceduralAnimComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralAnimComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralAnimComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::NewProp_ProceduralAnimComponent = { "ProceduralAnimComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGShooterFramework_eventOnAimingDeviceCycled_Parms, ProceduralAnimComponent), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralAnimComponent_MetaData), NewProp_ProceduralAnimComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::NewProp_ProceduralAnimComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGShooterFramework, nullptr, "OnAimingDeviceCycled__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::_Script_SKGShooterFramework_eventOnAimingDeviceCycled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::_Script_SKGShooterFramework_eventOnAimingDeviceCycled_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAimingDeviceCycled_DelegateWrapper(const FMulticastScriptDelegate& OnAimingDeviceCycled, USKGProceduralAnimComponent* ProceduralAnimComponent)
{
	struct _Script_SKGShooterFramework_eventOnAimingDeviceCycled_Parms
	{
		USKGProceduralAnimComponent* ProceduralAnimComponent;
	};
	_Script_SKGShooterFramework_eventOnAimingDeviceCycled_Parms Parms;
	Parms.ProceduralAnimComponent=ProceduralAnimComponent;
	OnAimingDeviceCycled.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAimingDeviceCycled

// Begin Delegate FOnFirearmStatsChanged
struct Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics
{
	struct _Script_SKGShooterFramework_eventOnFirearmStatsChanged_Parms
	{
		FSKGFirearmStats FirearmStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirearmStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::NewProp_FirearmStats = { "FirearmStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGShooterFramework_eventOnFirearmStatsChanged_Parms, FirearmStats), Z_Construct_UScriptStruct_FSKGFirearmStats, METADATA_PARAMS(0, nullptr) }; // 1871522734
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::NewProp_FirearmStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGShooterFramework, nullptr, "OnFirearmStatsChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::_Script_SKGShooterFramework_eventOnFirearmStatsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::_Script_SKGShooterFramework_eventOnFirearmStatsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFirearmStatsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFirearmStatsChanged, FSKGFirearmStats FirearmStats)
{
	struct _Script_SKGShooterFramework_eventOnFirearmStatsChanged_Parms
	{
		FSKGFirearmStats FirearmStats;
	};
	_Script_SKGShooterFramework_eventOnFirearmStatsChanged_Parms Parms;
	Parms.FirearmStats=FirearmStats;
	OnFirearmStatsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFirearmStatsChanged

// Begin Class USKGFirearmComponent Function AddFirearmAttachmentStats
struct SKGFirearmComponent_eventAddFirearmAttachmentStats_Parms
{
	USKGFirearmAttachmentStatComponent* StatComponent;
};
static FName NAME_USKGFirearmComponent_AddFirearmAttachmentStats = FName(TEXT("AddFirearmAttachmentStats"));
void USKGFirearmComponent::AddFirearmAttachmentStats(USKGFirearmAttachmentStatComponent* StatComponent)
{
	SKGFirearmComponent_eventAddFirearmAttachmentStats_Parms Parms;
	Parms.StatComponent=StatComponent;
	ProcessEvent(FindFunctionChecked(NAME_USKGFirearmComponent_AddFirearmAttachmentStats),&Parms);
}
struct Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Stats" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::NewProp_StatComponent = { "StatComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventAddFirearmAttachmentStats_Parms, StatComponent), Z_Construct_UClass_USKGFirearmAttachmentStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatComponent_MetaData), NewProp_StatComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::NewProp_StatComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "AddFirearmAttachmentStats", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::PropPointers), sizeof(SKGFirearmComponent_eventAddFirearmAttachmentStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(SKGFirearmComponent_eventAddFirearmAttachmentStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execAddFirearmAttachmentStats)
{
	P_GET_OBJECT(USKGFirearmAttachmentStatComponent,Z_Param_StatComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFirearmAttachmentStats_Implementation(Z_Param_StatComponent);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function AddFirearmAttachmentStats

// Begin Class USKGFirearmComponent Function CalculateProceduralValues
static FName NAME_USKGFirearmComponent_CalculateProceduralValues = FName(TEXT("CalculateProceduralValues"));
void USKGFirearmComponent::CalculateProceduralValues()
{
	ProcessEvent(FindFunctionChecked(NAME_USKGFirearmComponent_CalculateProceduralValues),NULL);
}
struct Z_Construct_UFunction_USKGFirearmComponent_CalculateProceduralValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Stats" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_CalculateProceduralValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "CalculateProceduralValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_CalculateProceduralValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_CalculateProceduralValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_CalculateProceduralValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_CalculateProceduralValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execCalculateProceduralValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateProceduralValues_Implementation();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function CalculateProceduralValues

// Begin Class USKGFirearmComponent Function CycleAimingDevice
struct Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics
{
	struct SKGFirearmComponent_eventCycleAimingDevice_Parms
	{
		bool bIsAiming;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((SKGFirearmComponent_eventCycleAimingDevice_Parms*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGFirearmComponent_eventCycleAimingDevice_Parms), &Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGFirearmComponent_eventCycleAimingDevice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGFirearmComponent_eventCycleAimingDevice_Parms), &Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::NewProp_bIsAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "CycleAimingDevice", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::SKGFirearmComponent_eventCycleAimingDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::SKGFirearmComponent_eventCycleAimingDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execCycleAimingDevice)
{
	P_GET_UBOOL(Z_Param_bIsAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CycleAimingDevice(Z_Param_bIsAiming);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function CycleAimingDevice

// Begin Class USKGFirearmComponent Function GetAimSocketWorldTransform
struct Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics
{
	struct SKGFirearmComponent_eventGetAimSocketWorldTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetAimSocketWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetAimSocketWorldTransform", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::SKGFirearmComponent_eventGetAimSocketWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::SKGFirearmComponent_eventGetAimSocketWorldTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetAimSocketWorldTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetAimSocketWorldTransform();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetAimSocketWorldTransform

// Begin Class USKGFirearmComponent Function GetAttachmentManagerComponent
struct Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics
{
	struct SKGFirearmComponent_eventGetAttachmentManagerComponent_Parms
	{
		const USKGAttachmentManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetAttachmentManagerComponent_Parms, ReturnValue), Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetAttachmentManagerComponent", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::SKGFirearmComponent_eventGetAttachmentManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::SKGFirearmComponent_eventGetAttachmentManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetAttachmentManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const USKGAttachmentManagerComponent**)Z_Param__Result=P_THIS->GetAttachmentManagerComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetAttachmentManagerComponent

// Begin Class USKGFirearmComponent Function GetAttachmentStatComponents
struct Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics
{
	struct SKGFirearmComponent_eventGetAttachmentStatComponents_Parms
	{
		TArray<USKGFirearmAttachmentStatComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGFirearmAttachmentStatComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetAttachmentStatComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetAttachmentStatComponents", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::SKGFirearmComponent_eventGetAttachmentStatComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::SKGFirearmComponent_eventGetAttachmentStatComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetAttachmentStatComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USKGFirearmAttachmentStatComponent*>*)Z_Param__Result=P_THIS->GetAttachmentStatComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetAttachmentStatComponents

// Begin Class USKGFirearmComponent Function GetCurrentMuzzleComponent
struct Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics
{
	struct SKGFirearmComponent_eventGetCurrentMuzzleComponent_Parms
	{
		USKGMuzzleComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetCurrentMuzzleComponent_Parms, ReturnValue), Z_Construct_UClass_USKGMuzzleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetCurrentMuzzleComponent", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::SKGFirearmComponent_eventGetCurrentMuzzleComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::SKGFirearmComponent_eventGetCurrentMuzzleComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetCurrentMuzzleComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USKGMuzzleComponent**)Z_Param__Result=P_THIS->GetCurrentMuzzleComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetCurrentMuzzleComponent

// Begin Class USKGFirearmComponent Function GetCurrentOffHandIKComponent
struct Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics
{
	struct SKGFirearmComponent_eventGetCurrentOffHandIKComponent_Parms
	{
		USKGOffHandIKComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetCurrentOffHandIKComponent_Parms, ReturnValue), Z_Construct_UClass_USKGOffHandIKComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetCurrentOffHandIKComponent", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::SKGFirearmComponent_eventGetCurrentOffHandIKComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::SKGFirearmComponent_eventGetCurrentOffHandIKComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetCurrentOffHandIKComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USKGOffHandIKComponent**)Z_Param__Result=P_THIS->GetCurrentOffHandIKComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetCurrentOffHandIKComponent

// Begin Class USKGFirearmComponent Function GetCurrentOpticComponent
struct Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics
{
	struct SKGFirearmComponent_eventGetCurrentOpticComponent_Parms
	{
		USKGOpticComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetCurrentOpticComponent_Parms, ReturnValue), Z_Construct_UClass_USKGOpticComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetCurrentOpticComponent", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::SKGFirearmComponent_eventGetCurrentOpticComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::SKGFirearmComponent_eventGetCurrentOpticComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetCurrentOpticComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USKGOpticComponent**)Z_Param__Result=P_THIS->GetCurrentOpticComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetCurrentOpticComponent

// Begin Class USKGFirearmComponent Function GetCurrentProceduralAnimComponent
struct Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics
{
	struct SKGFirearmComponent_eventGetCurrentProceduralAnimComponent_Parms
	{
		USKGProceduralAnimComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetCurrentProceduralAnimComponent_Parms, ReturnValue), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetCurrentProceduralAnimComponent", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::SKGFirearmComponent_eventGetCurrentProceduralAnimComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::SKGFirearmComponent_eventGetCurrentProceduralAnimComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetCurrentProceduralAnimComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USKGProceduralAnimComponent**)Z_Param__Result=P_THIS->GetCurrentProceduralAnimComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetCurrentProceduralAnimComponent

// Begin Class USKGFirearmComponent Function GetCurrentStockComponent
struct Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics
{
	struct SKGFirearmComponent_eventGetCurrentStockComponent_Parms
	{
		USKGStockComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetCurrentStockComponent_Parms, ReturnValue), Z_Construct_UClass_USKGStockComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetCurrentStockComponent", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::SKGFirearmComponent_eventGetCurrentStockComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::SKGFirearmComponent_eventGetCurrentStockComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetCurrentStockComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USKGStockComponent**)Z_Param__Result=P_THIS->GetCurrentStockComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetCurrentStockComponent

// Begin Class USKGFirearmComponent Function GetFirearmStats
struct Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics
{
	struct SKGFirearmComponent_eventGetFirearmStats_Parms
	{
		FSKGFirearmStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetFirearmStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1871522734
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetFirearmStats", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::SKGFirearmComponent_eventGetFirearmStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::SKGFirearmComponent_eventGetFirearmStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetFirearmStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSKGFirearmStats*)Z_Param__Result=P_THIS->GetFirearmStats();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetFirearmStats

// Begin Class USKGFirearmComponent Function GetLightLaserComponents
struct Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics
{
	struct SKGFirearmComponent_eventGetLightLaserComponents_Parms
	{
		TArray<USKGLightLaserComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGLightLaserComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetLightLaserComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetLightLaserComponents", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::SKGFirearmComponent_eventGetLightLaserComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::SKGFirearmComponent_eventGetLightLaserComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetLightLaserComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USKGLightLaserComponent*>*)Z_Param__Result=P_THIS->GetLightLaserComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetLightLaserComponents

// Begin Class USKGFirearmComponent Function GetMuzzleComponents
struct Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics
{
	struct SKGFirearmComponent_eventGetMuzzleComponents_Parms
	{
		TArray<USKGMuzzleComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGMuzzleComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetMuzzleComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetMuzzleComponents", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::SKGFirearmComponent_eventGetMuzzleComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::SKGFirearmComponent_eventGetMuzzleComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetMuzzleComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USKGMuzzleComponent*>*)Z_Param__Result=P_THIS->GetMuzzleComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetMuzzleComponents

// Begin Class USKGFirearmComponent Function GetMuzzleProjectileTransform
struct Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics
{
	struct SKGFirearmComponent_eventGetMuzzleProjectileTransform_Parms
	{
		float ZeroDistanceMeters;
		float MOA;
		FSKGMuzzleTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Muzzle" },
		{ "CPP_Default_MOA", "1.000000" },
		{ "CPP_Default_ZeroDistanceMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZeroDistanceMeters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MOA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::NewProp_ZeroDistanceMeters = { "ZeroDistanceMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetMuzzleProjectileTransform_Parms, ZeroDistanceMeters), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::NewProp_MOA = { "MOA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetMuzzleProjectileTransform_Parms, MOA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetMuzzleProjectileTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGMuzzleTransform, METADATA_PARAMS(0, nullptr) }; // 1931557247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::NewProp_ZeroDistanceMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::NewProp_MOA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetMuzzleProjectileTransform", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::SKGFirearmComponent_eventGetMuzzleProjectileTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::SKGFirearmComponent_eventGetMuzzleProjectileTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetMuzzleProjectileTransform)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZeroDistanceMeters);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MOA);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSKGMuzzleTransform*)Z_Param__Result=P_THIS->GetMuzzleProjectileTransform(Z_Param_ZeroDistanceMeters,Z_Param_MOA);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetMuzzleProjectileTransform

// Begin Class USKGFirearmComponent Function GetMuzzleProjectileTransforms
struct Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics
{
	struct SKGFirearmComponent_eventGetMuzzleProjectileTransforms_Parms
	{
		float ZeroDistanceMeters;
		float MOA;
		int32 ProjectileCount;
		TArray<FSKGMuzzleTransform> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Muzzle" },
		{ "CPP_Default_MOA", "1.000000" },
		{ "CPP_Default_ProjectileCount", "8" },
		{ "CPP_Default_ZeroDistanceMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZeroDistanceMeters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MOA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectileCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_ZeroDistanceMeters = { "ZeroDistanceMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetMuzzleProjectileTransforms_Parms, ZeroDistanceMeters), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_MOA = { "MOA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetMuzzleProjectileTransforms_Parms, MOA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_ProjectileCount = { "ProjectileCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetMuzzleProjectileTransforms_Parms, ProjectileCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileCount_MetaData), NewProp_ProjectileCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGMuzzleTransform, METADATA_PARAMS(0, nullptr) }; // 1931557247
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetMuzzleProjectileTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1931557247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_ZeroDistanceMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_MOA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_ProjectileCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetMuzzleProjectileTransforms", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::SKGFirearmComponent_eventGetMuzzleProjectileTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::SKGFirearmComponent_eventGetMuzzleProjectileTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetMuzzleProjectileTransforms)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZeroDistanceMeters);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MOA);
	P_GET_PROPERTY(FIntProperty,Z_Param_ProjectileCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSKGMuzzleTransform>*)Z_Param__Result=P_THIS->GetMuzzleProjectileTransforms(Z_Param_ZeroDistanceMeters,Z_Param_MOA,Z_Param_ProjectileCount);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetMuzzleProjectileTransforms

// Begin Class USKGFirearmComponent Function GetMuzzleTransform
struct Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics
{
	struct SKGFirearmComponent_eventGetMuzzleTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Muzzle" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetMuzzleTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetMuzzleTransform", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::SKGFirearmComponent_eventGetMuzzleTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::SKGFirearmComponent_eventGetMuzzleTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetMuzzleTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetMuzzleTransform();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetMuzzleTransform

// Begin Class USKGFirearmComponent Function GetOffHandIKComponents
struct Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics
{
	struct SKGFirearmComponent_eventGetOffHandIKComponents_Parms
	{
		TArray<USKGOffHandIKComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGOffHandIKComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetOffHandIKComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetOffHandIKComponents", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::SKGFirearmComponent_eventGetOffHandIKComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::SKGFirearmComponent_eventGetOffHandIKComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetOffHandIKComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USKGOffHandIKComponent*>*)Z_Param__Result=P_THIS->GetOffHandIKComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetOffHandIKComponents

// Begin Class USKGFirearmComponent Function GetPose
struct Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics
{
	struct SKGFirearmComponent_eventGetPose_Parms
	{
		FGameplayTag Tag;
		FSKGToFromCurveSettings PoseData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Pose" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetPose_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::NewProp_PoseData = { "PoseData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetPose_Parms, PoseData), Z_Construct_UScriptStruct_FSKGToFromCurveSettings, METADATA_PARAMS(0, nullptr) }; // 965583391
void Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGFirearmComponent_eventGetPose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGFirearmComponent_eventGetPose_Parms), &Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::NewProp_PoseData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetPose", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::SKGFirearmComponent_eventGetPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::SKGFirearmComponent_eventGetPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetPose)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_STRUCT_REF(FSKGToFromCurveSettings,Z_Param_Out_PoseData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPose(Z_Param_Tag,Z_Param_Out_PoseData);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetPose

// Begin Class USKGFirearmComponent Function GetProceduralAnimComponents
struct Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics
{
	struct SKGFirearmComponent_eventGetProceduralAnimComponents_Parms
	{
		TArray<USKGProceduralAnimComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetProceduralAnimComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetProceduralAnimComponents", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::SKGFirearmComponent_eventGetProceduralAnimComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::SKGFirearmComponent_eventGetProceduralAnimComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetProceduralAnimComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USKGProceduralAnimComponent*>*)Z_Param__Result=P_THIS->GetProceduralAnimComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetProceduralAnimComponents

// Begin Class USKGFirearmComponent Function GetProceduralStats
struct Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics
{
	struct SKGFirearmComponent_eventGetProceduralStats_Parms
	{
		FSKGProceduralStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|ProceduralStats" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventGetProceduralStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGProceduralStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1574331741
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "GetProceduralStats", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::SKGFirearmComponent_eventGetProceduralStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::SKGFirearmComponent_eventGetProceduralStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execGetProceduralStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSKGProceduralStats*)Z_Param__Result=P_THIS->GetProceduralStats();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function GetProceduralStats

// Begin Class USKGFirearmComponent Function IsPointAiming
struct Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics
{
	struct SKGFirearmComponent_eventIsPointAiming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGFirearmComponent_eventIsPointAiming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGFirearmComponent_eventIsPointAiming_Parms), &Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "IsPointAiming", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::SKGFirearmComponent_eventIsPointAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::SKGFirearmComponent_eventIsPointAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execIsPointAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPointAiming();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function IsPointAiming

// Begin Class USKGFirearmComponent Function OnAttachmentAdded
struct Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics
{
	struct SKGFirearmComponent_eventOnAttachmentAdded_Parms
	{
		AActor* Attachment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventOnAttachmentAdded_Parms, Attachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::NewProp_Attachment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnAttachmentAdded", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::SKGFirearmComponent_eventOnAttachmentAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::SKGFirearmComponent_eventOnAttachmentAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnAttachmentAdded)
{
	P_GET_OBJECT(AActor,Z_Param_Attachment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttachmentAdded(Z_Param_Attachment);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnAttachmentAdded

// Begin Class USKGFirearmComponent Function OnAttachmentRemoved
struct Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics
{
	struct SKGFirearmComponent_eventOnAttachmentRemoved_Parms
	{
		AActor* Attachment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventOnAttachmentRemoved_Parms, Attachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::NewProp_Attachment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnAttachmentRemoved", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::SKGFirearmComponent_eventOnAttachmentRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::SKGFirearmComponent_eventOnAttachmentRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnAttachmentRemoved)
{
	P_GET_OBJECT(AActor,Z_Param_Attachment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttachmentRemoved(Z_Param_Attachment);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnAttachmentRemoved

// Begin Class USKGFirearmComponent Function OnRep_AttachmentStatComponents
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_AttachmentStatComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_AttachmentStatComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_AttachmentStatComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_AttachmentStatComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_AttachmentStatComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_AttachmentStatComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_AttachmentStatComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_AttachmentStatComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttachmentStatComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_AttachmentStatComponents

// Begin Class USKGFirearmComponent Function OnRep_CurrentMuzzleComponent
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentMuzzleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentMuzzleComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_CurrentMuzzleComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentMuzzleComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentMuzzleComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentMuzzleComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentMuzzleComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_CurrentMuzzleComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentMuzzleComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_CurrentMuzzleComponent

// Begin Class USKGFirearmComponent Function OnRep_CurrentOffHandIKComponent
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOffHandIKComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOffHandIKComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_CurrentOffHandIKComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOffHandIKComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOffHandIKComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOffHandIKComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOffHandIKComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_CurrentOffHandIKComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentOffHandIKComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_CurrentOffHandIKComponent

// Begin Class USKGFirearmComponent Function OnRep_CurrentOpticComponent
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOpticComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOpticComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_CurrentOpticComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOpticComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOpticComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOpticComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOpticComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_CurrentOpticComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentOpticComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_CurrentOpticComponent

// Begin Class USKGFirearmComponent Function OnRep_CurrentProceduralAnimComponent
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentProceduralAnimComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentProceduralAnimComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_CurrentProceduralAnimComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentProceduralAnimComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentProceduralAnimComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentProceduralAnimComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentProceduralAnimComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_CurrentProceduralAnimComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentProceduralAnimComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_CurrentProceduralAnimComponent

// Begin Class USKGFirearmComponent Function OnRep_CurrentStockComponent
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentStockComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentStockComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_CurrentStockComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentStockComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentStockComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentStockComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentStockComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_CurrentStockComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentStockComponent();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_CurrentStockComponent

// Begin Class USKGFirearmComponent Function OnRep_FirearmStats
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_FirearmStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_FirearmStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_FirearmStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_FirearmStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_FirearmStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_FirearmStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_FirearmStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_FirearmStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FirearmStats();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_FirearmStats

// Begin Class USKGFirearmComponent Function OnRep_LightLaserComponents
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_LightLaserComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_LightLaserComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_LightLaserComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_LightLaserComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_LightLaserComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_LightLaserComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_LightLaserComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_LightLaserComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LightLaserComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_LightLaserComponents

// Begin Class USKGFirearmComponent Function OnRep_MuzzleComponents
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_MuzzleComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_MuzzleComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_MuzzleComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_MuzzleComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_MuzzleComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_MuzzleComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_MuzzleComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_MuzzleComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MuzzleComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_MuzzleComponents

// Begin Class USKGFirearmComponent Function OnRep_OffHandIKComponents
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_OffHandIKComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_OffHandIKComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_OffHandIKComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_OffHandIKComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_OffHandIKComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_OffHandIKComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_OffHandIKComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_OffHandIKComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_OffHandIKComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_OffHandIKComponents

// Begin Class USKGFirearmComponent Function OnRep_ProceduralAnimComponents
struct Z_Construct_UFunction_USKGFirearmComponent_OnRep_ProceduralAnimComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnRep_ProceduralAnimComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnRep_ProceduralAnimComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnRep_ProceduralAnimComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnRep_ProceduralAnimComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnRep_ProceduralAnimComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnRep_ProceduralAnimComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnRep_ProceduralAnimComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ProceduralAnimComponents();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnRep_ProceduralAnimComponents

// Begin Class USKGFirearmComponent Function OnStockOffsetChanged
struct Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics
{
	struct SKGFirearmComponent_eventOnStockOffsetChanged_Parms
	{
		float Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventOnStockOffsetChanged_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "OnStockOffsetChanged", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::SKGFirearmComponent_eventOnStockOffsetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::SKGFirearmComponent_eventOnStockOffsetChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execOnStockOffsetChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStockOffsetChanged(Z_Param_Offset);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function OnStockOffsetChanged

// Begin Class USKGFirearmComponent Function RemoveFirearmAttachmentStats
struct SKGFirearmComponent_eventRemoveFirearmAttachmentStats_Parms
{
	USKGFirearmAttachmentStatComponent* StatComponent;
};
static FName NAME_USKGFirearmComponent_RemoveFirearmAttachmentStats = FName(TEXT("RemoveFirearmAttachmentStats"));
void USKGFirearmComponent::RemoveFirearmAttachmentStats(USKGFirearmAttachmentStatComponent* StatComponent)
{
	SKGFirearmComponent_eventRemoveFirearmAttachmentStats_Parms Parms;
	Parms.StatComponent=StatComponent;
	ProcessEvent(FindFunctionChecked(NAME_USKGFirearmComponent_RemoveFirearmAttachmentStats),&Parms);
}
struct Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Stats" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::NewProp_StatComponent = { "StatComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventRemoveFirearmAttachmentStats_Parms, StatComponent), Z_Construct_UClass_USKGFirearmAttachmentStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatComponent_MetaData), NewProp_StatComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::NewProp_StatComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "RemoveFirearmAttachmentStats", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::PropPointers), sizeof(SKGFirearmComponent_eventRemoveFirearmAttachmentStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(SKGFirearmComponent_eventRemoveFirearmAttachmentStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execRemoveFirearmAttachmentStats)
{
	P_GET_OBJECT(USKGFirearmAttachmentStatComponent,Z_Param_StatComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFirearmAttachmentStats_Implementation(Z_Param_StatComponent);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function RemoveFirearmAttachmentStats

// Begin Class USKGFirearmComponent Function Server_SetAimingDevice
struct SKGFirearmComponent_eventServer_SetAimingDevice_Parms
{
	USKGProceduralAnimComponent* AnimComponent;
};
static FName NAME_USKGFirearmComponent_Server_SetAimingDevice = FName(TEXT("Server_SetAimingDevice"));
void USKGFirearmComponent::Server_SetAimingDevice(USKGProceduralAnimComponent* AnimComponent)
{
	SKGFirearmComponent_eventServer_SetAimingDevice_Parms Parms;
	Parms.AnimComponent=AnimComponent;
	ProcessEvent(FindFunctionChecked(NAME_USKGFirearmComponent_Server_SetAimingDevice),&Parms);
}
struct Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::NewProp_AnimComponent = { "AnimComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventServer_SetAimingDevice_Parms, AnimComponent), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimComponent_MetaData), NewProp_AnimComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::NewProp_AnimComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "Server_SetAimingDevice", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::PropPointers), sizeof(SKGFirearmComponent_eventServer_SetAimingDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(SKGFirearmComponent_eventServer_SetAimingDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execServer_SetAimingDevice)
{
	P_GET_OBJECT(USKGProceduralAnimComponent,Z_Param_AnimComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SetAimingDevice_Validate(Z_Param_AnimComponent))
	{
		RPC_ValidateFailed(TEXT("Server_SetAimingDevice_Validate"));
		return;
	}
	P_THIS->Server_SetAimingDevice_Implementation(Z_Param_AnimComponent);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function Server_SetAimingDevice

// Begin Class USKGFirearmComponent Function SetFirearmStats
struct Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics
{
	struct SKGFirearmComponent_eventSetFirearmStats_Parms
	{
		FSKGFirearmStats Stats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|FirearmStats" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventSetFirearmStats_Parms, Stats), Z_Construct_UScriptStruct_FSKGFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 1871522734
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "SetFirearmStats", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::SKGFirearmComponent_eventSetFirearmStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::SKGFirearmComponent_eventSetFirearmStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execSetFirearmStats)
{
	P_GET_STRUCT_REF(FSKGFirearmStats,Z_Param_Out_Stats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFirearmStats(Z_Param_Out_Stats);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function SetFirearmStats

// Begin Class USKGFirearmComponent Function SetProceduralStats
struct Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics
{
	struct SKGFirearmComponent_eventSetProceduralStats_Parms
	{
		FSKGProceduralStats ProceduralStatsData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|ProceduralStats" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralStatsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralStatsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::NewProp_ProceduralStatsData = { "ProceduralStatsData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventSetProceduralStats_Parms, ProceduralStatsData), Z_Construct_UScriptStruct_FSKGProceduralStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralStatsData_MetaData), NewProp_ProceduralStatsData_MetaData) }; // 1574331741
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::NewProp_ProceduralStatsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "SetProceduralStats", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::SKGFirearmComponent_eventSetProceduralStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::SKGFirearmComponent_eventSetProceduralStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execSetProceduralStats)
{
	P_GET_STRUCT_REF(FSKGProceduralStats,Z_Param_Out_ProceduralStatsData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProceduralStats(Z_Param_Out_ProceduralStatsData);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function SetProceduralStats

// Begin Class USKGFirearmComponent Function ShotPerformed
struct Z_Construct_UFunction_USKGFirearmComponent_ShotPerformed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGMuzzle|MuzzleTemperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// To be called when you fire your firearm to work with muzzle temperature\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To be called when you fire your firearm to work with muzzle temperature" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_ShotPerformed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "ShotPerformed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_ShotPerformed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_ShotPerformed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGFirearmComponent_ShotPerformed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_ShotPerformed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execShotPerformed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShotPerformed();
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function ShotPerformed

// Begin Class USKGFirearmComponent Function StartPointAiming
struct Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics
{
	struct SKGFirearmComponent_eventStartPointAiming_Parms
	{
		bool bRightHandDominant;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRightHandDominant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightHandDominant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::NewProp_bRightHandDominant_SetBit(void* Obj)
{
	((SKGFirearmComponent_eventStartPointAiming_Parms*)Obj)->bRightHandDominant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::NewProp_bRightHandDominant = { "bRightHandDominant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGFirearmComponent_eventStartPointAiming_Parms), &Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::NewProp_bRightHandDominant_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::NewProp_bRightHandDominant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "StartPointAiming", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::SKGFirearmComponent_eventStartPointAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::SKGFirearmComponent_eventStartPointAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execStartPointAiming)
{
	P_GET_UBOOL(Z_Param_bRightHandDominant);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPointAiming(Z_Param_bRightHandDominant);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function StartPointAiming

// Begin Class USKGFirearmComponent Function StopPointAiming
struct Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics
{
	struct SKGFirearmComponent_eventStopPointAiming_Parms
	{
		bool bIsAiming;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((SKGFirearmComponent_eventStopPointAiming_Parms*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGFirearmComponent_eventStopPointAiming_Parms), &Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::NewProp_bIsAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "StopPointAiming", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::SKGFirearmComponent_eventStopPointAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::SKGFirearmComponent_eventStopPointAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execStopPointAiming)
{
	P_GET_UBOOL(Z_Param_bIsAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPointAiming(Z_Param_bIsAiming);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function StopPointAiming

// Begin Class USKGFirearmComponent Function ZeroOpticsForZeroAtLocation
struct Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics
{
	struct SKGFirearmComponent_eventZeroOpticsForZeroAtLocation_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGFirearmComponent|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmComponent_eventZeroOpticsForZeroAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmComponent, nullptr, "ZeroOpticsForZeroAtLocation", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::SKGFirearmComponent_eventZeroOpticsForZeroAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::SKGFirearmComponent_eventZeroOpticsForZeroAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmComponent::execZeroOpticsForZeroAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ZeroOpticsForZeroAtLocation(Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class USKGFirearmComponent Function ZeroOpticsForZeroAtLocation

// Begin Class USKGFirearmComponent
void USKGFirearmComponent::StaticRegisterNativesUSKGFirearmComponent()
{
	UClass* Class = USKGFirearmComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFirearmAttachmentStats", &USKGFirearmComponent::execAddFirearmAttachmentStats },
		{ "CalculateProceduralValues", &USKGFirearmComponent::execCalculateProceduralValues },
		{ "CycleAimingDevice", &USKGFirearmComponent::execCycleAimingDevice },
		{ "GetAimSocketWorldTransform", &USKGFirearmComponent::execGetAimSocketWorldTransform },
		{ "GetAttachmentManagerComponent", &USKGFirearmComponent::execGetAttachmentManagerComponent },
		{ "GetAttachmentStatComponents", &USKGFirearmComponent::execGetAttachmentStatComponents },
		{ "GetCurrentMuzzleComponent", &USKGFirearmComponent::execGetCurrentMuzzleComponent },
		{ "GetCurrentOffHandIKComponent", &USKGFirearmComponent::execGetCurrentOffHandIKComponent },
		{ "GetCurrentOpticComponent", &USKGFirearmComponent::execGetCurrentOpticComponent },
		{ "GetCurrentProceduralAnimComponent", &USKGFirearmComponent::execGetCurrentProceduralAnimComponent },
		{ "GetCurrentStockComponent", &USKGFirearmComponent::execGetCurrentStockComponent },
		{ "GetFirearmStats", &USKGFirearmComponent::execGetFirearmStats },
		{ "GetLightLaserComponents", &USKGFirearmComponent::execGetLightLaserComponents },
		{ "GetMuzzleComponents", &USKGFirearmComponent::execGetMuzzleComponents },
		{ "GetMuzzleProjectileTransform", &USKGFirearmComponent::execGetMuzzleProjectileTransform },
		{ "GetMuzzleProjectileTransforms", &USKGFirearmComponent::execGetMuzzleProjectileTransforms },
		{ "GetMuzzleTransform", &USKGFirearmComponent::execGetMuzzleTransform },
		{ "GetOffHandIKComponents", &USKGFirearmComponent::execGetOffHandIKComponents },
		{ "GetPose", &USKGFirearmComponent::execGetPose },
		{ "GetProceduralAnimComponents", &USKGFirearmComponent::execGetProceduralAnimComponents },
		{ "GetProceduralStats", &USKGFirearmComponent::execGetProceduralStats },
		{ "IsPointAiming", &USKGFirearmComponent::execIsPointAiming },
		{ "OnAttachmentAdded", &USKGFirearmComponent::execOnAttachmentAdded },
		{ "OnAttachmentRemoved", &USKGFirearmComponent::execOnAttachmentRemoved },
		{ "OnRep_AttachmentStatComponents", &USKGFirearmComponent::execOnRep_AttachmentStatComponents },
		{ "OnRep_CurrentMuzzleComponent", &USKGFirearmComponent::execOnRep_CurrentMuzzleComponent },
		{ "OnRep_CurrentOffHandIKComponent", &USKGFirearmComponent::execOnRep_CurrentOffHandIKComponent },
		{ "OnRep_CurrentOpticComponent", &USKGFirearmComponent::execOnRep_CurrentOpticComponent },
		{ "OnRep_CurrentProceduralAnimComponent", &USKGFirearmComponent::execOnRep_CurrentProceduralAnimComponent },
		{ "OnRep_CurrentStockComponent", &USKGFirearmComponent::execOnRep_CurrentStockComponent },
		{ "OnRep_FirearmStats", &USKGFirearmComponent::execOnRep_FirearmStats },
		{ "OnRep_LightLaserComponents", &USKGFirearmComponent::execOnRep_LightLaserComponents },
		{ "OnRep_MuzzleComponents", &USKGFirearmComponent::execOnRep_MuzzleComponents },
		{ "OnRep_OffHandIKComponents", &USKGFirearmComponent::execOnRep_OffHandIKComponents },
		{ "OnRep_ProceduralAnimComponents", &USKGFirearmComponent::execOnRep_ProceduralAnimComponents },
		{ "OnStockOffsetChanged", &USKGFirearmComponent::execOnStockOffsetChanged },
		{ "RemoveFirearmAttachmentStats", &USKGFirearmComponent::execRemoveFirearmAttachmentStats },
		{ "Server_SetAimingDevice", &USKGFirearmComponent::execServer_SetAimingDevice },
		{ "SetFirearmStats", &USKGFirearmComponent::execSetFirearmStats },
		{ "SetProceduralStats", &USKGFirearmComponent::execSetProceduralStats },
		{ "ShotPerformed", &USKGFirearmComponent::execShotPerformed },
		{ "StartPointAiming", &USKGFirearmComponent::execStartPointAiming },
		{ "StopPointAiming", &USKGFirearmComponent::execStopPointAiming },
		{ "ZeroOpticsForZeroAtLocation", &USKGFirearmComponent::execZeroOpticsForZeroAtLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGFirearmComponent);
UClass* Z_Construct_UClass_USKGFirearmComponent_NoRegister()
{
	return USKGFirearmComponent::StaticClass();
}
struct Z_Construct_UClass_USKGFirearmComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGFirearmComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmMeshComponentName_MetaData[] = {
		{ "Category", "SKGFirearmComponent|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the mesh to be used/considered the firearm\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the mesh to be used/considered the firearm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentManagerComponentName_MetaData[] = {
		{ "Category", "SKGFirearmComponent|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the MANDATORY attachment manager added to this parent actor class\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the MANDATORY attachment manager added to this parent actor class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmStatsDataAsset_MetaData[] = {
		{ "Category", "SKGFirearmComponent|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGFirearmComponent|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmCollisionSettings_MetaData[] = {
		{ "Category", "SKGFirearmComponent|FirearmCollision" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentManager_MetaData[] = {
		{ "BlueprintGetter", "GetAttachmentManagerComponent" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmStats_MetaData[] = {
		{ "BlueprintGetter", "GetFirearmStats" },
		{ "Category", "SKGFirearmComponent|FirearmStats" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmProceduralAnimComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Consider removing and making Index 0 reserved for firearm specific components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consider removing and making Index 0 reserved for firearm specific components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmOffHandIKComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmMuzzleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralAnimComponents_MetaData[] = {
		{ "BlueprintGetter", "GetProceduralAnimComponents" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKComponents_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKComponents" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightLaserComponents_MetaData[] = {
		{ "BlueprintGetter", "GetLightLaserComponents" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleComponents_MetaData[] = {
		{ "BlueprintGetter", "GetMuzzleComponents" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentStatComponents_MetaData[] = {
		{ "BlueprintGetter", "GetAttachmentStatComponents" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProceduralAnimComponent_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentProceduralAnimComponent" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOffHandIKComponent_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentOffHandIKComponent" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMuzzleComponent_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentMuzzleComponent" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOpticComponent_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentOpticComponent" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStockComponent_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentStockComponent" },
		{ "Category", "SKGFirearmComponent|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeforePointAimProceduralAnimComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAimingDeviceCycled_MetaData[] = {
		{ "Category", "SKGFirearmComponent|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProceduralAnimComponentsUpdated_MetaData[] = {
		{ "Category", "SKGFirearmComponent|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMuzzleComponentUpdated_MetaData[] = {
		{ "Category", "SKGFirearmComponent|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHeld_MetaData[] = {
		{ "Category", "SKGFirearmComponent|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFirearmStatsChanged_MetaData[] = {
		{ "Category", "SKGFirearmComponent|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FirearmMeshComponentName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachmentManagerComponentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirearmStatsDataAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirearmCollisionSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirearmMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirearmStats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirearmProceduralAnimComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirearmOffHandIKComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirearmMuzzleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralAnimComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralAnimComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OffHandIKComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OffHandIKComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightLaserComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LightLaserComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MuzzleComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentStatComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachmentStatComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentProceduralAnimComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOffHandIKComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMuzzleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOpticComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentStockComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeforePointAimProceduralAnimComponent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAimingDeviceCycled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProceduralAnimComponentsUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMuzzleComponentUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHeld;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFirearmStatsChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGFirearmComponent_AddFirearmAttachmentStats, "AddFirearmAttachmentStats" }, // 282071655
		{ &Z_Construct_UFunction_USKGFirearmComponent_CalculateProceduralValues, "CalculateProceduralValues" }, // 3254436035
		{ &Z_Construct_UFunction_USKGFirearmComponent_CycleAimingDevice, "CycleAimingDevice" }, // 1525353296
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetAimSocketWorldTransform, "GetAimSocketWorldTransform" }, // 733859576
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentManagerComponent, "GetAttachmentManagerComponent" }, // 754883457
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetAttachmentStatComponents, "GetAttachmentStatComponents" }, // 1626770999
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetCurrentMuzzleComponent, "GetCurrentMuzzleComponent" }, // 232745329
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOffHandIKComponent, "GetCurrentOffHandIKComponent" }, // 936957280
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetCurrentOpticComponent, "GetCurrentOpticComponent" }, // 3372803631
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetCurrentProceduralAnimComponent, "GetCurrentProceduralAnimComponent" }, // 4193360364
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetCurrentStockComponent, "GetCurrentStockComponent" }, // 1313557241
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetFirearmStats, "GetFirearmStats" }, // 25293663
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetLightLaserComponents, "GetLightLaserComponents" }, // 461894924
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleComponents, "GetMuzzleComponents" }, // 762415682
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransform, "GetMuzzleProjectileTransform" }, // 385975525
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleProjectileTransforms, "GetMuzzleProjectileTransforms" }, // 15170896
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetMuzzleTransform, "GetMuzzleTransform" }, // 2826647854
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetOffHandIKComponents, "GetOffHandIKComponents" }, // 3614848266
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetPose, "GetPose" }, // 2166446982
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetProceduralAnimComponents, "GetProceduralAnimComponents" }, // 1336925450
		{ &Z_Construct_UFunction_USKGFirearmComponent_GetProceduralStats, "GetProceduralStats" }, // 1483633188
		{ &Z_Construct_UFunction_USKGFirearmComponent_IsPointAiming, "IsPointAiming" }, // 4288099856
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentAdded, "OnAttachmentAdded" }, // 1726133915
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnAttachmentRemoved, "OnAttachmentRemoved" }, // 4224186981
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_AttachmentStatComponents, "OnRep_AttachmentStatComponents" }, // 4022544154
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentMuzzleComponent, "OnRep_CurrentMuzzleComponent" }, // 3023290980
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOffHandIKComponent, "OnRep_CurrentOffHandIKComponent" }, // 3964991768
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentOpticComponent, "OnRep_CurrentOpticComponent" }, // 830765591
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentProceduralAnimComponent, "OnRep_CurrentProceduralAnimComponent" }, // 979469094
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_CurrentStockComponent, "OnRep_CurrentStockComponent" }, // 3765360568
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_FirearmStats, "OnRep_FirearmStats" }, // 198161797
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_LightLaserComponents, "OnRep_LightLaserComponents" }, // 1081787419
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_MuzzleComponents, "OnRep_MuzzleComponents" }, // 3286099743
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_OffHandIKComponents, "OnRep_OffHandIKComponents" }, // 430800294
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnRep_ProceduralAnimComponents, "OnRep_ProceduralAnimComponents" }, // 86668989
		{ &Z_Construct_UFunction_USKGFirearmComponent_OnStockOffsetChanged, "OnStockOffsetChanged" }, // 245748120
		{ &Z_Construct_UFunction_USKGFirearmComponent_RemoveFirearmAttachmentStats, "RemoveFirearmAttachmentStats" }, // 2363898054
		{ &Z_Construct_UFunction_USKGFirearmComponent_Server_SetAimingDevice, "Server_SetAimingDevice" }, // 2245541325
		{ &Z_Construct_UFunction_USKGFirearmComponent_SetFirearmStats, "SetFirearmStats" }, // 1224531221
		{ &Z_Construct_UFunction_USKGFirearmComponent_SetProceduralStats, "SetProceduralStats" }, // 3243492776
		{ &Z_Construct_UFunction_USKGFirearmComponent_ShotPerformed, "ShotPerformed" }, // 3761516460
		{ &Z_Construct_UFunction_USKGFirearmComponent_StartPointAiming, "StartPointAiming" }, // 4117469213
		{ &Z_Construct_UFunction_USKGFirearmComponent_StopPointAiming, "StopPointAiming" }, // 926032466
		{ &Z_Construct_UFunction_USKGFirearmComponent_ZeroOpticsForZeroAtLocation, "ZeroOpticsForZeroAtLocation" }, // 1812477208
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGFirearmComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmMeshComponentName = { "FirearmMeshComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, FirearmMeshComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmMeshComponentName_MetaData), NewProp_FirearmMeshComponentName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_AttachmentManagerComponentName = { "AttachmentManagerComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, AttachmentManagerComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentManagerComponentName_MetaData), NewProp_AttachmentManagerComponentName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmStatsDataAsset = { "FirearmStatsDataAsset", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, FirearmStatsDataAsset), Z_Construct_UClass_USKGPDAFirearmStats_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmStatsDataAsset_MetaData), NewProp_FirearmStatsDataAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmCollisionSettings = { "FirearmCollisionSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, FirearmCollisionSettings), Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmCollisionSettings_MetaData), NewProp_FirearmCollisionSettings_MetaData) }; // 3504959721
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmMesh = { "FirearmMesh", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, FirearmMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmMesh_MetaData), NewProp_FirearmMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_AttachmentManager = { "AttachmentManager", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, AttachmentManager), Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentManager_MetaData), NewProp_AttachmentManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmStats = { "FirearmStats", "OnRep_FirearmStats", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, FirearmStats), Z_Construct_UScriptStruct_FSKGFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmStats_MetaData), NewProp_FirearmStats_MetaData) }; // 1871522734
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmProceduralAnimComponent = { "FirearmProceduralAnimComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, FirearmProceduralAnimComponent), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmProceduralAnimComponent_MetaData), NewProp_FirearmProceduralAnimComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmOffHandIKComponent = { "FirearmOffHandIKComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, FirearmOffHandIKComponent), Z_Construct_UClass_USKGOffHandIKComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmOffHandIKComponent_MetaData), NewProp_FirearmOffHandIKComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmMuzzleComponent = { "FirearmMuzzleComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, FirearmMuzzleComponent), Z_Construct_UClass_USKGMuzzleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmMuzzleComponent_MetaData), NewProp_FirearmMuzzleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_ProceduralAnimComponents_Inner = { "ProceduralAnimComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_ProceduralAnimComponents = { "ProceduralAnimComponents", "OnRep_ProceduralAnimComponents", (EPropertyFlags)0x002008810000003c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, ProceduralAnimComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralAnimComponents_MetaData), NewProp_ProceduralAnimComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OffHandIKComponents_Inner = { "OffHandIKComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGOffHandIKComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OffHandIKComponents = { "OffHandIKComponents", "OnRep_OffHandIKComponents", (EPropertyFlags)0x002008810000003c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, OffHandIKComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffHandIKComponents_MetaData), NewProp_OffHandIKComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_LightLaserComponents_Inner = { "LightLaserComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGLightLaserComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_LightLaserComponents = { "LightLaserComponents", "OnRep_LightLaserComponents", (EPropertyFlags)0x002008810000003c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, LightLaserComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightLaserComponents_MetaData), NewProp_LightLaserComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_MuzzleComponents_Inner = { "MuzzleComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGMuzzleComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_MuzzleComponents = { "MuzzleComponents", "OnRep_MuzzleComponents", (EPropertyFlags)0x002008810000003c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, MuzzleComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleComponents_MetaData), NewProp_MuzzleComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_AttachmentStatComponents_Inner = { "AttachmentStatComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGFirearmAttachmentStatComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_AttachmentStatComponents = { "AttachmentStatComponents", "OnRep_AttachmentStatComponents", (EPropertyFlags)0x002008810000003c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, AttachmentStatComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentStatComponents_MetaData), NewProp_AttachmentStatComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentProceduralAnimComponent = { "CurrentProceduralAnimComponent", "OnRep_CurrentProceduralAnimComponent", (EPropertyFlags)0x012408010008003c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, CurrentProceduralAnimComponent), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProceduralAnimComponent_MetaData), NewProp_CurrentProceduralAnimComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentOffHandIKComponent = { "CurrentOffHandIKComponent", "OnRep_CurrentOffHandIKComponent", (EPropertyFlags)0x012408010008003c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, CurrentOffHandIKComponent), Z_Construct_UClass_USKGOffHandIKComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOffHandIKComponent_MetaData), NewProp_CurrentOffHandIKComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentMuzzleComponent = { "CurrentMuzzleComponent", "OnRep_CurrentMuzzleComponent", (EPropertyFlags)0x012408010008003c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, CurrentMuzzleComponent), Z_Construct_UClass_USKGMuzzleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMuzzleComponent_MetaData), NewProp_CurrentMuzzleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentOpticComponent = { "CurrentOpticComponent", "OnRep_CurrentOpticComponent", (EPropertyFlags)0x012408010008003c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, CurrentOpticComponent), Z_Construct_UClass_USKGOpticComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOpticComponent_MetaData), NewProp_CurrentOpticComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentStockComponent = { "CurrentStockComponent", "OnRep_CurrentStockComponent", (EPropertyFlags)0x012408010008003c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, CurrentStockComponent), Z_Construct_UClass_USKGStockComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStockComponent_MetaData), NewProp_CurrentStockComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_BeforePointAimProceduralAnimComponent = { "BeforePointAimProceduralAnimComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, BeforePointAimProceduralAnimComponent), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeforePointAimProceduralAnimComponent_MetaData), NewProp_BeforePointAimProceduralAnimComponent_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnAimingDeviceCycled = { "OnAimingDeviceCycled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, OnAimingDeviceCycled), Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAimingDeviceCycled_MetaData), NewProp_OnAimingDeviceCycled_MetaData) }; // 1558254927
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnProceduralAnimComponentsUpdated = { "OnProceduralAnimComponentsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, OnProceduralAnimComponentsUpdated), Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProceduralAnimComponentsUpdated_MetaData), NewProp_OnProceduralAnimComponentsUpdated_MetaData) }; // 316715002
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnMuzzleComponentUpdated = { "OnMuzzleComponentUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, OnMuzzleComponentUpdated), Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMuzzleComponentUpdated_MetaData), NewProp_OnMuzzleComponentUpdated_MetaData) }; // 1046752681
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnHeld = { "OnHeld", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, OnHeld), Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHeld_MetaData), NewProp_OnHeld_MetaData) }; // 2979138525
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnFirearmStatsChanged = { "OnFirearmStatsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmComponent, OnFirearmStatsChanged), Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFirearmStatsChanged_MetaData), NewProp_OnFirearmStatsChanged_MetaData) }; // 2889347854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGFirearmComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmMeshComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_AttachmentManagerComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmStatsDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmCollisionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_AttachmentManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmProceduralAnimComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmOffHandIKComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_FirearmMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_ProceduralAnimComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_ProceduralAnimComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OffHandIKComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OffHandIKComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_LightLaserComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_LightLaserComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_MuzzleComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_MuzzleComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_AttachmentStatComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_AttachmentStatComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentProceduralAnimComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentOffHandIKComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentOpticComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_CurrentStockComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_BeforePointAimProceduralAnimComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnAimingDeviceCycled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnProceduralAnimComponentsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnMuzzleComponentUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmComponent_Statics::NewProp_OnFirearmStatsChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGFirearmComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGFirearmComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGFirearmComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGFirearmComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGFirearmComponent, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGFirearmComponent_Statics::ClassParams = {
	&USKGFirearmComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USKGFirearmComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USKGFirearmComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGFirearmComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGFirearmComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGFirearmComponent()
{
	if (!Z_Registration_Info_UClass_USKGFirearmComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGFirearmComponent.OuterSingleton, Z_Construct_UClass_USKGFirearmComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGFirearmComponent.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UClass* StaticClass<USKGFirearmComponent>()
{
	return USKGFirearmComponent::StaticClass();
}
void USKGFirearmComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_FirearmStats(TEXT("FirearmStats"));
	static const FName Name_ProceduralAnimComponents(TEXT("ProceduralAnimComponents"));
	static const FName Name_OffHandIKComponents(TEXT("OffHandIKComponents"));
	static const FName Name_LightLaserComponents(TEXT("LightLaserComponents"));
	static const FName Name_MuzzleComponents(TEXT("MuzzleComponents"));
	static const FName Name_AttachmentStatComponents(TEXT("AttachmentStatComponents"));
	static const FName Name_CurrentProceduralAnimComponent(TEXT("CurrentProceduralAnimComponent"));
	static const FName Name_CurrentOffHandIKComponent(TEXT("CurrentOffHandIKComponent"));
	static const FName Name_CurrentMuzzleComponent(TEXT("CurrentMuzzleComponent"));
	static const FName Name_CurrentOpticComponent(TEXT("CurrentOpticComponent"));
	static const FName Name_CurrentStockComponent(TEXT("CurrentStockComponent"));
	const bool bIsValid = true
		&& Name_FirearmStats == ClassReps[(int32)ENetFields_Private::FirearmStats].Property->GetFName()
		&& Name_ProceduralAnimComponents == ClassReps[(int32)ENetFields_Private::ProceduralAnimComponents].Property->GetFName()
		&& Name_OffHandIKComponents == ClassReps[(int32)ENetFields_Private::OffHandIKComponents].Property->GetFName()
		&& Name_LightLaserComponents == ClassReps[(int32)ENetFields_Private::LightLaserComponents].Property->GetFName()
		&& Name_MuzzleComponents == ClassReps[(int32)ENetFields_Private::MuzzleComponents].Property->GetFName()
		&& Name_AttachmentStatComponents == ClassReps[(int32)ENetFields_Private::AttachmentStatComponents].Property->GetFName()
		&& Name_CurrentProceduralAnimComponent == ClassReps[(int32)ENetFields_Private::CurrentProceduralAnimComponent].Property->GetFName()
		&& Name_CurrentOffHandIKComponent == ClassReps[(int32)ENetFields_Private::CurrentOffHandIKComponent].Property->GetFName()
		&& Name_CurrentMuzzleComponent == ClassReps[(int32)ENetFields_Private::CurrentMuzzleComponent].Property->GetFName()
		&& Name_CurrentOpticComponent == ClassReps[(int32)ENetFields_Private::CurrentOpticComponent].Property->GetFName()
		&& Name_CurrentStockComponent == ClassReps[(int32)ENetFields_Private::CurrentStockComponent].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USKGFirearmComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGFirearmComponent);
USKGFirearmComponent::~USKGFirearmComponent() {}
// End Class USKGFirearmComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGFirearmCollisionSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGFirearmCollisionSettings_Statics::NewStructOps, TEXT("SKGFirearmCollisionSettings"), &Z_Registration_Info_UScriptStruct_SKGFirearmCollisionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGFirearmCollisionSettings), 3504959721U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGFirearmComponent, USKGFirearmComponent::StaticClass, TEXT("USKGFirearmComponent"), &Z_Registration_Info_UClass_USKGFirearmComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGFirearmComponent), 1340849260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_3368553512(TEXT("/Script/SKGShooterFramework"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGFirearmComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
