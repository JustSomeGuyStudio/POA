// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGProjectile/Public/DataAssets/SKGPDAProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPDAProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SKGPROJECTILE_API UClass* Z_Construct_UClass_USKGPDAProjectile();
SKGPROJECTILE_API UClass* Z_Construct_UClass_USKGPDAProjectile_NoRegister();
SKGPROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileDebugData();
SKGPROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileParticleData();
UPackage* Z_Construct_UPackage__Script_SKGProjectile();
// End Cross Module References

// Begin ScriptStruct FSKGProjectileDebugData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGProjectileDebugData;
class UScriptStruct* FSKGProjectileDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProjectileDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGProjectileDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGProjectileDebugData, (UObject*)Z_Construct_UPackage__Script_SKGProjectile(), TEXT("SKGProjectileDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_SKGProjectileDebugData.OuterSingleton;
}
template<> SKGPROJECTILE_API UScriptStruct* StaticStruct<FSKGProjectileDebugData>()
{
	return FSKGProjectileDebugData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugPath_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugImpact_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactRadius_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLifetime_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDebugPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static void NewProp_bDebugImpact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugImpact;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLifetime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProjectileDebugData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath_SetBit(void* Obj)
{
	((FSKGProjectileDebugData*)Obj)->bDebugPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath = { "bDebugPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProjectileDebugData), &Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugPath_MetaData), NewProp_bDebugPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileDebugData, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
void Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact_SetBit(void* Obj)
{
	((FSKGProjectileDebugData*)Obj)->bDebugImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact = { "bDebugImpact", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProjectileDebugData), &Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugImpact_MetaData), NewProp_bDebugImpact_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_ImpactRadius = { "ImpactRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileDebugData, ImpactRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactRadius_MetaData), NewProp_ImpactRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_DebugLifetime = { "DebugLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileDebugData, DebugLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLifetime_MetaData), NewProp_DebugLifetime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_ImpactRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_DebugLifetime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProjectile,
	nullptr,
	&NewStructOps,
	"SKGProjectileDebugData",
	Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::PropPointers),
	sizeof(FSKGProjectileDebugData),
	alignof(FSKGProjectileDebugData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileDebugData()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProjectileDebugData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProjectileDebugData.InnerSingleton, Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGProjectileDebugData.InnerSingleton;
}
// End ScriptStruct FSKGProjectileDebugData

// Begin ScriptStruct FSKGProjectileParticleData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGProjectileParticleData;
class UScriptStruct* FSKGProjectileParticleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProjectileParticleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGProjectileParticleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGProjectileParticleData, (UObject*)Z_Construct_UPackage__Script_SKGProjectile(), TEXT("SKGProjectileParticleData"));
	}
	return Z_Registration_Info_UScriptStruct_SKGProjectileParticleData.OuterSingleton;
}
template<> SKGPROJECTILE_API UScriptStruct* StaticStruct<FSKGProjectileParticleData>()
{
	return FSKGProjectileParticleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSpawnDelayDistance_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The delayed range before the particle spawns, such as a tracer with a 100 meter delay would have a value of 10000\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The delayed range before the particle spawns, such as a tracer with a 100 meter delay would have a value of 10000" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParticleSpawnDelayDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProjectileParticleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileParticleData, Particle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle_MetaData), NewProp_Particle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_ParticleSpawnDelayDistance = { "ParticleSpawnDelayDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileParticleData, ParticleSpawnDelayDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSpawnDelayDistance_MetaData), NewProp_ParticleSpawnDelayDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_Particle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_ParticleSpawnDelayDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProjectile,
	nullptr,
	&NewStructOps,
	"SKGProjectileParticleData",
	Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::PropPointers),
	sizeof(FSKGProjectileParticleData),
	alignof(FSKGProjectileParticleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileParticleData()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProjectileParticleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProjectileParticleData.InnerSingleton, Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGProjectileParticleData.InnerSingleton;
}
// End ScriptStruct FSKGProjectileParticleData

// Begin Class USKGPDAProjectile
void USKGPDAProjectile::StaticRegisterNativesUSKGPDAProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGPDAProjectile);
UClass* Z_Construct_UClass_USKGPDAProjectile_NoRegister()
{
	return USKGPDAProjectile::StaticClass();
}
struct Z_Construct_UClass_USKGPDAProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/SKGPDAProjectile.h" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleData_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugData_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DragCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPDAProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, DragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCoefficient_MetaData), NewProp_DragCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_ParticleData = { "ParticleData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, ParticleData), Z_Construct_UScriptStruct_FSKGProjectileParticleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleData_MetaData), NewProp_ParticleData_MetaData) }; // 1535066191
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DebugData = { "DebugData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, DebugData), Z_Construct_UScriptStruct_FSKGProjectileDebugData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugData_MetaData), NewProp_DebugData_MetaData) }; // 126793786
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGPDAProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DragCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_ParticleData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DebugData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGPDAProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProjectile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGPDAProjectile_Statics::ClassParams = {
	&USKGPDAProjectile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USKGPDAProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGPDAProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGPDAProjectile()
{
	if (!Z_Registration_Info_UClass_USKGPDAProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGPDAProjectile.OuterSingleton, Z_Construct_UClass_USKGPDAProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGPDAProjectile.OuterSingleton;
}
template<> SKGPROJECTILE_API UClass* StaticClass<USKGPDAProjectile>()
{
	return USKGPDAProjectile::StaticClass();
}
USKGPDAProjectile::USKGPDAProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGPDAProjectile);
USKGPDAProjectile::~USKGPDAProjectile() {}
// End Class USKGPDAProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGProjectileDebugData::StaticStruct, Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewStructOps, TEXT("SKGProjectileDebugData"), &Z_Registration_Info_UScriptStruct_SKGProjectileDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProjectileDebugData), 126793786U) },
		{ FSKGProjectileParticleData::StaticStruct, Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewStructOps, TEXT("SKGProjectileParticleData"), &Z_Registration_Info_UScriptStruct_SKGProjectileParticleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProjectileParticleData), 1535066191U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGPDAProjectile, USKGPDAProjectile::StaticClass, TEXT("USKGPDAProjectile"), &Z_Registration_Info_UClass_USKGPDAProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPDAProjectile), 1878041937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_2561554537(TEXT("/Script/SKGProjectile"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
