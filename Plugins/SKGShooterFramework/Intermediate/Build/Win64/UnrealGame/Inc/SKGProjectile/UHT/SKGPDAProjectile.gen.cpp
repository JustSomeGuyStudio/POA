// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGProjectile/Public/DataAssets/SKGPDAProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPDAProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SKGPROJECTILE_API UClass* Z_Construct_UClass_USKGPDAProjectile();
	SKGPROJECTILE_API UClass* Z_Construct_UClass_USKGPDAProjectile_NoRegister();
	SKGPROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileDebugData();
	SKGPROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileParticleData();
	UPackage* Z_Construct_UPackage__Script_SKGProjectile();
// End Cross Module References
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugPath_MetaData[];
#endif
		static void NewProp_bDebugPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugImpact_MetaData[];
#endif
		static void NewProp_bDebugImpact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugImpact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLifetime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProjectileDebugData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath_SetBit(void* Obj)
	{
		((FSKGProjectileDebugData*)Obj)->bDebugPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath = { "bDebugPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProjectileDebugData), &Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath_MetaData), Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileDebugData, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_LineThickness_MetaData), Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_LineThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact_SetBit(void* Obj)
	{
		((FSKGProjectileDebugData*)Obj)->bDebugImpact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact = { "bDebugImpact", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProjectileDebugData), &Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact_MetaData), Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_ImpactRadius_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_ImpactRadius = { "ImpactRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileDebugData, ImpactRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_ImpactRadius_MetaData), Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_ImpactRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_DebugLifetime_MetaData[] = {
		{ "Category", "SKGProjectileDebugData" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_DebugLifetime = { "DebugLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileDebugData, DebugLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_DebugLifetime_MetaData), Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_DebugLifetime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_bDebugImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_ImpactRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewProp_DebugLifetime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileDebugData()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGProjectileDebugData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProjectileDebugData.InnerSingleton, Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGProjectileDebugData.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSpawnDelayDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParticleSpawnDelayDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProjectileParticleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_Particle_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileParticleData, Particle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_Particle_MetaData), Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_Particle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_ParticleSpawnDelayDistance_MetaData[] = {
		{ "Category", "SKGShooterFramework" },
		{ "Comment", "// The delayed range before the particle spawns, such as a tracer with a 100 meter delay would have a value of 10000\n" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
		{ "ToolTip", "The delayed range before the particle spawns, such as a tracer with a 100 meter delay would have a value of 10000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_ParticleSpawnDelayDistance = { "ParticleSpawnDelayDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileParticleData, ParticleSpawnDelayDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_ParticleSpawnDelayDistance_MetaData), Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_ParticleSpawnDelayDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_Particle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewProp_ParticleSpawnDelayDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileParticleData()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGProjectileParticleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProjectileParticleData.InnerSingleton, Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGProjectileParticleData.InnerSingleton;
	}
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGPDAProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGProjectile,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/SKGPDAProjectile.h" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Velocity_MetaData), Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, DragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DragCoefficient_MetaData), Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DragCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Lifetime_MetaData), Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Lifetime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_CollisionChannel_MetaData), Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_CollisionChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_ParticleData_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_ParticleData = { "ParticleData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, ParticleData), Z_Construct_UScriptStruct_FSKGProjectileParticleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_ParticleData_MetaData), Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_ParticleData_MetaData) }; // 518113185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DebugData_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAProjectile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DebugData = { "DebugData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAProjectile, DebugData), Z_Construct_UScriptStruct_FSKGProjectileDebugData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DebugData_MetaData), Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DebugData_MetaData) }; // 3087925080
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGPDAProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_Lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_ParticleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAProjectile_Statics::NewProp_DebugData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGPDAProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPDAProjectile>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAProjectile_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ScriptStructInfo[] = {
		{ FSKGProjectileDebugData::StaticStruct, Z_Construct_UScriptStruct_FSKGProjectileDebugData_Statics::NewStructOps, TEXT("SKGProjectileDebugData"), &Z_Registration_Info_UScriptStruct_SKGProjectileDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProjectileDebugData), 3087925080U) },
		{ FSKGProjectileParticleData::StaticStruct, Z_Construct_UScriptStruct_FSKGProjectileParticleData_Statics::NewStructOps, TEXT("SKGProjectileParticleData"), &Z_Registration_Info_UScriptStruct_SKGProjectileParticleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProjectileParticleData), 518113185U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGPDAProjectile, USKGPDAProjectile::StaticClass, TEXT("USKGPDAProjectile"), &Z_Registration_Info_UClass_USKGPDAProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPDAProjectile), 4126632261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_3331422439(TEXT("/Script/SKGProjectile"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_DataAssets_SKGPDAProjectile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
