// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGPhysicalMaterialModule/Public/PhysicalMaterial/SKGPhysicalMaterial.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPhysicalMaterial() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPSCPoolMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
SKGPHYSICALMATERIALMODULE_API UClass* Z_Construct_UClass_USKGPhysicalMaterial();
SKGPHYSICALMATERIALMODULE_API UClass* Z_Construct_UClass_USKGPhysicalMaterial_NoRegister();
SKGPHYSICALMATERIALMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGPhysMatEffect();
SKGPHYSICALMATERIALMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings();
SKGPHYSICALMATERIALMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings();
UPackage* Z_Construct_UPackage__Script_SKGPhysicalMaterialModule();
// End Cross Module References

// Begin ScriptStruct FSKGPhysMatSoundSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGPhysMatSoundSettings;
class UScriptStruct* FSKGPhysMatSoundSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGPhysMatSoundSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGPhysMatSoundSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings, (UObject*)Z_Construct_UPackage__Script_SKGPhysicalMaterialModule(), TEXT("SKGPhysMatSoundSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGPhysMatSoundSettings.OuterSingleton;
}
template<> SKGPHYSICALMATERIALMODULE_API UScriptStruct* StaticStruct<FSKGPhysMatSoundSettings>()
{
	return FSKGPhysMatSoundSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGPhysMatSoundSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatSoundSettings, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatSoundSettings, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData), NewProp_VolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatSoundSettings, PitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMultiplier_MetaData), NewProp_PitchMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::NewProp_PitchMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGPhysicalMaterialModule,
	nullptr,
	&NewStructOps,
	"SKGPhysMatSoundSettings",
	Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::PropPointers),
	sizeof(FSKGPhysMatSoundSettings),
	alignof(FSKGPhysMatSoundSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGPhysMatSoundSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGPhysMatSoundSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGPhysMatSoundSettings.InnerSingleton;
}
// End ScriptStruct FSKGPhysMatSoundSettings

// Begin ScriptStruct FSKGPhysMatVisualSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGPhysMatVisualSettings;
class UScriptStruct* FSKGPhysMatVisualSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGPhysMatVisualSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGPhysMatVisualSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings, (UObject*)Z_Construct_UPackage__Script_SKGPhysicalMaterialModule(), TEXT("SKGPhysMatVisualSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGPhysMatVisualSettings.OuterSingleton;
}
template<> SKGPHYSICALMATERIALMODULE_API UScriptStruct* StaticStruct<FSKGPhysMatVisualSettings>()
{
	return FSKGPhysMatVisualSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactDecal_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolingMethod_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseParticlesRotation_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalLifeTime_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalFadeScreenSize_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactDecal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PoolingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PoolingMethod;
	static void NewProp_bUseParticlesRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParticlesRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalLifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalFadeScreenSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGPhysMatVisualSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatVisualSettings, ImpactEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactEffect_MetaData), NewProp_ImpactEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_ImpactDecal = { "ImpactDecal", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatVisualSettings, ImpactDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactDecal_MetaData), NewProp_ImpactDecal_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_PoolingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_PoolingMethod = { "PoolingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatVisualSettings, PoolingMethod), Z_Construct_UEnum_Engine_EPSCPoolMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolingMethod_MetaData), NewProp_PoolingMethod_MetaData) }; // 2476528059
void Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_bUseParticlesRotation_SetBit(void* Obj)
{
	((FSKGPhysMatVisualSettings*)Obj)->bUseParticlesRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_bUseParticlesRotation = { "bUseParticlesRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGPhysMatVisualSettings), &Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_bUseParticlesRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseParticlesRotation_MetaData), NewProp_bUseParticlesRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatVisualSettings, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalSize_MetaData), NewProp_DecalSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_DecalLifeTime = { "DecalLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatVisualSettings, DecalLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalLifeTime_MetaData), NewProp_DecalLifeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_DecalFadeScreenSize = { "DecalFadeScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatVisualSettings, DecalFadeScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalFadeScreenSize_MetaData), NewProp_DecalFadeScreenSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_ImpactEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_ImpactDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_PoolingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_PoolingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_bUseParticlesRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_DecalSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_DecalLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewProp_DecalFadeScreenSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGPhysicalMaterialModule,
	nullptr,
	&NewStructOps,
	"SKGPhysMatVisualSettings",
	Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::PropPointers),
	sizeof(FSKGPhysMatVisualSettings),
	alignof(FSKGPhysMatVisualSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGPhysMatVisualSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGPhysMatVisualSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGPhysMatVisualSettings.InnerSingleton;
}
// End ScriptStruct FSKGPhysMatVisualSettings

// Begin ScriptStruct FSKGPhysMatEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGPhysMatEffect;
class UScriptStruct* FSKGPhysMatEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGPhysMatEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGPhysMatEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGPhysMatEffect, (UObject*)Z_Construct_UPackage__Script_SKGPhysicalMaterialModule(), TEXT("SKGPhysMatEffect"));
	}
	return Z_Registration_Info_UScriptStruct_SKGPhysMatEffect.OuterSingleton;
}
template<> SKGPHYSICALMATERIALMODULE_API UScriptStruct* StaticStruct<FSKGPhysMatEffect>()
{
	return FSKGPhysMatEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This tag is used as an identifier for what to play such as projectile and footstep\n" },
#endif
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This tag is used as an identifier for what to play such as projectile and footstep" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVisualSettings_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSoundSettings_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVisualSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactSoundSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGPhysMatEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatEffect, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::NewProp_ImpactVisualSettings = { "ImpactVisualSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatEffect, ImpactVisualSettings), Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVisualSettings_MetaData), NewProp_ImpactVisualSettings_MetaData) }; // 3444304339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::NewProp_ImpactSoundSettings = { "ImpactSoundSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGPhysMatEffect, ImpactSoundSettings), Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSoundSettings_MetaData), NewProp_ImpactSoundSettings_MetaData) }; // 3427497288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::NewProp_ImpactVisualSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::NewProp_ImpactSoundSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGPhysicalMaterialModule,
	nullptr,
	&NewStructOps,
	"SKGPhysMatEffect",
	Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::PropPointers),
	sizeof(FSKGPhysMatEffect),
	alignof(FSKGPhysMatEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGPhysMatEffect()
{
	if (!Z_Registration_Info_UScriptStruct_SKGPhysMatEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGPhysMatEffect.InnerSingleton, Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGPhysMatEffect.InnerSingleton;
}
// End ScriptStruct FSKGPhysMatEffect

// Begin Class USKGPhysicalMaterial Function GetEffect
struct Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics
{
	struct SKGPhysicalMaterial_eventGetEffect_Parms
	{
		FSKGPhysMatEffect OUTEffect;
		FGameplayTag EffectTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGPhysicalMaterial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if match found\n" },
#endif
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if match found" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OUTEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::NewProp_OUTEffect = { "OUTEffect", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPhysicalMaterial_eventGetEffect_Parms, OUTEffect), Z_Construct_UScriptStruct_FSKGPhysMatEffect, METADATA_PARAMS(0, nullptr) }; // 344230328
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::NewProp_EffectTag = { "EffectTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPhysicalMaterial_eventGetEffect_Parms, EffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectTag_MetaData), NewProp_EffectTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGPhysicalMaterial_eventGetEffect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGPhysicalMaterial_eventGetEffect_Parms), &Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::NewProp_OUTEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::NewProp_EffectTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPhysicalMaterial, nullptr, "GetEffect", nullptr, nullptr, Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::SKGPhysicalMaterial_eventGetEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::SKGPhysicalMaterial_eventGetEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGPhysicalMaterial::execGetEffect)
{
	P_GET_STRUCT_REF(FSKGPhysMatEffect,Z_Param_Out_OUTEffect);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_EffectTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEffect(Z_Param_Out_OUTEffect,Z_Param_Out_EffectTag);
	P_NATIVE_END;
}
// End Class USKGPhysicalMaterial Function GetEffect

// Begin Class USKGPhysicalMaterial Function GetEffects
struct Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics
{
	struct SKGPhysicalMaterial_eventGetEffects_Parms
	{
		TArray<FSKGPhysMatEffect> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGPhysicalMaterial" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGPhysMatEffect, METADATA_PARAMS(0, nullptr) }; // 344230328
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPhysicalMaterial_eventGetEffects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 344230328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPhysicalMaterial, nullptr, "GetEffects", nullptr, nullptr, Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::SKGPhysicalMaterial_eventGetEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::SKGPhysicalMaterial_eventGetEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGPhysicalMaterial::execGetEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSKGPhysMatEffect>*)Z_Param__Result=P_THIS->GetEffects();
	P_NATIVE_END;
}
// End Class USKGPhysicalMaterial Function GetEffects

// Begin Class USKGPhysicalMaterial Function PlayEffect
struct Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics
{
	struct SKGPhysicalMaterial_eventPlayEffect_Parms
	{
		FHitResult HitResult;
		bool bUseSpeedOfSound;
		FGameplayTag ImpactEffectTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGPhysicalMaterial" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpeedOfSound_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffectTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_bUseSpeedOfSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpeedOfSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactEffectTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPhysicalMaterial_eventPlayEffect_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
void Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::NewProp_bUseSpeedOfSound_SetBit(void* Obj)
{
	((SKGPhysicalMaterial_eventPlayEffect_Parms*)Obj)->bUseSpeedOfSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::NewProp_bUseSpeedOfSound = { "bUseSpeedOfSound", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGPhysicalMaterial_eventPlayEffect_Parms), &Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::NewProp_bUseSpeedOfSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpeedOfSound_MetaData), NewProp_bUseSpeedOfSound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::NewProp_ImpactEffectTag = { "ImpactEffectTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPhysicalMaterial_eventPlayEffect_Parms, ImpactEffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactEffectTag_MetaData), NewProp_ImpactEffectTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::NewProp_bUseSpeedOfSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::NewProp_ImpactEffectTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPhysicalMaterial, nullptr, "PlayEffect", nullptr, nullptr, Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::SKGPhysicalMaterial_eventPlayEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::SKGPhysicalMaterial_eventPlayEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGPhysicalMaterial::execPlayEffect)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_UBOOL(Z_Param_bUseSpeedOfSound);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_ImpactEffectTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayEffect(Z_Param_Out_HitResult,Z_Param_bUseSpeedOfSound,Z_Param_Out_ImpactEffectTag);
	P_NATIVE_END;
}
// End Class USKGPhysicalMaterial Function PlayEffect

// Begin Class USKGPhysicalMaterial
void USKGPhysicalMaterial::StaticRegisterNativesUSKGPhysicalMaterial()
{
	UClass* Class = USKGPhysicalMaterial::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEffect", &USKGPhysicalMaterial::execGetEffect },
		{ "GetEffects", &USKGPhysicalMaterial::execGetEffects },
		{ "PlayEffect", &USKGPhysicalMaterial::execPlayEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGPhysicalMaterial);
UClass* Z_Construct_UClass_USKGPhysicalMaterial_NoRegister()
{
	return USKGPhysicalMaterial::StaticClass();
}
struct Z_Construct_UClass_USKGPhysicalMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterial/SKGPhysicalMaterial.h" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundTolerance_MetaData[] = {
		{ "Category", "SKGPhysicalMaterial|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the speed of sound has less than this delay it will not play the sound\n\x09 * with the speed of sound delay, instead it will be instant like normal\n\x09 * to save resources\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the speed of sound has less than this delay it will not play the sound\nwith the speed of sound delay, instead it will be instant like normal\nto save resources" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGPhysicalMaterial|Initialize" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[] = {
		{ "Category", "SKGPhysicalMaterial|Effects" },
		{ "ModuleRelativePath", "Public/PhysicalMaterial/SKGPhysicalMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedOfSoundTolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Effects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGPhysicalMaterial_GetEffect, "GetEffect" }, // 2894908973
		{ &Z_Construct_UFunction_USKGPhysicalMaterial_GetEffects, "GetEffects" }, // 2819197496
		{ &Z_Construct_UFunction_USKGPhysicalMaterial_PlayEffect, "PlayEffect" }, // 1595112438
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPhysicalMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPhysicalMaterial_Statics::NewProp_SpeedOfSoundTolerance = { "SpeedOfSoundTolerance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPhysicalMaterial, SpeedOfSoundTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedOfSoundTolerance_MetaData), NewProp_SpeedOfSoundTolerance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGPhysicalMaterial_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPhysicalMaterial, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGPhysicalMaterial_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGPhysMatEffect, METADATA_PARAMS(0, nullptr) }; // 344230328
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGPhysicalMaterial_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPhysicalMaterial, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_MetaData), NewProp_Effects_MetaData) }; // 344230328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGPhysicalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPhysicalMaterial_Statics::NewProp_SpeedOfSoundTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPhysicalMaterial_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPhysicalMaterial_Statics::NewProp_Effects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPhysicalMaterial_Statics::NewProp_Effects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPhysicalMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGPhysicalMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGPhysicalMaterialModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPhysicalMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGPhysicalMaterial_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGPhysicalMaterial, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGPhysicalMaterial_Statics::ClassParams = {
	&USKGPhysicalMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USKGPhysicalMaterial_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USKGPhysicalMaterial_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPhysicalMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGPhysicalMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGPhysicalMaterial()
{
	if (!Z_Registration_Info_UClass_USKGPhysicalMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGPhysicalMaterial.OuterSingleton, Z_Construct_UClass_USKGPhysicalMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGPhysicalMaterial.OuterSingleton;
}
template<> SKGPHYSICALMATERIALMODULE_API UClass* StaticClass<USKGPhysicalMaterial>()
{
	return USKGPhysicalMaterial::StaticClass();
}
USKGPhysicalMaterial::USKGPhysicalMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGPhysicalMaterial);
USKGPhysicalMaterial::~USKGPhysicalMaterial() {}
// End Class USKGPhysicalMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGPhysMatSoundSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGPhysMatSoundSettings_Statics::NewStructOps, TEXT("SKGPhysMatSoundSettings"), &Z_Registration_Info_UScriptStruct_SKGPhysMatSoundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGPhysMatSoundSettings), 3427497288U) },
		{ FSKGPhysMatVisualSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGPhysMatVisualSettings_Statics::NewStructOps, TEXT("SKGPhysMatVisualSettings"), &Z_Registration_Info_UScriptStruct_SKGPhysMatVisualSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGPhysMatVisualSettings), 3444304339U) },
		{ FSKGPhysMatEffect::StaticStruct, Z_Construct_UScriptStruct_FSKGPhysMatEffect_Statics::NewStructOps, TEXT("SKGPhysMatEffect"), &Z_Registration_Info_UScriptStruct_SKGPhysMatEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGPhysMatEffect), 344230328U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGPhysicalMaterial, USKGPhysicalMaterial::StaticClass, TEXT("USKGPhysicalMaterial"), &Z_Registration_Info_UClass_USKGPhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPhysicalMaterial), 3170890248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_1575025216(TEXT("/Script/SKGPhysicalMaterialModule"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_PhysicalMaterial_SKGPhysicalMaterial_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
