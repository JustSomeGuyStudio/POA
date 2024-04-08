// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGOptic/Public/Components/SKGOpticComponent.h"
#include "GameplayTagContainer.h"
#include "SKGOptic/Public/DataTypes/SKGOpticCoreDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGOpticComponent() {}
// Cross Module References
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType_Statics::Enumerators[] = {
		{ "ESKGOpticAdjustmentType::MOA", (int64)ESKGOpticAdjustmentType::MOA },
		{ "ESKGOpticAdjustmentType::MRAD", (int64)ESKGOpticAdjustmentType::MRAD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MOA.DisplayName", "MOA" },
		{ "MOA.Name", "ESKGOpticAdjustmentType::MOA" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "MRAD.DisplayName", "MRAD" },
		{ "MRAD.Name", "ESKGOpticAdjustmentType::MRAD" },
	};
#endif
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment_Statics::Enumerators[] = {
		{ "ESKGMRADAdjustment::PointOne", (int64)ESKGMRADAdjustment::PointOne },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "PointOne.DisplayName", ".1" },
		{ "PointOne.Name", "ESKGMRADAdjustment::PointOne" },
	};
#endif
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment_Statics::Enumerators[] = {
		{ "ESKGMOAAdjustment::OneEighth", (int64)ESKGMOAAdjustment::OneEighth },
		{ "ESKGMOAAdjustment::OneQuarter", (int64)ESKGMOAAdjustment::OneQuarter },
		{ "ESKGMOAAdjustment::OneHalf", (int64)ESKGMOAAdjustment::OneHalf },
		{ "ESKGMOAAdjustment::One", (int64)ESKGMOAAdjustment::One },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment_Statics::Enum_MetaDataParams[] = {
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
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartWithDefaultZero_MetaData[];
#endif
		static void NewProp_bStartWithDefaultZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartWithDefaultZero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultElevationClicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultElevationClicks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWindageClicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultWindageClicks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartWithRandomZero_MetaData[];
#endif
		static void NewProp_bStartWithRandomZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartWithRandomZero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomMaxElevationClicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomMaxElevationClicks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomMaxWindageClicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomMaxWindageClicks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticStartingZeroSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero_SetBit(void* Obj)
	{
		((FSKGOpticStartingZeroSettings*)Obj)->bStartWithDefaultZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero = { "bStartWithDefaultZero", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticStartingZeroSettings), &Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero_MetaData), Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultElevationClicks_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultElevationClicks = { "DefaultElevationClicks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticStartingZeroSettings, DefaultElevationClicks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultElevationClicks_MetaData), Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultElevationClicks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultWindageClicks_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultWindageClicks = { "DefaultWindageClicks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticStartingZeroSettings, DefaultWindageClicks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultWindageClicks_MetaData), Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultWindageClicks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "!bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero_SetBit(void* Obj)
	{
		((FSKGOpticStartingZeroSettings*)Obj)->bStartWithRandomZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero = { "bStartWithRandomZero", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticStartingZeroSettings), &Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero_MetaData), Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxElevationClicks_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "bStartWithRandomZero && !bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxElevationClicks = { "RandomMaxElevationClicks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticStartingZeroSettings, RandomMaxElevationClicks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxElevationClicks_MetaData), Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxElevationClicks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxWindageClicks_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "bStartWithRandomZero && !bStartWithDefaultZero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxWindageClicks = { "RandomMaxWindageClicks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticStartingZeroSettings, RandomMaxWindageClicks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxWindageClicks_MetaData), Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxWindageClicks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithDefaultZero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultElevationClicks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_DefaultWindageClicks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_bStartWithRandomZero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxElevationClicks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewProp_RandomMaxWindageClicks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AdjustmentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AdjustmentType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MOAAdjustmentAmount_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MOAAdjustmentAmount_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MOAAdjustmentAmount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MRADAdjustmentAmount_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MRADAdjustmentAmount_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MRADAdjustmentAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingZeroSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingZeroSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticZeroSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType = { "AdjustmentType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticZeroSettings, AdjustmentType), Z_Construct_UEnum_SKGOptic_ESKGOpticAdjustmentType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType_MetaData), Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType_MetaData) }; // 1371119738
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "AdjustmentType == ESKGOpticAdjustmentType::MOA" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount = { "MOAAdjustmentAmount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticZeroSettings, MOAAdjustmentAmount), Z_Construct_UEnum_SKGOptic_ESKGMOAAdjustment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount_MetaData), Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount_MetaData) }; // 3344473447
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "EditCondition", "AdjustmentType == ESKGOpticAdjustmentType::MRAD" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount = { "MRADAdjustmentAmount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticZeroSettings, MRADAdjustmentAmount), Z_Construct_UEnum_SKGOptic_ESKGMRADAdjustment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount_MetaData), Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount_MetaData) }; // 3450816992
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_StartingZeroSettings_MetaData[] = {
		{ "Category", "SKGOpticComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_StartingZeroSettings = { "StartingZeroSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticZeroSettings, StartingZeroSettings), Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_StartingZeroSettings_MetaData), Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_StartingZeroSettings_MetaData) }; // 4269922376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_AdjustmentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MOAAdjustmentAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_MRADAdjustmentAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewProp_StartingZeroSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticZeroSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReticleMaterialIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReticleMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReticleMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnAimedReticleMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnAimedReticleMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnAimedCaptureDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnAimedCaptureDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleBrightnessParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReticleBrightnessParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReticleBrightnessSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleBrightnessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReticleBrightnessSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReticleNightVisionBrightnessSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleNightVisionBrightnessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReticleNightVisionBrightnessSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticReticleSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterialIndex_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// Material Index that your reticle is on\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Material Index that your reticle is on" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterialIndex = { "ReticleMaterialIndex", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterialIndex_MetaData), Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterialIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterials_Inner = { "ReticleMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGOpticReticle, METADATA_PARAMS(0, nullptr) }; // 1653590864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterials_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// Array of reticle materials to cycle through\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Array of reticle materials to cycle through" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterials = { "ReticleMaterials", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterials_MetaData), Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleMaterials_MetaData) }; // 1653590864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedReticleMaterial_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// Material to use when you are not aiming. Used only with magnified optics\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Material to use when you are not aiming. Used only with magnified optics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedReticleMaterial = { "UnAimedReticleMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, UnAimedReticleMaterial), Z_Construct_UScriptStruct_FSKGOpticReticle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedReticleMaterial_MetaData), Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedReticleMaterial_MetaData) }; // 1653590864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedCaptureDelay_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// When you stop aiming, how long before the capture stops and reticle change happens. Used only with magnified optics\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "When you stop aiming, how long before the capture stops and reticle change happens. Used only with magnified optics" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedCaptureDelay = { "UnAimedCaptureDelay", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, UnAimedCaptureDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedCaptureDelay_MetaData), Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_UnAimedCaptureDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessParameterName_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// Parameter name in the material that controls reticle brightness\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Parameter name in the material that controls reticle brightness" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessParameterName = { "ReticleBrightnessParameterName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleBrightnessParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessParameterName_MetaData), Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessParameterName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessSettings_Inner = { "ReticleBrightnessSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessSettings_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// Brightness settings for default mode\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Brightness settings for default mode" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessSettings = { "ReticleBrightnessSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleBrightnessSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessSettings_MetaData), Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleBrightnessSettings_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleNightVisionBrightnessSettings_Inner = { "ReticleNightVisionBrightnessSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleNightVisionBrightnessSettings_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// Brightness settings for the night vision mode\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Brightness settings for the night vision mode" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleNightVisionBrightnessSettings = { "ReticleNightVisionBrightnessSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticleSettings, ReticleNightVisionBrightnessSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleNightVisionBrightnessSettings_MetaData), Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewProp_ReticleNightVisionBrightnessSettings_MetaData) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticReticleSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnifications_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnifications_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Magnifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothZoom_MetaData[];
#endif
		static void NewProp_bSmoothZoom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothZoomRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothZoomRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShrinkEyeboxWithMagnification_MetaData[];
#endif
		static void NewProp_bShrinkEyeboxWithMagnification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShrinkEyeboxWithMagnification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkEyeboxMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShrinkEyeboxMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFirstFocalPlane_MetaData[];
#endif
		static void NewProp_bIsFirstFocalPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFirstFocalPlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticMagnificationSettings>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications_Inner = { "Magnifications", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// Used in conjunction with SKGOpticSceneCaptureComponent\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Used in conjunction with SKGOpticSceneCaptureComponent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications = { "Magnifications", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticMagnificationSettings, Magnifications), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications_MetaData), Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// If true, zooming in/out will be handled smoothly\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "If true, zooming in/out will be handled smoothly" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom_SetBit(void* Obj)
	{
		((FSKGOpticMagnificationSettings*)Obj)->bSmoothZoom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom = { "bSmoothZoom", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticMagnificationSettings), &Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom_MetaData), Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_SmoothZoomRate_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "EditCondition", "bSmoothZoom" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_SmoothZoomRate = { "SmoothZoomRate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticMagnificationSettings, SmoothZoomRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_SmoothZoomRate_MetaData), Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_SmoothZoomRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// Used in conjunction with SKGOpticSceneCaptureComponent. Allows the eyebox to shrink by a given amount as you zoon in\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Used in conjunction with SKGOpticSceneCaptureComponent. Allows the eyebox to shrink by a given amount as you zoon in" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification_SetBit(void* Obj)
	{
		((FSKGOpticMagnificationSettings*)Obj)->bShrinkEyeboxWithMagnification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification = { "bShrinkEyeboxWithMagnification", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticMagnificationSettings), &Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification_MetaData), Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_ShrinkEyeboxMultiplier_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "// Used in conjunction with SKGOpticSceneCaptureComponent. Amount to shrink the eyebox by as you zoom in\n" },
		{ "EditCondition", "bShrinkEyeboxWithMagnification" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Used in conjunction with SKGOpticSceneCaptureComponent. Amount to shrink the eyebox by as you zoom in" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_ShrinkEyeboxMultiplier = { "ShrinkEyeboxMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticMagnificationSettings, ShrinkEyeboxMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_ShrinkEyeboxMultiplier_MetaData), Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_ShrinkEyeboxMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
		{ "Comment", "/**\n\x09 * If true the optic will be first focal plane and the reticle will scale as you zoom in/out\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "If true the optic will be first focal plane and the reticle will scale as you zoom in/out" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane_SetBit(void* Obj)
	{
		((FSKGOpticMagnificationSettings*)Obj)->bIsFirstFocalPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane = { "bIsFirstFocalPlane", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGOpticMagnificationSettings), &Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane_MetaData), Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_Magnifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bSmoothZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_SmoothZoomRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bShrinkEyeboxWithMagnification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_ShrinkEyeboxMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewProp_bIsFirstFocalPlane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execStoppedAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StoppedAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execStartedAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartedAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execGetOpticMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetOpticMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execApplyLookAtRotationZero)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_LookAtRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyLookAtRotationZero(Z_Param_Out_LookAtRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactRight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Clicks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PointOfImpactRight(Z_Param_Clicks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactLeft)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Clicks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PointOfImpactLeft(Z_Param_Clicks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactDown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Clicks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PointOfImpactDown(Z_Param_Clicks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactUp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Clicks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PointOfImpactUp(Z_Param_Clicks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactLeftRightDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PointOfImpactLeftRightDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execPointOfImpactUpDownDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PointOfImpactUpDownDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execGetCurrentMagnification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMagnification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execZoomOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execZoomIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execToggleReticleNightVisionSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleReticleNightVisionSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execDecreaseReticleBrightness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseReticleBrightness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execIncreaseReticleBrightness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseReticleBrightness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execCycleReticle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleReticle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOpticComponent::execIsMagnifiedOptic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMagnifiedOptic();
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics
	{
		struct SKGOpticComponent_eventApplyLookAtRotationZero_Parms
		{
			FRotator LookAtRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::NewProp_LookAtRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::NewProp_LookAtRotation = { "LookAtRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventApplyLookAtRotationZero_Parms, LookAtRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::NewProp_LookAtRotation_MetaData), Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::NewProp_LookAtRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::NewProp_LookAtRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "ApplyLookAtRotationZero", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::SKGOpticComponent_eventApplyLookAtRotationZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_CycleReticle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_CycleReticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Reticle" },
		{ "Comment", "// Cycles through the set reticles based on the given settings\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Cycles through the set reticles based on the given settings" },
	};
#endif
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
	struct Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Reticle" },
		{ "Comment", "// Decreases your reticle brightness based on the given settings\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Decreases your reticle brightness based on the given settings" },
	};
#endif
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
	struct Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics
	{
		struct SKGOpticComponent_eventGetCurrentMagnification_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventGetCurrentMagnification_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zoom" },
		{ "Comment", "/**\n\x09 * @return the current magnification of the optic\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "@return the current magnification of the optic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "GetCurrentMagnification", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::SKGOpticComponent_eventGetCurrentMagnification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics
	{
		struct SKGOpticComponent_eventGetOpticMesh_Parms
		{
			UMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventGetOpticMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "SKGOptic" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "GetOpticMesh", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::SKGOpticComponent_eventGetOpticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Reticle" },
		{ "Comment", "// Increases your reticle brightness based on the given settings\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Increases your reticle brightness based on the given settings" },
	};
#endif
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
	struct Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics
	{
		struct SKGOpticComponent_eventIsMagnifiedOptic_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic" },
		{ "Comment", "/**\n\x09 * @return true, this optic is magnified\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "@return true, this optic is magnified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "IsMagnifiedOptic", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::SKGOpticComponent_eventIsMagnifiedOptic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics
	{
		struct SKGOpticComponent_eventPointOfImpactDown_Parms
		{
			int32 Clicks;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Clicks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::NewProp_Clicks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::NewProp_Clicks = { "Clicks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactDown_Parms, Clicks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::NewProp_Clicks_MetaData), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::NewProp_Clicks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::NewProp_Clicks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
		{ "Comment", "/**\n\x09 * Adjust your zero so your point of impact moves Down\n\x09 * @param Clicks How many clicks of the turret\n\x09 */" },
		{ "CPP_Default_Clicks", "1" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Adjust your zero so your point of impact moves Down\n@param Clicks How many clicks of the turret" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactDown", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::SKGOpticComponent_eventPointOfImpactDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics
	{
		struct SKGOpticComponent_eventPointOfImpactLeft_Parms
		{
			int32 Clicks;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Clicks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::NewProp_Clicks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::NewProp_Clicks = { "Clicks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactLeft_Parms, Clicks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::NewProp_Clicks_MetaData), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::NewProp_Clicks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::NewProp_Clicks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
		{ "Comment", "/**\n\x09 * Adjust your zero so your point of impact moves Left\n\x09 * @param Clicks How many clicks of the turret\n\x09 */" },
		{ "CPP_Default_Clicks", "1" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Adjust your zero so your point of impact moves Left\n@param Clicks How many clicks of the turret" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactLeft", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::SKGOpticComponent_eventPointOfImpactLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics
	{
		struct SKGOpticComponent_eventPointOfImpactLeftRightDefault_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactLeftRightDefault_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
		{ "Comment", "/* Sets the point of impact for windage back to default\n\x09* @return the amount of clicks required for turrent to return back to 0\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Sets the point of impact for windage back to default\n      * @return the amount of clicks required for turrent to return back to 0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactLeftRightDefault", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::SKGOpticComponent_eventPointOfImpactLeftRightDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics
	{
		struct SKGOpticComponent_eventPointOfImpactRight_Parms
		{
			int32 Clicks;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Clicks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::NewProp_Clicks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::NewProp_Clicks = { "Clicks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactRight_Parms, Clicks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::NewProp_Clicks_MetaData), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::NewProp_Clicks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::NewProp_Clicks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
		{ "Comment", "/**\n\x09 * Adjust your zero so your point of impact moves Right\n\x09 * @param Clicks How many clicks of the turret\n\x09 */" },
		{ "CPP_Default_Clicks", "1" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Adjust your zero so your point of impact moves Right\n@param Clicks How many clicks of the turret" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactRight", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::SKGOpticComponent_eventPointOfImpactRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics
	{
		struct SKGOpticComponent_eventPointOfImpactUp_Parms
		{
			int32 Clicks;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Clicks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::NewProp_Clicks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::NewProp_Clicks = { "Clicks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactUp_Parms, Clicks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::NewProp_Clicks_MetaData), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::NewProp_Clicks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::NewProp_Clicks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
		{ "Comment", "/**\n\x09 * Adjust your zero so your point of impact moves up\n\x09 * @param Clicks How many clicks of the turret\n\x09 */" },
		{ "CPP_Default_Clicks", "1" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Adjust your zero so your point of impact moves up\n@param Clicks How many clicks of the turret" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactUp", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::SKGOpticComponent_eventPointOfImpactUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics
	{
		struct SKGOpticComponent_eventPointOfImpactUpDownDefault_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticComponent_eventPointOfImpactUpDownDefault_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zero" },
		{ "Comment", "/* Sets the point of impact for elevation back to default\n\x09 * @return the amount of clicks required for turrent to return back to 0\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Sets the point of impact for elevation back to default\n       * @return the amount of clicks required for turrent to return back to 0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticComponent, nullptr, "PointOfImpactUpDownDefault", nullptr, nullptr, Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::SKGOpticComponent_eventPointOfImpactUpDownDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGOpticComponent_StartedAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_StartedAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
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
	struct Z_Construct_UFunction_USKGOpticComponent_StoppedAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_StoppedAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
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
	struct Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Reticle" },
		{ "Comment", "// Toggles the night vision setting on the optic (bright to not bright)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Toggles the night vision setting on the optic (bright to not bright)" },
	};
#endif
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
	struct Z_Construct_UFunction_USKGOpticComponent_ZoomIn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zoom" },
		{ "Comment", "// Zom your optic in\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Zom your optic in" },
	};
#endif
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
	struct Z_Construct_UFunction_USKGOpticComponent_ZoomOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticComponent_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|Zoom" },
		{ "Comment", "// Zoom your optic out\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Zoom your optic out" },
	};
#endif
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGOpticComponent);
	UClass* Z_Construct_UClass_USKGOpticComponent_NoRegister()
	{
		return USKGOpticComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGOpticComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpticMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OpticMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpticSceneCaptureComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OpticSceneCaptureComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReticleSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagnificationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MagnificationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpticZeroSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OpticZeroSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCallForceNetUpdate_MetaData[];
#endif
		static void NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCallForceNetUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OpticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpticSceneCaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OpticSceneCaptureComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGOpticComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGOpticComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGOpticComponent_ApplyLookAtRotationZero, "ApplyLookAtRotationZero" }, // 2154852801
		{ &Z_Construct_UFunction_USKGOpticComponent_CycleReticle, "CycleReticle" }, // 1232744301
		{ &Z_Construct_UFunction_USKGOpticComponent_DecreaseReticleBrightness, "DecreaseReticleBrightness" }, // 3716152262
		{ &Z_Construct_UFunction_USKGOpticComponent_GetCurrentMagnification, "GetCurrentMagnification" }, // 2941250036
		{ &Z_Construct_UFunction_USKGOpticComponent_GetOpticMesh, "GetOpticMesh" }, // 93060499
		{ &Z_Construct_UFunction_USKGOpticComponent_IncreaseReticleBrightness, "IncreaseReticleBrightness" }, // 1019849954
		{ &Z_Construct_UFunction_USKGOpticComponent_IsMagnifiedOptic, "IsMagnifiedOptic" }, // 2532821607
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactDown, "PointOfImpactDown" }, // 3314093100
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeft, "PointOfImpactLeft" }, // 4258427448
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactLeftRightDefault, "PointOfImpactLeftRightDefault" }, // 2546753138
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactRight, "PointOfImpactRight" }, // 2282060381
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUp, "PointOfImpactUp" }, // 2649863453
		{ &Z_Construct_UFunction_USKGOpticComponent_PointOfImpactUpDownDefault, "PointOfImpactUpDownDefault" }, // 973670763
		{ &Z_Construct_UFunction_USKGOpticComponent_StartedAiming, "StartedAiming" }, // 4214889948
		{ &Z_Construct_UFunction_USKGOpticComponent_StoppedAiming, "StoppedAiming" }, // 3751224332
		{ &Z_Construct_UFunction_USKGOpticComponent_ToggleReticleNightVisionSetting, "ToggleReticleNightVisionSetting" }, // 2886191767
		{ &Z_Construct_UFunction_USKGOpticComponent_ZoomIn, "ZoomIn" }, // 136542001
		{ &Z_Construct_UFunction_USKGOpticComponent_ZoomOut, "ZoomOut" }, // 2503071988
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGOpticComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMeshName_MetaData[] = {
		{ "Category", "SKGOptic|Initialize" },
		{ "Comment", "// The name of the mesh that is used for the optic itself (contains the reticle)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "The name of the mesh that is used for the optic itself (contains the reticle)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMeshName = { "OpticMeshName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMeshName_MetaData), Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMeshName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponentName_MetaData[] = {
		{ "Category", "SKGOptic|Initialize" },
		{ "Comment", "// Optional Scene Capature Component that gets controlled through this class\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Optional Scene Capature Component that gets controlled through this class" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponentName = { "OpticSceneCaptureComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticSceneCaptureComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponentName_MetaData), Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGOptic|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_GameplayTags_MetaData), Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_GameplayTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_ReticleSettings_MetaData[] = {
		{ "Category", "SKGOptic|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_ReticleSettings = { "ReticleSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, ReticleSettings), Z_Construct_UScriptStruct_FSKGOpticReticleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_ReticleSettings_MetaData), Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_ReticleSettings_MetaData) }; // 1227016574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_MagnificationSettings_MetaData[] = {
		{ "Category", "SKGOptic|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_MagnificationSettings = { "MagnificationSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, MagnificationSettings), Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_MagnificationSettings_MetaData), Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_MagnificationSettings_MetaData) }; // 1915655860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticZeroSettings_MetaData[] = {
		{ "Category", "SKGOptic|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticZeroSettings = { "OpticZeroSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticZeroSettings), Z_Construct_UScriptStruct_FSKGOpticZeroSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticZeroSettings_MetaData), Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticZeroSettings_MetaData) }; // 1278451817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData[] = {
		{ "Category", "SKGOptic|Settings" },
		{ "Comment", "// Useful if your NetUpdateFrequency is set super low\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
		{ "ToolTip", "Useful if your NetUpdateFrequency is set super low" },
	};
#endif
	void Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj)
	{
		((USKGOpticComponent*)Obj)->bAutoCallForceNetUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate = { "bAutoCallForceNetUpdate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGOpticComponent), &Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData), Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMesh_MetaData[] = {
		{ "BlueprintGetter", "GetOpticMesh" },
		{ "Category", "SKGOptic|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMesh = { "OpticMesh", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMesh_MetaData), Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponent = { "OpticSceneCaptureComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticComponent, OpticSceneCaptureComponent), Z_Construct_UClass_USKGOpticSceneCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponent_MetaData), Z_Construct_UClass_USKGOpticComponent_Statics::NewProp_OpticSceneCaptureComponent_MetaData) };
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
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGOpticComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGOpticComponent, IGameplayTagAssetInterface), false },  // 3291755243
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGOpticComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGOpticComponent>::IsAbstract,
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticComponent_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::EnumInfo[] = {
		{ ESKGOpticAdjustmentType_StaticEnum, TEXT("ESKGOpticAdjustmentType"), &Z_Registration_Info_UEnum_ESKGOpticAdjustmentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1371119738U) },
		{ ESKGMRADAdjustment_StaticEnum, TEXT("ESKGMRADAdjustment"), &Z_Registration_Info_UEnum_ESKGMRADAdjustment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3450816992U) },
		{ ESKGMOAAdjustment_StaticEnum, TEXT("ESKGMOAAdjustment"), &Z_Registration_Info_UEnum_ESKGMOAAdjustment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3344473447U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ScriptStructInfo[] = {
		{ FSKGOpticStartingZeroSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticStartingZeroSettings_Statics::NewStructOps, TEXT("SKGOpticStartingZeroSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticStartingZeroSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticStartingZeroSettings), 4269922376U) },
		{ FSKGOpticZeroSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticZeroSettings_Statics::NewStructOps, TEXT("SKGOpticZeroSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticZeroSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticZeroSettings), 1278451817U) },
		{ FSKGOpticReticleSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticReticleSettings_Statics::NewStructOps, TEXT("SKGOpticReticleSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticReticleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticReticleSettings), 1227016574U) },
		{ FSKGOpticMagnificationSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticMagnificationSettings_Statics::NewStructOps, TEXT("SKGOpticMagnificationSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticMagnificationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticMagnificationSettings), 1915655860U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGOpticComponent, USKGOpticComponent::StaticClass, TEXT("USKGOpticComponent"), &Z_Registration_Info_UClass_USKGOpticComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGOpticComponent), 3921065260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_3756684204(TEXT("/Script/SKGOptic"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
