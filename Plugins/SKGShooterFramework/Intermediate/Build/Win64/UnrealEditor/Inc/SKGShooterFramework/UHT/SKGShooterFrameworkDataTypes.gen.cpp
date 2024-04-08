// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFramework/Public/DataTypes/SKGShooterFrameworkDataTypes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGProceduralAnim/Public/DataTypes/SKGProceduralDataTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkDataTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings();
SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirearmCollisionData();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirearmStats();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralStats();
UPackage* Z_Construct_UPackage__Script_SKGShooterFramework();
// End Cross Module References

// Begin ScriptStruct FSKGFirearmCollisionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGFirearmCollisionData;
class UScriptStruct* FSKGFirearmCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirearmCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGFirearmCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGFirearmCollisionData, (UObject*)Z_Construct_UPackage__Script_SKGShooterFramework(), TEXT("SKGFirearmCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_SKGFirearmCollisionData.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<FSKGFirearmCollisionData>()
{
	return FSKGFirearmCollisionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnoreForTrace_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnoreForTrace_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnoreForTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGFirearmCollisionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::NewProp_PoseLocation = { "PoseLocation", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionData, PoseLocation), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseLocation_MetaData), NewProp_PoseLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::NewProp_PoseRotation = { "PoseRotation", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionData, PoseRotation), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseRotation_MetaData), NewProp_PoseRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::NewProp_ActorsToIgnoreForTrace_Inner = { "ActorsToIgnoreForTrace", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::NewProp_ActorsToIgnoreForTrace = { "ActorsToIgnoreForTrace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmCollisionData, ActorsToIgnoreForTrace), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnoreForTrace_MetaData), NewProp_ActorsToIgnoreForTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::NewProp_PoseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::NewProp_PoseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::NewProp_ActorsToIgnoreForTrace_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::NewProp_ActorsToIgnoreForTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	nullptr,
	&NewStructOps,
	"SKGFirearmCollisionData",
	Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::PropPointers),
	sizeof(FSKGFirearmCollisionData),
	alignof(FSKGFirearmCollisionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGFirearmCollisionData()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirearmCollisionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGFirearmCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGFirearmCollisionData.InnerSingleton;
}
// End ScriptStruct FSKGFirearmCollisionData

// Begin ScriptStruct FSKGFirearmStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGFirearmStats;
class UScriptStruct* FSKGFirearmStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirearmStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGFirearmStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGFirearmStats, (UObject*)Z_Construct_UPackage__Script_SKGShooterFramework(), TEXT("SKGFirearmStats"));
	}
	return Z_Registration_Info_UScriptStruct_SKGFirearmStats.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<FSKGFirearmStats>()
{
	return FSKGFirearmStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGFirearmStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Durability_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ergonomics_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Accuracy is in MOA\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accuracy is in MOA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Percentage\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Percentage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocityPercentage_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Percentage\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Percentage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Percentage\n// Rounds per minute\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Percentage\nRounds per minute" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Durability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ergonomics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocityPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGFirearmStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmStats, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmStats, Durability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Durability_MetaData), NewProp_Durability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_Ergonomics = { "Ergonomics", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmStats, Ergonomics), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ergonomics_MetaData), NewProp_Ergonomics_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmStats, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accuracy_MetaData), NewProp_Accuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_VerticalRecoil = { "VerticalRecoil", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmStats, VerticalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalRecoil_MetaData), NewProp_VerticalRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_HorizontalRecoil = { "HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmStats, HorizontalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalRecoil_MetaData), NewProp_HorizontalRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_MuzzleVelocityPercentage = { "MuzzleVelocityPercentage", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmStats, MuzzleVelocityPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleVelocityPercentage_MetaData), NewProp_MuzzleVelocityPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirearmStats, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_Durability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_Ergonomics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_VerticalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_HorizontalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_MuzzleVelocityPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewProp_FireRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	nullptr,
	&NewStructOps,
	"SKGFirearmStats",
	Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::PropPointers),
	sizeof(FSKGFirearmStats),
	alignof(FSKGFirearmStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGFirearmStats()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFirearmStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGFirearmStats.InnerSingleton, Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGFirearmStats.InnerSingleton;
}
// End ScriptStruct FSKGFirearmStats

// Begin ScriptStruct FSKGProceduralStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGProceduralStats;
class UScriptStruct* FSKGProceduralStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGProceduralStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGProceduralStats, (UObject*)Z_Construct_UPackage__Script_SKGShooterFramework(), TEXT("SKGProceduralStats"));
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralStats.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<FSKGProceduralStats>()
{
	return FSKGProceduralStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGProceduralStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimInterpolationRate_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoilMultiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoilMultiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSwayMultiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleAimingPointSpringInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementLagSpringInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementLagInterpSetting_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLagSpringInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLagInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimInterpolationRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRecoilMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoilMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSwayMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CycleAimingPointSpringInterpSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementLagSpringInterpSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementLagInterpSetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLagSpringInterpSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLagInterpSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProceduralStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_AimInterpolationRate = { "AimInterpolationRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralStats, AimInterpolationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimInterpolationRate_MetaData), NewProp_AimInterpolationRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_VerticalRecoilMultiplier = { "VerticalRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralStats, VerticalRecoilMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalRecoilMultiplier_MetaData), NewProp_VerticalRecoilMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_HorizontalRecoilMultiplier = { "HorizontalRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralStats, HorizontalRecoilMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalRecoilMultiplier_MetaData), NewProp_HorizontalRecoilMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_MovementSwayMultiplier = { "MovementSwayMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralStats, MovementSwayMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSwayMultiplier_MetaData), NewProp_MovementSwayMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_CycleAimingPointSpringInterpSettings = { "CycleAimingPointSpringInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralStats, CycleAimingPointSpringInterpSettings), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleAimingPointSpringInterpSettings_MetaData), NewProp_CycleAimingPointSpringInterpSettings_MetaData) }; // 2699886851
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_MovementLagSpringInterpSettings = { "MovementLagSpringInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralStats, MovementLagSpringInterpSettings), Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementLagSpringInterpSettings_MetaData), NewProp_MovementLagSpringInterpSettings_MetaData) }; // 1479675311
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_MovementLagInterpSetting = { "MovementLagInterpSetting", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralStats, MovementLagInterpSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementLagInterpSetting_MetaData), NewProp_MovementLagInterpSetting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_RotationLagSpringInterpSettings = { "RotationLagSpringInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralStats, RotationLagSpringInterpSettings), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLagSpringInterpSettings_MetaData), NewProp_RotationLagSpringInterpSettings_MetaData) }; // 3668881901
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_RotationLagInterpSettings = { "RotationLagInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralStats, RotationLagInterpSettings), Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLagInterpSettings_MetaData), NewProp_RotationLagInterpSettings_MetaData) }; // 91372765
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_AimInterpolationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_VerticalRecoilMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_HorizontalRecoilMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_MovementSwayMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_CycleAimingPointSpringInterpSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_MovementLagSpringInterpSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_MovementLagInterpSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_RotationLagSpringInterpSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewProp_RotationLagInterpSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	nullptr,
	&NewStructOps,
	"SKGProceduralStats",
	Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::PropPointers),
	sizeof(FSKGProceduralStats),
	alignof(FSKGProceduralStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralStats()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProceduralStats.InnerSingleton, Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralStats.InnerSingleton;
}
// End ScriptStruct FSKGProceduralStats

// Begin ScriptStruct FSKGProceduralAnimInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGProceduralAnimInstanceData;
class UScriptStruct* FSKGProceduralAnimInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralAnimInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGProceduralAnimInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData, (UObject*)Z_Construct_UPackage__Script_SKGShooterFramework(), TEXT("SKGProceduralAnimInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralAnimInstanceData.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<FSKGProceduralAnimInstanceData>()
{
	return FSKGProceduralAnimInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKPose_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OffHandIKPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProceduralAnimInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::NewProp_OffHandIKPose = { "OffHandIKPose", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralAnimInstanceData, OffHandIKPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffHandIKPose_MetaData), NewProp_OffHandIKPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::NewProp_OffHandIKPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	nullptr,
	&NewStructOps,
	"SKGProceduralAnimInstanceData",
	Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::PropPointers),
	sizeof(FSKGProceduralAnimInstanceData),
	alignof(FSKGProceduralAnimInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralAnimInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProceduralAnimInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralAnimInstanceData.InnerSingleton;
}
// End ScriptStruct FSKGProceduralAnimInstanceData

// Begin ScriptStruct FSKGProceduralShooterPawnData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGProceduralShooterPawnData;
class UScriptStruct* FSKGProceduralShooterPawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralShooterPawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGProceduralShooterPawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData, (UObject*)Z_Construct_UPackage__Script_SKGShooterFramework(), TEXT("SKGProceduralShooterPawnData"));
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralShooterPawnData.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<FSKGProceduralShooterPawnData>()
{
	return FSKGProceduralShooterPawnData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralAnimGameplayTag_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOffHandIKIsLeftHand_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeLookLookAtLocation_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralAnimGameplayTag;
	static void NewProp_bOffHandIKIsLeftHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffHandIKIsLeftHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreeLookLookAtLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProceduralShooterPawnData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::NewProp_ProceduralAnimGameplayTag = { "ProceduralAnimGameplayTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralShooterPawnData, ProceduralAnimGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralAnimGameplayTag_MetaData), NewProp_ProceduralAnimGameplayTag_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::NewProp_bOffHandIKIsLeftHand_SetBit(void* Obj)
{
	((FSKGProceduralShooterPawnData*)Obj)->bOffHandIKIsLeftHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::NewProp_bOffHandIKIsLeftHand = { "bOffHandIKIsLeftHand", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProceduralShooterPawnData), &Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::NewProp_bOffHandIKIsLeftHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOffHandIKIsLeftHand_MetaData), NewProp_bOffHandIKIsLeftHand_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::NewProp_FreeLookLookAtLocation = { "FreeLookLookAtLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralShooterPawnData, FreeLookLookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeLookLookAtLocation_MetaData), NewProp_FreeLookLookAtLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::NewProp_ProceduralAnimGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::NewProp_bOffHandIKIsLeftHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::NewProp_FreeLookLookAtLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	nullptr,
	&NewStructOps,
	"SKGProceduralShooterPawnData",
	Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::PropPointers),
	sizeof(FSKGProceduralShooterPawnData),
	alignof(FSKGProceduralShooterPawnData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralShooterPawnData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProceduralShooterPawnData.InnerSingleton, Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralShooterPawnData.InnerSingleton;
}
// End ScriptStruct FSKGProceduralShooterPawnData

// Begin ScriptStruct FSKGProceduralPoseReplicationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGProceduralPoseReplicationData;
class UScriptStruct* FSKGProceduralPoseReplicationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralPoseReplicationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGProceduralPoseReplicationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData, (UObject*)Z_Construct_UPackage__Script_SKGShooterFramework(), TEXT("SKGProceduralPoseReplicationData"));
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralPoseReplicationData.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<FSKGProceduralPoseReplicationData>()
{
	return FSKGProceduralPoseReplicationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExitPose_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGShooterFrameworkDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_bExitPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExitPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProceduralPoseReplicationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralPoseReplicationData, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::NewProp_bExitPose_SetBit(void* Obj)
{
	((FSKGProceduralPoseReplicationData*)Obj)->bExitPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::NewProp_bExitPose = { "bExitPose", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProceduralPoseReplicationData), &Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::NewProp_bExitPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExitPose_MetaData), NewProp_bExitPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::NewProp_bExitPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	nullptr,
	&NewStructOps,
	"SKGProceduralPoseReplicationData",
	Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::PropPointers),
	sizeof(FSKGProceduralPoseReplicationData),
	alignof(FSKGProceduralPoseReplicationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProceduralPoseReplicationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProceduralPoseReplicationData.InnerSingleton, Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGProceduralPoseReplicationData.InnerSingleton;
}
// End ScriptStruct FSKGProceduralPoseReplicationData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_DataTypes_SKGShooterFrameworkDataTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGFirearmCollisionData::StaticStruct, Z_Construct_UScriptStruct_FSKGFirearmCollisionData_Statics::NewStructOps, TEXT("SKGFirearmCollisionData"), &Z_Registration_Info_UScriptStruct_SKGFirearmCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGFirearmCollisionData), 1984410674U) },
		{ FSKGFirearmStats::StaticStruct, Z_Construct_UScriptStruct_FSKGFirearmStats_Statics::NewStructOps, TEXT("SKGFirearmStats"), &Z_Registration_Info_UScriptStruct_SKGFirearmStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGFirearmStats), 1871522734U) },
		{ FSKGProceduralStats::StaticStruct, Z_Construct_UScriptStruct_FSKGProceduralStats_Statics::NewStructOps, TEXT("SKGProceduralStats"), &Z_Registration_Info_UScriptStruct_SKGProceduralStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProceduralStats), 1574331741U) },
		{ FSKGProceduralAnimInstanceData::StaticStruct, Z_Construct_UScriptStruct_FSKGProceduralAnimInstanceData_Statics::NewStructOps, TEXT("SKGProceduralAnimInstanceData"), &Z_Registration_Info_UScriptStruct_SKGProceduralAnimInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProceduralAnimInstanceData), 4010959635U) },
		{ FSKGProceduralShooterPawnData::StaticStruct, Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData_Statics::NewStructOps, TEXT("SKGProceduralShooterPawnData"), &Z_Registration_Info_UScriptStruct_SKGProceduralShooterPawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProceduralShooterPawnData), 3550165634U) },
		{ FSKGProceduralPoseReplicationData::StaticStruct, Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData_Statics::NewStructOps, TEXT("SKGProceduralPoseReplicationData"), &Z_Registration_Info_UScriptStruct_SKGProceduralPoseReplicationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProceduralPoseReplicationData), 743368900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_DataTypes_SKGShooterFrameworkDataTypes_h_732467221(TEXT("/Script/SKGShooterFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_DataTypes_SKGShooterFrameworkDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_DataTypes_SKGShooterFrameworkDataTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
