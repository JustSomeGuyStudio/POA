// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGProceduralAnim/Public/DataTypes/SKGProceduralDataTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGProceduralDataTypes() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGCurve();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGCurveReplicationSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGCurveSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGDeadzoneSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMinMax();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementLagSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementSwaySettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralAimingSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralOffset();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGRecoilSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGToFromCurveSettings();
UPackage* Z_Construct_UPackage__Script_SKGProceduralAnim();
// End Cross Module References

// Begin ScriptStruct FSKGMinMax
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGMinMax;
class UScriptStruct* FSKGMinMax::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMinMax.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGMinMax.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGMinMax, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGMinMax"));
	}
	return Z_Registration_Info_UScriptStruct_SKGMinMax.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGMinMax>()
{
	return FSKGMinMax::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGMinMax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMinMax>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMinMax, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMinMax, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMinMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMinMax_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMinMax_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGMinMax",
	Z_Construct_UScriptStruct_FSKGMinMax_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMinMax_Statics::PropPointers),
	sizeof(FSKGMinMax),
	alignof(FSKGMinMax),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMinMax_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGMinMax_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGMinMax()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMinMax.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMinMax.InnerSingleton, Z_Construct_UScriptStruct_FSKGMinMax_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGMinMax.InnerSingleton;
}
// End ScriptStruct FSKGMinMax

// Begin ScriptStruct FSKGLeanLeftRightSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings;
class UScriptStruct* FSKGLeanLeftRightSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGLeanLeftRightSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGLeanLeftRightSettings>()
{
	return FSKGLeanLeftRightSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpringInterp_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not to use movement sway (such as idle breathing and walking sway)\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to use movement sway (such as idle breathing and walking sway)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "!bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLeanLeftAngle_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLeanRightAngle_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseSpringInterp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpringInterp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDampingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVelocityAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLeanLeftAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLeanRightAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGLeanLeftRightSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp_SetBit(void* Obj)
{
	((FSKGLeanLeftRightSettings*)Obj)->bUseSpringInterp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp = { "bUseSpringInterp", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGLeanLeftRightSettings), &Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpringInterp_MetaData), NewProp_bUseSpringInterp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_CriticalDampingFactor = { "CriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, CriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalDampingFactor_MetaData), NewProp_CriticalDampingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_TargetVelocityAmount = { "TargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, TargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetVelocityAmount_MetaData), NewProp_TargetVelocityAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanLeftAngle = { "MaxLeanLeftAngle", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, MaxLeanLeftAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLeanLeftAngle_MetaData), NewProp_MaxLeanLeftAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanRightAngle = { "MaxLeanRightAngle", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, MaxLeanRightAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLeanRightAngle_MetaData), NewProp_MaxLeanRightAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_CriticalDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_TargetVelocityAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanLeftAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanRightAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGLeanLeftRightSettings",
	Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::PropPointers),
	sizeof(FSKGLeanLeftRightSettings),
	alignof(FSKGLeanLeftRightSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings.InnerSingleton;
}
// End ScriptStruct FSKGLeanLeftRightSettings

// Begin ScriptStruct FSKGCycleAimingPointSpringInterpSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings;
class UScriptStruct* FSKGCycleAimingPointSpringInterpSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGCycleAimingPointSpringInterpSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGCycleAimingPointSpringInterpSettings>()
{
	return FSKGCycleAimingPointSpringInterpSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationCriticalDampingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationTargetVelocityAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationCriticalDampingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationTargetVelocityAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCycleAimingPointSpringInterpSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationStiffness = { "LocationStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, LocationStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationStiffness_MetaData), NewProp_LocationStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationCriticalDampingFactor = { "LocationCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, LocationCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationCriticalDampingFactor_MetaData), NewProp_LocationCriticalDampingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationMass = { "LocationMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, LocationMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationMass_MetaData), NewProp_LocationMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationTargetVelocityAmount = { "LocationTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, LocationTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationTargetVelocityAmount_MetaData), NewProp_LocationTargetVelocityAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationStiffness = { "RotationStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, RotationStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationStiffness_MetaData), NewProp_RotationStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationCriticalDampingFactor = { "RotationCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, RotationCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationCriticalDampingFactor_MetaData), NewProp_RotationCriticalDampingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationMass = { "RotationMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, RotationMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMass_MetaData), NewProp_RotationMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationTargetVelocityAmount = { "RotationTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, RotationTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationTargetVelocityAmount_MetaData), NewProp_RotationTargetVelocityAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationCriticalDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationTargetVelocityAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationCriticalDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationTargetVelocityAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGCycleAimingPointSpringInterpSettings",
	Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::PropPointers),
	sizeof(FSKGCycleAimingPointSpringInterpSettings),
	alignof(FSKGCycleAimingPointSpringInterpSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings.InnerSingleton;
}
// End ScriptStruct FSKGCycleAimingPointSpringInterpSettings

// Begin ScriptStruct FSKGCycleAimingPointSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings;
class UScriptStruct* FSKGCycleAimingPointSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGCycleAimingPointSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGCycleAimingPointSettings>()
{
	return FSKGCycleAimingPointSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings used for when changing aiming points (such as going from one optic to another for aiming, or point aiming)\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings used for when changing aiming points (such as going from one optic to another for aiming, or point aiming)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpringInterpForCyclingAimingPoint_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterpForCyclingAimingPoint" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseSpringInterpForCyclingAimingPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpringInterpForCyclingAimingPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringInterpSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCycleAimingPointSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint_SetBit(void* Obj)
{
	((FSKGCycleAimingPointSettings*)Obj)->bUseSpringInterpForCyclingAimingPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint = { "bUseSpringInterpForCyclingAimingPoint", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGCycleAimingPointSettings), &Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpringInterpForCyclingAimingPoint_MetaData), NewProp_bUseSpringInterpForCyclingAimingPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_SpringInterpSettings = { "SpringInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSettings, SpringInterpSettings), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringInterpSettings_MetaData), NewProp_SpringInterpSettings_MetaData) }; // 2699886851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_SpringInterpSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGCycleAimingPointSettings",
	Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::PropPointers),
	sizeof(FSKGCycleAimingPointSettings),
	alignof(FSKGCycleAimingPointSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings.InnerSingleton;
}
// End ScriptStruct FSKGCycleAimingPointSettings

// Begin ScriptStruct FSKGMovementSwayLocationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings;
class UScriptStruct* FSKGMovementSwayLocationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGMovementSwayLocationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGMovementSwayLocationSettings>()
{
	return FSKGMovementSwayLocationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much to add/reduce the sway provided from the movement sway curve\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much to add/reduce the sway provided from the movement sway curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierInterpolationRate_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How fast it will interpolate to the new sway multiplier\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast it will interpolate to the new sway multiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The speed in which it interpolates to a new value in the curve\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speed in which it interpolates to a new value in the curve" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplierInterpolationRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMovementSwayLocationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwayLocationSettings, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_MultiplierInterpolationRate = { "MultiplierInterpolationRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwayLocationSettings, MultiplierInterpolationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplierInterpolationRate_MetaData), NewProp_MultiplierInterpolationRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwayLocationSettings, Curve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwayLocationSettings, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_MultiplierInterpolationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGMovementSwayLocationSettings",
	Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::PropPointers),
	sizeof(FSKGMovementSwayLocationSettings),
	alignof(FSKGMovementSwayLocationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings.InnerSingleton;
}
// End ScriptStruct FSKGMovementSwayLocationSettings

// Begin ScriptStruct FSKGMovementSwaySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings;
class UScriptStruct* FSKGMovementSwaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGMovementSwaySettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGMovementSwaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGMovementSwaySettings>()
{
	return FSKGMovementSwaySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMovementSway_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not to use movement sway (such as idle breathing and walking sway)\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to use movement sway (such as idle breathing and walking sway)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementSway" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementSway" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseMovementSway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMovementSway;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMovementSwaySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway_SetBit(void* Obj)
{
	((FSKGMovementSwaySettings*)Obj)->bUseMovementSway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway = { "bUseMovementSway", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGMovementSwaySettings), &Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMovementSway_MetaData), NewProp_bUseMovementSway_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_LocationSettings = { "LocationSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwaySettings, LocationSettings), Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationSettings_MetaData), NewProp_LocationSettings_MetaData) }; // 1313343618
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_RotationSettings = { "RotationSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwaySettings, RotationSettings), Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSettings_MetaData), NewProp_RotationSettings_MetaData) }; // 1313343618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_LocationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_RotationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGMovementSwaySettings",
	Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::PropPointers),
	sizeof(FSKGMovementSwaySettings),
	alignof(FSKGMovementSwaySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementSwaySettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings.InnerSingleton;
}
// End ScriptStruct FSKGMovementSwaySettings

// Begin ScriptStruct FSKGMovementLagSpringInterpSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings;
class UScriptStruct* FSKGMovementLagSpringInterpSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGMovementLagSpringInterpSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGMovementLagSpringInterpSettings>()
{
	return FSKGMovementLagSpringInterpSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringCriticalDampingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringTargetVelocityAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMovementLagSpringInterpSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSpringInterpSettings, SpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringStiffness_MetaData), NewProp_SpringStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringCriticalDampingFactor = { "SpringCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSpringInterpSettings, SpringCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringCriticalDampingFactor_MetaData), NewProp_SpringCriticalDampingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringMass = { "SpringMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSpringInterpSettings, SpringMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringMass_MetaData), NewProp_SpringMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringTargetVelocityAmount = { "SpringTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSpringInterpSettings, SpringTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringTargetVelocityAmount_MetaData), NewProp_SpringTargetVelocityAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringCriticalDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringTargetVelocityAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGMovementLagSpringInterpSettings",
	Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::PropPointers),
	sizeof(FSKGMovementLagSpringInterpSettings),
	alignof(FSKGMovementLagSpringInterpSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings.InnerSingleton;
}
// End ScriptStruct FSKGMovementLagSpringInterpSettings

// Begin ScriptStruct FSKGMovementLagSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGMovementLagSettings;
class UScriptStruct* FSKGMovementLagSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMovementLagSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGMovementLagSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGMovementLagSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGMovementLagSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGMovementLagSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGMovementLagSettings>()
{
	return FSKGMovementLagSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMovementLag_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpringInterpolation_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementLag && bUseSpringInterpolation" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftRightMax_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The max amount the procedurals will move left/right\n" },
#endif
		{ "EditCondition", "bUseMovementLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The max amount the procedurals will move left/right" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDownMax_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The max amount the procedurals will move up/down\n" },
#endif
		{ "EditCondition", "bUseMovementLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The max amount the procedurals will move up/down" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementLag && !bUseSpringInterpolation" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseMovementLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMovementLag;
	static void NewProp_bUseSpringInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpringInterpolation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringInterpSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftRightMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpDownMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMovementLagSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag_SetBit(void* Obj)
{
	((FSKGMovementLagSettings*)Obj)->bUseMovementLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag = { "bUseMovementLag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGMovementLagSettings), &Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMovementLag_MetaData), NewProp_bUseMovementLag_MetaData) };
void Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation_SetBit(void* Obj)
{
	((FSKGMovementLagSettings*)Obj)->bUseSpringInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation = { "bUseSpringInterpolation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGMovementLagSettings), &Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpringInterpolation_MetaData), NewProp_bUseSpringInterpolation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_SpringInterpSettings = { "SpringInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, SpringInterpSettings), Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringInterpSettings_MetaData), NewProp_SpringInterpSettings_MetaData) }; // 1479675311
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_LeftRightMax = { "LeftRightMax", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, LeftRightMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftRightMax_MetaData), NewProp_LeftRightMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_UpDownMax = { "UpDownMax", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, UpDownMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDownMax_MetaData), NewProp_UpDownMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, Multiplier), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_SpringInterpSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_LeftRightMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_UpDownMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGMovementLagSettings",
	Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::PropPointers),
	sizeof(FSKGMovementLagSettings),
	alignof(FSKGMovementLagSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementLagSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMovementLagSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMovementLagSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGMovementLagSettings.InnerSingleton;
}
// End ScriptStruct FSKGMovementLagSettings

// Begin ScriptStruct FSKGRotationLagSpringInterpSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings;
class UScriptStruct* FSKGRotationLagSpringInterpSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGRotationLagSpringInterpSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGRotationLagSpringInterpSettings>()
{
	return FSKGRotationLagSpringInterpSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpringStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpringCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpringMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpringTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationSpringStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationSpringCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationSpringMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationSpringTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpringStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpringCriticalDampingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpringMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpringTargetVelocityAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpringStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpringCriticalDampingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpringMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpringTargetVelocityAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGRotationLagSpringInterpSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringStiffness = { "RotationSpringStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, RotationSpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpringStiffness_MetaData), NewProp_RotationSpringStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringCriticalDampingFactor = { "RotationSpringCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, RotationSpringCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpringCriticalDampingFactor_MetaData), NewProp_RotationSpringCriticalDampingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringMass = { "RotationSpringMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, RotationSpringMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpringMass_MetaData), NewProp_RotationSpringMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringTargetVelocityAmount = { "RotationSpringTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, RotationSpringTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpringTargetVelocityAmount_MetaData), NewProp_RotationSpringTargetVelocityAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringStiffness = { "LocationSpringStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, LocationSpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationSpringStiffness_MetaData), NewProp_LocationSpringStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringCriticalDampingFactor = { "LocationSpringCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, LocationSpringCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationSpringCriticalDampingFactor_MetaData), NewProp_LocationSpringCriticalDampingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringMass = { "LocationSpringMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, LocationSpringMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationSpringMass_MetaData), NewProp_LocationSpringMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringTargetVelocityAmount = { "LocationSpringTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, LocationSpringTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationSpringTargetVelocityAmount_MetaData), NewProp_LocationSpringTargetVelocityAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringCriticalDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringTargetVelocityAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringCriticalDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringTargetVelocityAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGRotationLagSpringInterpSettings",
	Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::PropPointers),
	sizeof(FSKGRotationLagSpringInterpSettings),
	alignof(FSKGRotationLagSpringInterpSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings.InnerSingleton;
}
// End ScriptStruct FSKGRotationLagSpringInterpSettings

// Begin ScriptStruct FSKGRotationLagInterpSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings;
class UScriptStruct* FSKGRotationLagInterpSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGRotationLagInterpSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGRotationLagInterpSettings>()
{
	return FSKGRotationLagInterpSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationInterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGRotationLagInterpSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagInterpSettings, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpSpeed_MetaData), NewProp_RotationInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_LocationInterpSpeed = { "LocationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagInterpSettings, LocationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationInterpSpeed_MetaData), NewProp_LocationInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_RotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_LocationInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGRotationLagInterpSettings",
	Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::PropPointers),
	sizeof(FSKGRotationLagInterpSettings),
	alignof(FSKGRotationLagInterpSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings.InnerSingleton;
}
// End ScriptStruct FSKGRotationLagInterpSettings

// Begin ScriptStruct FSKGRotationLagSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGRotationLagSettings;
class UScriptStruct* FSKGRotationLagSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGRotationLagSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGRotationLagSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGRotationLagSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGRotationLagSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGRotationLagSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGRotationLagSettings>()
{
	return FSKGRotationLagSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRotationLag_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpringInterpolation_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// I advise this to be false if you are using deadzone, in my opinion it gives a better result\n" },
#endif
		{ "EditCondition", "bUseRotationLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "I advise this to be false if you are using deadzone, in my opinion it gives a better result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseRotationLag && bUseSpringInterpolation" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseRotationLag && !bUseSpringInterpolation" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotation_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseRotationLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default in BP: X = Roll, Y = Pitch, Z = Yaw\n" },
#endif
		{ "EditCondition", "bUseRotationLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default in BP: X = Roll, Y = Pitch, Z = Yaw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationMultiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseRotationLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseRotationLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRotationLag;
	static void NewProp_bUseSpringInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpringInterpolation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringInterpSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGRotationLagSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag_SetBit(void* Obj)
{
	((FSKGRotationLagSettings*)Obj)->bUseRotationLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag = { "bUseRotationLag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGRotationLagSettings), &Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRotationLag_MetaData), NewProp_bUseRotationLag_MetaData) };
void Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation_SetBit(void* Obj)
{
	((FSKGRotationLagSettings*)Obj)->bUseSpringInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation = { "bUseSpringInterpolation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGRotationLagSettings), &Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpringInterpolation_MetaData), NewProp_bUseSpringInterpolation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_SpringInterpSettings = { "SpringInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, SpringInterpSettings), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringInterpSettings_MetaData), NewProp_SpringInterpSettings_MetaData) }; // 3668881901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_InterpSettings = { "InterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, InterpSettings), Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSettings_MetaData), NewProp_InterpSettings_MetaData) }; // 91372765
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_MaxRotation = { "MaxRotation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, MaxRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRotation_MetaData), NewProp_MaxRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_RotationMultiplier = { "RotationMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, RotationMultiplier), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMultiplier_MetaData), NewProp_RotationMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_LocationMultiplier = { "LocationMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, LocationMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationMultiplier_MetaData), NewProp_LocationMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_SpringInterpSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_InterpSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_MaxRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_RotationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_LocationMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGRotationLagSettings",
	Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::PropPointers),
	sizeof(FSKGRotationLagSettings),
	alignof(FSKGRotationLagSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGRotationLagSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGRotationLagSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGRotationLagSettings.InnerSingleton;
}
// End ScriptStruct FSKGRotationLagSettings

// Begin ScriptStruct FSKGRecoilSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGRecoilSettings;
class UScriptStruct* FSKGRecoilSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGRecoilSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGRecoilSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGRecoilSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGRecoilSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGRecoilSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGRecoilSettings>()
{
	return FSKGRecoilSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPitchRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilControlRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlYawRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilControlRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRollRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilControlRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationInterpToNoneSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilLocationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilLocationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilLocationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilLocationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpToNoneSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRotationCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPitchRandom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlYawRandom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRollRandom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationInterpToNoneSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_XRandom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YRandom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZRandom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpToNoneSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRandom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YawRandom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RollRandom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGRecoilSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRotationCurve = { "ControlRotationCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ControlRotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRotationCurve_MetaData), NewProp_ControlRotationCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlPitchRandom = { "ControlPitchRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ControlPitchRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPitchRandom_MetaData), NewProp_ControlPitchRandom_MetaData) }; // 2467776270
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlYawRandom = { "ControlYawRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ControlYawRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlYawRandom_MetaData), NewProp_ControlYawRandom_MetaData) }; // 2467776270
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRollRandom = { "ControlRollRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ControlRollRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRollRandom_MetaData), NewProp_ControlRollRandom_MetaData) }; // 2467776270
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationCurve = { "LocationCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, LocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationCurve_MetaData), NewProp_LocationCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationInterpToNoneSpeed = { "LocationInterpToNoneSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, LocationInterpToNoneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationInterpToNoneSpeed_MetaData), NewProp_LocationInterpToNoneSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_XRandom = { "XRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, XRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XRandom_MetaData), NewProp_XRandom_MetaData) }; // 2467776270
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YRandom = { "YRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, YRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YRandom_MetaData), NewProp_YRandom_MetaData) }; // 2467776270
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ZRandom = { "ZRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ZRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZRandom_MetaData), NewProp_ZRandom_MetaData) }; // 2467776270
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, RotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationCurve_MetaData), NewProp_RotationCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationInterpToNoneSpeed = { "RotationInterpToNoneSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, RotationInterpToNoneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpToNoneSpeed_MetaData), NewProp_RotationInterpToNoneSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_PitchRandom = { "PitchRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, PitchRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRandom_MetaData), NewProp_PitchRandom_MetaData) }; // 2467776270
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YawRandom = { "YawRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, YawRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawRandom_MetaData), NewProp_YawRandom_MetaData) }; // 2467776270
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RollRandom = { "RollRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, RollRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollRandom_MetaData), NewProp_RollRandom_MetaData) }; // 2467776270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRotationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlPitchRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlYawRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRollRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationInterpToNoneSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_XRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ZRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationInterpToNoneSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_PitchRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YawRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RollRandom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGRecoilSettings",
	Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::PropPointers),
	sizeof(FSKGRecoilSettings),
	alignof(FSKGRecoilSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGRecoilSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGRecoilSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGRecoilSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGRecoilSettings.InnerSingleton;
}
// End ScriptStruct FSKGRecoilSettings

// Begin ScriptStruct FSKGProceduralAimingSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings;
class UScriptStruct* FSKGProceduralAimingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGProceduralAimingSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGProceduralAimingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGProceduralAimingSettings>()
{
	return FSKGProceduralAimingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * The forward axis of the firearm (NOT the attachment) which is used for correcting the aiming distance\n\x09 * and it must be set on all attachments used to aim\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The forward axis of the firearm (NOT the attachment) which is used for correcting the aiming distance\n* and it must be set on all attachments used to aim" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingDistance_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The higher the value the further the aim point will be from your camera\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The higher the value the further the aim point will be from your camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedAimingDistance_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * If true, the position of the aim point is discarded and will the aim point to be exactly\n\x09 * the AimingDistance behind the camera\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* If true, the position of the aim point is discarded and will the aim point to be exactly\n* the AimingDistance behind the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanAim_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If false, this aiming device will not be used when cycling aiming devices\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false, this aiming device will not be used when cycling aiming devices" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingDistance;
	static void NewProp_bUseFixedAimingDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedAimingDistance;
	static void NewProp_bCanAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProceduralAimingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralAimingSettings, ForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardAxis_MetaData), NewProp_ForwardAxis_MetaData) }; // 342925220
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_AimingDistance = { "AimingDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralAimingSettings, AimingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingDistance_MetaData), NewProp_AimingDistance_MetaData) };
void Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance_SetBit(void* Obj)
{
	((FSKGProceduralAimingSettings*)Obj)->bUseFixedAimingDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance = { "bUseFixedAimingDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProceduralAimingSettings), &Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedAimingDistance_MetaData), NewProp_bUseFixedAimingDistance_MetaData) };
void Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim_SetBit(void* Obj)
{
	((FSKGProceduralAimingSettings*)Obj)->bCanAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim = { "bCanAim", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProceduralAimingSettings), &Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanAim_MetaData), NewProp_bCanAim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_ForwardAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_AimingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGProceduralAimingSettings",
	Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::PropPointers),
	sizeof(FSKGProceduralAimingSettings),
	alignof(FSKGProceduralAimingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralAimingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings.InnerSingleton;
}
// End ScriptStruct FSKGProceduralAimingSettings

// Begin ScriptStruct FSKGDeadzoneSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings;
class UScriptStruct* FSKGDeadzoneSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGDeadzoneSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGDeadzoneSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGDeadzoneSettings>()
{
	return FSKGDeadzoneSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeadzone_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRate_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawRate_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchLimit_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawLimit_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDeadzoneWhenAiming_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadzoneAimingDisableInterpolationSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone && bDisableDeadzoneWhenAiming" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseDeadzone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeadzone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
	static void NewProp_bDisableDeadzoneWhenAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDeadzoneWhenAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadzoneAimingDisableInterpolationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGDeadzoneSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone_SetBit(void* Obj)
{
	((FSKGDeadzoneSettings*)Obj)->bUseDeadzone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone = { "bUseDeadzone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGDeadzoneSettings), &Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDeadzone_MetaData), NewProp_bUseDeadzone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchRate = { "PitchRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, PitchRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRate_MetaData), NewProp_PitchRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawRate = { "YawRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, YawRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawRate_MetaData), NewProp_YawRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchLimit = { "PitchLimit", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, PitchLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchLimit_MetaData), NewProp_PitchLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawLimit = { "YawLimit", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, YawLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawLimit_MetaData), NewProp_YawLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSpeed_MetaData), NewProp_InterpolationSpeed_MetaData) };
void Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming_SetBit(void* Obj)
{
	((FSKGDeadzoneSettings*)Obj)->bDisableDeadzoneWhenAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming = { "bDisableDeadzoneWhenAiming", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGDeadzoneSettings), &Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDeadzoneWhenAiming_MetaData), NewProp_bDisableDeadzoneWhenAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_DeadzoneAimingDisableInterpolationSpeed = { "DeadzoneAimingDisableInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, DeadzoneAimingDisableInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadzoneAimingDisableInterpolationSpeed_MetaData), NewProp_DeadzoneAimingDisableInterpolationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_InterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_DeadzoneAimingDisableInterpolationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGDeadzoneSettings",
	Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::PropPointers),
	sizeof(FSKGDeadzoneSettings),
	alignof(FSKGDeadzoneSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGDeadzoneSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings.InnerSingleton;
}
// End ScriptStruct FSKGDeadzoneSettings

// Begin ScriptStruct FSKGProceduralOffset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGProceduralOffset;
class UScriptStruct* FSKGProceduralOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGProceduralOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGProceduralOffset, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGProceduralOffset"));
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralOffset.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGProceduralOffset>()
{
	return FSKGProceduralOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProceduralOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralOffset, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralOffset, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGProceduralOffset",
	Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::PropPointers),
	sizeof(FSKGProceduralOffset),
	alignof(FSKGProceduralOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralOffset()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProceduralOffset.InnerSingleton, Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralOffset.InnerSingleton;
}
// End ScriptStruct FSKGProceduralOffset

// Begin ScriptStruct FSKGFirstAndThirdPersonBasePoseOffset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset;
class UScriptStruct* FSKGFirstAndThirdPersonBasePoseOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGFirstAndThirdPersonBasePoseOffset"));
	}
	return Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGFirstAndThirdPersonBasePoseOffset>()
{
	return FSKGFirstAndThirdPersonBasePoseOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonOffset_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonOffset_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPersonOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGFirstAndThirdPersonBasePoseOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_FirstPersonOffset = { "FirstPersonOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirstAndThirdPersonBasePoseOffset, FirstPersonOffset), Z_Construct_UScriptStruct_FSKGProceduralOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonOffset_MetaData), NewProp_FirstPersonOffset_MetaData) }; // 713916620
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_ThirdPersonOffset = { "ThirdPersonOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirstAndThirdPersonBasePoseOffset, ThirdPersonOffset), Z_Construct_UScriptStruct_FSKGProceduralOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonOffset_MetaData), NewProp_ThirdPersonOffset_MetaData) }; // 713916620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_FirstPersonOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_ThirdPersonOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGFirstAndThirdPersonBasePoseOffset",
	Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::PropPointers),
	sizeof(FSKGFirstAndThirdPersonBasePoseOffset),
	alignof(FSKGFirstAndThirdPersonBasePoseOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset.InnerSingleton, Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset.InnerSingleton;
}
// End ScriptStruct FSKGFirstAndThirdPersonBasePoseOffset

// Begin ScriptStruct FSKGCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGCurve;
class UScriptStruct* FSKGCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGCurve, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGCurve"));
	}
	return Z_Registration_Info_UScriptStruct_SKGCurve.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGCurve>()
{
	return FSKGCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rate/Speed at which the curves play\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate/Speed at which the curves play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveEndTime_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Time for when the curve is finished. For example, if your in high port and going back to\n\x09 * none (normal idle curve with firearm), your CurveEndTime should be the Time in the curve\n\x09 * in which the Values in the CurveLocation AND CurveRotation are 0\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time for when the curve is finished. For example, if your in high port and going back to\nnone (normal idle curve with firearm), your CurveEndTime should be the Time in the curve\nin which the Values in the CurveLocation AND CurveRotation are 0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveEndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_LocationCurve = { "LocationCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurve, LocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationCurve_MetaData), NewProp_LocationCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurve, RotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationCurve_MetaData), NewProp_RotationCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurve, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_CurveEndTime = { "CurveEndTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurve, CurveEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveEndTime_MetaData), NewProp_CurveEndTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_LocationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_RotationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_CurveEndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGCurve",
	Z_Construct_UScriptStruct_FSKGCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurve_Statics::PropPointers),
	sizeof(FSKGCurve),
	alignof(FSKGCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGCurve()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCurve.InnerSingleton, Z_Construct_UScriptStruct_FSKGCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGCurve.InnerSingleton;
}
// End ScriptStruct FSKGCurve

// Begin ScriptStruct FSKGFirstAndThirdPersonCurveSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings;
class UScriptStruct* FSKGFirstAndThirdPersonCurveSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGFirstAndThirdPersonCurveSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGFirstAndThirdPersonCurveSettings>()
{
	return FSKGFirstAndThirdPersonCurveSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPersonCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGFirstAndThirdPersonCurveSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_FirstPersonCurve = { "FirstPersonCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirstAndThirdPersonCurveSettings, FirstPersonCurve), Z_Construct_UScriptStruct_FSKGCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCurve_MetaData), NewProp_FirstPersonCurve_MetaData) }; // 1987547920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_ThirdPersonCurve = { "ThirdPersonCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirstAndThirdPersonCurveSettings, ThirdPersonCurve), Z_Construct_UScriptStruct_FSKGCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonCurve_MetaData), NewProp_ThirdPersonCurve_MetaData) }; // 1987547920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_FirstPersonCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_ThirdPersonCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGFirstAndThirdPersonCurveSettings",
	Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::PropPointers),
	sizeof(FSKGFirstAndThirdPersonCurveSettings),
	alignof(FSKGFirstAndThirdPersonCurveSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings.InnerSingleton;
}
// End ScriptStruct FSKGFirstAndThirdPersonCurveSettings

// Begin ScriptStruct FSKGToFromCurveSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings;
class UScriptStruct* FSKGToFromCurveSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGToFromCurveSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGToFromCurveSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGToFromCurveSettings>()
{
	return FSKGToFromCurveSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Going from none to the curve\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Going from none to the curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Going from the curve to none\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Going from the curve to none" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveTag_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tag for this curve. This is used to recognize what curve this is.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag for this curve. This is used to recognize what curve this is." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolate_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True will interpolate the curve (not follow the graph strictly, but add some additional blending\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True will interpolate the curve (not follow the graph strictly, but add some additional blending" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will interpolate for the first X amount of time before it stops interpolation\n" },
#endif
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will interpolate for the first X amount of time before it stops interpolation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed as which the curve is interpolated between. This will allow for some general smoothing while following the curve\n" },
#endif
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed as which the curve is interpolated between. This will allow for some general smoothing while following the curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeedMultiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveTag;
	static void NewProp_bInterpolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGToFromCurveSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_ToCurve = { "ToCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, ToCurve), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToCurve_MetaData), NewProp_ToCurve_MetaData) }; // 885434894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_FromCurve = { "FromCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, FromCurve), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromCurve_MetaData), NewProp_FromCurve_MetaData) }; // 885434894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_CurveTag = { "CurveTag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, CurveTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveTag_MetaData), NewProp_CurveTag_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate_SetBit(void* Obj)
{
	((FSKGToFromCurveSettings*)Obj)->bInterpolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGToFromCurveSettings), &Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolate_MetaData), NewProp_bInterpolate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, InterpolationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationTime_MetaData), NewProp_InterpolationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSpeed_MetaData), NewProp_InterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeedMultiplier = { "InterpolationSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, InterpolationSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSpeedMultiplier_MetaData), NewProp_InterpolationSpeedMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_ToCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_FromCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_CurveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGToFromCurveSettings",
	Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::PropPointers),
	sizeof(FSKGToFromCurveSettings),
	alignof(FSKGToFromCurveSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGToFromCurveSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings.InnerSingleton;
}
// End ScriptStruct FSKGToFromCurveSettings

// Begin ScriptStruct FSKGCurveReplicationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings;
class UScriptStruct* FSKGCurveReplicationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGCurveReplicationSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGCurveReplicationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGCurveReplicationSettings>()
{
	return FSKGCurveReplicationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True replicate the playing of the curve\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True replicate the playing of the curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReliable_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bReplicateCurve" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bReplicateCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateCurve;
	static void NewProp_bReliable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReliable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCurveReplicationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve_SetBit(void* Obj)
{
	((FSKGCurveReplicationSettings*)Obj)->bReplicateCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve = { "bReplicateCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGCurveReplicationSettings), &Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateCurve_MetaData), NewProp_bReplicateCurve_MetaData) };
void Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable_SetBit(void* Obj)
{
	((FSKGCurveReplicationSettings*)Obj)->bReliable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable = { "bReliable", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGCurveReplicationSettings), &Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReliable_MetaData), NewProp_bReliable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGCurveReplicationSettings",
	Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::PropPointers),
	sizeof(FSKGCurveReplicationSettings),
	alignof(FSKGCurveReplicationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGCurveReplicationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings.InnerSingleton;
}
// End ScriptStruct FSKGCurveReplicationSettings

// Begin ScriptStruct FSKGCurveSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGCurveSettings;
class UScriptStruct* FSKGCurveSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCurveSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGCurveSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGCurveSettings, (UObject*)Z_Construct_UPackage__Script_SKGProceduralAnim(), TEXT("SKGCurveSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGCurveSettings.OuterSingleton;
}
template<> SKGPROCEDURALANIM_API UScriptStruct* StaticStruct<FSKGCurveSettings>()
{
	return FSKGCurveSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGCurveSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Going from none to the curve\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Going from none to the curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replication settings for playing the curve (Not replicated by default)\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication settings for playing the curve (Not replicated by default)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCurveSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurveSettings, Curve), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) }; // 885434894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_ReplicationSettings = { "ReplicationSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurveSettings, ReplicationSettings), Z_Construct_UScriptStruct_FSKGCurveReplicationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationSettings_MetaData), NewProp_ReplicationSettings_MetaData) }; // 1744174422
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_ReplicationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	nullptr,
	&NewStructOps,
	"SKGCurveSettings",
	Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::PropPointers),
	sizeof(FSKGCurveSettings),
	alignof(FSKGCurveSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGCurveSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGCurveSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCurveSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGCurveSettings.InnerSingleton;
}
// End ScriptStruct FSKGCurveSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_DataTypes_SKGProceduralDataTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGMinMax::StaticStruct, Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewStructOps, TEXT("SKGMinMax"), &Z_Registration_Info_UScriptStruct_SKGMinMax, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMinMax), 2467776270U) },
		{ FSKGLeanLeftRightSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewStructOps, TEXT("SKGLeanLeftRightSettings"), &Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGLeanLeftRightSettings), 3452772449U) },
		{ FSKGCycleAimingPointSpringInterpSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewStructOps, TEXT("SKGCycleAimingPointSpringInterpSettings"), &Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCycleAimingPointSpringInterpSettings), 2699886851U) },
		{ FSKGCycleAimingPointSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewStructOps, TEXT("SKGCycleAimingPointSettings"), &Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCycleAimingPointSettings), 1581114284U) },
		{ FSKGMovementSwayLocationSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewStructOps, TEXT("SKGMovementSwayLocationSettings"), &Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMovementSwayLocationSettings), 1313343618U) },
		{ FSKGMovementSwaySettings::StaticStruct, Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewStructOps, TEXT("SKGMovementSwaySettings"), &Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMovementSwaySettings), 175790387U) },
		{ FSKGMovementLagSpringInterpSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewStructOps, TEXT("SKGMovementLagSpringInterpSettings"), &Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMovementLagSpringInterpSettings), 1479675311U) },
		{ FSKGMovementLagSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewStructOps, TEXT("SKGMovementLagSettings"), &Z_Registration_Info_UScriptStruct_SKGMovementLagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMovementLagSettings), 3337794734U) },
		{ FSKGRotationLagSpringInterpSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewStructOps, TEXT("SKGRotationLagSpringInterpSettings"), &Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGRotationLagSpringInterpSettings), 3668881901U) },
		{ FSKGRotationLagInterpSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewStructOps, TEXT("SKGRotationLagInterpSettings"), &Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGRotationLagInterpSettings), 91372765U) },
		{ FSKGRotationLagSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewStructOps, TEXT("SKGRotationLagSettings"), &Z_Registration_Info_UScriptStruct_SKGRotationLagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGRotationLagSettings), 1916021907U) },
		{ FSKGRecoilSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewStructOps, TEXT("SKGRecoilSettings"), &Z_Registration_Info_UScriptStruct_SKGRecoilSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGRecoilSettings), 2284626612U) },
		{ FSKGProceduralAimingSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewStructOps, TEXT("SKGProceduralAimingSettings"), &Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProceduralAimingSettings), 1681134714U) },
		{ FSKGDeadzoneSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewStructOps, TEXT("SKGDeadzoneSettings"), &Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGDeadzoneSettings), 3471035846U) },
		{ FSKGProceduralOffset::StaticStruct, Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewStructOps, TEXT("SKGProceduralOffset"), &Z_Registration_Info_UScriptStruct_SKGProceduralOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProceduralOffset), 713916620U) },
		{ FSKGFirstAndThirdPersonBasePoseOffset::StaticStruct, Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewStructOps, TEXT("SKGFirstAndThirdPersonBasePoseOffset"), &Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGFirstAndThirdPersonBasePoseOffset), 1369780864U) },
		{ FSKGCurve::StaticStruct, Z_Construct_UScriptStruct_FSKGCurve_Statics::NewStructOps, TEXT("SKGCurve"), &Z_Registration_Info_UScriptStruct_SKGCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCurve), 1987547920U) },
		{ FSKGFirstAndThirdPersonCurveSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewStructOps, TEXT("SKGFirstAndThirdPersonCurveSettings"), &Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGFirstAndThirdPersonCurveSettings), 885434894U) },
		{ FSKGToFromCurveSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewStructOps, TEXT("SKGToFromCurveSettings"), &Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGToFromCurveSettings), 965583391U) },
		{ FSKGCurveReplicationSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewStructOps, TEXT("SKGCurveReplicationSettings"), &Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCurveReplicationSettings), 1744174422U) },
		{ FSKGCurveSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewStructOps, TEXT("SKGCurveSettings"), &Z_Registration_Info_UScriptStruct_SKGCurveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCurveSettings), 1552816855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_DataTypes_SKGProceduralDataTypes_h_468511631(TEXT("/Script/SKGProceduralAnim"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_DataTypes_SKGProceduralDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_DataTypes_SKGProceduralDataTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
