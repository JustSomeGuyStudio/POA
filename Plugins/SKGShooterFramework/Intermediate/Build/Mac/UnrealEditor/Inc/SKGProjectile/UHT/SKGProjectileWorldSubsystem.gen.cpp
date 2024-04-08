// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGProjectile/Public/Subsystems/SKGProjectileWorldSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "SKGProjectile/Public/DataAssets/SKGPDAProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGProjectileWorldSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SKGPROJECTILE_API UClass* Z_Construct_UClass_USKGPDAProjectile_NoRegister();
	SKGPROJECTILE_API UClass* Z_Construct_UClass_USKGProjectileWorldSubsystem();
	SKGPROJECTILE_API UClass* Z_Construct_UClass_USKGProjectileWorldSubsystem_NoRegister();
	SKGPROJECTILE_API UFunction* Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature();
	SKGPROJECTILE_API UFunction* Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature();
	SKGPROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileData();
	SKGPROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileDebugData();
	SKGPROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileParticleData();
	UPackage* Z_Construct_UPackage__Script_SKGProjectile();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics
	{
		struct _Script_SKGProjectile_eventSKGOnProjectileImpact_Parms
		{
			FHitResult HitResult;
			FVector Direction;
			int32 ProjectileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGProjectile_eventSKGOnProjectileImpact_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_HitResult_MetaData), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_HitResult_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGProjectile_eventSKGOnProjectileImpact_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_Direction_MetaData), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_Direction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_ProjectileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_ProjectileID = { "ProjectileID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGProjectile_eventSKGOnProjectileImpact_Parms, ProjectileID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_ProjectileID_MetaData), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_ProjectileID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::NewProp_ProjectileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGProjectile, nullptr, "SKGOnProjectileImpact__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::_Script_SKGProjectile_eventSKGOnProjectileImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::_Script_SKGProjectile_eventSKGOnProjectileImpact_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSKGOnProjectileImpact_DelegateWrapper(const FScriptDelegate& SKGOnProjectileImpact, FHitResult const& HitResult, FVector const& Direction, const int32 ProjectileID)
{
	struct _Script_SKGProjectile_eventSKGOnProjectileImpact_Parms
	{
		FHitResult HitResult;
		FVector Direction;
		int32 ProjectileID;
	};
	_Script_SKGProjectile_eventSKGOnProjectileImpact_Parms Parms;
	Parms.HitResult=HitResult;
	Parms.Direction=Direction;
	Parms.ProjectileID=ProjectileID;
	SKGOnProjectileImpact.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics
	{
		struct _Script_SKGProjectile_eventSKGOnProjetilePositionUpdate_Parms
		{
			FVector Location;
			FVector Velocity;
			int32 ProjectileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGProjectile_eventSKGOnProjetilePositionUpdate_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Location_MetaData), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGProjectile_eventSKGOnProjetilePositionUpdate_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Velocity_MetaData), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_ProjectileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_ProjectileID = { "ProjectileID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGProjectile_eventSKGOnProjetilePositionUpdate_Parms, ProjectileID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_ProjectileID_MetaData), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_ProjectileID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::NewProp_ProjectileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGProjectile, nullptr, "SKGOnProjetilePositionUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::_Script_SKGProjectile_eventSKGOnProjetilePositionUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::_Script_SKGProjectile_eventSKGOnProjetilePositionUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSKGOnProjetilePositionUpdate_DelegateWrapper(const FScriptDelegate& SKGOnProjetilePositionUpdate, FVector const& Location, FVector const& Velocity, const int32 ProjectileID)
{
	struct _Script_SKGProjectile_eventSKGOnProjetilePositionUpdate_Parms
	{
		FVector Location;
		FVector Velocity;
		int32 ProjectileID;
	};
	_Script_SKGProjectile_eventSKGOnProjetilePositionUpdate_Parms Parms;
	Parms.Location=Location;
	Parms.Velocity=Velocity;
	Parms.ProjectileID=ProjectileID;
	SKGOnProjetilePositionUpdate.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGProjectileData;
class UScriptStruct* FSKGProjectileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGProjectileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGProjectileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGProjectileData, (UObject*)Z_Construct_UPackage__Script_SKGProjectile(), TEXT("SKGProjectileData"));
	}
	return Z_Registration_Info_UScriptStruct_SKGProjectileData.OuterSingleton;
}
template<> SKGPROJECTILE_API UScriptStruct* StaticStruct<FSKGProjectileData>()
{
	return FSKGProjectileData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGProjectileData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectileID;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProjectileData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ProjectileID_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ProjectileID = { "ProjectileID", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, ProjectileID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ProjectileID_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ProjectileID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, DragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DragCoefficient_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DragCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Lifetime_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Lifetime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_CollisionChannel_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_CollisionChannel_MetaData) }; // 1822723181
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ActorsToIgnore_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ActorsToIgnore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DebugData_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DebugData = { "DebugData", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, DebugData), Z_Construct_UScriptStruct_FSKGProjectileDebugData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DebugData_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DebugData_MetaData) }; // 3087925080
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ParticleData_MetaData[] = {
		{ "Category", "SKGProjectile" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ParticleData = { "ParticleData", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, ParticleData), Z_Construct_UScriptStruct_FSKGProjectileParticleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ParticleData_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ParticleData_MetaData) }; // 518113185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_WorldPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_WorldPtr = { "WorldPtr", nullptr, (EPropertyFlags)0x0014000080000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, WorldPtr), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_WorldPtr_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_WorldPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_VisualComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_VisualComponent = { "VisualComponent", nullptr, (EPropertyFlags)0x0014000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProjectileData, VisualComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_VisualComponent_MetaData), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_VisualComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProjectileData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ProjectileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_Lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_DebugData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_ParticleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_WorldPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewProp_VisualComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProjectileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGProjectile,
		nullptr,
		&NewStructOps,
		"SKGProjectileData",
		Z_Construct_UScriptStruct_FSKGProjectileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::PropPointers),
		sizeof(FSKGProjectileData),
		alignof(FSKGProjectileData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGProjectileData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProjectileData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGProjectileData()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGProjectileData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProjectileData.InnerSingleton, Z_Construct_UScriptStruct_FSKGProjectileData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGProjectileData.InnerSingleton;
	}
	DEFINE_FUNCTION(USKGProjectileWorldSubsystem::execGetProjectileLocationAtDistance)
	{
		P_GET_OBJECT(USKGPDAProjectile,Z_Param_DataAsset);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
		P_GET_STRUCT(FTransform,Z_Param_LaunchTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OUTLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProjectileLocationAtDistance(Z_Param_DataAsset,Z_Param_Distance,Z_Param_LaunchTransform,Z_Param_Out_OUTLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProjectileWorldSubsystem::execGetProjectileZeroAtLocation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OUTLookAtRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT(FTransform,Z_Param_LaunchTransform);
		P_GET_STRUCT(FTransform,Z_Param_OpticAimSocket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProjectileZeroAtLocation(Z_Param_Out_OUTLookAtRotation,Z_Param_Out_Location,Z_Param_LaunchTransform,Z_Param_OpticAimSocket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProjectileWorldSubsystem::execGetProjectileZero)
	{
		P_GET_OBJECT(USKGPDAProjectile,Z_Param_DataAsset);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
		P_GET_STRUCT(FTransform,Z_Param_LaunchTransform);
		P_GET_STRUCT(FTransform,Z_Param_OpticAimSocket);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OUTLookAtRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProjectileZero(Z_Param_DataAsset,Z_Param_Distance,Z_Param_LaunchTransform,Z_Param_OpticAimSocket,Z_Param_Out_OUTLookAtRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProjectileWorldSubsystem::execFireProjectiles)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_ProjectileIDs);
		P_GET_OBJECT(USKGPDAProjectile,Z_Param_DataAsset);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_LaunchTransforms);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnImpact);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPositionUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireProjectiles(Z_Param_Out_ProjectileIDs,Z_Param_DataAsset,Z_Param_Out_ActorsToIgnore,Z_Param_Out_LaunchTransforms,FSKGOnProjectileImpact(Z_Param_OnImpact),FSKGOnProjetilePositionUpdate(Z_Param_OnPositionUpdate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProjectileWorldSubsystem::execFireProjectile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProjectileID);
		P_GET_OBJECT(USKGPDAProjectile,Z_Param_DataAsset);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_LaunchTransform);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_VisualComponentOverride);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnImpact);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPositionUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireProjectile(Z_Param_ProjectileID,Z_Param_DataAsset,Z_Param_Out_ActorsToIgnore,Z_Param_Out_LaunchTransform,Z_Param_VisualComponentOverride,FSKGOnProjectileImpact(Z_Param_OnImpact),FSKGOnProjetilePositionUpdate(Z_Param_OnPositionUpdate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProjectileWorldSubsystem::execSetWindSources)
	{
		P_GET_TARRAY(AWindDirectionalSource*,Z_Param_WindDirectionalSources);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWindSources(Z_Param_WindDirectionalSources);
		P_NATIVE_END;
	}
	void USKGProjectileWorldSubsystem::StaticRegisterNativesUSKGProjectileWorldSubsystem()
	{
		UClass* Class = USKGProjectileWorldSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireProjectile", &USKGProjectileWorldSubsystem::execFireProjectile },
			{ "FireProjectiles", &USKGProjectileWorldSubsystem::execFireProjectiles },
			{ "GetProjectileLocationAtDistance", &USKGProjectileWorldSubsystem::execGetProjectileLocationAtDistance },
			{ "GetProjectileZero", &USKGProjectileWorldSubsystem::execGetProjectileZero },
			{ "GetProjectileZeroAtLocation", &USKGProjectileWorldSubsystem::execGetProjectileZeroAtLocation },
			{ "SetWindSources", &USKGProjectileWorldSubsystem::execSetWindSources },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics
	{
		struct SKGProjectileWorldSubsystem_eventFireProjectile_Parms
		{
			int32 ProjectileID;
			USKGPDAProjectile* DataAsset;
			TArray<AActor*> ActorsToIgnore;
			FTransform LaunchTransform;
			UPrimitiveComponent* VisualComponentOverride;
			FScriptDelegate OnImpact;
			FScriptDelegate OnPositionUpdate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectileID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualComponentOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualComponentOverride;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnImpact;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPositionUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ProjectileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ProjectileID = { "ProjectileID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectile_Parms, ProjectileID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ProjectileID_MetaData), Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ProjectileID_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectile_Parms, DataAsset), Z_Construct_UClass_USKGPDAProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectile_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ActorsToIgnore_MetaData), Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ActorsToIgnore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_LaunchTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_LaunchTransform = { "LaunchTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectile_Parms, LaunchTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_LaunchTransform_MetaData), Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_LaunchTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_VisualComponentOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_VisualComponentOverride = { "VisualComponentOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectile_Parms, VisualComponentOverride), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_VisualComponentOverride_MetaData), Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_VisualComponentOverride_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_OnImpact = { "OnImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectile_Parms, OnImpact), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2520708724
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_OnPositionUpdate = { "OnPositionUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectile_Parms, OnPositionUpdate), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4144298727
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ProjectileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_LaunchTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_VisualComponentOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_OnImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::NewProp_OnPositionUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Projectile" },
		{ "Comment", "// VisualComponentOverride will replace the ParticleData\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
		{ "ToolTip", "VisualComponentOverride will replace the ParticleData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProjectileWorldSubsystem, nullptr, "FireProjectile", nullptr, nullptr, Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::SKGProjectileWorldSubsystem_eventFireProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::SKGProjectileWorldSubsystem_eventFireProjectile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics
	{
		struct SKGProjectileWorldSubsystem_eventFireProjectiles_Parms
		{
			TArray<int32> ProjectileIDs;
			USKGPDAProjectile* DataAsset;
			TArray<AActor*> ActorsToIgnore;
			TArray<FTransform> LaunchTransforms;
			FScriptDelegate OnImpact;
			FScriptDelegate OnPositionUpdate;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectileIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectileIDs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaunchTransforms;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnImpact;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPositionUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ProjectileIDs_Inner = { "ProjectileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ProjectileIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ProjectileIDs = { "ProjectileIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectiles_Parms, ProjectileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ProjectileIDs_MetaData), Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ProjectileIDs_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectiles_Parms, DataAsset), Z_Construct_UClass_USKGPDAProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectiles_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ActorsToIgnore_MetaData), Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ActorsToIgnore_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_LaunchTransforms_Inner = { "LaunchTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_LaunchTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_LaunchTransforms = { "LaunchTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectiles_Parms, LaunchTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_LaunchTransforms_MetaData), Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_LaunchTransforms_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_OnImpact = { "OnImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectiles_Parms, OnImpact), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjectileImpact__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2520708724
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_OnPositionUpdate = { "OnPositionUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventFireProjectiles_Parms, OnPositionUpdate), Z_Construct_UDelegateFunction_SKGProjectile_SKGOnProjetilePositionUpdate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4144298727
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ProjectileIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ProjectileIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_LaunchTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_LaunchTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_OnImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::NewProp_OnPositionUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Projectile" },
		{ "Comment", "// Number of LaunchTransforms dictates number of projectiles\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
		{ "ToolTip", "Number of LaunchTransforms dictates number of projectiles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProjectileWorldSubsystem, nullptr, "FireProjectiles", nullptr, nullptr, Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::SKGProjectileWorldSubsystem_eventFireProjectiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::SKGProjectileWorldSubsystem_eventFireProjectiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics
	{
		struct SKGProjectileWorldSubsystem_eventGetProjectileLocationAtDistance_Parms
		{
			USKGPDAProjectile* DataAsset;
			double Distance;
			FTransform LaunchTransform;
			FVector OUTLocation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OUTLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileLocationAtDistance_Parms, DataAsset), Z_Construct_UClass_USKGPDAProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileLocationAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_LaunchTransform = { "LaunchTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileLocationAtDistance_Parms, LaunchTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_OUTLocation = { "OUTLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileLocationAtDistance_Parms, OUTLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGProjectileWorldSubsystem_eventGetProjectileLocationAtDistance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGProjectileWorldSubsystem_eventGetProjectileLocationAtDistance_Parms), &Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_LaunchTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_OUTLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Projectile" },
		{ "Comment", "// Returns true if valid (LaunchTransform not invalid)\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
		{ "ToolTip", "Returns true if valid (LaunchTransform not invalid)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProjectileWorldSubsystem, nullptr, "GetProjectileLocationAtDistance", nullptr, nullptr, Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::SKGProjectileWorldSubsystem_eventGetProjectileLocationAtDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::SKGProjectileWorldSubsystem_eventGetProjectileLocationAtDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics
	{
		struct SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms
		{
			USKGPDAProjectile* DataAsset;
			double Distance;
			FTransform LaunchTransform;
			FTransform OpticAimSocket;
			FRotator OUTLookAtRotation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OpticAimSocket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OUTLookAtRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms, DataAsset), Z_Construct_UClass_USKGPDAProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms, Distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_LaunchTransform = { "LaunchTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms, LaunchTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_OpticAimSocket = { "OpticAimSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms, OpticAimSocket), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_OUTLookAtRotation = { "OUTLookAtRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms, OUTLookAtRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms), &Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_LaunchTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_OpticAimSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_OUTLookAtRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Projectile" },
		{ "Comment", "// Returns true if valid (LaunchTransform AND OpticAimSocket valid)\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
		{ "ToolTip", "Returns true if valid (LaunchTransform AND OpticAimSocket valid)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProjectileWorldSubsystem, nullptr, "GetProjectileZero", nullptr, nullptr, Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::SKGProjectileWorldSubsystem_eventGetProjectileZero_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics
	{
		struct SKGProjectileWorldSubsystem_eventGetProjectileZeroAtLocation_Parms
		{
			FRotator OUTLookAtRotation;
			FVector Location;
			FTransform LaunchTransform;
			FTransform OpticAimSocket;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OUTLookAtRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OpticAimSocket;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_OUTLookAtRotation = { "OUTLookAtRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileZeroAtLocation_Parms, OUTLookAtRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileZeroAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_LaunchTransform = { "LaunchTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileZeroAtLocation_Parms, LaunchTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_OpticAimSocket = { "OpticAimSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventGetProjectileZeroAtLocation_Parms, OpticAimSocket), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGProjectileWorldSubsystem_eventGetProjectileZeroAtLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGProjectileWorldSubsystem_eventGetProjectileZeroAtLocation_Parms), &Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_OUTLookAtRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_LaunchTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_OpticAimSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Projectile" },
		{ "Comment", "// Returns true if valid (LaunchTransform AND Location valid)\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
		{ "ToolTip", "Returns true if valid (LaunchTransform AND Location valid)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProjectileWorldSubsystem, nullptr, "GetProjectileZeroAtLocation", nullptr, nullptr, Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::SKGProjectileWorldSubsystem_eventGetProjectileZeroAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::SKGProjectileWorldSubsystem_eventGetProjectileZeroAtLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics
	{
		struct SKGProjectileWorldSubsystem_eventSetWindSources_Parms
		{
			TArray<AWindDirectionalSource*> WindDirectionalSources;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WindDirectionalSources_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WindDirectionalSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::NewProp_WindDirectionalSources_Inner = { "WindDirectionalSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWindDirectionalSource_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::NewProp_WindDirectionalSources = { "WindDirectionalSources", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProjectileWorldSubsystem_eventSetWindSources_Parms, WindDirectionalSources), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::NewProp_WindDirectionalSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::NewProp_WindDirectionalSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Projectile" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProjectileWorldSubsystem, nullptr, "SetWindSources", nullptr, nullptr, Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::SKGProjectileWorldSubsystem_eventSetWindSources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::SKGProjectileWorldSubsystem_eventSetWindSources_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGProjectileWorldSubsystem);
	UClass* Z_Construct_UClass_USKGProjectileWorldSubsystem_NoRegister()
	{
		return USKGProjectileWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WindSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WindSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGProjectile,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectile, "FireProjectile" }, // 522114899
		{ &Z_Construct_UFunction_USKGProjectileWorldSubsystem_FireProjectiles, "FireProjectiles" }, // 4262861981
		{ &Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileLocationAtDistance, "GetProjectileLocationAtDistance" }, // 803770979
		{ &Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZero, "GetProjectileZero" }, // 1480734989
		{ &Z_Construct_UFunction_USKGProjectileWorldSubsystem_GetProjectileZeroAtLocation, "GetProjectileZeroAtLocation" }, // 548363316
		{ &Z_Construct_UFunction_USKGProjectileWorldSubsystem_SetWindSources, "SetWindSources" }, // 204550916
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/SKGProjectileWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProjectileWorldSubsystem, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_World_MetaData), Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_WindSources_Inner = { "WindSources", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_WindSources_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGProjectileWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_WindSources = { "WindSources", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProjectileWorldSubsystem, WindSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_WindSources_MetaData), Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_WindSources_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_WindSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::NewProp_WindSources,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGProjectileWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::ClassParams = {
		&USKGProjectileWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGProjectileWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_USKGProjectileWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGProjectileWorldSubsystem.OuterSingleton, Z_Construct_UClass_USKGProjectileWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGProjectileWorldSubsystem.OuterSingleton;
	}
	template<> SKGPROJECTILE_API UClass* StaticClass<USKGProjectileWorldSubsystem>()
	{
		return USKGProjectileWorldSubsystem::StaticClass();
	}
	USKGProjectileWorldSubsystem::USKGProjectileWorldSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGProjectileWorldSubsystem);
	USKGProjectileWorldSubsystem::~USKGProjectileWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_Subsystems_SKGProjectileWorldSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_Subsystems_SKGProjectileWorldSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FSKGProjectileData::StaticStruct, Z_Construct_UScriptStruct_FSKGProjectileData_Statics::NewStructOps, TEXT("SKGProjectileData"), &Z_Registration_Info_UScriptStruct_SKGProjectileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProjectileData), 906135273U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_Subsystems_SKGProjectileWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGProjectileWorldSubsystem, USKGProjectileWorldSubsystem::StaticClass, TEXT("USKGProjectileWorldSubsystem"), &Z_Registration_Info_UClass_USKGProjectileWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGProjectileWorldSubsystem), 1340861322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_Subsystems_SKGProjectileWorldSubsystem_h_955155827(TEXT("/Script/SKGProjectile"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_Subsystems_SKGProjectileWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_Subsystems_SKGProjectileWorldSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_Subsystems_SKGProjectileWorldSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProjectile_Public_Subsystems_SKGProjectileWorldSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
