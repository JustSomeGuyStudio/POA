// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGOptic/Public/Components/SKGOpticComponent.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGOptic/Public/DataTypes/SKGOpticCoreDataTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGOpticComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticComponent();
SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticComponent_NoRegister();
SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticSceneCaptureComponent_NoRegister();
SKGOPTIC_API UEnum* Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment();
SKGOPTIC_API UEnum* Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment();
SKGOPTIC_API UEnum* Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticReticle();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticReticleSettings();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticZeroSettings();
UPackage* Z_Construct_UPackage__Script_SKGOptic();
// End Cross Module References

// Begin Enum ESKGOpticAdjustmentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESKGOpticAdjustmentType;
static UEnum* ESKGOpticAdjustmentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESKGOpticAdjustmentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESKGOpticAdjustmentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("ESKGOpticAdjustmentType"));
	}
	return Z_Registration_Info_UEnum_ESKGOpticAdjustmentType.OuterSingleton;
}
template<> SKGOPTIC_API UEnum* StaticEnum<ESKGOpticAdjustmentType>()
{
	return ESKGOpticAdjustmentType_StaticEnum();
}
struct Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MOA.DisplayName", "MOA" },
		{ "MOA.Name", "ESKGOpticAdjustmentType::MOA" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "MRAD.DisplayName", "MRAD" },
		{ "MRAD.Name", "ESKGOpticAdjustmentType::MRAD" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESKGOpticAdjustmentType::MOA", (int64)ESKGOpticAdjustmentType::MOA },
		{ "ESKGOpticAdjustmentType::MRAD", (int64)ESKGOpticAdjustmentType::MRAD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	"ESKGOpticAdjustmentType",
	"ESKGOpticAdjustmentType",
	Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType()
{
	if (!Z_Registration_Info_UEnum_ESKGOpticAdjustmentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESKGOpticAdjustmentType.InnerSingleton, Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESKGOpticAdjustmentType.InnerSingleton;
}
// End Enum ESKGOpticAdjustmentType

// Begin Enum ESKGMRADAdjustment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESKGMRADAdjustment;
static UEnum* ESKGMRADAdjustment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESKGMRADAdjustment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESKGMRADAdjustment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("ESKGMRADAdjustment"));
	}
	return Z_Registration_Info_UEnum_ESKGMRADAdjustment.OuterSingleton;
}
template<> SKGOPTIC_API UEnum* StaticEnum<ESKGMRADAdjustment>()
{
	return ESKGMRADAdjustment_StaticEnum();
}
struct Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "PointOne.DisplayName", ".1" },
		{ "PointOne.Name", "ESKGMRADAdjustment::PointOne" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESKGMRADAdjustment::PointOne", (int64)ESKGMRADAdjustment::PointOne },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	"ESKGMRADAdjustment",
	"ESKGMRADAdjustment",
	Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment()
{
	if (!Z_Registration_Info_UEnum_ESKGMRADAdjustment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESKGMRADAdjustment.InnerSingleton, Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESKGMRADAdjustment.InnerSingleton;
}
// End Enum ESKGMRADAdjustment

// Begin Enum ESKGMOAAdjustment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESKGMOAAdjustment;
static UEnum* ESKGMOAAdjustment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESKGMOAAdjustment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESKGMOAAdjustment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("ESKGMOAAdjustment"));
	}
	return Z_Registration_Info_UEnum_ESKGMOAAdjustment.OuterSingleton;
}
template<> SKGOPTIC_API UEnum* StaticEnum<ESKGMOAAdjustment>()
{
	return ESKGMOAAdjustment_StaticEnum();
}
struct Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "One.DisplayName", "1" },
		{ "One.Name", "ESKGMOAAdjustment::One" },
		{ "OneEighth.DisplayName", "1/8" },
		{ "OneEighth.Name", "ESKGMOAAdjustment::OneEighth" },
		{ "OneHalf.DisplayName", "1/2" },
		{ "OneHalf.Name", "ESKGMOAAdjustment::OneHalf" },
		{ "OneQuarter.DisplayName", "1/4" },
		{ "OneQuarter.Name", "ESKGMOAAdjustment::OneQuarter" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESKGMOAAdjustment::OneEighth", (int64)ESKGMOAAdjustment::OneEighth },
		{ "ESKGMOAAdjustment::OneQuarter", (int64)ESKGMOAAdjustment::OneQuarter },
		{ "ESKGMOAAdjustment::OneHalf", (int64)ESKGMOAAdjustment::OneHalf },
		{ "ESKGMOAAdjustment::One", (int64)ESKGMOAAdjustment::One },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	"ESKGMOAAdjustment",
	"ESKGMOAAdjustment",
	Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment()
{
	if (!Z_Registration_Info_UEnum_ESKGMOAAdjustment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESKGMOAAdjustment.InnerSingleton, Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESKGMOAAdjustment.InnerSingleton;
}
// End Enum ESKGMOAAdjustment

// Begin ScriptStruct FSKGOpticStartingZeroSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings;
class UScriptStruct* FSKGOpticStartingZeroSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("SKGOpticStartingZeroSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings.OuterSingleton;
}
template<> SKGOPTIC_API UScriptStruct* StaticStruct<FSKGOpticStartingZeroSettings>()
{
	return FSKGOpticStartingZeroSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartWithDefaultZero_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultElevationClicks_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWindageClicks_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartWithRandomZero_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "!bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomMaxElevationClicks_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "bStartWithRandomZero && !bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomMaxWindageClicks_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "bStartWithRandomZero && !bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bStartWithDefaultZero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartWithDefaultZero;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultElevationClicks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultWindageClicks;
	static void NewProp_bStartWithRandomZero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartWithRandomZero;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomMaxElevationClicks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomMaxWindageClicks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticStartingZeroSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero_SetBit(void* Obj)
{
	((FSKGOpticStartingZeroSettings*)Obj)->bStartWithDefaultZero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero = { "bStartWithDefaultZero", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticStartingZeroSettings), &Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartWithDefaultZero_MetaData), NewProp_bStartWithDefaultZero_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultElevationClicks = { "DefaultElevationClicks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticStartingZeroSettings, DefaultElevationClicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultElevationClicks_MetaData), NewProp_DefaultElevationClicks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultWindageClicks = { "DefaultWindageClicks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticStartingZeroSettings, DefaultWindageClicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWindageClicks_MetaData), NewProp_DefaultWindageClicks_MetaData) };
void Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero_SetBit(void* Obj)
{
	((FSKGOpticStartingZeroSettings*)Obj)->bStartWithRandomZero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero = { "bStartWithRandomZero", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticStartingZeroSettings), &Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartWithRandomZero_MetaData), NewProp_bStartWithRandomZero_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxElevationClicks = { "RandomMaxElevationClicks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticStartingZeroSettings, RandomMaxElevationClicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomMaxElevationClicks_MetaData), NewProp_RandomMaxElevationClicks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxWindageClicks = { "RandomMaxWindageClicks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticStartingZeroSettings, RandomMaxWindageClicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomMaxWindageClicks_MetaData), NewProp_RandomMaxWindageClicks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultElevationClicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultWindageClicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxElevationClicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxWindageClicks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	&NewStructOps,
	"SKGOpticStartingZeroSettings",
	Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::PropPointers),
	sizeof(FSKGOpticStartingZeroSettings),
	alignof(FSKGOpticStartingZeroSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings.InnerSingleton;
}
// End ScriptStruct FSKGOpticStartingZeroSettings

// Begin ScriptStruct FSKGOpticZeroSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings;
class UScriptStruct* FSKGOpticZeroSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGOpticZeroSettings, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("SKGOpticZeroSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings.OuterSingleton;
}
template<> SKGOPTIC_API UScriptStruct* StaticStruct<FSKGOpticZeroSettings>()
{
	return FSKGOpticZeroSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentType_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MOAAdjustmentAmount_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "AdjustmentType == ESKGOpticAdjustmentType::MOA" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MRADAdjustmentAmount_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "AdjustmentType == ESKGOpticAdjustmentType::MRAD" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingZeroSettings_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AdjustmentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AdjustmentType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MOAAdjustmentAmount_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MOAAdjustmentAmount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MRADAdjustmentAmount_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MRADAdjustmentAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingZeroSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticZeroSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType = { "AdjustmentType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticZeroSettings, AdjustmentType), Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustmentType_MetaData), NewProp_AdjustmentType_MetaData) }; // 1391403322
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount = { "MOAAdjustmentAmount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticZeroSettings, MOAAdjustmentAmount), Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MOAAdjustmentAmount_MetaData), NewProp_MOAAdjustmentAmount_MetaData) }; // 4078331871
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount = { "MRADAdjustmentAmount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticZeroSettings, MRADAdjustmentAmount), Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MRADAdjustmentAmount_MetaData), NewProp_MRADAdjustmentAmount_MetaData) }; // 1511564308
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_StartingZeroSettings = { "StartingZeroSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticZeroSettings, StartingZeroSettings), Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingZeroSettings_MetaData), NewProp_StartingZeroSettings_MetaData) }; // 3995485876
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_StartingZeroSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	&NewStructOps,
	"SKGOpticZeroSettings",
	Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::PropPointers),
	sizeof(FSKGOpticZeroSettings),
	alignof(FSKGOpticZeroSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticZeroSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings.InnerSingleton;
}
// End ScriptStruct FSKGOpticZeroSettings

// Begin ScriptStruct FSKGOpticReticleSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings;
class UScriptStruct* FSKGOpticReticleSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGOpticReticleSettings, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("SKGOpticReticleSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings.OuterSingleton;
}
template<> SKGOPTIC_API UScriptStruct* StaticStruct<FSKGOpticReticleSettings>()
{
	return FSKGOpticReticleSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterialIndex_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material Index that your reticle is on\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material Index that your reticle is on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterials_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of reticle materials to cycle through\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of reticle materials to cycle through" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnAimedReticleMaterial_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to use when you are not aiming. Used only with magnified optics\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to use when you are not aiming. Used only with magnified optics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnAimedCaptureDelay_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When you stop aiming, how long before the capture stops and reticle change happens. Used only with magnified optics\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When you stop aiming, how long before the capture stops and reticle change happens. Used only with magnified optics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleBrightnessParameterName_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parameter name in the material that controls reticle brightness\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter name in the material that controls reticle brightness" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleBrightnessSettings_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Brightness settings for default mode\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brightness settings for default mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleNightVisionBrightnessSettings_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Brightness settings for the night vision mode\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brightness settings for the night vision mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReticleMaterialIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReticleMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReticleMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnAimedReticleMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnAimedCaptureDelay;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReticleBrightnessParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReticleBrightnessSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReticleBrightnessSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReticleNightVisionBrightnessSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReticleNightVisionBrightnessSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticReticleSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterialIndex = { "ReticleMaterialIndex", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleMaterialIndex_MetaData), NewProp_ReticleMaterialIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterials_Inner = { "ReticleMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGOpticReticle, METADATA_PARAMS(0, nullptr) }; // 3356468478
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterials = { "ReticleMaterials", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleMaterials_MetaData), NewProp_ReticleMaterials_MetaData) }; // 3356468478
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedReticleMaterial = { "UnAimedReticleMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, UnAimedReticleMaterial), Z_Construct_UScriptStruct_FSKGOpticReticle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnAimedReticleMaterial_MetaData), NewProp_UnAimedReticleMaterial_MetaData) }; // 3356468478
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedCaptureDelay = { "UnAimedCaptureDelay", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, UnAimedCaptureDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnAimedCaptureDelay_MetaData), NewProp_UnAimedCaptureDelay_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessParameterName = { "ReticleBrightnessParameterName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleBrightnessParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleBrightnessParameterName_MetaData), NewProp_ReticleBrightnessParameterName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessSettings_Inner = { "ReticleBrightnessSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessSettings = { "ReticleBrightnessSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleBrightnessSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleBrightnessSettings_MetaData), NewProp_ReticleBrightnessSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleNightVisionBrightnessSettings_Inner = { "ReticleNightVisionBrightnessSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleNightVisionBrightnessSettings = { "ReticleNightVisionBrightnessSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleNightVisionBrightnessSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleNightVisionBrightnessSettings_MetaData), NewProp_ReticleNightVisionBrightnessSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedReticleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedCaptureDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleNightVisionBrightnessSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleNightVisionBrightnessSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	&NewStructOps,
	"SKGOpticReticleSettings",
	Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::PropPointers),
	sizeof(FSKGOpticReticleSettings),
	alignof(FSKGOpticReticleSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticReticleSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings.InnerSingleton;
}
// End ScriptStruct FSKGOpticReticleSettings

// Begin ScriptStruct FSKGOpticMagnificationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings;
class UScriptStruct* FSKGOpticMagnificationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("SKGOpticMagnificationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings.OuterSingleton;
}
template<> SKGOPTIC_API UScriptStruct* StaticStruct<FSKGOpticMagnificationSettings>()
{
	return FSKGOpticMagnificationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnifications_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used in conjunction with SKGOpticSceneCaptureComponent\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used in conjunction with SKGOpticSceneCaptureComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothZoom_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, zooming in/out will be handled smoothly\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, zooming in/out will be handled smoothly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothZoomRate_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "EditCondition", "bSmoothZoom" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShrinkEyeboxWithMagnification_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used in conjunction with SKGOpticSceneCaptureComponent. Allows the eyebox to shrink by a given amount as you zoon in\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used in conjunction with SKGOpticSceneCaptureComponent. Allows the eyebox to shrink by a given amount as you zoon in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkEyeboxMultiplier_MetaData[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used in conjunction with SKGOpticSceneCaptureComponent. Amount to shrink the eyebox by as you zoom in\n" },
#endif
		{ "EditCondition", "bShrinkEyeboxWithMagnification" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used in conjunction with SKGOpticSceneCaptureComponent. Amount to shrink the eyebox by as you zoom in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFirstFocalPlane_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true the optic will be first focal plane and the reticle will scale as you zoom in/out\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true the optic will be first focal plane and the reticle will scale as you zoom in/out" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnifications_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Magnifications;
	static void NewProp_bSmoothZoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothZoom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothZoomRate;
	static void NewProp_bShrinkEyeboxWithMagnification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShrinkEyeboxWithMagnification;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShrinkEyeboxMultiplier;
	static void NewProp_bIsFirstFocalPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFirstFocalPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticMagnificationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications_Inner = { "Magnifications", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications = { "Magnifications", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticMagnificationSettings, Magnifications), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnifications_MetaData), NewProp_Magnifications_MetaData) };
void Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom_SetBit(void* Obj)
{
	((FSKGOpticMagnificationSettings*)Obj)->bSmoothZoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom = { "bSmoothZoom", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticMagnificationSettings), &Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothZoom_MetaData), NewProp_bSmoothZoom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_SmoothZoomRate = { "SmoothZoomRate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticMagnificationSettings, SmoothZoomRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothZoomRate_MetaData), NewProp_SmoothZoomRate_MetaData) };
void Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification_SetBit(void* Obj)
{
	((FSKGOpticMagnificationSettings*)Obj)->bShrinkEyeboxWithMagnification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification = { "bShrinkEyeboxWithMagnification", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticMagnificationSettings), &Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShrinkEyeboxWithMagnification_MetaData), NewProp_bShrinkEyeboxWithMagnification_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_ShrinkEyeboxMultiplier = { "ShrinkEyeboxMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticMagnificationSettings, ShrinkEyeboxMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShrinkEyeboxMultiplier_MetaData), NewProp_ShrinkEyeboxMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane_SetBit(void* Obj)
{
	((FSKGOpticMagnificationSettings*)Obj)->bIsFirstFocalPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane = { "bIsFirstFocalPlane", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticMagnificationSettings), &Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFirstFocalPlane_MetaData), NewProp_bIsFirstFocalPlane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_SmoothZoomRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_ShrinkEyeboxMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	&NewStructOps,
	"SKGOpticMagnificationSettings",
	Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::PropPointers),
	sizeof(FSKGOpticMagnificationSettings),
	alignof(FSKGOpticMagnificationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings.InnerSingleton;
}
// End ScriptStruct FSKGOpticMagnificationSettings

// Begin Class USKGOpticComponent Function ApplyLookAtRotationZero
struct Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics
{
	struct SKGOpticComponent_eventApplyLookAtRotationZero_Parms
	{
		FRotator LookAtRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::NewProp_LookAtRotation = { "LookAtRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventApplyLookAtRotationZero_Parms, LookAtRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtRotation_MetaData), NewProp_LookAtRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::NewProp_LookAtRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "ApplyLookAtRotationZero", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::SKGOpticComponent_eventApplyLookAtRotationZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::SKGOpticComponent_eventApplyLookAtRotationZero_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execApplyLookAtRotationZero)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_LookAtRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyLookAtRotationZero(Z_Param_Out_LookAtRotation);
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function ApplyLookAtRotationZero

// Begin Class USKGOpticComponent Function CycleReticle
struct Z_Construct_UFunction_USKGOpticComponent_CycleReticle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Reticle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cycles through the set reticles based on the given settings\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cycles through the set reticles based on the given settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_CycleReticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "CycleReticle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_CycleReticle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_CycleReticle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticComponent_CycleReticle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_CycleReticle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execCycleReticle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CycleReticle();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function CycleReticle

// Begin Class USKGOpticComponent Function DecreaseReticleBrightness
struct Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Reticle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decreases your reticle brightness based on the given settings\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decreases your reticle brightness based on the given settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "DecreaseReticleBrightness", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execDecreaseReticleBrightness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseReticleBrightness();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function DecreaseReticleBrightness

// Begin Class USKGOpticComponent Function GetCurrentMagnification
struct Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics
{
	struct SKGOpticComponent_eventGetCurrentMagnification_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zoom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @return the current magnification of the optic\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return the current magnification of the optic" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventGetCurrentMagnification_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "GetCurrentMagnification", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::SKGOpticComponent_eventGetCurrentMagnification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::SKGOpticComponent_eventGetCurrentMagnification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execGetCurrentMagnification)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentMagnification();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function GetCurrentMagnification

// Begin Class USKGOpticComponent Function GetOpticMesh
struct Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics
{
	struct SKGOpticComponent_eventGetOpticMesh_Parms
	{
		UMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "SKGOptic" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventGetOpticMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "GetOpticMesh", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::SKGOpticComponent_eventGetOpticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::SKGOpticComponent_eventGetOpticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execGetOpticMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshComponent**)Z_Param__Result=P_THIS->GetOpticMesh();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function GetOpticMesh

// Begin Class USKGOpticComponent Function IncreaseReticleBrightness
struct Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Reticle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increases your reticle brightness based on the given settings\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increases your reticle brightness based on the given settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "IncreaseReticleBrightness", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execIncreaseReticleBrightness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseReticleBrightness();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function IncreaseReticleBrightness

// Begin Class USKGOpticComponent Function IsMagnifiedOptic
struct Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics
{
	struct SKGOpticComponent_eventIsMagnifiedOptic_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @return true, this optic is magnified\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return true, this optic is magnified" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGOpticComponent_eventIsMagnifiedOptic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGOpticComponent_eventIsMagnifiedOptic_Parms), &Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "IsMagnifiedOptic", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::SKGOpticComponent_eventIsMagnifiedOptic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::SKGOpticComponent_eventIsMagnifiedOptic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execIsMagnifiedOptic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMagnifiedOptic();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function IsMagnifiedOptic

// Begin Class USKGOpticComponent Function PointOfImpactDown
struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics
{
	struct SKGOpticComponent_eventPointOfImpactDown_Parms
	{
		int32 Clicks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adjust your zero so your point of impact moves Down\n\x09 * @param Clicks How many clicks of the turret\n\x09 */" },
#endif
		{ "CPP_Default_Clicks", "1" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adjust your zero so your point of impact moves Down\n@param Clicks How many clicks of the turret" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clicks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Clicks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::NewProp_Clicks = { "Clicks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactDown_Parms, Clicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clicks_MetaData), NewProp_Clicks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::NewProp_Clicks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactDown", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::SKGOpticComponent_eventPointOfImpactDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::SKGOpticComponent_eventPointOfImpactDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactDown)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Clicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactDown(Z_Param_Clicks);
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function PointOfImpactDown

// Begin Class USKGOpticComponent Function PointOfImpactLeft
struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics
{
	struct SKGOpticComponent_eventPointOfImpactLeft_Parms
	{
		int32 Clicks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adjust your zero so your point of impact moves Left\n\x09 * @param Clicks How many clicks of the turret\n\x09 */" },
#endif
		{ "CPP_Default_Clicks", "1" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adjust your zero so your point of impact moves Left\n@param Clicks How many clicks of the turret" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clicks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Clicks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::NewProp_Clicks = { "Clicks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactLeft_Parms, Clicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clicks_MetaData), NewProp_Clicks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::NewProp_Clicks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactLeft", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::SKGOpticComponent_eventPointOfImpactLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::SKGOpticComponent_eventPointOfImpactLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactLeft)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Clicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactLeft(Z_Param_Clicks);
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function PointOfImpactLeft

// Begin Class USKGOpticComponent Function PointOfImpactLeftRightDefault
struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics
{
	struct SKGOpticComponent_eventPointOfImpactLeftRightDefault_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sets the point of impact for windage back to default\n\x09* @return the amount of clicks required for turrent to return back to 0\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the point of impact for windage back to default\n      * @return the amount of clicks required for turrent to return back to 0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactLeftRightDefault_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactLeftRightDefault", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::SKGOpticComponent_eventPointOfImpactLeftRightDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::SKGOpticComponent_eventPointOfImpactLeftRightDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactLeftRightDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PointOfImpactLeftRightDefault();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function PointOfImpactLeftRightDefault

// Begin Class USKGOpticComponent Function PointOfImpactRight
struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics
{
	struct SKGOpticComponent_eventPointOfImpactRight_Parms
	{
		int32 Clicks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adjust your zero so your point of impact moves Right\n\x09 * @param Clicks How many clicks of the turret\n\x09 */" },
#endif
		{ "CPP_Default_Clicks", "1" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adjust your zero so your point of impact moves Right\n@param Clicks How many clicks of the turret" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clicks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Clicks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::NewProp_Clicks = { "Clicks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactRight_Parms, Clicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clicks_MetaData), NewProp_Clicks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::NewProp_Clicks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactRight", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::SKGOpticComponent_eventPointOfImpactRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::SKGOpticComponent_eventPointOfImpactRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactRight)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Clicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactRight(Z_Param_Clicks);
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function PointOfImpactRight

// Begin Class USKGOpticComponent Function PointOfImpactUp
struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics
{
	struct SKGOpticComponent_eventPointOfImpactUp_Parms
	{
		int32 Clicks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adjust your zero so your point of impact moves up\n\x09 * @param Clicks How many clicks of the turret\n\x09 */" },
#endif
		{ "CPP_Default_Clicks", "1" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adjust your zero so your point of impact moves up\n@param Clicks How many clicks of the turret" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clicks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Clicks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::NewProp_Clicks = { "Clicks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactUp_Parms, Clicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clicks_MetaData), NewProp_Clicks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::NewProp_Clicks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactUp", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::SKGOpticComponent_eventPointOfImpactUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::SKGOpticComponent_eventPointOfImpactUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactUp)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Clicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactUp(Z_Param_Clicks);
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function PointOfImpactUp

// Begin Class USKGOpticComponent Function PointOfImpactUpDownDefault
struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics
{
	struct SKGOpticComponent_eventPointOfImpactUpDownDefault_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sets the point of impact for elevation back to default\n\x09 * @return the amount of clicks required for turrent to return back to 0\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the point of impact for elevation back to default\n       * @return the amount of clicks required for turrent to return back to 0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactUpDownDefault_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactUpDownDefault", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::SKGOpticComponent_eventPointOfImpactUpDownDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::SKGOpticComponent_eventPointOfImpactUpDownDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactUpDownDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PointOfImpactUpDownDefault();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function PointOfImpactUpDownDefault

// Begin Class USKGOpticComponent Function StartedAiming
struct Z_Construct_UFunction_USKGOpticComponent_StartedAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_StartedAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "StartedAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_StartedAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_StartedAiming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticComponent_StartedAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_StartedAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execStartedAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartedAiming();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function StartedAiming

// Begin Class USKGOpticComponent Function StoppedAiming
struct Z_Construct_UFunction_USKGOpticComponent_StoppedAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_StoppedAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "StoppedAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_StoppedAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_StoppedAiming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticComponent_StoppedAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_StoppedAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execStoppedAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StoppedAiming();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function StoppedAiming

// Begin Class USKGOpticComponent Function ToggleReticleNightVisionSetting
struct Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Reticle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Toggles the night vision setting on the optic (bright to not bright)\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles the night vision setting on the optic (bright to not bright)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "ToggleReticleNightVisionSetting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execToggleReticleNightVisionSetting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleReticleNightVisionSetting();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function ToggleReticleNightVisionSetting

// Begin Class USKGOpticComponent Function ZoomIn
struct Z_Construct_UFunction_USKGOpticComponent_ZoomIn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zoom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Zom your optic in\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zom your optic in" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "ZoomIn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ZoomIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_ZoomIn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticComponent_ZoomIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_ZoomIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execZoomIn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ZoomIn();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function ZoomIn

// Begin Class USKGOpticComponent Function ZoomOut
struct Z_Construct_UFunction_USKGOpticComponent_ZoomOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zoom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Zoom your optic out\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zoom your optic out" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "ZoomOut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ZoomOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_ZoomOut_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticComponent_ZoomOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticComponent_ZoomOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticComponent::execZoomOut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ZoomOut();
	P_NATIVE_END;
}
// End Class USKGOpticComponent Function ZoomOut

// Begin Class USKGOpticComponent
void USKGOpticComponent::StaticRegisterNativesUSKGOpticComponent()
{
	UClass* Class = USKGOpticComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyLookAtRotationZero", &USKGOpticComponent::execApplyLookAtRotationZero },
		{ "CycleReticle", &USKGOpticComponent::execCycleReticle },
		{ "DecreaseReticleBrightness", &USKGOpticComponent::execDecreaseReticleBrightness },
		{ "GetCurrentMagnification", &USKGOpticComponent::execGetCurrentMagnification },
		{ "GetOpticMesh", &USKGOpticComponent::execGetOpticMesh },
		{ "IncreaseReticleBrightness", &USKGOpticComponent::execIncreaseReticleBrightness },
		{ "IsMagnifiedOptic", &USKGOpticComponent::execIsMagnifiedOptic },
		{ "PointOfImpactDown", &USKGOpticComponent::execPointOfImpactDown },
		{ "PointOfImpactLeft", &USKGOpticComponent::execPointOfImpactLeft },
		{ "PointOfImpactLeftRightDefault", &USKGOpticComponent::execPointOfImpactLeftRightDefault },
		{ "PointOfImpactRight", &USKGOpticComponent::execPointOfImpactRight },
		{ "PointOfImpactUp", &USKGOpticComponent::execPointOfImpactUp },
		{ "PointOfImpactUpDownDefault", &USKGOpticComponent::execPointOfImpactUpDownDefault },
		{ "StartedAiming", &USKGOpticComponent::execStartedAiming },
		{ "StoppedAiming", &USKGOpticComponent::execStoppedAiming },
		{ "ToggleReticleNightVisionSetting", &USKGOpticComponent::execToggleReticleNightVisionSetting },
		{ "ZoomIn", &USKGOpticComponent::execZoomIn },
		{ "ZoomOut", &USKGOpticComponent::execZoomOut },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGOpticComponent);
UClass* Z_Construct_UClass_USKGOpticComponent_NoRegister()
{
	return USKGOpticComponent::StaticClass();
}
struct Z_Construct_UClass_USKGOpticComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGOpticComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpticMeshName_MetaData[] = {
		{ "Category", "SKGOptic|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the mesh that is used for the optic itself (contains the reticle)\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the mesh that is used for the optic itself (contains the reticle)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpticSceneCaptureComponentName_MetaData[] = {
		{ "Category", "SKGOptic|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional Scene Capature Component that gets controlled through this class\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Scene Capature Component that gets controlled through this class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGOptic|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleSettings_MetaData[] = {
		{ "Category", "SKGOptic|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnificationSettings_MetaData[] = {
		{ "Category", "SKGOptic|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpticZeroSettings_MetaData[] = {
		{ "Category", "SKGOptic|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCallForceNetUpdate_MetaData[] = {
		{ "Category", "SKGOptic|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Useful if your NetUpdateFrequency is set super low\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful if your NetUpdateFrequency is set super low" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpticMesh_MetaData[] = {
		{ "BlueprintGetter", "GetOpticMesh" },
		{ "Category", "SKGOptic|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpticSceneCaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OpticMeshName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OpticSceneCaptureComponentName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReticleSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagnificationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpticZeroSettings;
	static void NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCallForceNetUpdate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpticSceneCaptureComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero, "ApplyLookAtRotationZero" }, // 2493615302
		{ &Z_Construct_UFunction_USKGOpticComponent_CycleReticle, "CycleReticle" }, // 731511579
		{ &Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness, "DecreaseReticleBrightness" }, // 310415637
		{ &Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification, "GetCurrentMagnification" }, // 464325616
		{ &Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh, "GetOpticMesh" }, // 767808379
		{ &Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness, "IncreaseReticleBrightness" }, // 2363657573
		{ &Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic, "IsMagnifiedOptic" }, // 2923449659
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown, "PointOfImpactDown" }, // 4057788329
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft, "PointOfImpactLeft" }, // 1856693371
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault, "PointOfImpactLeftRightDefault" }, // 2722083962
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight, "PointOfImpactRight" }, // 243369760
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp, "PointOfImpactUp" }, // 238475172
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault, "PointOfImpactUpDownDefault" }, // 1643369172
		{ &Z_Construct_UFunction_USKGOpticComponent_StartedAiming, "StartedAiming" }, // 1997837497
		{ &Z_Construct_UFunction_USKGOpticComponent_StoppedAiming, "StoppedAiming" }, // 3588882411
		{ &Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting, "ToggleReticleNightVisionSetting" }, // 4176316342
		{ &Z_Construct_UFunction_USKGOpticComponent_ZoomIn, "ZoomIn" }, // 2952025193
		{ &Z_Construct_UFunction_USKGOpticComponent_ZoomOut, "ZoomOut" }, // 3746171332
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGOpticComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMeshName = { "OpticMeshName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpticMeshName_MetaData), NewProp_OpticMeshName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponentName = { "OpticSceneCaptureComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticSceneCaptureComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpticSceneCaptureComponentName_MetaData), NewProp_OpticSceneCaptureComponentName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_ReticleSettings = { "ReticleSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, ReticleSettings), Z_Construct_UScriptStruct_FSKGOpticReticleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleSettings_MetaData), NewProp_ReticleSettings_MetaData) }; // 4143258995
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_MagnificationSettings = { "MagnificationSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, MagnificationSettings), Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnificationSettings_MetaData), NewProp_MagnificationSettings_MetaData) }; // 1641328758
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticZeroSettings = { "OpticZeroSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticZeroSettings), Z_Construct_UScriptStruct_FSKGOpticZeroSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpticZeroSettings_MetaData), NewProp_OpticZeroSettings_MetaData) }; // 462194368
void Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj)
{
	((USKGOpticComponent*)Obj)->bAutoCallForceNetUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate = { "bAutoCallForceNetUpdate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGOpticComponent), &Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCallForceNetUpdate_MetaData), NewProp_bAutoCallForceNetUpdate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMesh = { "OpticMesh", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpticMesh_MetaData), NewProp_OpticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponent = { "OpticSceneCaptureComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticSceneCaptureComponent), Z_Construct_UClass_USKGOpticSceneCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpticSceneCaptureComponent_MetaData), NewProp_OpticSceneCaptureComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGOpticComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_ReticleSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_MagnificationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticZeroSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGOpticComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGOpticComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGOpticComponent, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGOpticComponent_Statics::ClassParams = {
	&USKGOpticComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USKGOpticComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGOpticComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGOpticComponent()
{
	if (!Z_Registration_Info_UClass_USKGOpticComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGOpticComponent.OuterSingleton, Z_Construct_UClass_USKGOpticComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGOpticComponent.OuterSingleton;
}
template<> SKGOPTIC_API UClass* StaticClass<USKGOpticComponent>()
{
	return USKGOpticComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGOpticComponent);
USKGOpticComponent::~USKGOpticComponent() {}
// End Class USKGOpticComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESKGOpticAdjustmentType_StaticEnum, TEXT("ESKGOpticAdjustmentType"), &Z_Registration_Info_UEnum_ESKGOpticAdjustmentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1391403322U) },
		{ ESKGMRADAdjustment_StaticEnum, TEXT("ESKGMRADAdjustment"), &Z_Registration_Info_UEnum_ESKGMRADAdjustment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1511564308U) },
		{ ESKGMOAAdjustment_StaticEnum, TEXT("ESKGMOAAdjustment"), &Z_Registration_Info_UEnum_ESKGMOAAdjustment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4078331871U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGOpticStartingZeroSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewStructOps, TEXT("SKGOpticStartingZeroSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticStartingZeroSettings), 3995485876U) },
		{ FSKGOpticZeroSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewStructOps, TEXT("SKGOpticZeroSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticZeroSettings), 462194368U) },
		{ FSKGOpticReticleSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewStructOps, TEXT("SKGOpticReticleSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticReticleSettings), 4143258995U) },
		{ FSKGOpticMagnificationSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewStructOps, TEXT("SKGOpticMagnificationSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticMagnificationSettings), 1641328758U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGOpticComponent, USKGOpticComponent::StaticClass, TEXT("USKGOpticComponent"), &Z_Registration_Info_UClass_USKGOpticComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGOpticComponent), 1743960276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_2799632374(TEXT("/Script/SKGOptic"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
