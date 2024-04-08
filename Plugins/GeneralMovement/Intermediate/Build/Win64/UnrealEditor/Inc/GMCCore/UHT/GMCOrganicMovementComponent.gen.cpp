// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/GMCOrganicMovementComponent.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "Components/GMCMovementUtilityComponent.h"
#include "Utility/GMCAnimMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCOrganicMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_Pawn_NoRegister();
	GMCCORE_API UClass* Z_Construct_UClass_UGMC_MontageMetaData();
	GMCCORE_API UClass* Z_Construct_UClass_UGMC_MontageMetaData_NoRegister();
	GMCCORE_API UClass* Z_Construct_UClass_UGMC_MovementUtilityCmp();
	GMCCORE_API UClass* Z_Construct_UClass_UGMC_OrganicMovementCmp();
	GMCCORE_API UClass* Z_Construct_UClass_UGMC_OrganicMovementCmp_NoRegister();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_CombineMode();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_MovementMode();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_PredictionMode();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_BasedMovement();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_BasedMovementRelative();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_FloorParams();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontagePrediction();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontageReplication();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontageSimulation();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontageTracker();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_SimulationSettings();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_MovementMode;
	static UEnum* EGMC_MovementMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_MovementMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_MovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_MovementMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_MovementMode"));
		}
		return Z_Registration_Info_UEnum_EGMC_MovementMode.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_MovementMode>()
	{
		return EGMC_MovementMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_MovementMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_MovementMode_Statics::Enumerators[] = {
		{ "EGMC_MovementMode::None", (int64)EGMC_MovementMode::None },
		{ "EGMC_MovementMode::Grounded", (int64)EGMC_MovementMode::Grounded },
		{ "EGMC_MovementMode::Airborne", (int64)EGMC_MovementMode::Airborne },
		{ "EGMC_MovementMode::Buoyant", (int64)EGMC_MovementMode::Buoyant },
		{ "EGMC_MovementMode::Custom1", (int64)EGMC_MovementMode::Custom1 },
		{ "EGMC_MovementMode::Custom2", (int64)EGMC_MovementMode::Custom2 },
		{ "EGMC_MovementMode::Custom3", (int64)EGMC_MovementMode::Custom3 },
		{ "EGMC_MovementMode::Custom4", (int64)EGMC_MovementMode::Custom4 },
		{ "EGMC_MovementMode::Custom5", (int64)EGMC_MovementMode::Custom5 },
		{ "EGMC_MovementMode::Custom6", (int64)EGMC_MovementMode::Custom6 },
		{ "EGMC_MovementMode::Custom7", (int64)EGMC_MovementMode::Custom7 },
		{ "EGMC_MovementMode::Custom8", (int64)EGMC_MovementMode::Custom8 },
		{ "EGMC_MovementMode::Custom9", (int64)EGMC_MovementMode::Custom9 },
		{ "EGMC_MovementMode::Custom10", (int64)EGMC_MovementMode::Custom10 },
		{ "EGMC_MovementMode::Custom11", (int64)EGMC_MovementMode::Custom11 },
		{ "EGMC_MovementMode::Custom12", (int64)EGMC_MovementMode::Custom12 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_MovementMode_Statics::Enum_MetaDataParams[] = {
		{ "Airborne.Name", "EGMC_MovementMode::Airborne" },
		{ "Airborne.ToolTip", "Moving through the air with or without being affected by gravity." },
		{ "BlueprintType", "true" },
		{ "Buoyant.Name", "EGMC_MovementMode::Buoyant" },
		{ "Buoyant.ToolTip", "Moving through a fluid volume under the effect of buoyancy." },
		{ "Custom1.Name", "EGMC_MovementMode::Custom1" },
		{ "Custom10.Name", "EGMC_MovementMode::Custom10" },
		{ "Custom11.Name", "EGMC_MovementMode::Custom11" },
		{ "Custom12.Name", "EGMC_MovementMode::Custom12" },
		{ "Custom2.Name", "EGMC_MovementMode::Custom2" },
		{ "Custom3.Name", "EGMC_MovementMode::Custom3" },
		{ "Custom4.Name", "EGMC_MovementMode::Custom4" },
		{ "Custom5.Name", "EGMC_MovementMode::Custom5" },
		{ "Custom6.Name", "EGMC_MovementMode::Custom6" },
		{ "Custom7.Name", "EGMC_MovementMode::Custom7" },
		{ "Custom8.Name", "EGMC_MovementMode::Custom8" },
		{ "Custom9.Name", "EGMC_MovementMode::Custom9" },
		{ "Grounded.Name", "EGMC_MovementMode::Grounded" },
		{ "Grounded.ToolTip", "Moving along a surface under the effect of gravity." },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "None.Name", "EGMC_MovementMode::None" },
		{ "None.ToolTip", "No movement." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_MovementMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_MovementMode",
		"EGMC_MovementMode",
		Z_Construct_UEnum_GMCCore_EGMC_MovementMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_MovementMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_MovementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_MovementMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_MovementMode()
	{
		if (!Z_Registration_Info_UEnum_EGMC_MovementMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_MovementMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_MovementMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_MovementMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_BasedMovementSource;
	static UEnum* EGMC_BasedMovementSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_BasedMovementSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_BasedMovementSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_BasedMovementSource"));
		}
		return Z_Registration_Info_UEnum_EGMC_BasedMovementSource.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_BasedMovementSource>()
	{
		return EGMC_BasedMovementSource_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource_Statics::Enumerators[] = {
		{ "EGMC_BasedMovementSource::None", (int64)EGMC_BasedMovementSource::None },
		{ "EGMC_BasedMovementSource::Velocity", (int64)EGMC_BasedMovementSource::Velocity },
		{ "EGMC_BasedMovementSource::Relative", (int64)EGMC_BasedMovementSource::Relative },
		{ "EGMC_BasedMovementSource::MAX", (int64)EGMC_BasedMovementSource::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGMC_BasedMovementSource::MAX" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "None.Name", "EGMC_BasedMovementSource::None" },
		{ "None.ToolTip", "The pawn will never consider any components as base." },
		{ "Relative.Name", "EGMC_BasedMovementSource::Relative" },
		{ "Relative.ToolTip", "The pawn will move relative to components it is based on. Base changes are not predicted in this mode." },
		{ "Velocity.Name", "EGMC_BasedMovementSource::Velocity" },
		{ "Velocity.ToolTip", "The pawn will follow components based on their velocity." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_BasedMovementSource",
		"EGMC_BasedMovementSource",
		Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource()
	{
		if (!Z_Registration_Info_UEnum_EGMC_BasedMovementSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_BasedMovementSource.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_BasedMovementSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_BasedMovementVelocity;
class UScriptStruct* FGMC_BasedMovementVelocity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_BasedMovementVelocity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_BasedMovementVelocity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_BasedMovementVelocity"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_BasedMovementVelocity.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_BasedMovementVelocity>()
{
	return FGMC_BasedMovementVelocity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWalkableSurfacesOnly_MetaData[];
#endif
		static void NewProp_bWalkableSurfacesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkableSurfacesOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImpartLinearVelocity_MetaData[];
#endif
		static void NewProp_bImpartLinearVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpartLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImpartTangentialVelocity_MetaData[];
#endif
		static void NewProp_bImpartTangentialVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpartTangentialVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderMassOnImpartVelocity_MetaData[];
#endif
		static void NewProp_bConsiderMassOnImpartVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderMassOnImpartVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowBaseRotation_MetaData[];
#endif
		static void NewProp_bFollowBaseRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowBaseRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachParentAsBase_MetaData[];
#endif
		static void NewProp_bUseAttachParentAsBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachParentAsBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreBasedPawns_MetaData[];
#endif
		static void NewProp_bIgnoreBasedPawns_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreBasedPawns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoPhysicsInteractionWithBase_MetaData[];
#endif
		static void NewProp_bNoPhysicsInteractionWithBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoPhysicsInteractionWithBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceRelativeBasedMovementForSimulation_MetaData[];
#endif
		static void NewProp_bForceRelativeBasedMovementForSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRelativeBasedMovementForSimulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_BasedMovementVelocity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// The max height at which a component will still be considered as a base. Setting this to 0 will only set the base while grounded.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The max height at which a component will still be considered as a base. Setting this to 0 will only set the base while grounded." },
		{ "UIMax", "5000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_BasedMovementVelocity, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_MaxHeight_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_MaxHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bWalkableSurfacesOnly_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, a detected component will only be accepted as base if a walkable surface was hit on that component.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, a detected component will only be accepted as base if a walkable surface was hit on that component." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bWalkableSurfacesOnly_SetBit(void* Obj)
	{
		((FGMC_BasedMovementVelocity*)Obj)->bWalkableSurfacesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bWalkableSurfacesOnly = { "bWalkableSurfacesOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementVelocity), &Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bWalkableSurfacesOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bWalkableSurfacesOnly_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bWalkableSurfacesOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartLinearVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether to impart linear velocity when leaving the current base. Velocity is never imparted from a base that is simulating physics. Does not consider the\n// configured based max height (meaning velocity is imparted as soon as the pawn leaves the ground).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether to impart linear velocity when leaving the current base. Velocity is never imparted from a base that is simulating physics. Does not consider the\nconfigured based max height (meaning velocity is imparted as soon as the pawn leaves the ground)." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartLinearVelocity_SetBit(void* Obj)
	{
		((FGMC_BasedMovementVelocity*)Obj)->bImpartLinearVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartLinearVelocity = { "bImpartLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementVelocity), &Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartLinearVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartLinearVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartLinearVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartTangentialVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether to impart tangential velocity when leaving the current base. Velocity is never imparted from a base that is simulating physics. Does not consider\n// the configured based max height (meaning velocity is imparted as soon as the pawn leaves the ground).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether to impart tangential velocity when leaving the current base. Velocity is never imparted from a base that is simulating physics. Does not consider\nthe configured based max height (meaning velocity is imparted as soon as the pawn leaves the ground)." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartTangentialVelocity_SetBit(void* Obj)
	{
		((FGMC_BasedMovementVelocity*)Obj)->bImpartTangentialVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartTangentialVelocity = { "bImpartTangentialVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementVelocity), &Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartTangentialVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartTangentialVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartTangentialVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bConsiderMassOnImpartVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the mass of the pawn will be taken into account when imparting the velocity of a base the pawn has just left.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the mass of the pawn will be taken into account when imparting the velocity of a base the pawn has just left." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bConsiderMassOnImpartVelocity_SetBit(void* Obj)
	{
		((FGMC_BasedMovementVelocity*)Obj)->bConsiderMassOnImpartVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bConsiderMassOnImpartVelocity = { "bConsiderMassOnImpartVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementVelocity), &Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bConsiderMassOnImpartVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bConsiderMassOnImpartVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bConsiderMassOnImpartVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bFollowBaseRotation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the pawn will inherit yaw rotation changes of the base component.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the pawn will inherit yaw rotation changes of the base component." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bFollowBaseRotation_SetBit(void* Obj)
	{
		((FGMC_BasedMovementVelocity*)Obj)->bFollowBaseRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bFollowBaseRotation = { "bFollowBaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementVelocity), &Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bFollowBaseRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bFollowBaseRotation_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bFollowBaseRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bUseAttachParentAsBase_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the outermost attach parent will be used as the base component if applicable.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the outermost attach parent will be used as the base component if applicable." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bUseAttachParentAsBase_SetBit(void* Obj)
	{
		((FGMC_BasedMovementVelocity*)Obj)->bUseAttachParentAsBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bUseAttachParentAsBase = { "bUseAttachParentAsBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementVelocity), &Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bUseAttachParentAsBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bUseAttachParentAsBase_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bUseAttachParentAsBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bIgnoreBasedPawns_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, this pawn will ignore any other pawns that are based on it during movement.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, this pawn will ignore any other pawns that are based on it during movement." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bIgnoreBasedPawns_SetBit(void* Obj)
	{
		((FGMC_BasedMovementVelocity*)Obj)->bIgnoreBasedPawns = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bIgnoreBasedPawns = { "bIgnoreBasedPawns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementVelocity), &Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bIgnoreBasedPawns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bIgnoreBasedPawns_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bIgnoreBasedPawns_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bNoPhysicsInteractionWithBase_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the pawn will not have any physics interactions with an object it is currently based on.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the pawn will not have any physics interactions with an object it is currently based on." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bNoPhysicsInteractionWithBase_SetBit(void* Obj)
	{
		((FGMC_BasedMovementVelocity*)Obj)->bNoPhysicsInteractionWithBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bNoPhysicsInteractionWithBase = { "bNoPhysicsInteractionWithBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementVelocity), &Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bNoPhysicsInteractionWithBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bNoPhysicsInteractionWithBase_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bNoPhysicsInteractionWithBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bForceRelativeBasedMovementForSimulation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, simulated versions of this pawn will use relative based movement.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, simulated versions of this pawn will use relative based movement." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bForceRelativeBasedMovementForSimulation_SetBit(void* Obj)
	{
		((FGMC_BasedMovementVelocity*)Obj)->bForceRelativeBasedMovementForSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bForceRelativeBasedMovementForSimulation = { "bForceRelativeBasedMovementForSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementVelocity), &Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bForceRelativeBasedMovementForSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bForceRelativeBasedMovementForSimulation_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bForceRelativeBasedMovementForSimulation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bWalkableSurfacesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bImpartTangentialVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bConsiderMassOnImpartVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bFollowBaseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bUseAttachParentAsBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bIgnoreBasedPawns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bNoPhysicsInteractionWithBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewProp_bForceRelativeBasedMovementForSimulation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_BasedMovementVelocity",
		Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::PropPointers),
		sizeof(FGMC_BasedMovementVelocity),
		alignof(FGMC_BasedMovementVelocity),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_BasedMovementVelocity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_BasedMovementVelocity.InnerSingleton, Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_BasedMovementVelocity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_BasedMovementRelative;
class UScriptStruct* FGMC_BasedMovementRelative::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_BasedMovementRelative.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_BasedMovementRelative.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_BasedMovementRelative"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_BasedMovementRelative.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_BasedMovementRelative>()
{
	return FGMC_BasedMovementRelative::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWalkableSurfacesOnly_MetaData[];
#endif
		static void NewProp_bWalkableSurfacesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkableSurfacesOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImpartLinearVelocity_MetaData[];
#endif
		static void NewProp_bImpartLinearVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpartLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImpartTangentialVelocity_MetaData[];
#endif
		static void NewProp_bImpartTangentialVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpartTangentialVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderMassOnImpartVelocity_MetaData[];
#endif
		static void NewProp_bConsiderMassOnImpartVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderMassOnImpartVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseChangeTransitionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseChangeTransitionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachParentAsBase_MetaData[];
#endif
		static void NewProp_bUseAttachParentAsBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachParentAsBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreBasedPawns_MetaData[];
#endif
		static void NewProp_bIgnoreBasedPawns_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreBasedPawns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoPhysicsInteractionWithBase_MetaData[];
#endif
		static void NewProp_bNoPhysicsInteractionWithBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoPhysicsInteractionWithBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendActorBaseRotation_MetaData[];
#endif
		static void NewProp_bSendActorBaseRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendActorBaseRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEqualizeBaseActor_MetaData[];
#endif
		static void NewProp_bEqualizeBaseActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEqualizeBaseActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEqualizationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEqualizationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEqualizeInPlace_MetaData[];
#endif
		static void NewProp_bEqualizeInPlace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEqualizeInPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EqualizationLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EqualizationLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_BasedMovementRelative>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// The max height at which a component will still be considered as a base. Setting this to 0 will only set the base while grounded.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The max height at which a component will still be considered as a base. Setting this to 0 will only set the base while grounded." },
		{ "UIMax", "5000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_BasedMovementRelative, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxHeight_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bWalkableSurfacesOnly_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, a detected component will only be accepted as base if a walkable surface was hit on that component.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, a detected component will only be accepted as base if a walkable surface was hit on that component." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bWalkableSurfacesOnly_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bWalkableSurfacesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bWalkableSurfacesOnly = { "bWalkableSurfacesOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bWalkableSurfacesOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bWalkableSurfacesOnly_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bWalkableSurfacesOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartLinearVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether to impart linear velocity when leaving the current base. Velocity is never imparted from a base that is simulating physics. Does not consider the\n// configured based max height (meaning velocity is imparted as soon as the pawn leaves the ground).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether to impart linear velocity when leaving the current base. Velocity is never imparted from a base that is simulating physics. Does not consider the\nconfigured based max height (meaning velocity is imparted as soon as the pawn leaves the ground)." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartLinearVelocity_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bImpartLinearVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartLinearVelocity = { "bImpartLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartLinearVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartLinearVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartLinearVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartTangentialVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether to impart tangential velocity when leaving the current base. Velocity is never imparted from a base that is simulating physics. Does not consider\n// the configured based max height (meaning velocity is imparted as soon as the pawn leaves the ground).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether to impart tangential velocity when leaving the current base. Velocity is never imparted from a base that is simulating physics. Does not consider\nthe configured based max height (meaning velocity is imparted as soon as the pawn leaves the ground)." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartTangentialVelocity_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bImpartTangentialVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartTangentialVelocity = { "bImpartTangentialVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartTangentialVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartTangentialVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartTangentialVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bConsiderMassOnImpartVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the mass of the pawn will be taken into account when imparting the velocity of a base the pawn has just left.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the mass of the pawn will be taken into account when imparting the velocity of a base the pawn has just left." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bConsiderMassOnImpartVelocity_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bConsiderMassOnImpartVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bConsiderMassOnImpartVelocity = { "bConsiderMassOnImpartVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bConsiderMassOnImpartVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bConsiderMassOnImpartVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bConsiderMassOnImpartVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_BaseChangeTransitionTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// How long a detected component must remain valid to be accepted as a new base. As the transition is handled exclusively by the server it may appear to take\n// longer than the set value on the client.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How long a detected component must remain valid to be accepted as a new base. As the transition is handled exclusively by the server it may appear to take\nlonger than the set value on the client." },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_BaseChangeTransitionTime = { "BaseChangeTransitionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_BasedMovementRelative, BaseChangeTransitionTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_BaseChangeTransitionTime_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_BaseChangeTransitionTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bUseAttachParentAsBase_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the outermost attach parent will be used as the base component if applicable.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the outermost attach parent will be used as the base component if applicable." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bUseAttachParentAsBase_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bUseAttachParentAsBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bUseAttachParentAsBase = { "bUseAttachParentAsBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bUseAttachParentAsBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bUseAttachParentAsBase_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bUseAttachParentAsBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bIgnoreBasedPawns_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, this pawn will ignore any other pawns that are based on it during movement.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, this pawn will ignore any other pawns that are based on it during movement." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bIgnoreBasedPawns_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bIgnoreBasedPawns = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bIgnoreBasedPawns = { "bIgnoreBasedPawns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bIgnoreBasedPawns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bIgnoreBasedPawns_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bIgnoreBasedPawns_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bNoPhysicsInteractionWithBase_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the pawn will not have any physics interactions with an object it is currently based on.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the pawn will not have any physics interactions with an object it is currently based on." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bNoPhysicsInteractionWithBase_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bNoPhysicsInteractionWithBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bNoPhysicsInteractionWithBase = { "bNoPhysicsInteractionWithBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bNoPhysicsInteractionWithBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bNoPhysicsInteractionWithBase_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bNoPhysicsInteractionWithBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bSendActorBaseRotation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the client will send additional information about the actor base rotation to the server. This can make the transition from one base to another\n// significantly smoother (at the cost of increased bandwidth usage).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the client will send additional information about the actor base rotation to the server. This can make the transition from one base to another\nsignificantly smoother (at the cost of increased bandwidth usage)." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bSendActorBaseRotation_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bSendActorBaseRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bSendActorBaseRotation = { "bSendActorBaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bSendActorBaseRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bSendActorBaseRotation_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bSendActorBaseRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeBaseActor_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the actor that we are currently based on will be unrotated and moved to the equalization location for the move execution of client-owned pawns.\n// This can significantly improve prediction results for bases that have roll and/or pitch rotation. However, in addition to the increased performance\n// overhead there may also have far-reaching consequences for the game logic. Only enable this option if you understand the implications.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the actor that we are currently based on will be unrotated and moved to the equalization location for the move execution of client-owned pawns.\nThis can significantly improve prediction results for bases that have roll and/or pitch rotation. However, in addition to the increased performance\noverhead there may also have far-reaching consequences for the game logic. Only enable this option if you understand the implications." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeBaseActor_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bEqualizeBaseActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeBaseActor = { "bEqualizeBaseActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeBaseActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeBaseActor_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeBaseActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxEqualizationAngle_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "// If the roll or pitch angle of the base (in degrees) is greater than the configured value, the base won't be equalized.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If the roll or pitch angle of the base (in degrees) is greater than the configured value, the base won't be equalized." },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxEqualizationAngle = { "MaxEqualizationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_BasedMovementRelative, MaxEqualizationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxEqualizationAngle_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxEqualizationAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeInPlace_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the base will remain at its current location during equalization. Note that the unrotated base may intersect other objects.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the base will remain at its current location during equalization. Note that the unrotated base may intersect other objects." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeInPlace_SetBit(void* Obj)
	{
		((FGMC_BasedMovementRelative*)Obj)->bEqualizeInPlace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeInPlace = { "bEqualizeInPlace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_BasedMovementRelative), &Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeInPlace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeInPlace_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeInPlace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_EqualizationLocation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Location the current base actor will be moved to for equalization. This should be a location in the map that is unobstructed and generally never occupied\n// by any other object. Only used if the base is not equalized in place.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Location the current base actor will be moved to for equalization. This should be a location in the map that is unobstructed and generally never occupied\nby any other object. Only used if the base is not equalized in place." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_EqualizationLocation = { "EqualizationLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_BasedMovementRelative, EqualizationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_EqualizationLocation_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_EqualizationLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bWalkableSurfacesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bImpartTangentialVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bConsiderMassOnImpartVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_BaseChangeTransitionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bUseAttachParentAsBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bIgnoreBasedPawns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bNoPhysicsInteractionWithBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bSendActorBaseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeBaseActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_MaxEqualizationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_bEqualizeInPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewProp_EqualizationLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_BasedMovementRelative",
		Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::PropPointers),
		sizeof(FGMC_BasedMovementRelative),
		alignof(FGMC_BasedMovementRelative),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_BasedMovementRelative()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_BasedMovementRelative.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_BasedMovementRelative.InnerSingleton, Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_BasedMovementRelative.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_BasedMovement;
class UScriptStruct* FGMC_BasedMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_BasedMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_BasedMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_BasedMovement, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_BasedMovement"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_BasedMovement.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_BasedMovement>()
{
	return FGMC_BasedMovement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Relative_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Relative;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_BasedMovement>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The reference point for how the pawn should follow a dynamic base component.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The reference point for how the pawn should follow a dynamic base component." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_BasedMovement, Source), Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Source_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Source_MetaData) }; // 3833440242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The reference point for how the pawn should follow a dynamic base component.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The reference point for how the pawn should follow a dynamic base component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_BasedMovement, Velocity), Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Velocity_MetaData) }; // 4129117451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Relative_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The reference point for how the pawn should follow a dynamic base component.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The reference point for how the pawn should follow a dynamic base component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Relative = { "Relative", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_BasedMovement, Relative), Z_Construct_UScriptStruct_FGMC_BasedMovementRelative, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Relative_MetaData), Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Relative_MetaData) }; // 2801556738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Source_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewProp_Relative,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_BasedMovement",
		Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::PropPointers),
		sizeof(FGMC_BasedMovement),
		alignof(FGMC_BasedMovement),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_BasedMovement()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_BasedMovement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_BasedMovement.InnerSingleton, Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_BasedMovement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_RelBasedMovementAux;
class UScriptStruct* FGMC_RelBasedMovementAux::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_RelBasedMovementAux.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_RelBasedMovementAux.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_RelBasedMovementAux"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_RelBasedMovementAux.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_RelBasedMovementAux>()
{
	return FGMC_RelBasedMovementAux::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SV_TransitionBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SV_TransitionBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SV_TransitionTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SV_TransitionTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedBaseEqualizationTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedBaseEqualizationTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedEqualizationBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SavedEqualizationBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDidEqualizeBase_MetaData[];
#endif
		static void NewProp_bDidEqualizeBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDidEqualizeBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedChangeBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SavedChangeBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CL_OriginalReplayMoveBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CL_OriginalReplayMoveBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CL_OriginalReplayMoveBaseRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CL_OriginalReplayMoveBaseRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorBaseRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorBaseRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_RelBasedMovementAux>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionBase_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// These variables must never be bound.\n// The properties are not used for simulation (SavedTransforms is used for cumulative simulation).\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "These variables must never be bound.\nThe properties are not used for simulation (SavedTransforms is used for cumulative simulation)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionBase = { "SV_TransitionBase", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RelBasedMovementAux, SV_TransitionBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionBase_MetaData), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionTimer_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionTimer = { "SV_TransitionTimer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RelBasedMovementAux, SV_TransitionTimer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionTimer_MetaData), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionTimer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedBaseEqualizationTransform_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedBaseEqualizationTransform = { "SavedBaseEqualizationTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RelBasedMovementAux, SavedBaseEqualizationTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedBaseEqualizationTransform_MetaData), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedBaseEqualizationTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedEqualizationBase_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedEqualizationBase = { "SavedEqualizationBase", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RelBasedMovementAux, SavedEqualizationBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedEqualizationBase_MetaData), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedEqualizationBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_bDidEqualizeBase_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_bDidEqualizeBase_SetBit(void* Obj)
	{
		((FGMC_RelBasedMovementAux*)Obj)->bDidEqualizeBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_bDidEqualizeBase = { "bDidEqualizeBase", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RelBasedMovementAux), &Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_bDidEqualizeBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_bDidEqualizeBase_MetaData), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_bDidEqualizeBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedChangeBase_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedChangeBase = { "SavedChangeBase", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RelBasedMovementAux, SavedChangeBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedChangeBase_MetaData), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedChangeBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBase_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBase = { "CL_OriginalReplayMoveBase", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RelBasedMovementAux, CL_OriginalReplayMoveBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBase_MetaData), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBaseRotation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBaseRotation = { "CL_OriginalReplayMoveBaseRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RelBasedMovementAux, CL_OriginalReplayMoveBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBaseRotation_MetaData), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBaseRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_ActorBaseRotation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_ActorBaseRotation = { "ActorBaseRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RelBasedMovementAux, ActorBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_ActorBaseRotation_MetaData), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_ActorBaseRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SV_TransitionTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedBaseEqualizationTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedEqualizationBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_bDidEqualizeBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_SavedChangeBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_CL_OriginalReplayMoveBaseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewProp_ActorBaseRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_RelBasedMovementAux",
		Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::PropPointers),
		sizeof(FGMC_RelBasedMovementAux),
		alignof(FGMC_RelBasedMovementAux),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_RelBasedMovementAux.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_RelBasedMovementAux.InnerSingleton, Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_RelBasedMovementAux.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_MontagePrediction;
class UScriptStruct* FGMC_MontagePrediction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_MontagePrediction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_MontagePrediction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_MontagePrediction, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_MontagePrediction"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_MontagePrediction.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_MontagePrediction>()
{
	return FGMC_MontagePrediction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontageReferencePredictionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageReferencePredictionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontageReferencePredictionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePositionPredictionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePositionPredictionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontagePositionPredictionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePlayRatePredictionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePlayRatePredictionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontagePlayRatePredictionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePausedPredictionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePausedPredictionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontagePausedPredictionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontageReferenceCombineMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageReferenceCombineMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontageReferenceCombineMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePositionCombineMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePositionCombineMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontagePositionCombineMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePlayRateCombineMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePlayRateCombineMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontagePlayRateCombineMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePausedCombineMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePausedCombineMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontagePausedCombineMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectionBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CorrectionBlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_MontagePrediction>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferencePredictionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferencePredictionMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The prediction mode to use for the montage reference. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The prediction mode to use for the montage reference. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferencePredictionMode = { "MontageReferencePredictionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontagePrediction, MontageReferencePredictionMode), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferencePredictionMode_MetaData), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferencePredictionMode_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionPredictionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionPredictionMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The prediction mode to use for the montage position. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The prediction mode to use for the montage position. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionPredictionMode = { "MontagePositionPredictionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontagePrediction, MontagePositionPredictionMode), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionPredictionMode_MetaData), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionPredictionMode_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRatePredictionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRatePredictionMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The prediction mode to use for the montage play rate. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The prediction mode to use for the montage play rate. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRatePredictionMode = { "MontagePlayRatePredictionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontagePrediction, MontagePlayRatePredictionMode), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRatePredictionMode_MetaData), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRatePredictionMode_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedPredictionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedPredictionMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The prediction mode to use for the montage \"paused\" flag. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The prediction mode to use for the montage \"paused\" flag. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedPredictionMode = { "MontagePausedPredictionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontagePrediction, MontagePausedPredictionMode), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedPredictionMode_MetaData), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedPredictionMode_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferenceCombineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferenceCombineMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The combine mode to use for the montage reference. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The combine mode to use for the montage reference. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferenceCombineMode = { "MontageReferenceCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontagePrediction, MontageReferenceCombineMode), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferenceCombineMode_MetaData), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferenceCombineMode_MetaData) }; // 904251608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionCombineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionCombineMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The combine mode to use for the montage position. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The combine mode to use for the montage position. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionCombineMode = { "MontagePositionCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontagePrediction, MontagePositionCombineMode), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionCombineMode_MetaData), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionCombineMode_MetaData) }; // 904251608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRateCombineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRateCombineMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The combine mode to use for the montage play rate. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The combine mode to use for the montage play rate. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRateCombineMode = { "MontagePlayRateCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontagePrediction, MontagePlayRateCombineMode), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRateCombineMode_MetaData), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRateCombineMode_MetaData) }; // 904251608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedCombineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedCombineMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The combine mode to use for the montage \"paused\" flag. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The combine mode to use for the montage \"paused\" flag. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedCombineMode = { "MontagePausedCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontagePrediction, MontagePausedCombineMode), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedCombineMode_MetaData), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedCombineMode_MetaData) }; // 904251608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_CorrectionBlendTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// The time over which to blend the animation after a replay when montage data was corrected.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The time over which to blend the animation after a replay when montage data was corrected." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_CorrectionBlendTime = { "CorrectionBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontagePrediction, CorrectionBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_CorrectionBlendTime_MetaData), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_CorrectionBlendTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferencePredictionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferencePredictionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionPredictionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionPredictionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRatePredictionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRatePredictionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedPredictionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedPredictionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferenceCombineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontageReferenceCombineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionCombineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePositionCombineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRateCombineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePlayRateCombineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedCombineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_MontagePausedCombineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewProp_CorrectionBlendTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_MontagePrediction",
		Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::PropPointers),
		sizeof(FGMC_MontagePrediction),
		alignof(FGMC_MontagePrediction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontagePrediction()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_MontagePrediction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_MontagePrediction.InnerSingleton, Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_MontagePrediction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_MontageSimulation;
class UScriptStruct* FGMC_MontageSimulation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_MontageSimulation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_MontageSimulation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_MontageSimulation, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_MontageSimulation"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_MontageSimulation.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_MontageSimulation>()
{
	return FGMC_MontageSimulation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMontageReference_MetaData[];
#endif
		static void NewProp_bReplicateMontageReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMontageReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMontagePosition_MetaData[];
#endif
		static void NewProp_bReplicateMontagePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMontagePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMontagePlayRate_MetaData[];
#endif
		static void NewProp_bReplicateMontagePlayRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMontagePlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMontagePaused_MetaData[];
#endif
		static void NewProp_bReplicateMontagePaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMontagePaused;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontageReferenceInterpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageReferenceInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontageReferenceInterpolation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePositionInterpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePositionInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontagePositionInterpolation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePlayRateInterpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePlayRateInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontagePlayRateInterpolation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePausedInterpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePausedInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MontagePausedInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSimulateMontages_MetaData[];
#endif
		static void NewProp_bAutoSimulateMontages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSimulateMontages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_MontageSimulation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontageReference_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether the reference to the active montage should be replicated. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether the reference to the active montage should be replicated. Cannot be changed at runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontageReference_SetBit(void* Obj)
	{
		((FGMC_MontageSimulation*)Obj)->bReplicateMontageReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontageReference = { "bReplicateMontageReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MontageSimulation), &Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontageReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontageReference_MetaData), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontageReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePosition_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether the position of the active montage should be replicated. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether the position of the active montage should be replicated. Cannot be changed at runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePosition_SetBit(void* Obj)
	{
		((FGMC_MontageSimulation*)Obj)->bReplicateMontagePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePosition = { "bReplicateMontagePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MontageSimulation), &Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePosition_MetaData), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePlayRate_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether the play rate of the active montage should be replicated. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether the play rate of the active montage should be replicated. Cannot be changed at runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePlayRate_SetBit(void* Obj)
	{
		((FGMC_MontageSimulation*)Obj)->bReplicateMontagePlayRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePlayRate = { "bReplicateMontagePlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MontageSimulation), &Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePlayRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePlayRate_MetaData), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePaused_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether the \"paused\" flag of the active montage should be replicated. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether the \"paused\" flag of the active montage should be replicated. Cannot be changed at runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePaused_SetBit(void* Obj)
	{
		((FGMC_MontageSimulation*)Obj)->bReplicateMontagePaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePaused = { "bReplicateMontagePaused", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MontageSimulation), &Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePaused_MetaData), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePaused_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontageReferenceInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontageReferenceInterpolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The interpolation method to use when replicating the montage reference. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The interpolation method to use when replicating the montage reference. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontageReferenceInterpolation = { "MontageReferenceInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageSimulation, MontageReferenceInterpolation), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontageReferenceInterpolation_MetaData), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontageReferenceInterpolation_MetaData) }; // 1765561128
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePositionInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePositionInterpolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The interpolation method to use when replicating the montage position. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The interpolation method to use when replicating the montage position. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePositionInterpolation = { "MontagePositionInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageSimulation, MontagePositionInterpolation), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePositionInterpolation_MetaData), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePositionInterpolation_MetaData) }; // 1765561128
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePlayRateInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePlayRateInterpolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The interpolation method to use when replicating the montage play rate. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The interpolation method to use when replicating the montage play rate. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePlayRateInterpolation = { "MontagePlayRateInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageSimulation, MontagePlayRateInterpolation), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePlayRateInterpolation_MetaData), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePlayRateInterpolation_MetaData) }; // 1765561128
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePausedInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePausedInterpolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The interpolation method to use when replicating the montage \"paused\" flag. Cannot be changed at runtime.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The interpolation method to use when replicating the montage \"paused\" flag. Cannot be changed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePausedInterpolation = { "MontagePausedInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageSimulation, MontagePausedInterpolation), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePausedInterpolation_MetaData), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePausedInterpolation_MetaData) }; // 1765561128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bAutoSimulateMontages_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, replicated montages will automatically be played for simulated pawns.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, replicated montages will automatically be played for simulated pawns." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bAutoSimulateMontages_SetBit(void* Obj)
	{
		((FGMC_MontageSimulation*)Obj)->bAutoSimulateMontages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bAutoSimulateMontages = { "bAutoSimulateMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MontageSimulation), &Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bAutoSimulateMontages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bAutoSimulateMontages_MetaData), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bAutoSimulateMontages_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontageReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bReplicateMontagePaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontageReferenceInterpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontageReferenceInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePositionInterpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePositionInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePlayRateInterpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePlayRateInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePausedInterpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_MontagePausedInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewProp_bAutoSimulateMontages,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_MontageSimulation",
		Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::PropPointers),
		sizeof(FGMC_MontageSimulation),
		alignof(FGMC_MontageSimulation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontageSimulation()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_MontageSimulation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_MontageSimulation.InnerSingleton, Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_MontageSimulation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_MontageReplication;
class UScriptStruct* FGMC_MontageReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_MontageReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_MontageReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_MontageReplication, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_MontageReplication"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_MontageReplication.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_MontageReplication>()
{
	return FGMC_MontageReplication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePrediction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontagePrediction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageSimulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageSimulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_MontageReplication>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontagePrediction_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// The settings for predicting montages.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The settings for predicting montages." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontagePrediction = { "MontagePrediction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageReplication, MontagePrediction), Z_Construct_UScriptStruct_FGMC_MontagePrediction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontagePrediction_MetaData), Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontagePrediction_MetaData) }; // 1993316795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontageSimulation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// The settings for simulating montages.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The settings for simulating montages." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontageSimulation = { "MontageSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageReplication, MontageSimulation), Z_Construct_UScriptStruct_FGMC_MontageSimulation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontageSimulation_MetaData), Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontageSimulation_MetaData) }; // 2293878105
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontagePrediction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewProp_MontageSimulation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_MontageReplication",
		Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::PropPointers),
		sizeof(FGMC_MontageReplication),
		alignof(FGMC_MontageReplication),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontageReplication()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_MontageReplication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_MontageReplication.InnerSingleton, Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_MontageReplication.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_RootMotionExtractionSettings;
class UScriptStruct* FGMC_RootMotionExtractionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_RootMotionExtractionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_RootMotionExtractionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_RootMotionExtractionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_RootMotionExtractionSettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_RootMotionExtractionSettings>()
{
	return FGMC_RootMotionExtractionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableRootMotionDuringBlendIn_MetaData[];
#endif
		static void NewProp_bDisableRootMotionDuringBlendIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableRootMotionDuringBlendIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableRootMotionDuringBlendOut_MetaData[];
#endif
		static void NewProp_bDisableRootMotionDuringBlendOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableRootMotionDuringBlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRootMotionXY_MetaData[];
#endif
		static void NewProp_bIgnoreRootMotionXY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRootMotionXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRootMotionZ_MetaData[];
#endif
		static void NewProp_bIgnoreRootMotionZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRootMotionZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_RootMotionExtractionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendIn_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, root motion will not be applied while the montage is blending in.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, root motion will not be applied while the montage is blending in." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendIn_SetBit(void* Obj)
	{
		((FGMC_RootMotionExtractionSettings*)Obj)->bDisableRootMotionDuringBlendIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendIn = { "bDisableRootMotionDuringBlendIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RootMotionExtractionSettings), &Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendIn_MetaData), Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendIn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendOut_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, root motion will not be applied while the montage is blending out.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, root motion will not be applied while the montage is blending out." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendOut_SetBit(void* Obj)
	{
		((FGMC_RootMotionExtractionSettings*)Obj)->bDisableRootMotionDuringBlendOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendOut = { "bDisableRootMotionDuringBlendOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RootMotionExtractionSettings), &Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendOut_MetaData), Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendOut_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionXY_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, any extracted root motion in the world XY plane will be ignored.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, any extracted root motion in the world XY plane will be ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionXY_SetBit(void* Obj)
	{
		((FGMC_RootMotionExtractionSettings*)Obj)->bIgnoreRootMotionXY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionXY = { "bIgnoreRootMotionXY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RootMotionExtractionSettings), &Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionXY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionXY_MetaData), Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionXY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionZ_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, any extracted root motion along the world Z axis will be ignored.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, any extracted root motion along the world Z axis will be ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionZ_SetBit(void* Obj)
	{
		((FGMC_RootMotionExtractionSettings*)Obj)->bIgnoreRootMotionZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionZ = { "bIgnoreRootMotionZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RootMotionExtractionSettings), &Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionZ_MetaData), Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionZ_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bDisableRootMotionDuringBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewProp_bIgnoreRootMotionZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_RootMotionExtractionSettings",
		Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::PropPointers),
		sizeof(FGMC_RootMotionExtractionSettings),
		alignof(FGMC_RootMotionExtractionSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_RootMotionExtractionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_RootMotionExtractionSettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_RootMotionExtractionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_RootMotionVelocitySettings;
class UScriptStruct* FGMC_RootMotionVelocitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_RootMotionVelocitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_RootMotionVelocitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_RootMotionVelocitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_RootMotionVelocitySettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_RootMotionVelocitySettings>()
{
	return FGMC_RootMotionVelocitySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyInputWithRootMotion_MetaData[];
#endif
		static void NewProp_bApplyInputWithRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyInputWithRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRotationWithRootMotion_MetaData[];
#endif
		static void NewProp_bApplyRotationWithRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRotationWithRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyExternalForcesWithRootMotion_MetaData[];
#endif
		static void NewProp_bApplyExternalForcesWithRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyExternalForcesWithRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDecelerationWithRootMotion_MetaData[];
#endif
		static void NewProp_bApplyDecelerationWithRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDecelerationWithRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitSpeedWithRootMotion_MetaData[];
#endif
		static void NewProp_bLimitSpeedWithRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitSpeedWithRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_RootMotionVelocitySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyInputWithRootMotion_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, input acceleration will be applied with root motion.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, input acceleration will be applied with root motion." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyInputWithRootMotion_SetBit(void* Obj)
	{
		((FGMC_RootMotionVelocitySettings*)Obj)->bApplyInputWithRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyInputWithRootMotion = { "bApplyInputWithRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RootMotionVelocitySettings), &Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyInputWithRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyInputWithRootMotion_MetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyInputWithRootMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyRotationWithRootMotion_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, additional rotations will be applied with root motion.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, additional rotations will be applied with root motion." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyRotationWithRootMotion_SetBit(void* Obj)
	{
		((FGMC_RootMotionVelocitySettings*)Obj)->bApplyRotationWithRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyRotationWithRootMotion = { "bApplyRotationWithRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RootMotionVelocitySettings), &Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyRotationWithRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyRotationWithRootMotion_MetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyRotationWithRootMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyExternalForcesWithRootMotion_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, external forces will be applied with root motion.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, external forces will be applied with root motion." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyExternalForcesWithRootMotion_SetBit(void* Obj)
	{
		((FGMC_RootMotionVelocitySettings*)Obj)->bApplyExternalForcesWithRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyExternalForcesWithRootMotion = { "bApplyExternalForcesWithRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RootMotionVelocitySettings), &Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyExternalForcesWithRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyExternalForcesWithRootMotion_MetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyExternalForcesWithRootMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyDecelerationWithRootMotion_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, deceleration will be applied with root motion.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, deceleration will be applied with root motion." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyDecelerationWithRootMotion_SetBit(void* Obj)
	{
		((FGMC_RootMotionVelocitySettings*)Obj)->bApplyDecelerationWithRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyDecelerationWithRootMotion = { "bApplyDecelerationWithRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RootMotionVelocitySettings), &Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyDecelerationWithRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyDecelerationWithRootMotion_MetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyDecelerationWithRootMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bLimitSpeedWithRootMotion_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// If true, the speed of the pawn will be limited with root motion.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the speed of the pawn will be limited with root motion." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bLimitSpeedWithRootMotion_SetBit(void* Obj)
	{
		((FGMC_RootMotionVelocitySettings*)Obj)->bLimitSpeedWithRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bLimitSpeedWithRootMotion = { "bLimitSpeedWithRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_RootMotionVelocitySettings), &Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bLimitSpeedWithRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bLimitSpeedWithRootMotion_MetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bLimitSpeedWithRootMotion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyInputWithRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyRotationWithRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyExternalForcesWithRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bApplyDecelerationWithRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewProp_bLimitSpeedWithRootMotion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_RootMotionVelocitySettings",
		Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::PropPointers),
		sizeof(FGMC_RootMotionVelocitySettings),
		alignof(FGMC_RootMotionVelocitySettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_RootMotionVelocitySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_RootMotionVelocitySettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_RootMotionVelocitySettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_SimulationSettings;
class UScriptStruct* FGMC_SimulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_SimulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_SimulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_SimulationSettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_SimulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_SimulationSettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_SimulationSettings>()
{
	return FGMC_SimulationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelSelfOnBlendIn_MetaData[];
#endif
		static void NewProp_bCancelSelfOnBlendIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelSelfOnBlendIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelSelfOnBlendOut_MetaData[];
#endif
		static void NewProp_bCancelSelfOnBlendOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelSelfOnBlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelMinPositionDiff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CancelMinPositionDiff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRemainingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRemainingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompletionTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompletionTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopBlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_SimulationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendIn_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether the new montage should cancel the same active one if it is currently blending in.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether the new montage should cancel the same active one if it is currently blending in." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendIn_SetBit(void* Obj)
	{
		((FGMC_SimulationSettings*)Obj)->bCancelSelfOnBlendIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendIn = { "bCancelSelfOnBlendIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_SimulationSettings), &Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendIn_MetaData), Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendIn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendOut_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether the new montage should cancel the same active one if it is currently blending out.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether the new montage should cancel the same active one if it is currently blending out." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendOut_SetBit(void* Obj)
	{
		((FGMC_SimulationSettings*)Obj)->bCancelSelfOnBlendOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendOut = { "bCancelSelfOnBlendOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_SimulationSettings), &Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendOut_MetaData), Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendOut_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CancelMinPositionDiff_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "-1" },
		{ "Comment", "// The min required difference between the start and active position to cancel the montage. Set to -1 to disable canceling based on position difference.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The min required difference between the start and active position to cancel the montage. Set to -1 to disable canceling based on position difference." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CancelMinPositionDiff = { "CancelMinPositionDiff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SimulationSettings, CancelMinPositionDiff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CancelMinPositionDiff_MetaData), Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CancelMinPositionDiff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_MinRemainingRatio_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// How much of the montage (in percent) still has to be left based on the start position for it to be played.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How much of the montage (in percent) still has to be left based on the start position for it to be played." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_MinRemainingRatio = { "MinRemainingRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SimulationSettings, MinRemainingRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_MinRemainingRatio_MetaData), Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_MinRemainingRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTimeout_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// Prevents the montage from erroneously playing again by blocking it for the specified duration after it has finished. Does not apply if canceled during\n// blend in/out.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Prevents the montage from erroneously playing again by blocking it for the specified duration after it has finished. Does not apply if canceled during\nblend in/out." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTimeout = { "CompletionTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SimulationSettings, CompletionTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTimeout_MetaData), Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTimeout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTolerance_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// How long the montage will continue playing when no new valid montage reference is being received.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How long the montage will continue playing when no new valid montage reference is being received." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTolerance = { "CompletionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SimulationSettings, CompletionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTolerance_MetaData), Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_StopBlendTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "-1" },
		{ "Comment", "// The time over which to blend out the montage when it is canceled due to exceeding the completion tolerance time. A value of -1 means that the default blend\n// out time of the montage should be used.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The time over which to blend out the montage when it is canceled due to exceeding the completion tolerance time. A value of -1 means that the default blend\nout time of the montage should be used." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_StopBlendTime = { "StopBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SimulationSettings, StopBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_StopBlendTime_MetaData), Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_StopBlendTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_bCancelSelfOnBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CancelMinPositionDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_MinRemainingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_CompletionTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewProp_StopBlendTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_SimulationSettings",
		Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::PropPointers),
		sizeof(FGMC_SimulationSettings),
		alignof(FGMC_SimulationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_SimulationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_SimulationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_SimulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_SimulationSettings.InnerSingleton;
	}
	void UGMC_MontageMetaData::StaticRegisterNativesUGMC_MontageMetaData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_MontageMetaData);
	UClass* Z_Construct_UClass_UGMC_MontageMetaData_NoRegister()
	{
		return UGMC_MontageMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UGMC_MontageMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionExtraction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionExtraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Simulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMC_MontageMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimMetaData,
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_MontageMetaData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_MontageMetaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Movement" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Components/GMCOrganicMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionExtraction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The root motion extraction settings to use.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The root motion extraction settings to use." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionExtraction = { "RootMotionExtraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_MontageMetaData, RootMotionExtraction), Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionExtraction_MetaData), Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionExtraction_MetaData) }; // 1591314101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The root motion velocity settings to use.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The root motion velocity settings to use." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionVelocity = { "RootMotionVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_MontageMetaData, RootMotionVelocity), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionVelocity_MetaData), Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionVelocity_MetaData) }; // 1280216714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_Simulation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The simulation settings to use when auto simulating replicated montages.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The simulation settings to use when auto simulating replicated montages." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_Simulation = { "Simulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_MontageMetaData, Simulation), Z_Construct_UScriptStruct_FGMC_SimulationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_Simulation_MetaData), Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_Simulation_MetaData) }; // 3886988572
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMC_MontageMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionExtraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_RootMotionVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_MontageMetaData_Statics::NewProp_Simulation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMC_MontageMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_MontageMetaData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_MontageMetaData_Statics::ClassParams = {
		&UGMC_MontageMetaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGMC_MontageMetaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_MontageMetaData_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_MontageMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_MontageMetaData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_MontageMetaData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGMC_MontageMetaData()
	{
		if (!Z_Registration_Info_UClass_UGMC_MontageMetaData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_MontageMetaData.OuterSingleton, Z_Construct_UClass_UGMC_MontageMetaData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGMC_MontageMetaData.OuterSingleton;
	}
	template<> GMCCORE_API UClass* StaticClass<UGMC_MontageMetaData>()
	{
		return UGMC_MontageMetaData::StaticClass();
	}
	UGMC_MontageMetaData::UGMC_MontageMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_MontageMetaData);
	UGMC_MontageMetaData::~UGMC_MontageMetaData() {}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execSetGroupsToIgnoreMask)
	{
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupsToIgnoreMask(Z_Param_Out_GroupMask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execSetGroupsToAvoidMask)
	{
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupsToAvoidMask(Z_Param_Out_GroupMask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execSetAvoidanceGroupMask)
	{
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAvoidanceGroupMask(Z_Param_Out_GroupMask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execCalculatePathFollowingBrakingDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculatePathFollowingBrakingDistance_Implementation(Z_Param_MaxSpeed,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execNavAgentPropsAdjustment)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NavOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->NavAgentPropsAdjustment_Implementation(Z_Param_Out_NavOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execOnActorBaseChangedSimulated)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PreviousBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorBaseChangedSimulated_Implementation(Z_Param_NewBase,Z_Param_PreviousBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execOnMovementModeChangedSimulated)
	{
		P_GET_ENUM(EGMC_MovementMode,Z_Param_PreviousMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementModeChangedSimulated_Implementation(EGMC_MovementMode(Z_Param_PreviousMovementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execOnLandedSimulated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLandedSimulated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetPreviousControlRotationSimulated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetPreviousControlRotationSimulated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetPreviousMovementModeSimulated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGMC_MovementMode*)Z_Param__Result=P_THIS->GetPreviousMovementModeSimulated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execMovementUpdateSimulated)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementUpdateSimulated_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPostProcessAnimRootMotionVelocity)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RootMotionVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->PostProcessAnimRootMotionVelocity_Implementation(Z_Param_Out_RootMotionVelocity,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPrePlayMontageSimulated)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartPosition);
		P_GET_UBOOL(Z_Param_bPaused);
		P_GET_UBOOL(Z_Param_bCancelSelfOnBlendIn);
		P_GET_UBOOL(Z_Param_bCancelSelfOnBlendOut);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CancelMinPositionDiff);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinRemainingRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CompletionTimeout);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CompletionTolerance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StopBlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PrePlayMontageSimulated(Z_Param_Mesh,Z_Param_MontageToPlay,Z_Param_DeltaSeconds,Z_Param_StartPosition,Z_Param_bPaused,Z_Param_bCancelSelfOnBlendIn,Z_Param_bCancelSelfOnBlendOut,Z_Param_CancelMinPositionDiff,Z_Param_MinRemainingRatio,Z_Param_CompletionTimeout,Z_Param_CompletionTolerance,Z_Param_StopBlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPlayMontageSimulated)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
		P_GET_UBOOL(Z_Param_bPaused);
		P_GET_UBOOL(Z_Param_bCancelSelfOnBlendIn);
		P_GET_UBOOL(Z_Param_bCancelSelfOnBlendOut);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CancelMinPositionDiff);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinRemainingRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CompletionTimeout);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CompletionTolerance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StopBlendTime);
		P_GET_UBOOL(Z_Param_bStopAllMontages);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMontageSimulated(Z_Param_Mesh,Z_Param_MontageToPlay,Z_Param_DeltaSeconds,Z_Param_StartPosition,Z_Param_PlayRate,Z_Param_StartSection,Z_Param_bPaused,Z_Param_bCancelSelfOnBlendIn,Z_Param_bCancelSelfOnBlendOut,Z_Param_CancelMinPositionDiff,Z_Param_MinRemainingRatio,Z_Param_CompletionTimeout,Z_Param_CompletionTolerance,Z_Param_StopBlendTime,Z_Param_bStopAllMontages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetGMCMontageMetaData)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGMC_MontageMetaData**)Z_Param__Result=P_THIS->GetGMCMontageMetaData(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execHasRootMotion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRootMotion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execSetAnimRootMotionTranslationScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimRootMotionTranslationScale(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetAnimRootMotionTranslationScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimRootMotionTranslationScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execIsExceedingMaxGroundedVelocityZ)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExceedingMaxGroundedVelocityZ();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execIsAirborne)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAirborne();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execIsAffectedByGravity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAffectedByGravity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execDisableMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetGravity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execSetWalkableFloorZ)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewWalkableFloorZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWalkableFloorZ(Z_Param_NewWalkableFloorZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execSetWalkableFloorAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewWalkableFloorAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWalkableFloorAngle(Z_Param_NewWalkableFloorAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execUpdateRelativeBasedMovementTransform)
	{
		P_GET_UBOOL(Z_Param_bSimulated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRelativeBasedMovementTransform(Z_Param_bSimulated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetCurrentImmersionDepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentImmersionDepth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execSetMovementMode)
	{
		P_GET_ENUM(EGMC_MovementMode,Z_Param_NewMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementMode(EGMC_MovementMode(Z_Param_NewMovementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execHitWalkableFloor)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HitWalkableFloor(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetGroundFriction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGroundFriction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetOverMaxSpeedDeceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOverMaxSpeedDeceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetBrakingDeceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrakingDeceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetInputAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputAcceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetMovementMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGMC_MovementMode*)Z_Param__Result=P_THIS->GetMovementMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetProcessedInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetProcessedInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetRawInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRawInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execRootCollisionTouched)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RootCollisionTouched(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetOverMaxSpeedDecelerationCustom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOverMaxSpeedDecelerationCustom_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetBrakingDecelerationCustom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrakingDecelerationCustom_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetInputAccelerationCustom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputAccelerationCustom_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execOnMovementModeChanged)
	{
		P_GET_ENUM(EGMC_MovementMode,Z_Param_PreviousMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementModeChanged_Implementation(EGMC_MovementMode(Z_Param_PreviousMovementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execOnLanded)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLanded_Implementation(Z_Param_Out_ImpactVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execAdjustVelocityFromHitAirborne)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVelocityFromHitAirborne_Implementation(Z_Param_Out_Hit,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execMaintainDistanceToFloor)
	{
		P_GET_STRUCT_REF(FGMC_FloorParams,Z_Param_Out_Floor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MaintainDistanceToFloor(Z_Param_Out_Floor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execOnMovementModeUpdated)
	{
		P_GET_ENUM(EGMC_MovementMode,Z_Param_PreviousMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementModeUpdated_Implementation(EGMC_MovementMode(Z_Param_PreviousMovementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execUpdateMovementModeStatic)
	{
		P_GET_STRUCT_REF(FGMC_FloorParams,Z_Param_Out_Floor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateMovementModeStatic_Implementation(Z_Param_Out_Floor,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execUpdateMovementModeDynamic)
	{
		P_GET_STRUCT_REF(FGMC_FloorParams,Z_Param_Out_Floor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateMovementModeDynamic_Implementation(Z_Param_Out_Floor,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execReEqualizeBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReEqualizeBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execUnEqualizeBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnEqualizeBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execShouldMoveGMCPawnForBaseEqualization)
	{
		P_GET_OBJECT(AGMC_Pawn,Z_Param_PawnToTest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldMoveGMCPawnForBaseEqualization_Implementation(Z_Param_PawnToTest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execMoveWithBaseRelative)
	{
		P_GET_UBOOL(Z_Param_bSimulated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveWithBaseRelative_Implementation(Z_Param_bSimulated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPostProcessPawnVelocity)
	{
		P_GET_STRUCT_REF(FGMC_RootMotionVelocitySettings,Z_Param_Out_RootMotionMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostProcessPawnVelocity_Implementation(Z_Param_Out_RootMotionMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPostProcessVelocityToImpart)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CurrentBase);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VelocityToImpart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->PostProcessVelocityToImpart_Implementation(Z_Param_CurrentBase,Z_Param_Out_VelocityToImpart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execMoveWithBaseVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveWithBaseVelocity_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execOnActorBaseChanged)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PreviousBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorBaseChanged_Implementation(Z_Param_NewBase,Z_Param_PreviousBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execTraceForActorBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->TraceForActorBase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execFindActorBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->FindActorBase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execSetBasedMovementSource)
	{
		P_GET_ENUM(EGMC_BasedMovementSource,Z_Param_NewSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBasedMovementSource(EGMC_BasedMovementSource(Z_Param_NewSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetOutermostAttachParent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetOutermostAttachParent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execComputeInputAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ComputeInputAcceleration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execUpdateImmersionDepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateImmersionDepth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execCalculateVelocityCustom)
	{
		P_GET_STRUCT_REF(FGMC_RootMotionVelocitySettings,Z_Param_Out_RootMotionMetaData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateVelocityCustom_Implementation(Z_Param_Out_RootMotionMetaData,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execLimitSpeed)
	{
		P_GET_STRUCT_REF(FGMC_RootMotionVelocitySettings,Z_Param_Out_RootMotionMetaData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LimitSpeed(Z_Param_Out_RootMotionMetaData,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execApplyDeceleration)
	{
		P_GET_STRUCT_REF(FGMC_RootMotionVelocitySettings,Z_Param_Out_RootMotionMetaData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDeceleration(Z_Param_Out_RootMotionMetaData,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execApplyExternalForces)
	{
		P_GET_STRUCT_REF(FGMC_RootMotionVelocitySettings,Z_Param_Out_RootMotionMetaData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyExternalForces(Z_Param_Out_RootMotionMetaData,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execApplyRotation)
	{
		P_GET_UBOOL(Z_Param_bIsDirectBotMove);
		P_GET_STRUCT_REF(FGMC_RootMotionVelocitySettings,Z_Param_Out_RootMotionMetaData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyRotation(Z_Param_bIsDirectBotMove,Z_Param_Out_RootMotionMetaData,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execApplyInputVelocity)
	{
		P_GET_STRUCT_REF(FGMC_RootMotionVelocitySettings,Z_Param_Out_RootMotionMetaData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyInputVelocity(Z_Param_Out_RootMotionMetaData,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execBotDirectMove)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathVelocity);
		P_GET_STRUCT_REF(FGMC_RootMotionVelocitySettings,Z_Param_Out_RootMotionMetaData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotDirectMove_Implementation(Z_Param_Out_PathVelocity,Z_Param_Out_RootMotionMetaData,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execShouldPerformDirectMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldPerformDirectMove_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execCalculateVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateVelocity(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPhysicsCustom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsCustom_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPhysicsBuoyant)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsBuoyant(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPhysicsAirborne)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsAirborne(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPhysicsGrounded)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsGrounded(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execMovementUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementUpdate_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPostPhysicsUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostPhysicsUpdate_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPrePhysicsUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrePhysicsUpdate_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPostMovementUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostMovementUpdate_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPreMovementUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreMovementUpdate_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPhysicsSimulationUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsSimulationUpdate_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execPreProcessInputVector)
	{
		P_GET_STRUCT(FVector,Z_Param_InRawInputVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->PreProcessInputVector_Implementation(Z_Param_InRawInputVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetCurrentFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGMC_FloorParams*)Z_Param__Result=P_THIS->GetCurrentFloor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execGetSkeletalMeshReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetSkeletalMeshReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMC_OrganicMovementCmp::execSetSkeletalMeshReference)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMeshReference(Z_Param_Mesh);
		P_NATIVE_END;
	}
	struct GMC_OrganicMovementCmp_eventAdjustVelocityFromHitAirborne_Parms
	{
		FHitResult Hit;
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventBotDirectMove_Parms
	{
		FVector PathVelocity;
		FGMC_RootMotionVelocitySettings RootMotionMetaData;
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventCalculatePathFollowingBrakingDistance_Parms
	{
		float MaxSpeed;
		float DeltaSeconds;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventCalculatePathFollowingBrakingDistance_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventCalculateVelocityCustom_Parms
	{
		FGMC_RootMotionVelocitySettings RootMotionMetaData;
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventComputeInputAcceleration_Parms
	{
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventComputeInputAcceleration_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventFindActorBase_Parms
	{
		UPrimitiveComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventFindActorBase_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventGetBrakingDecelerationCustom_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventGetBrakingDecelerationCustom_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventGetInputAccelerationCustom_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventGetInputAccelerationCustom_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventGetOverMaxSpeedDecelerationCustom_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventGetOverMaxSpeedDecelerationCustom_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventMovementUpdate_Parms
	{
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventMovementUpdateSimulated_Parms
	{
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventMoveWithBaseRelative_Parms
	{
		bool bSimulated;
	};
	struct GMC_OrganicMovementCmp_eventMoveWithBaseVelocity_Parms
	{
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventNavAgentPropsAdjustment_Parms
	{
		FVector NavOutput;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventNavAgentPropsAdjustment_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventOnActorBaseChanged_Parms
	{
		UPrimitiveComponent* NewBase;
		UPrimitiveComponent* PreviousBase;
	};
	struct GMC_OrganicMovementCmp_eventOnActorBaseChangedSimulated_Parms
	{
		UPrimitiveComponent* NewBase;
		UPrimitiveComponent* PreviousBase;
	};
	struct GMC_OrganicMovementCmp_eventOnLanded_Parms
	{
		FVector ImpactVelocity;
	};
	struct GMC_OrganicMovementCmp_eventOnMovementModeChanged_Parms
	{
		EGMC_MovementMode PreviousMovementMode;
	};
	struct GMC_OrganicMovementCmp_eventOnMovementModeChangedSimulated_Parms
	{
		EGMC_MovementMode PreviousMovementMode;
	};
	struct GMC_OrganicMovementCmp_eventOnMovementModeUpdated_Parms
	{
		EGMC_MovementMode PreviousMovementMode;
	};
	struct GMC_OrganicMovementCmp_eventPhysicsCustom_Parms
	{
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventPhysicsSimulationUpdate_Parms
	{
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventPostMovementUpdate_Parms
	{
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventPostPhysicsUpdate_Parms
	{
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventPostProcessAnimRootMotionVelocity_Parms
	{
		FVector RootMotionVelocity;
		float DeltaSeconds;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventPostProcessAnimRootMotionVelocity_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventPostProcessPawnVelocity_Parms
	{
		FGMC_RootMotionVelocitySettings RootMotionMetaData;
	};
	struct GMC_OrganicMovementCmp_eventPostProcessVelocityToImpart_Parms
	{
		UPrimitiveComponent* CurrentBase;
		FVector VelocityToImpart;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventPostProcessVelocityToImpart_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventPreMovementUpdate_Parms
	{
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventPrePhysicsUpdate_Parms
	{
		float DeltaSeconds;
	};
	struct GMC_OrganicMovementCmp_eventPreProcessInputVector_Parms
	{
		FVector InRawInputVector;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventPreProcessInputVector_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventShouldMoveGMCPawnForBaseEqualization_Parms
	{
		const AGMC_Pawn* PawnToTest;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventShouldMoveGMCPawnForBaseEqualization_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventShouldPerformDirectMove_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventShouldPerformDirectMove_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventTraceForActorBase_Parms
	{
		FHitResult ReturnValue;
	};
	struct GMC_OrganicMovementCmp_eventUpdateMovementModeDynamic_Parms
	{
		FGMC_FloorParams Floor;
		float DeltaSeconds;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventUpdateMovementModeDynamic_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GMC_OrganicMovementCmp_eventUpdateMovementModeStatic_Parms
	{
		FGMC_FloorParams Floor;
		float DeltaSeconds;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GMC_OrganicMovementCmp_eventUpdateMovementModeStatic_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne = FName(TEXT("AdjustVelocityFromHitAirborne"));
	void UGMC_OrganicMovementCmp::AdjustVelocityFromHitAirborne(FHitResult const& Hit, float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventAdjustVelocityFromHitAirborne_Parms Parms;
		Parms.Hit=Hit;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_BotDirectMove = FName(TEXT("BotDirectMove"));
	void UGMC_OrganicMovementCmp::BotDirectMove(FVector const& PathVelocity, FGMC_RootMotionVelocitySettings const& RootMotionMetaData, float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventBotDirectMove_Parms Parms;
		Parms.PathVelocity=PathVelocity;
		Parms.RootMotionMetaData=RootMotionMetaData;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_BotDirectMove),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance = FName(TEXT("CalculatePathFollowingBrakingDistance"));
	float UGMC_OrganicMovementCmp::CalculatePathFollowingBrakingDistance(float MaxSpeed, float DeltaSeconds) const
	{
		GMC_OrganicMovementCmp_eventCalculatePathFollowingBrakingDistance_Parms Parms;
		Parms.MaxSpeed=MaxSpeed;
		Parms.DeltaSeconds=DeltaSeconds;
		const_cast<UGMC_OrganicMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_CalculateVelocityCustom = FName(TEXT("CalculateVelocityCustom"));
	void UGMC_OrganicMovementCmp::CalculateVelocityCustom(FGMC_RootMotionVelocitySettings const& RootMotionMetaData, float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventCalculateVelocityCustom_Parms Parms;
		Parms.RootMotionMetaData=RootMotionMetaData;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_CalculateVelocityCustom),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_ComputeInputAcceleration = FName(TEXT("ComputeInputAcceleration"));
	FVector UGMC_OrganicMovementCmp::ComputeInputAcceleration() const
	{
		GMC_OrganicMovementCmp_eventComputeInputAcceleration_Parms Parms;
		const_cast<UGMC_OrganicMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_ComputeInputAcceleration),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_FindActorBase = FName(TEXT("FindActorBase"));
	UPrimitiveComponent* UGMC_OrganicMovementCmp::FindActorBase()
	{
		GMC_OrganicMovementCmp_eventFindActorBase_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_FindActorBase),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom = FName(TEXT("GetBrakingDecelerationCustom"));
	float UGMC_OrganicMovementCmp::GetBrakingDecelerationCustom() const
	{
		GMC_OrganicMovementCmp_eventGetBrakingDecelerationCustom_Parms Parms;
		const_cast<UGMC_OrganicMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_GetInputAccelerationCustom = FName(TEXT("GetInputAccelerationCustom"));
	float UGMC_OrganicMovementCmp::GetInputAccelerationCustom() const
	{
		GMC_OrganicMovementCmp_eventGetInputAccelerationCustom_Parms Parms;
		const_cast<UGMC_OrganicMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_GetInputAccelerationCustom),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom = FName(TEXT("GetOverMaxSpeedDecelerationCustom"));
	float UGMC_OrganicMovementCmp::GetOverMaxSpeedDecelerationCustom() const
	{
		GMC_OrganicMovementCmp_eventGetOverMaxSpeedDecelerationCustom_Parms Parms;
		const_cast<UGMC_OrganicMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_MovementUpdate = FName(TEXT("MovementUpdate"));
	void UGMC_OrganicMovementCmp::MovementUpdate(float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventMovementUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_MovementUpdate),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_MovementUpdateSimulated = FName(TEXT("MovementUpdateSimulated"));
	void UGMC_OrganicMovementCmp::MovementUpdateSimulated(float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventMovementUpdateSimulated_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_MovementUpdateSimulated),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_MoveWithBaseRelative = FName(TEXT("MoveWithBaseRelative"));
	void UGMC_OrganicMovementCmp::MoveWithBaseRelative(bool bSimulated)
	{
		GMC_OrganicMovementCmp_eventMoveWithBaseRelative_Parms Parms;
		Parms.bSimulated=bSimulated ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_MoveWithBaseRelative),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_MoveWithBaseVelocity = FName(TEXT("MoveWithBaseVelocity"));
	void UGMC_OrganicMovementCmp::MoveWithBaseVelocity(float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventMoveWithBaseVelocity_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_MoveWithBaseVelocity),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment = FName(TEXT("NavAgentPropsAdjustment"));
	FVector UGMC_OrganicMovementCmp::NavAgentPropsAdjustment(FVector const& NavOutput)
	{
		GMC_OrganicMovementCmp_eventNavAgentPropsAdjustment_Parms Parms;
		Parms.NavOutput=NavOutput;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_OnActorBaseChanged = FName(TEXT("OnActorBaseChanged"));
	void UGMC_OrganicMovementCmp::OnActorBaseChanged(UPrimitiveComponent* NewBase, UPrimitiveComponent* PreviousBase)
	{
		GMC_OrganicMovementCmp_eventOnActorBaseChanged_Parms Parms;
		Parms.NewBase=NewBase;
		Parms.PreviousBase=PreviousBase;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_OnActorBaseChanged),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated = FName(TEXT("OnActorBaseChangedSimulated"));
	void UGMC_OrganicMovementCmp::OnActorBaseChangedSimulated(UPrimitiveComponent* NewBase, UPrimitiveComponent* PreviousBase)
	{
		GMC_OrganicMovementCmp_eventOnActorBaseChangedSimulated_Parms Parms;
		Parms.NewBase=NewBase;
		Parms.PreviousBase=PreviousBase;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_OnLanded = FName(TEXT("OnLanded"));
	void UGMC_OrganicMovementCmp::OnLanded(FVector const& ImpactVelocity)
	{
		GMC_OrganicMovementCmp_eventOnLanded_Parms Parms;
		Parms.ImpactVelocity=ImpactVelocity;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_OnLanded),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_OnLandedSimulated = FName(TEXT("OnLandedSimulated"));
	void UGMC_OrganicMovementCmp::OnLandedSimulated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_OnLandedSimulated),NULL);
	}
	static FName NAME_UGMC_OrganicMovementCmp_OnMovementModeChanged = FName(TEXT("OnMovementModeChanged"));
	void UGMC_OrganicMovementCmp::OnMovementModeChanged(EGMC_MovementMode PreviousMovementMode)
	{
		GMC_OrganicMovementCmp_eventOnMovementModeChanged_Parms Parms;
		Parms.PreviousMovementMode=PreviousMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_OnMovementModeChanged),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated = FName(TEXT("OnMovementModeChangedSimulated"));
	void UGMC_OrganicMovementCmp::OnMovementModeChangedSimulated(EGMC_MovementMode PreviousMovementMode)
	{
		GMC_OrganicMovementCmp_eventOnMovementModeChangedSimulated_Parms Parms;
		Parms.PreviousMovementMode=PreviousMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_OnMovementModeUpdated = FName(TEXT("OnMovementModeUpdated"));
	void UGMC_OrganicMovementCmp::OnMovementModeUpdated(EGMC_MovementMode PreviousMovementMode)
	{
		GMC_OrganicMovementCmp_eventOnMovementModeUpdated_Parms Parms;
		Parms.PreviousMovementMode=PreviousMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_OnMovementModeUpdated),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_PhysicsCustom = FName(TEXT("PhysicsCustom"));
	void UGMC_OrganicMovementCmp::PhysicsCustom(float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventPhysicsCustom_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PhysicsCustom),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate = FName(TEXT("PhysicsSimulationUpdate"));
	void UGMC_OrganicMovementCmp::PhysicsSimulationUpdate(float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventPhysicsSimulationUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_PostMovementUpdate = FName(TEXT("PostMovementUpdate"));
	void UGMC_OrganicMovementCmp::PostMovementUpdate(float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventPostMovementUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PostMovementUpdate),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_PostPhysicsUpdate = FName(TEXT("PostPhysicsUpdate"));
	void UGMC_OrganicMovementCmp::PostPhysicsUpdate(float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventPostPhysicsUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PostPhysicsUpdate),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity = FName(TEXT("PostProcessAnimRootMotionVelocity"));
	FVector UGMC_OrganicMovementCmp::PostProcessAnimRootMotionVelocity(FVector const& RootMotionVelocity, float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventPostProcessAnimRootMotionVelocity_Parms Parms;
		Parms.RootMotionVelocity=RootMotionVelocity;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_PostProcessPawnVelocity = FName(TEXT("PostProcessPawnVelocity"));
	void UGMC_OrganicMovementCmp::PostProcessPawnVelocity(FGMC_RootMotionVelocitySettings const& RootMotionMetaData)
	{
		GMC_OrganicMovementCmp_eventPostProcessPawnVelocity_Parms Parms;
		Parms.RootMotionMetaData=RootMotionMetaData;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PostProcessPawnVelocity),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart = FName(TEXT("PostProcessVelocityToImpart"));
	FVector UGMC_OrganicMovementCmp::PostProcessVelocityToImpart(UPrimitiveComponent* CurrentBase, FVector const& VelocityToImpart)
	{
		GMC_OrganicMovementCmp_eventPostProcessVelocityToImpart_Parms Parms;
		Parms.CurrentBase=CurrentBase;
		Parms.VelocityToImpart=VelocityToImpart;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_PreMovementUpdate = FName(TEXT("PreMovementUpdate"));
	void UGMC_OrganicMovementCmp::PreMovementUpdate(float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventPreMovementUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PreMovementUpdate),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_PrePhysicsUpdate = FName(TEXT("PrePhysicsUpdate"));
	void UGMC_OrganicMovementCmp::PrePhysicsUpdate(float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventPrePhysicsUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PrePhysicsUpdate),&Parms);
	}
	static FName NAME_UGMC_OrganicMovementCmp_PreProcessInputVector = FName(TEXT("PreProcessInputVector"));
	FVector UGMC_OrganicMovementCmp::PreProcessInputVector(FVector InRawInputVector)
	{
		GMC_OrganicMovementCmp_eventPreProcessInputVector_Parms Parms;
		Parms.InRawInputVector=InRawInputVector;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_PreProcessInputVector),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization = FName(TEXT("ShouldMoveGMCPawnForBaseEqualization"));
	bool UGMC_OrganicMovementCmp::ShouldMoveGMCPawnForBaseEqualization(const AGMC_Pawn* PawnToTest) const
	{
		GMC_OrganicMovementCmp_eventShouldMoveGMCPawnForBaseEqualization_Parms Parms;
		Parms.PawnToTest=PawnToTest;
		const_cast<UGMC_OrganicMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_ShouldPerformDirectMove = FName(TEXT("ShouldPerformDirectMove"));
	bool UGMC_OrganicMovementCmp::ShouldPerformDirectMove() const
	{
		GMC_OrganicMovementCmp_eventShouldPerformDirectMove_Parms Parms;
		const_cast<UGMC_OrganicMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_ShouldPerformDirectMove),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_TraceForActorBase = FName(TEXT("TraceForActorBase"));
	FHitResult UGMC_OrganicMovementCmp::TraceForActorBase()
	{
		GMC_OrganicMovementCmp_eventTraceForActorBase_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_TraceForActorBase),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic = FName(TEXT("UpdateMovementModeDynamic"));
	bool UGMC_OrganicMovementCmp::UpdateMovementModeDynamic(FGMC_FloorParams& Floor, float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventUpdateMovementModeDynamic_Parms Parms;
		Parms.Floor=Floor;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic),&Parms);
		Floor=Parms.Floor;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGMC_OrganicMovementCmp_UpdateMovementModeStatic = FName(TEXT("UpdateMovementModeStatic"));
	bool UGMC_OrganicMovementCmp::UpdateMovementModeStatic(FGMC_FloorParams& Floor, float DeltaSeconds)
	{
		GMC_OrganicMovementCmp_eventUpdateMovementModeStatic_Parms Parms;
		Parms.Floor=Floor;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGMC_OrganicMovementCmp_UpdateMovementModeStatic),&Parms);
		Floor=Parms.Floor;
		return !!Parms.ReturnValue;
	}
	void UGMC_OrganicMovementCmp::StaticRegisterNativesUGMC_OrganicMovementCmp()
	{
		UClass* Class = UGMC_OrganicMovementCmp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustVelocityFromHitAirborne", &UGMC_OrganicMovementCmp::execAdjustVelocityFromHitAirborne },
			{ "ApplyDeceleration", &UGMC_OrganicMovementCmp::execApplyDeceleration },
			{ "ApplyExternalForces", &UGMC_OrganicMovementCmp::execApplyExternalForces },
			{ "ApplyInputVelocity", &UGMC_OrganicMovementCmp::execApplyInputVelocity },
			{ "ApplyRotation", &UGMC_OrganicMovementCmp::execApplyRotation },
			{ "BotDirectMove", &UGMC_OrganicMovementCmp::execBotDirectMove },
			{ "CalculatePathFollowingBrakingDistance", &UGMC_OrganicMovementCmp::execCalculatePathFollowingBrakingDistance },
			{ "CalculateVelocity", &UGMC_OrganicMovementCmp::execCalculateVelocity },
			{ "CalculateVelocityCustom", &UGMC_OrganicMovementCmp::execCalculateVelocityCustom },
			{ "ComputeInputAcceleration", &UGMC_OrganicMovementCmp::execComputeInputAcceleration },
			{ "DisableMovement", &UGMC_OrganicMovementCmp::execDisableMovement },
			{ "FindActorBase", &UGMC_OrganicMovementCmp::execFindActorBase },
			{ "GetAnimRootMotionTranslationScale", &UGMC_OrganicMovementCmp::execGetAnimRootMotionTranslationScale },
			{ "GetBrakingDeceleration", &UGMC_OrganicMovementCmp::execGetBrakingDeceleration },
			{ "GetBrakingDecelerationCustom", &UGMC_OrganicMovementCmp::execGetBrakingDecelerationCustom },
			{ "GetCurrentFloor", &UGMC_OrganicMovementCmp::execGetCurrentFloor },
			{ "GetCurrentImmersionDepth", &UGMC_OrganicMovementCmp::execGetCurrentImmersionDepth },
			{ "GetGMCMontageMetaData", &UGMC_OrganicMovementCmp::execGetGMCMontageMetaData },
			{ "GetGravity", &UGMC_OrganicMovementCmp::execGetGravity },
			{ "GetGroundFriction", &UGMC_OrganicMovementCmp::execGetGroundFriction },
			{ "GetInputAcceleration", &UGMC_OrganicMovementCmp::execGetInputAcceleration },
			{ "GetInputAccelerationCustom", &UGMC_OrganicMovementCmp::execGetInputAccelerationCustom },
			{ "GetMovementMode", &UGMC_OrganicMovementCmp::execGetMovementMode },
			{ "GetOutermostAttachParent", &UGMC_OrganicMovementCmp::execGetOutermostAttachParent },
			{ "GetOverMaxSpeedDeceleration", &UGMC_OrganicMovementCmp::execGetOverMaxSpeedDeceleration },
			{ "GetOverMaxSpeedDecelerationCustom", &UGMC_OrganicMovementCmp::execGetOverMaxSpeedDecelerationCustom },
			{ "GetPreviousControlRotationSimulated", &UGMC_OrganicMovementCmp::execGetPreviousControlRotationSimulated },
			{ "GetPreviousMovementModeSimulated", &UGMC_OrganicMovementCmp::execGetPreviousMovementModeSimulated },
			{ "GetProcessedInputVector", &UGMC_OrganicMovementCmp::execGetProcessedInputVector },
			{ "GetRawInputVector", &UGMC_OrganicMovementCmp::execGetRawInputVector },
			{ "GetSkeletalMeshReference", &UGMC_OrganicMovementCmp::execGetSkeletalMeshReference },
			{ "HasRootMotion", &UGMC_OrganicMovementCmp::execHasRootMotion },
			{ "HitWalkableFloor", &UGMC_OrganicMovementCmp::execHitWalkableFloor },
			{ "IsAffectedByGravity", &UGMC_OrganicMovementCmp::execIsAffectedByGravity },
			{ "IsAirborne", &UGMC_OrganicMovementCmp::execIsAirborne },
			{ "IsExceedingMaxGroundedVelocityZ", &UGMC_OrganicMovementCmp::execIsExceedingMaxGroundedVelocityZ },
			{ "LimitSpeed", &UGMC_OrganicMovementCmp::execLimitSpeed },
			{ "MaintainDistanceToFloor", &UGMC_OrganicMovementCmp::execMaintainDistanceToFloor },
			{ "MovementUpdate", &UGMC_OrganicMovementCmp::execMovementUpdate },
			{ "MovementUpdateSimulated", &UGMC_OrganicMovementCmp::execMovementUpdateSimulated },
			{ "MoveWithBaseRelative", &UGMC_OrganicMovementCmp::execMoveWithBaseRelative },
			{ "MoveWithBaseVelocity", &UGMC_OrganicMovementCmp::execMoveWithBaseVelocity },
			{ "NavAgentPropsAdjustment", &UGMC_OrganicMovementCmp::execNavAgentPropsAdjustment },
			{ "OnActorBaseChanged", &UGMC_OrganicMovementCmp::execOnActorBaseChanged },
			{ "OnActorBaseChangedSimulated", &UGMC_OrganicMovementCmp::execOnActorBaseChangedSimulated },
			{ "OnLanded", &UGMC_OrganicMovementCmp::execOnLanded },
			{ "OnLandedSimulated", &UGMC_OrganicMovementCmp::execOnLandedSimulated },
			{ "OnMovementModeChanged", &UGMC_OrganicMovementCmp::execOnMovementModeChanged },
			{ "OnMovementModeChangedSimulated", &UGMC_OrganicMovementCmp::execOnMovementModeChangedSimulated },
			{ "OnMovementModeUpdated", &UGMC_OrganicMovementCmp::execOnMovementModeUpdated },
			{ "PhysicsAirborne", &UGMC_OrganicMovementCmp::execPhysicsAirborne },
			{ "PhysicsBuoyant", &UGMC_OrganicMovementCmp::execPhysicsBuoyant },
			{ "PhysicsCustom", &UGMC_OrganicMovementCmp::execPhysicsCustom },
			{ "PhysicsGrounded", &UGMC_OrganicMovementCmp::execPhysicsGrounded },
			{ "PhysicsSimulationUpdate", &UGMC_OrganicMovementCmp::execPhysicsSimulationUpdate },
			{ "PlayMontageSimulated", &UGMC_OrganicMovementCmp::execPlayMontageSimulated },
			{ "PostMovementUpdate", &UGMC_OrganicMovementCmp::execPostMovementUpdate },
			{ "PostPhysicsUpdate", &UGMC_OrganicMovementCmp::execPostPhysicsUpdate },
			{ "PostProcessAnimRootMotionVelocity", &UGMC_OrganicMovementCmp::execPostProcessAnimRootMotionVelocity },
			{ "PostProcessPawnVelocity", &UGMC_OrganicMovementCmp::execPostProcessPawnVelocity },
			{ "PostProcessVelocityToImpart", &UGMC_OrganicMovementCmp::execPostProcessVelocityToImpart },
			{ "PreMovementUpdate", &UGMC_OrganicMovementCmp::execPreMovementUpdate },
			{ "PrePhysicsUpdate", &UGMC_OrganicMovementCmp::execPrePhysicsUpdate },
			{ "PrePlayMontageSimulated", &UGMC_OrganicMovementCmp::execPrePlayMontageSimulated },
			{ "PreProcessInputVector", &UGMC_OrganicMovementCmp::execPreProcessInputVector },
			{ "ReEqualizeBase", &UGMC_OrganicMovementCmp::execReEqualizeBase },
			{ "RootCollisionTouched", &UGMC_OrganicMovementCmp::execRootCollisionTouched },
			{ "SetAnimRootMotionTranslationScale", &UGMC_OrganicMovementCmp::execSetAnimRootMotionTranslationScale },
			{ "SetAvoidanceGroupMask", &UGMC_OrganicMovementCmp::execSetAvoidanceGroupMask },
			{ "SetBasedMovementSource", &UGMC_OrganicMovementCmp::execSetBasedMovementSource },
			{ "SetGroupsToAvoidMask", &UGMC_OrganicMovementCmp::execSetGroupsToAvoidMask },
			{ "SetGroupsToIgnoreMask", &UGMC_OrganicMovementCmp::execSetGroupsToIgnoreMask },
			{ "SetMovementMode", &UGMC_OrganicMovementCmp::execSetMovementMode },
			{ "SetSkeletalMeshReference", &UGMC_OrganicMovementCmp::execSetSkeletalMeshReference },
			{ "SetWalkableFloorAngle", &UGMC_OrganicMovementCmp::execSetWalkableFloorAngle },
			{ "SetWalkableFloorZ", &UGMC_OrganicMovementCmp::execSetWalkableFloorZ },
			{ "ShouldMoveGMCPawnForBaseEqualization", &UGMC_OrganicMovementCmp::execShouldMoveGMCPawnForBaseEqualization },
			{ "ShouldPerformDirectMove", &UGMC_OrganicMovementCmp::execShouldPerformDirectMove },
			{ "TraceForActorBase", &UGMC_OrganicMovementCmp::execTraceForActorBase },
			{ "UnEqualizeBase", &UGMC_OrganicMovementCmp::execUnEqualizeBase },
			{ "UpdateImmersionDepth", &UGMC_OrganicMovementCmp::execUpdateImmersionDepth },
			{ "UpdateMovementModeDynamic", &UGMC_OrganicMovementCmp::execUpdateMovementModeDynamic },
			{ "UpdateMovementModeStatic", &UGMC_OrganicMovementCmp::execUpdateMovementModeStatic },
			{ "UpdateRelativeBasedMovementTransform", &UGMC_OrganicMovementCmp::execUpdateRelativeBasedMovementTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventAdjustVelocityFromHitAirborne_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventAdjustVelocityFromHitAirborne_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Wrapper around AdjustVelocityFromHit that prevents the pawn from gaining upward velocity from the hit adjustment.\n///\n/// @param        Hit             The hit result of the collision.\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Wrapper around AdjustVelocityFromHit that prevents the pawn from gaining upward velocity from the hit adjustment.\n\n@param        Hit             The hit result of the collision.\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "AdjustVelocityFromHitAirborne", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventAdjustVelocityFromHitAirborne_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventAdjustVelocityFromHitAirborne_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics
	{
		struct GMC_OrganicMovementCmp_eventApplyDeceleration_Parms
		{
			FGMC_RootMotionVelocitySettings RootMotionMetaData;
			float DeltaSeconds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionMetaData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::NewProp_RootMotionMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::NewProp_RootMotionMetaData = { "RootMotionMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventApplyDeceleration_Parms, RootMotionMetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::NewProp_RootMotionMetaData_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::NewProp_RootMotionMetaData_MetaData) }; // 1280216714
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventApplyDeceleration_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::NewProp_RootMotionMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Add forces that oppose the current velocity. Might cause the velocity to be clamped to 0 (important to consider when maintaining framerate independence).\n///\n/// @param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n/// @param        DeltaSeconds          The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Add forces that oppose the current velocity. Might cause the velocity to be clamped to 0 (important to consider when maintaining framerate independence).\n\n@param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n@param        DeltaSeconds          The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "ApplyDeceleration", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::GMC_OrganicMovementCmp_eventApplyDeceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::GMC_OrganicMovementCmp_eventApplyDeceleration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics
	{
		struct GMC_OrganicMovementCmp_eventApplyExternalForces_Parms
		{
			FGMC_RootMotionVelocitySettings RootMotionMetaData;
			float DeltaSeconds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionMetaData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::NewProp_RootMotionMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::NewProp_RootMotionMetaData = { "RootMotionMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventApplyExternalForces_Parms, RootMotionMetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::NewProp_RootMotionMetaData_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::NewProp_RootMotionMetaData_MetaData) }; // 1280216714
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventApplyExternalForces_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::NewProp_RootMotionMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Apply velocity from external forces (e.g. gravity).\n///\n/// @param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n/// @param        DeltaSeconds          The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Apply velocity from external forces (e.g. gravity).\n\n@param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n@param        DeltaSeconds          The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "ApplyExternalForces", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::GMC_OrganicMovementCmp_eventApplyExternalForces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::GMC_OrganicMovementCmp_eventApplyExternalForces_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics
	{
		struct GMC_OrganicMovementCmp_eventApplyInputVelocity_Parms
		{
			FGMC_RootMotionVelocitySettings RootMotionMetaData;
			float DeltaSeconds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionMetaData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::NewProp_RootMotionMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::NewProp_RootMotionMetaData = { "RootMotionMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventApplyInputVelocity_Parms, RootMotionMetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::NewProp_RootMotionMetaData_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::NewProp_RootMotionMetaData_MetaData) }; // 1280216714
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventApplyInputVelocity_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::NewProp_RootMotionMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Apply velocity from move input.\n///\n/// @param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n/// @param        DeltaSeconds          The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Apply velocity from move input.\n\n@param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n@param        DeltaSeconds          The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "ApplyInputVelocity", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::GMC_OrganicMovementCmp_eventApplyInputVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::GMC_OrganicMovementCmp_eventApplyInputVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics
	{
		struct GMC_OrganicMovementCmp_eventApplyRotation_Parms
		{
			bool bIsDirectBotMove;
			FGMC_RootMotionVelocitySettings RootMotionMetaData;
			float DeltaSeconds;
		};
		static void NewProp_bIsDirectBotMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirectBotMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionMetaData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_bIsDirectBotMove_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventApplyRotation_Parms*)Obj)->bIsDirectBotMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_bIsDirectBotMove = { "bIsDirectBotMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventApplyRotation_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_bIsDirectBotMove_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_RootMotionMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_RootMotionMetaData = { "RootMotionMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventApplyRotation_Parms, RootMotionMetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_RootMotionMetaData_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_RootMotionMetaData_MetaData) }; // 1280216714
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventApplyRotation_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_bIsDirectBotMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_RootMotionMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Change the pawn's orientation.\n///\n/// @param        bIsDirectBotMove      Whether the pawn is a bot executing direct movement (i.e. the pawn is not using acceleration values\n///                                     to calculate its velocity).\n/// @param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n/// @param        DeltaSeconds          The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Change the pawn's orientation.\n\n@param        bIsDirectBotMove      Whether the pawn is a bot executing direct movement (i.e. the pawn is not using acceleration values\n                                    to calculate its velocity).\n@param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n@param        DeltaSeconds          The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "ApplyRotation", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::GMC_OrganicMovementCmp_eventApplyRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::GMC_OrganicMovementCmp_eventApplyRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionMetaData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_PathVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_PathVelocity = { "PathVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventBotDirectMove_Parms, PathVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_PathVelocity_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_PathVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_RootMotionMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_RootMotionMetaData = { "RootMotionMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventBotDirectMove_Parms, RootMotionMetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_RootMotionMetaData_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_RootMotionMetaData_MetaData) }; // 1280216714
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventBotDirectMove_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_PathVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_RootMotionMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Event for calculating and setting the move velocity of bots when direct movement is used for path following. Direct movement (which can be performed when\n/// UNavMovementComponent::bUseAccelerationForPaths is set to false) is not based on move input, instead path following provides a velocity to reach the goal\n/// directly.\n///\n/// @param        PathVelocity          The velocity requested by path following.\n/// @param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n/// @param        DeltaSeconds          The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Event for calculating and setting the move velocity of bots when direct movement is used for path following. Direct movement (which can be performed when\nUNavMovementComponent::bUseAccelerationForPaths is set to false) is not based on move input, instead path following provides a velocity to reach the goal\ndirectly.\n\n@param        PathVelocity          The velocity requested by path following.\n@param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n@param        DeltaSeconds          The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "BotDirectMove", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventBotDirectMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventBotDirectMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventCalculatePathFollowingBrakingDistance_Parms, MaxSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventCalculatePathFollowingBrakingDistance_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventCalculatePathFollowingBrakingDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Calculates the current braking distance of the pawn for path following.\n///\n/// @param        MaxSpeed        The current max speed of the pawn.\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      float           The calculated braking distance.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Calculates the current braking distance of the pawn for path following.\n\n@param        MaxSpeed        The current max speed of the pawn.\n@param        DeltaSeconds    The delta time to use.\n@returns      float           The calculated braking distance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "CalculatePathFollowingBrakingDistance", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventCalculatePathFollowingBrakingDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventCalculatePathFollowingBrakingDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics
	{
		struct GMC_OrganicMovementCmp_eventCalculateVelocity_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventCalculateVelocity_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Calculates the new movement velocity for based on the current pawn state. Velocity from root motion animations is calculated separately.\n///\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Calculates the new movement velocity for based on the current pawn state. Velocity from root motion animations is calculated separately.\n\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "CalculateVelocity", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::GMC_OrganicMovementCmp_eventCalculateVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::GMC_OrganicMovementCmp_eventCalculateVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionMetaData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::NewProp_RootMotionMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::NewProp_RootMotionMetaData = { "RootMotionMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventCalculateVelocityCustom_Parms, RootMotionMetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::NewProp_RootMotionMetaData_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::NewProp_RootMotionMetaData_MetaData) }; // 1280216714
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventCalculateVelocityCustom_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::NewProp_RootMotionMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called from CalculateVelocity for custom velocity computations. This is called before any clamping of the velocity happens and should be preferred to\n/// overriding the CalculateVelocity function directly. Not called for bots executing a direct move.\n///\n/// @param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n/// @param        DeltaSeconds          The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called from CalculateVelocity for custom velocity computations. This is called before any clamping of the velocity happens and should be preferred to\noverriding the CalculateVelocity function directly. Not called for bots executing a direct move.\n\n@param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n@param        DeltaSeconds          The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "CalculateVelocityCustom", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventCalculateVelocityCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventCalculateVelocityCustom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventComputeInputAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Calculates the acceleration generated from the input vector and the configured input acceleration.\n///\n/// @returns      FVector    The calculated input acceleration.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Calculates the acceleration generated from the input vector and the configured input acceleration.\n\n@returns      FVector    The calculated input acceleration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "ComputeInputAcceleration", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventComputeInputAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventComputeInputAcceleration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_DisableMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_DisableMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Completely disables kinematic movement. This will set the movement mode to None.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Completely disables kinematic movement. This will set the movement mode to None.\n\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_DisableMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "DisableMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_DisableMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_DisableMovement_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_DisableMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_DisableMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventFindActorBase_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Determines what the movement base should be for the current update.\n///\n/// @returns      UPrimitiveComponent*    The new actor base.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Determines what the movement base should be for the current update.\n\n@returns      UPrimitiveComponent*    The new actor base." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "FindActorBase", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventFindActorBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventFindActorBase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetAnimRootMotionTranslationScale_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetAnimRootMotionTranslationScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the scaling factor applied to any animation root motion translation on this pawn.\n///\n/// @returns      float    The scaling factor for animation root motion.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the scaling factor applied to any animation root motion translation on this pawn.\n\n@returns      float    The scaling factor for animation root motion." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetAnimRootMotionTranslationScale", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::GMC_OrganicMovementCmp_eventGetAnimRootMotionTranslationScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::GMC_OrganicMovementCmp_eventGetAnimRootMotionTranslationScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetBrakingDeceleration_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetBrakingDeceleration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the currently set braking deceleration for the current movement mode.\n///\n/// @returns      float    The current braking deceleration.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the currently set braking deceleration for the current movement mode.\n\n@returns      float    The current braking deceleration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetBrakingDeceleration", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::GMC_OrganicMovementCmp_eventGetBrakingDeceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::GMC_OrganicMovementCmp_eventGetBrakingDeceleration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetBrakingDecelerationCustom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Can be overridden to return the braking deceleration for custom movement modes. Called directly from GetBrakingDeceleration if the current movement mode\n/// is none of the default ones.\n///\n/// @returns      float    The current braking deceleration.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Can be overridden to return the braking deceleration for custom movement modes. Called directly from GetBrakingDeceleration if the current movement mode\nis none of the default ones.\n\n@returns      float    The current braking deceleration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetBrakingDecelerationCustom", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventGetBrakingDecelerationCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventGetBrakingDecelerationCustom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetCurrentFloor_Parms
		{
			FGMC_FloorParams ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetCurrentFloor_Parms, ReturnValue), Z_Construct_UScriptStruct_FGMC_FloorParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::NewProp_ReturnValue_MetaData) }; // 3617363195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns information about the floor currently located underneath the pawn.\n///\n/// @returns      const FGMC_FloorParams&    The current floor.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns information about the floor currently located underneath the pawn.\n\n@returns      const FGMC_FloorParams&    The current floor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetCurrentFloor", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::GMC_OrganicMovementCmp_eventGetCurrentFloor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::GMC_OrganicMovementCmp_eventGetCurrentFloor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetCurrentImmersionDepth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetCurrentImmersionDepth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the current immersion depth of the pawn (0 = not in a fluid volume, 1 = fully immersed).\n///\n/// @returns      float    The current immersion depth of the pawn.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the current immersion depth of the pawn (0 = not in a fluid volume, 1 = fully immersed).\n\n@returns      float    The current immersion depth of the pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetCurrentImmersionDepth", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::GMC_OrganicMovementCmp_eventGetCurrentImmersionDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::GMC_OrganicMovementCmp_eventGetCurrentImmersionDepth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetGMCMontageMetaData_Parms
		{
			UAnimMontage* Montage;
			UGMC_MontageMetaData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetGMCMontageMetaData_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetGMCMontageMetaData_Parms, ReturnValue), Z_Construct_UClass_UGMC_MontageMetaData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the GMC meta data of the passed montage if present.\n///\n/// @param        Montage                            The montage to get the meta data for.\n/// @returns      UGMC_RootMotionMontageMetaData*    The GMC meta data of the passed montage if any, nullptr otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the GMC meta data of the passed montage if present.\n\n@param        Montage                            The montage to get the meta data for.\n@returns      UGMC_RootMotionMontageMetaData*    The GMC meta data of the passed montage if any, nullptr otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetGMCMontageMetaData", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::GMC_OrganicMovementCmp_eventGetGMCMontageMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::GMC_OrganicMovementCmp_eventGetGMCMontageMetaData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetGravity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetGravity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the current gravity as vector in the format (0, 0, GravityZ).\n///\n/// @returns      FVector    The current gravity acceleration vector.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the current gravity as vector in the format (0, 0, GravityZ).\n\n@returns      FVector    The current gravity acceleration vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetGravity", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::GMC_OrganicMovementCmp_eventGetGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::GMC_OrganicMovementCmp_eventGetGravity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetGroundFriction_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetGroundFriction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the current ground friction.\n///\n/// @returns      float    The current ground friction.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the current ground friction.\n\n@returns      float    The current ground friction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetGroundFriction", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::GMC_OrganicMovementCmp_eventGetGroundFriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::GMC_OrganicMovementCmp_eventGetGroundFriction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetInputAcceleration_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetInputAcceleration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the currently set input acceleration for the current movement mode.\n///\n/// @returns      float    The current input acceleration.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the currently set input acceleration for the current movement mode.\n\n@returns      float    The current input acceleration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetInputAcceleration", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::GMC_OrganicMovementCmp_eventGetInputAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::GMC_OrganicMovementCmp_eventGetInputAcceleration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetInputAccelerationCustom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Can be overridden to return the input acceleration for custom movement modes. Called directly from GetInputAcceleration if the current movement mode is\n/// none of the default ones.\n///\n/// @returns      float    The current input acceleration.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Can be overridden to return the input acceleration for custom movement modes. Called directly from GetInputAcceleration if the current movement mode is\nnone of the default ones.\n\n@returns      float    The current input acceleration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetInputAccelerationCustom", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventGetInputAccelerationCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventGetInputAccelerationCustom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetMovementMode_Parms
		{
			EGMC_MovementMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetMovementMode_Parms, ReturnValue), Z_Construct_UEnum_GMCCore_EGMC_MovementMode, METADATA_PARAMS(0, nullptr) }; // 3092782939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the current movement mode of the pawn.\n///\n/// @returns      EGMC_MovementMode    The current movement mode.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the current movement mode of the pawn.\n\n@returns      EGMC_MovementMode    The current movement mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetMovementMode", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::GMC_OrganicMovementCmp_eventGetMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::GMC_OrganicMovementCmp_eventGetMovementMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetOutermostAttachParent_Parms
		{
			USceneComponent* Component;
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetOutermostAttachParent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_Component_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetOutermostAttachParent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the outermost attach parent of the passed component.\n///\n/// @param        Component           The component to check.\n/// @returns      USceneComponent*    The outermost attach parent of the passed component.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the outermost attach parent of the passed component.\n\n@param        Component           The component to check.\n@returns      USceneComponent*    The outermost attach parent of the passed component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetOutermostAttachParent", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::GMC_OrganicMovementCmp_eventGetOutermostAttachParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::GMC_OrganicMovementCmp_eventGetOutermostAttachParent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetOverMaxSpeedDeceleration_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetOverMaxSpeedDeceleration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the currently set deceleration applied when the pawn exceeds the max desired speed for the current movement mode.\n///\n/// @returns      float    The current braking deceleration.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the currently set deceleration applied when the pawn exceeds the max desired speed for the current movement mode.\n\n@returns      float    The current braking deceleration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetOverMaxSpeedDeceleration", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::GMC_OrganicMovementCmp_eventGetOverMaxSpeedDeceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::GMC_OrganicMovementCmp_eventGetOverMaxSpeedDeceleration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetOverMaxSpeedDecelerationCustom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Can be overridden to return the over-max-speed-deceleration for custom movement modes. Called directly from GetOverMaxSpeedDeceleration if the current\n/// movement mode is none of the default ones.\n///\n/// @returns      float    The deceleration applied when the pawn exceeds the max desired speed.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Can be overridden to return the over-max-speed-deceleration for custom movement modes. Called directly from GetOverMaxSpeedDeceleration if the current\nmovement mode is none of the default ones.\n\n@returns      float    The deceleration applied when the pawn exceeds the max desired speed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetOverMaxSpeedDecelerationCustom", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventGetOverMaxSpeedDecelerationCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventGetOverMaxSpeedDecelerationCustom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetPreviousControlRotationSimulated_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetPreviousControlRotationSimulated_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the control rotation the pawn had during the previous simulation tick.\n///\n/// @returns      FRotator    The previous control rotation in world space.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the control rotation the pawn had during the previous simulation tick.\n\n@returns      FRotator    The previous control rotation in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetPreviousControlRotationSimulated", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::GMC_OrganicMovementCmp_eventGetPreviousControlRotationSimulated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::GMC_OrganicMovementCmp_eventGetPreviousControlRotationSimulated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetPreviousMovementModeSimulated_Parms
		{
			EGMC_MovementMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetPreviousMovementModeSimulated_Parms, ReturnValue), Z_Construct_UEnum_GMCCore_EGMC_MovementMode, METADATA_PARAMS(0, nullptr) }; // 3092782939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the movement mode the pawn had during the previous simulation tick.\n///\n/// @returns      EGMC_MovementMode    The previous movement mode.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the movement mode the pawn had during the previous simulation tick.\n\n@returns      EGMC_MovementMode    The previous movement mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetPreviousMovementModeSimulated", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::GMC_OrganicMovementCmp_eventGetPreviousMovementModeSimulated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::GMC_OrganicMovementCmp_eventGetPreviousMovementModeSimulated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetProcessedInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetProcessedInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the pre-processed input vector. The processed input is not available until after the movement mode was updated meaning PrePhysicsUpdate is the\n/// earliest event for which the return value can be non-zero.\n///\n/// @returns      FVector    The processed input vector used for all physics calculations.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the pre-processed input vector. The processed input is not available until after the movement mode was updated meaning PrePhysicsUpdate is the\nearliest event for which the return value can be non-zero.\n\n@returns      FVector    The processed input vector used for all physics calculations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetProcessedInputVector", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::GMC_OrganicMovementCmp_eventGetProcessedInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::GMC_OrganicMovementCmp_eventGetProcessedInputVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetRawInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetRawInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the raw directional user input.\n///\n/// @returns      FVector    The raw user input vector.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the raw directional user input.\n\n@returns      FVector    The raw user input vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetRawInputVector", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::GMC_OrganicMovementCmp_eventGetRawInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::GMC_OrganicMovementCmp_eventGetRawInputVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics
	{
		struct GMC_OrganicMovementCmp_eventGetSkeletalMeshReference_Parms
		{
			USkeletalMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventGetSkeletalMeshReference_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the currently set skeletal mesh reference.\n///\n/// @returns      USkeletalMeshComponent*    The skeletal mesh component of the owning pawn.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Returns the currently set skeletal mesh reference.\n\n@returns      USkeletalMeshComponent*    The skeletal mesh component of the owning pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "GetSkeletalMeshReference", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::GMC_OrganicMovementCmp_eventGetSkeletalMeshReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::GMC_OrganicMovementCmp_eventGetSkeletalMeshReference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics
	{
		struct GMC_OrganicMovementCmp_eventHasRootMotion_Parms
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
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventHasRootMotion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventHasRootMotion_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether we currently have any root motion to consider.\n///\n/// @returns      bool    True if we have root motion to consider, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether we currently have any root motion to consider.\n\n@returns      bool    True if we have root motion to consider, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "HasRootMotion", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::GMC_OrganicMovementCmp_eventHasRootMotion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::GMC_OrganicMovementCmp_eventHasRootMotion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics
	{
		struct GMC_OrganicMovementCmp_eventHitWalkableFloor_Parms
		{
			FHitResult Hit;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventHitWalkableFloor_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::NewProp_Hit_MetaData) }; // 1891709922
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventHitWalkableFloor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventHitWalkableFloor_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Checks if the hit object is a walkable surface.\n///\n/// @param        Hit     The hit result to be checked.\n/// @returns      bool    True if the surface is walkable, false if not.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Checks if the hit object is a walkable surface.\n\n@param        Hit     The hit result to be checked.\n@returns      bool    True if the surface is walkable, false if not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "HitWalkableFloor", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::GMC_OrganicMovementCmp_eventHitWalkableFloor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::GMC_OrganicMovementCmp_eventHitWalkableFloor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics
	{
		struct GMC_OrganicMovementCmp_eventIsAffectedByGravity_Parms
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
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventIsAffectedByGravity_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventIsAffectedByGravity_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Checks whether we are affected by gravity.\n///\n/// @returns      bool    True if the pawn is influenced by gravity, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Checks whether we are affected by gravity.\n\n@returns      bool    True if the pawn is influenced by gravity, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "IsAffectedByGravity", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::GMC_OrganicMovementCmp_eventIsAffectedByGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::GMC_OrganicMovementCmp_eventIsAffectedByGravity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics
	{
		struct GMC_OrganicMovementCmp_eventIsAirborne_Parms
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
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventIsAirborne_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventIsAirborne_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Checks whether we currently have the airborne movement state.\n///\n/// @returns      bool    True if airborne, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Checks whether we currently have the airborne movement state.\n\n@returns      bool    True if airborne, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "IsAirborne", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::GMC_OrganicMovementCmp_eventIsAirborne_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::GMC_OrganicMovementCmp_eventIsAirborne_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics
	{
		struct GMC_OrganicMovementCmp_eventIsExceedingMaxGroundedVelocityZ_Parms
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
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventIsExceedingMaxGroundedVelocityZ_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventIsExceedingMaxGroundedVelocityZ_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Checks whether the pawn's Z velocity is currently exceeding the threshold for remaining grounded/being able to land.\n///\n/// @returns      bool    True if the Z velocity is larger than MaxGroundedVelocityZ, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Checks whether the pawn's Z velocity is currently exceeding the threshold for remaining grounded/being able to land.\n\n@returns      bool    True if the Z velocity is larger than MaxGroundedVelocityZ, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "IsExceedingMaxGroundedVelocityZ", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::GMC_OrganicMovementCmp_eventIsExceedingMaxGroundedVelocityZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::GMC_OrganicMovementCmp_eventIsExceedingMaxGroundedVelocityZ_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics
	{
		struct GMC_OrganicMovementCmp_eventLimitSpeed_Parms
		{
			FGMC_RootMotionVelocitySettings RootMotionMetaData;
			float DeltaSeconds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionMetaData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::NewProp_RootMotionMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::NewProp_RootMotionMetaData = { "RootMotionMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventLimitSpeed_Parms, RootMotionMetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::NewProp_RootMotionMetaData_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::NewProp_RootMotionMetaData_MetaData) }; // 1280216714
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventLimitSpeed_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::NewProp_RootMotionMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Slows the pawn down to max speed if necessary. Might cause the velocity to be clamped (important to consider when maintaining framerate independence).\n///\n/// @param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n/// @param        DeltaSeconds          The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Slows the pawn down to max speed if necessary. Might cause the velocity to be clamped (important to consider when maintaining framerate independence).\n\n@param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n@param        DeltaSeconds          The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "LimitSpeed", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::GMC_OrganicMovementCmp_eventLimitSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::GMC_OrganicMovementCmp_eventLimitSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics
	{
		struct GMC_OrganicMovementCmp_eventMaintainDistanceToFloor_Parms
		{
			FGMC_FloorParams Floor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Floor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventMaintainDistanceToFloor_Parms, Floor), Z_Construct_UScriptStruct_FGMC_FloorParams, METADATA_PARAMS(0, nullptr) }; // 3617363195
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventMaintainDistanceToFloor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventMaintainDistanceToFloor_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::NewProp_Floor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Maintains the pawn's distance to the floor.\n///\n/// @param        Floor    The current floor (must be up to date).\n/// @returns      bool     Whether the adjustment was successful and the pawn is within the set limits.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Maintains the pawn's distance to the floor.\n\n@param        Floor    The current floor (must be up to date).\n@returns      bool     Whether the adjustment was successful and the pawn is within the set limits." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "MaintainDistanceToFloor", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::GMC_OrganicMovementCmp_eventMaintainDistanceToFloor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::GMC_OrganicMovementCmp_eventMaintainDistanceToFloor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventMovementUpdate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called at the end of the current movement update. This is the preferred entry point for subclasses to implement custom logic if automatic handling of the\n/// default movement modes is desired.\n///\n/// @param        DeltaSeconds    The current move delta time (may not be equal to the frame delta time).\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called at the end of the current movement update. This is the preferred entry point for subclasses to implement custom logic if automatic handling of the\ndefault movement modes is desired.\n\n@param        DeltaSeconds    The current move delta time (may not be equal to the frame delta time).\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "MovementUpdate", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventMovementUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventMovementUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventMovementUpdateSimulated_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called when a simulated pawn was updated. This is the preferred entry point for subclasses to implement custom logic for simulation. All functions with\n/// the \"Simulated\" postfix are called from the simulation tick and should only be used for non-gameplay critical logic (effects, animations, etc.). They are\n/// not called on a dedicated server.\n///\n/// @param        DeltaSeconds    The current delta time.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called when a simulated pawn was updated. This is the preferred entry point for subclasses to implement custom logic for simulation. All functions with\nthe \"Simulated\" postfix are called from the simulation tick and should only be used for non-gameplay critical logic (effects, animations, etc.). They are\nnot called on a dedicated server.\n\n@param        DeltaSeconds    The current delta time.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "MovementUpdateSimulated", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventMovementUpdateSimulated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventMovementUpdateSimulated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics
	{
		static void NewProp_bSimulated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::NewProp_bSimulated_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventMoveWithBaseRelative_Parms*)Obj)->bSimulated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::NewProp_bSimulated = { "bSimulated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventMoveWithBaseRelative_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::NewProp_bSimulated_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::NewProp_bSimulated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Updates the pawn's location and rotation relative to the base component when based movement is relative.\n///\n/// @param        bSimulated    Whether simulated values should be retrieved from the saved transforms struct.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Updates the pawn's location and rotation relative to the base component when based movement is relative.\n\n@param        bSimulated    Whether simulated values should be retrieved from the saved transforms struct.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "MoveWithBaseRelative", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventMoveWithBaseRelative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventMoveWithBaseRelative_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventMoveWithBaseVelocity_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Makes the pawn follow the current base component by its velocity.\n///\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Makes the pawn follow the current base component by its velocity.\n\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "MoveWithBaseVelocity", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventMoveWithBaseVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventMoveWithBaseVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavOutput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavOutput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::NewProp_NavOutput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::NewProp_NavOutput = { "NavOutput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventNavAgentPropsAdjustment_Parms, NavOutput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::NewProp_NavOutput_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::NewProp_NavOutput_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventNavAgentPropsAdjustment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::NewProp_NavOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Adjust the nav movement output according to the nav agent properties.\n///\n/// @param        NavOutput    The output from the nav movement component to be adjusted (the move input or a requested velocity).\n/// @returns      FVector      The adjusted vector.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Adjust the nav movement output according to the nav agent properties.\n\n@param        NavOutput    The output from the nav movement component to be adjusted (the move input or a requested velocity).\n@returns      FVector      The adjusted vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "NavAgentPropsAdjustment", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventNavAgentPropsAdjustment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventNavAgentPropsAdjustment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_NewBase = { "NewBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventOnActorBaseChanged_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_NewBase_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_NewBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_PreviousBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_PreviousBase = { "PreviousBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventOnActorBaseChanged_Parms, PreviousBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_PreviousBase_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_PreviousBase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_NewBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::NewProp_PreviousBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called from PreMovementUpdate when the actor base has changed.\n///\n/// @param        NewBase         The current base of the pawn (null means no base).\n/// @param        PreviousBase    The previous base of the pawn (null means no base).\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called from PreMovementUpdate when the actor base has changed.\n\n@param        NewBase         The current base of the pawn (null means no base).\n@param        PreviousBase    The previous base of the pawn (null means no base).\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "OnActorBaseChanged", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventOnActorBaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventOnActorBaseChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_NewBase = { "NewBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventOnActorBaseChangedSimulated_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_NewBase_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_NewBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_PreviousBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_PreviousBase = { "PreviousBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventOnActorBaseChangedSimulated_Parms, PreviousBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_PreviousBase_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_PreviousBase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_NewBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::NewProp_PreviousBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called when the actor base has changed during simulation.\n///\n/// @param        NewBase         The current base of the pawn (null means no base).\n/// @param        PreviousBase    The previous base of the pawn (null means no base).\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called when the actor base has changed during simulation.\n\n@param        NewBase         The current base of the pawn (null means no base).\n@param        PreviousBase    The previous base of the pawn (null means no base).\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "OnActorBaseChangedSimulated", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventOnActorBaseChangedSimulated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventOnActorBaseChangedSimulated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventOnLanded_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::NewProp_ImpactVelocity_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::NewProp_ImpactVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::NewProp_ImpactVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called when the movement mode changes from airborne to grounded.\n///\n/// @param        ImpactVelocity    The velocity at which the pawn hit the ground.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called when the movement mode changes from airborne to grounded.\n\n@param        ImpactVelocity    The velocity at which the pawn hit the ground.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "OnLanded", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventOnLanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventOnLanded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLandedSimulated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLandedSimulated_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called when the movement mode changes from airborne to grounded during simulation. This is called after MovementUpdateSimulated and\n/// OnMovementModeChangedSimulated (if applicable) have run.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called when the movement mode changes from airborne to grounded during simulation. This is called after MovementUpdateSimulated and\nOnMovementModeChangedSimulated (if applicable) have run.\n\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLandedSimulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "OnLandedSimulated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLandedSimulated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLandedSimulated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLandedSimulated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLandedSimulated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousMovementMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::NewProp_PreviousMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::NewProp_PreviousMovementMode = { "PreviousMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventOnMovementModeChanged_Parms, PreviousMovementMode), Z_Construct_UEnum_GMCCore_EGMC_MovementMode, METADATA_PARAMS(0, nullptr) }; // 3092782939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::NewProp_PreviousMovementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::NewProp_PreviousMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called when the movement mode is changed through a call to SetMovementMode. Do not confuse this function with OnMovementModeUpdated.\n///\n/// @param        PreviousMovementMode    The previous movement mode we changed from.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called when the movement mode is changed through a call to SetMovementMode. Do not confuse this function with OnMovementModeUpdated.\n\n@param        PreviousMovementMode    The previous movement mode we changed from.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "OnMovementModeChanged", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventOnMovementModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventOnMovementModeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousMovementMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::NewProp_PreviousMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::NewProp_PreviousMovementMode = { "PreviousMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventOnMovementModeChangedSimulated_Parms, PreviousMovementMode), Z_Construct_UEnum_GMCCore_EGMC_MovementMode, METADATA_PARAMS(0, nullptr) }; // 3092782939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::NewProp_PreviousMovementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::NewProp_PreviousMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called when the movement mode changes during simulation. This is called before OnLandedSimulated (if applicable) but after MovementUpdateSimulated has\n/// run.\n///\n/// @param        PreviousMovementMode    The previous movement mode we changed from.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called when the movement mode changes during simulation. This is called before OnLandedSimulated (if applicable) but after MovementUpdateSimulated has\nrun.\n\n@param        PreviousMovementMode    The previous movement mode we changed from.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "OnMovementModeChangedSimulated", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventOnMovementModeChangedSimulated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventOnMovementModeChangedSimulated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousMovementMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::NewProp_PreviousMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::NewProp_PreviousMovementMode = { "PreviousMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventOnMovementModeUpdated_Parms, PreviousMovementMode), Z_Construct_UEnum_GMCCore_EGMC_MovementMode, METADATA_PARAMS(0, nullptr) }; // 3092782939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::NewProp_PreviousMovementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::NewProp_PreviousMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called after the movement mode was updated dynamically and/or statically. Do not confuse this function with OnMovementModeChanged.\n///\n/// @param        PreviousMovementMode    The movement mode we changed from (i.e. the value of MovementMode before it was updated).\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called after the movement mode was updated dynamically and/or statically. Do not confuse this function with OnMovementModeChanged.\n\n@param        PreviousMovementMode    The movement mode we changed from (i.e. the value of MovementMode before it was updated).\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "OnMovementModeUpdated", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventOnMovementModeUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventOnMovementModeUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics
	{
		struct GMC_OrganicMovementCmp_eventPhysicsAirborne_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPhysicsAirborne_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Handles the physics for airborne movement.\n///\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Handles the physics for airborne movement.\n\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PhysicsAirborne", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::GMC_OrganicMovementCmp_eventPhysicsAirborne_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::GMC_OrganicMovementCmp_eventPhysicsAirborne_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics
	{
		struct GMC_OrganicMovementCmp_eventPhysicsBuoyant_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPhysicsBuoyant_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Handles the physics for movement in a fluid.\n///\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Handles the physics for movement in a fluid.\n\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PhysicsBuoyant", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::GMC_OrganicMovementCmp_eventPhysicsBuoyant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::GMC_OrganicMovementCmp_eventPhysicsBuoyant_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPhysicsCustom_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Handles the physics for custom movement modes.\n///\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Handles the physics for custom movement modes.\n\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PhysicsCustom", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPhysicsCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPhysicsCustom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics
	{
		struct GMC_OrganicMovementCmp_eventPhysicsGrounded_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPhysicsGrounded_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Handles the physics for grounded movement.\n///\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Handles the physics for grounded movement.\n\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PhysicsGrounded", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::GMC_OrganicMovementCmp_eventPhysicsGrounded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::GMC_OrganicMovementCmp_eventPhysicsGrounded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPhysicsSimulationUpdate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Only called while the updated component is simulating physics. No other movement code apart from what is implemented here will be executed while physics\n/// simulation is active.\n///\n/// @param        DeltaSeconds    The current move delta time.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Only called while the updated component is simulating physics. No other movement code apart from what is implemented here will be executed while physics\nsimulation is active.\n\n@param        DeltaSeconds    The current move delta time.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PhysicsSimulationUpdate", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPhysicsSimulationUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPhysicsSimulationUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics
	{
		struct GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms
		{
			USkeletalMeshComponent* Mesh;
			UAnimMontage* MontageToPlay;
			float DeltaSeconds;
			float StartPosition;
			float PlayRate;
			FName StartSection;
			bool bPaused;
			bool bCancelSelfOnBlendIn;
			bool bCancelSelfOnBlendOut;
			float CancelMinPositionDiff;
			float MinRemainingRatio;
			float CompletionTimeout;
			float CompletionTolerance;
			float StopBlendTime;
			bool bStopAllMontages;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
		static void NewProp_bCancelSelfOnBlendIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelSelfOnBlendIn;
		static void NewProp_bCancelSelfOnBlendOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelSelfOnBlendOut;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CancelMinPositionDiff;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRemainingRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompletionTimeout;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompletionTolerance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopBlendTime;
		static void NewProp_bStopAllMontages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAllMontages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_Mesh_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms*)Obj)->bPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendIn_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms*)Obj)->bCancelSelfOnBlendIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendIn = { "bCancelSelfOnBlendIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendIn_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendOut_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms*)Obj)->bCancelSelfOnBlendOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendOut = { "bCancelSelfOnBlendOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendOut_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_CancelMinPositionDiff = { "CancelMinPositionDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, CancelMinPositionDiff), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_MinRemainingRatio = { "MinRemainingRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, MinRemainingRatio), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_CompletionTimeout = { "CompletionTimeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, CompletionTimeout), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_CompletionTolerance = { "CompletionTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, CompletionTolerance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_StopBlendTime = { "StopBlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms, StopBlendTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bStopAllMontages_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms*)Obj)->bStopAllMontages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bStopAllMontages = { "bStopAllMontages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bStopAllMontages_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_StartSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_CancelMinPositionDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_MinRemainingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_CompletionTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_CompletionTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_StopBlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::NewProp_bStopAllMontages,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Simulates a montage for an interpolated pawn.\n///\n/// @param        Mesh                     The skeletal mesh of the owning pawn.\n/// @param        MontageToPlay            The montage to play.\n/// @param        DeltaSeconds             The current frame delta time.\n/// @param        StartPosition            The position to start the montage at.\n/// @param        PlayRate                 The rate to play the montage at.\n/// @param        StartSection             The section to start the montage at (will nullify the start position if set).\n/// @param        bPaused                  Whether the montage is currently paused.\n/// @param        bCancelSelfOnBlendIn     Whether to cancel the same active montage if it is currently blending in (default blend in time).\n/// @param        bCancelSelfOnBlendOut    Whether to cancel the same active montage if it is currently blending out (default blend out time).\n/// @param        CancelMinPositionDiff    The min difference required between the start position and the active position to cancel the active montage.\n/// @param        MinRemainingRatio        How much of the passed montage (in percent) still has to be left with regard to the start position for it to play.\n/// @param        CompletionTimeout        How long a montage that was just completed (but not canceled) should time out before it can be played again.\n/// @param        CompletionTolerance      How long the active montage will continue playing when no new valid montage reference is being passed.\n/// @param        StopBlendTime            The blend out time to use when the completion tolerance was exceeded (default blend out time if -1).\n/// @param        bStopAllMontages         Whether to stop all other montages when the passed montage is played.\n/// @returns      void\n" },
		{ "CPP_Default_bCancelSelfOnBlendIn", "false" },
		{ "CPP_Default_bCancelSelfOnBlendOut", "true" },
		{ "CPP_Default_bPaused", "false" },
		{ "CPP_Default_bStopAllMontages", "true" },
		{ "CPP_Default_CancelMinPositionDiff", "0.200000" },
		{ "CPP_Default_CompletionTimeout", "0.000000" },
		{ "CPP_Default_CompletionTolerance", "0.200000" },
		{ "CPP_Default_MinRemainingRatio", "0.100000" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_StartPosition", "0.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "CPP_Default_StopBlendTime", "-1.000000" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Simulates a montage for an interpolated pawn.\n\n@param        Mesh                     The skeletal mesh of the owning pawn.\n@param        MontageToPlay            The montage to play.\n@param        DeltaSeconds             The current frame delta time.\n@param        StartPosition            The position to start the montage at.\n@param        PlayRate                 The rate to play the montage at.\n@param        StartSection             The section to start the montage at (will nullify the start position if set).\n@param        bPaused                  Whether the montage is currently paused.\n@param        bCancelSelfOnBlendIn     Whether to cancel the same active montage if it is currently blending in (default blend in time).\n@param        bCancelSelfOnBlendOut    Whether to cancel the same active montage if it is currently blending out (default blend out time).\n@param        CancelMinPositionDiff    The min difference required between the start position and the active position to cancel the active montage.\n@param        MinRemainingRatio        How much of the passed montage (in percent) still has to be left with regard to the start position for it to play.\n@param        CompletionTimeout        How long a montage that was just completed (but not canceled) should time out before it can be played again.\n@param        CompletionTolerance      How long the active montage will continue playing when no new valid montage reference is being passed.\n@param        StopBlendTime            The blend out time to use when the completion tolerance was exceeded (default blend out time if -1).\n@param        bStopAllMontages         Whether to stop all other montages when the passed montage is played.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PlayMontageSimulated", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::GMC_OrganicMovementCmp_eventPlayMontageSimulated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPostMovementUpdate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called after movement was performed and root motion was applied. Do not play montages from this event.\n///\n/// @param        DeltaSeconds    The current move delta time.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called after movement was performed and root motion was applied. Do not play montages from this event.\n\n@param        DeltaSeconds    The current move delta time.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PostMovementUpdate", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPostMovementUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPostMovementUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPostPhysicsUpdate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called immediately after the movement physics have run.\n///\n/// @param        DeltaSeconds    The current move delta time.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called immediately after the movement physics have run.\n\n@param        DeltaSeconds    The current move delta time.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PostPhysicsUpdate", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPostPhysicsUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPostPhysicsUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::NewProp_RootMotionVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::NewProp_RootMotionVelocity = { "RootMotionVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPostProcessAnimRootMotionVelocity_Parms, RootMotionVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::NewProp_RootMotionVelocity_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::NewProp_RootMotionVelocity_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPostProcessAnimRootMotionVelocity_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPostProcessAnimRootMotionVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::NewProp_RootMotionVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Allows for post-processing of the extracted root motion velocity.\n///\n/// @param        RootMotionVelocity    The extracted root motion velocity.\n/// @param        DeltaSeconds          The delta time to use.\n/// @returns      FVector               The final root motion velocity to use.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Allows for post-processing of the extracted root motion velocity.\n\n@param        RootMotionVelocity    The extracted root motion velocity.\n@param        DeltaSeconds          The delta time to use.\n@returns      FVector               The final root motion velocity to use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PostProcessAnimRootMotionVelocity", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPostProcessAnimRootMotionVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPostProcessAnimRootMotionVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::NewProp_RootMotionMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::NewProp_RootMotionMetaData = { "RootMotionMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPostProcessPawnVelocity_Parms, RootMotionMetaData), Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::NewProp_RootMotionMetaData_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::NewProp_RootMotionMetaData_MetaData) }; // 1280216714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::NewProp_RootMotionMetaData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called at the end of CalculateVelocity. Allows for user-defined post-processing of the calculated pawn velocity (by modifying the value of\n/// UMovementComponent::Velocity). Also called for bots executing a direct move.\n///\n/// @param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called at the end of CalculateVelocity. Allows for user-defined post-processing of the calculated pawn velocity (by modifying the value of\nUMovementComponent::Velocity). Also called for bots executing a direct move.\n\n@param        RootMotionMetaData    The velocity meta data settings for the current root motion (if any).\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PostProcessPawnVelocity", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPostProcessPawnVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPostProcessPawnVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityToImpart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityToImpart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_CurrentBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_CurrentBase = { "CurrentBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPostProcessVelocityToImpart_Parms, CurrentBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_CurrentBase_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_CurrentBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_VelocityToImpart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_VelocityToImpart = { "VelocityToImpart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPostProcessVelocityToImpart_Parms, VelocityToImpart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_VelocityToImpart_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_VelocityToImpart_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPostProcessVelocityToImpart_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_CurrentBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_VelocityToImpart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called when the movement mode changes from grounded to airborne and the velocity of the movement base should be imparted. Allows for user-defined\n/// post-processing of the calculated velocity to impart. Only called if CanImpartVelocityFromBase returned true.\n///\n/// @param        CurrentBase         The component of which the velocity should be imparted.\n/// @param        VelocityToImpart    The impart-velocity that was calculated up to this point.\n/// @returns      FVector             The final velocity to impart.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called when the movement mode changes from grounded to airborne and the velocity of the movement base should be imparted. Allows for user-defined\npost-processing of the calculated velocity to impart. Only called if CanImpartVelocityFromBase returned true.\n\n@param        CurrentBase         The component of which the velocity should be imparted.\n@param        VelocityToImpart    The impart-velocity that was calculated up to this point.\n@returns      FVector             The final velocity to impart." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PostProcessVelocityToImpart", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPostProcessVelocityToImpart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPostProcessVelocityToImpart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPreMovementUpdate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called before any kind of movement related update has happened. This is the only movement event that is called even if the pawn cannot move.\n///\n/// @param        DeltaSeconds    The current move delta time.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called before any kind of movement related update has happened. This is the only movement event that is called even if the pawn cannot move.\n\n@param        DeltaSeconds    The current move delta time.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PreMovementUpdate", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPreMovementUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPreMovementUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePhysicsUpdate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called immediately before switching on the current movement mode and executing the appropriate physics. At this point the movement mode and floor have\n/// been updated, and the input vector has been pre-processed.\n///\n/// @param        DeltaSeconds    The current move delta time.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Called immediately before switching on the current movement mode and executing the appropriate physics. At this point the movement mode and floor have\nbeen updated, and the input vector has been pre-processed.\n\n@param        DeltaSeconds    The current move delta time.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PrePhysicsUpdate", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPrePhysicsUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPrePhysicsUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics
	{
		struct GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms
		{
			USkeletalMeshComponent* Mesh;
			UAnimMontage* MontageToPlay;
			float DeltaSeconds;
			float StartPosition;
			bool bPaused;
			bool bCancelSelfOnBlendIn;
			bool bCancelSelfOnBlendOut;
			float CancelMinPositionDiff;
			float MinRemainingRatio;
			float CompletionTimeout;
			float CompletionTolerance;
			float StopBlendTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
		static void NewProp_bCancelSelfOnBlendIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelSelfOnBlendIn;
		static void NewProp_bCancelSelfOnBlendOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelSelfOnBlendOut;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CancelMinPositionDiff;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRemainingRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompletionTimeout;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompletionTolerance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopBlendTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_Mesh_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms*)Obj)->bPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendIn_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms*)Obj)->bCancelSelfOnBlendIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendIn = { "bCancelSelfOnBlendIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendIn_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendOut_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms*)Obj)->bCancelSelfOnBlendOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendOut = { "bCancelSelfOnBlendOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendOut_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_CancelMinPositionDiff = { "CancelMinPositionDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms, CancelMinPositionDiff), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_MinRemainingRatio = { "MinRemainingRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms, MinRemainingRatio), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_CompletionTimeout = { "CompletionTimeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms, CompletionTimeout), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_CompletionTolerance = { "CompletionTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms, CompletionTolerance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_StopBlendTime = { "StopBlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms, StopBlendTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_bCancelSelfOnBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_CancelMinPositionDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_MinRemainingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_CompletionTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_CompletionTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_StopBlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Handles the setup logic for playing simulated montages.\n///\n/// @param        Mesh                     The skeletal mesh of the owning pawn.\n/// @param        MontageToPlay            The montage to play.\n/// @param        DeltaSeconds             The current frame delta time.\n/// @param        StartPosition            The position to start the montage at.\n/// @param        bPaused                  Whether the montage is currently paused.\n/// @param        bCancelSelfOnBlendIn     Whether to cancel the same active montage if it is currently blending in (default blend in time).\n/// @param        bCancelSelfOnBlendOut    Whether to cancel the same active montage if it is currently blending out (default blend out time).\n/// @param        CancelMinPositionDiff    The min difference required between the start position and the active position to cancel the active montage.\n/// @param        MinRemainingRatio        How much of the passed montage (in percent) still has to be left with regard to the start position for it to play.\n/// @param        CompletionTimeout        How long a montage that was just completed (but not canceled) should time out before it can be played again.\n/// @param        CompletionTolerance      How long the active montage will continue playing when no new valid montage reference is being passed.\n/// @param        StopBlendTime            The blend out time to use when the completion tolerance was exceeded (default blend out time if -1).\n/// @returns      bool                     True if the montage should be played, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Handles the setup logic for playing simulated montages.\n\n@param        Mesh                     The skeletal mesh of the owning pawn.\n@param        MontageToPlay            The montage to play.\n@param        DeltaSeconds             The current frame delta time.\n@param        StartPosition            The position to start the montage at.\n@param        bPaused                  Whether the montage is currently paused.\n@param        bCancelSelfOnBlendIn     Whether to cancel the same active montage if it is currently blending in (default blend in time).\n@param        bCancelSelfOnBlendOut    Whether to cancel the same active montage if it is currently blending out (default blend out time).\n@param        CancelMinPositionDiff    The min difference required between the start position and the active position to cancel the active montage.\n@param        MinRemainingRatio        How much of the passed montage (in percent) still has to be left with regard to the start position for it to play.\n@param        CompletionTimeout        How long a montage that was just completed (but not canceled) should time out before it can be played again.\n@param        CompletionTolerance      How long the active montage will continue playing when no new valid montage reference is being passed.\n@param        StopBlendTime            The blend out time to use when the completion tolerance was exceeded (default blend out time if -1).\n@returns      bool                     True if the montage should be played, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PrePlayMontageSimulated", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::GMC_OrganicMovementCmp_eventPrePlayMontageSimulated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRawInputVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::NewProp_InRawInputVector = { "InRawInputVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPreProcessInputVector_Parms, InRawInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventPreProcessInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::NewProp_InRawInputVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Allows for pre-processing of the raw input vector. Called after the movement mode was updated.\n///\n/// @param        RawInputVector    The original input vector reflecting the raw input data.\n/// @returns      FVector           The actual input vector to be used for all physics calculations.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Allows for pre-processing of the raw input vector. Called after the movement mode was updated.\n\n@param        RawInputVector    The original input vector reflecting the raw input data.\n@returns      FVector           The actual input vector to be used for all physics calculations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "PreProcessInputVector", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventPreProcessInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventPreProcessInputVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_ReEqualizeBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ReEqualizeBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Undo a previous call to UnEqualizeBase.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Undo a previous call to UnEqualizeBase.\n\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ReEqualizeBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "ReEqualizeBase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ReEqualizeBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ReEqualizeBase_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_ReEqualizeBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ReEqualizeBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics
	{
		struct GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OtherComponent_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OtherComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// Delegate called when the root collision touches another primitive component.\n///\n/// @param        OverlappedComponent    The overlapped component.\n/// @param        OtherActor             The other actor.\n/// @param        OtherComponent         The other component.\n/// @param        OtherBodyIndex         The other body index.\n/// @param        bFromSweep             Whether the delegate was called from a sweep.\n/// @param        SweepResult            The hit result of the sweep.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Delegate called when the root collision touches another primitive component.\n\n@param        OverlappedComponent    The overlapped component.\n@param        OtherActor             The other actor.\n@param        OtherComponent         The other component.\n@param        OtherBodyIndex         The other body index.\n@param        bFromSweep             Whether the delegate was called from a sweep.\n@param        SweepResult            The hit result of the sweep.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "RootCollisionTouched", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::GMC_OrganicMovementCmp_eventRootCollisionTouched_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics
	{
		struct GMC_OrganicMovementCmp_eventSetAnimRootMotionTranslationScale_Parms
		{
			float Scale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventSetAnimRootMotionTranslationScale_Parms, Scale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sets the scaling factor applied to any animation root motion translation on this pawn.\n///\n/// @param        Scale    The scaling factor to use.\n/// @returns      void\n" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Sets the scaling factor applied to any animation root motion translation on this pawn.\n\n@param        Scale    The scaling factor to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "SetAnimRootMotionTranslationScale", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::GMC_OrganicMovementCmp_eventSetAnimRootMotionTranslationScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::GMC_OrganicMovementCmp_eventSetAnimRootMotionTranslationScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics
	{
		struct GMC_OrganicMovementCmp_eventSetAvoidanceGroupMask_Parms
		{
			FNavAvoidanceMask GroupMask;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::NewProp_GroupMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::NewProp_GroupMask = { "GroupMask", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventSetAvoidanceGroupMask_Parms, GroupMask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::NewProp_GroupMask_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::NewProp_GroupMask_MetaData) }; // 4080258831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::NewProp_GroupMask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "///~ End IRVOAvoidanceInterface\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "/" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "SetAvoidanceGroupMask", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::GMC_OrganicMovementCmp_eventSetAvoidanceGroupMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::GMC_OrganicMovementCmp_eventSetAvoidanceGroupMask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics
	{
		struct GMC_OrganicMovementCmp_eventSetBasedMovementSource_Parms
		{
			EGMC_BasedMovementSource NewSource;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewSource_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::NewProp_NewSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::NewProp_NewSource = { "NewSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventSetBasedMovementSource_Parms, NewSource), Z_Construct_UEnum_GMCCore_EGMC_BasedMovementSource, METADATA_PARAMS(0, nullptr) }; // 3833440242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::NewProp_NewSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::NewProp_NewSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sets the type of movement that should be used for following movable bases. Do not call this function during move execution, the based movement source can\n/// only be changed externally.\n///\n/// @param        NewSource    The new based movement source to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Sets the type of movement that should be used for following movable bases. Do not call this function during move execution, the based movement source can\nonly be changed externally.\n\n@param        NewSource    The new based movement source to use.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "SetBasedMovementSource", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::GMC_OrganicMovementCmp_eventSetBasedMovementSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::GMC_OrganicMovementCmp_eventSetBasedMovementSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics
	{
		struct GMC_OrganicMovementCmp_eventSetGroupsToAvoidMask_Parms
		{
			FNavAvoidanceMask GroupMask;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::NewProp_GroupMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::NewProp_GroupMask = { "GroupMask", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventSetGroupsToAvoidMask_Parms, GroupMask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::NewProp_GroupMask_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::NewProp_GroupMask_MetaData) }; // 4080258831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::NewProp_GroupMask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "SetGroupsToAvoidMask", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::GMC_OrganicMovementCmp_eventSetGroupsToAvoidMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::GMC_OrganicMovementCmp_eventSetGroupsToAvoidMask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics
	{
		struct GMC_OrganicMovementCmp_eventSetGroupsToIgnoreMask_Parms
		{
			FNavAvoidanceMask GroupMask;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask = { "GroupMask", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventSetGroupsToIgnoreMask_Parms, GroupMask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask_MetaData) }; // 4080258831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "SetGroupsToIgnoreMask", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::GMC_OrganicMovementCmp_eventSetGroupsToIgnoreMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::GMC_OrganicMovementCmp_eventSetGroupsToIgnoreMask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics
	{
		struct GMC_OrganicMovementCmp_eventSetMovementMode_Parms
		{
			EGMC_MovementMode NewMovementMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::NewProp_NewMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventSetMovementMode_Parms, NewMovementMode), Z_Construct_UEnum_GMCCore_EGMC_MovementMode, METADATA_PARAMS(0, nullptr) }; // 3092782939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::NewProp_NewMovementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::NewProp_NewMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Update the current movement mode. Calls OnMovementModeChanged if NewMovementMode is different from the current movement mode.\n///\n/// @param        NewMovementMode    The new movement mode.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Update the current movement mode. Calls OnMovementModeChanged if NewMovementMode is different from the current movement mode.\n\n@param        NewMovementMode    The new movement mode.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "SetMovementMode", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::GMC_OrganicMovementCmp_eventSetMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::GMC_OrganicMovementCmp_eventSetMovementMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics
	{
		struct GMC_OrganicMovementCmp_eventSetSkeletalMeshReference_Parms
		{
			USkeletalMeshComponent* Mesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventSetSkeletalMeshReference_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::NewProp_Mesh_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sets a reference to the skeletal mesh component of the owning pawn. This is automatically done once when beginning play (taking the first skeletal mesh in\n/// the pawn's scene component hierarchy), but if the mesh is changed at any point after that the reference needs to be updated manually. Setting a skeletal\n/// mesh reference will add the movement component as a tick prerequisite component for the mesh.\n///\n/// @param        Mesh    The skeletal mesh to use. Passing nullptr clears the reference.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Sets a reference to the skeletal mesh component of the owning pawn. This is automatically done once when beginning play (taking the first skeletal mesh in\nthe pawn's scene component hierarchy), but if the mesh is changed at any point after that the reference needs to be updated manually. Setting a skeletal\nmesh reference will add the movement component as a tick prerequisite component for the mesh.\n\n@param        Mesh    The skeletal mesh to use. Passing nullptr clears the reference.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "SetSkeletalMeshReference", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::GMC_OrganicMovementCmp_eventSetSkeletalMeshReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::GMC_OrganicMovementCmp_eventSetSkeletalMeshReference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics
	{
		struct GMC_OrganicMovementCmp_eventSetWalkableFloorAngle_Parms
		{
			float NewWalkableFloorAngle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWalkableFloorAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::NewProp_NewWalkableFloorAngle = { "NewWalkableFloorAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventSetWalkableFloorAngle_Parms, NewWalkableFloorAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::NewProp_NewWalkableFloorAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Set the max walkable slope for the pawn by angle. Automatically updates the walkable floor Z.\n///\n/// @param        NewWalkableFloorAngle    The new walkable floor angle in degrees.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Set the max walkable slope for the pawn by angle. Automatically updates the walkable floor Z.\n\n@param        NewWalkableFloorAngle    The new walkable floor angle in degrees.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "SetWalkableFloorAngle", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::GMC_OrganicMovementCmp_eventSetWalkableFloorAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::GMC_OrganicMovementCmp_eventSetWalkableFloorAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics
	{
		struct GMC_OrganicMovementCmp_eventSetWalkableFloorZ_Parms
		{
			float NewWalkableFloorZ;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWalkableFloorZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::NewProp_NewWalkableFloorZ = { "NewWalkableFloorZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventSetWalkableFloorZ_Parms, NewWalkableFloorZ), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::NewProp_NewWalkableFloorZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Set the max walkable slope for the pawn by Z value. Automatically updates the walkable floor angle.\n///\n/// @param        NewWalkableFloorZ    The new walkable floor Z value.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Set the max walkable slope for the pawn by Z value. Automatically updates the walkable floor angle.\n\n@param        NewWalkableFloorZ    The new walkable floor Z value.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "SetWalkableFloorZ", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::GMC_OrganicMovementCmp_eventSetWalkableFloorZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::GMC_OrganicMovementCmp_eventSetWalkableFloorZ_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnToTest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnToTest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::NewProp_PawnToTest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::NewProp_PawnToTest = { "PawnToTest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventShouldMoveGMCPawnForBaseEqualization_Parms, PawnToTest), Z_Construct_UClass_AGMC_Pawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::NewProp_PawnToTest_MetaData), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::NewProp_PawnToTest_MetaData) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventShouldMoveGMCPawnForBaseEqualization_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventShouldMoveGMCPawnForBaseEqualization_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::NewProp_PawnToTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Determines whether a pawn should be moved for base equalization.\n///\n/// @param        PawnToTest    The pawn to check.\n/// @returns      bool          True if the passed pawn should be moved for base equalization, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Determines whether a pawn should be moved for base equalization.\n\n@param        PawnToTest    The pawn to check.\n@returns      bool          True if the passed pawn should be moved for base equalization, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "ShouldMoveGMCPawnForBaseEqualization", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventShouldMoveGMCPawnForBaseEqualization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventShouldMoveGMCPawnForBaseEqualization_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventShouldPerformDirectMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventShouldPerformDirectMove_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether direct movement should be performed for bots. Only relevant when UNavMovementComponent::bUseAccelerationForPaths is set to false.\n///\n/// @returns      bool    True to call BotDirectMove to calculate the move velocity, false to proceed with the regular velocity calculation instead.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether direct movement should be performed for bots. Only relevant when UNavMovementComponent::bUseAccelerationForPaths is set to false.\n\n@returns      bool    True to call BotDirectMove to calculate the move velocity, false to proceed with the regular velocity calculation instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "ShouldPerformDirectMove", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventShouldPerformDirectMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventShouldPerformDirectMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventTraceForActorBase_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Performs the trace to find the movement base each update.\n///\n/// @returns      FHitResult    The hit result of the trace.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Performs the trace to find the movement base each update.\n\n@returns      FHitResult    The hit result of the trace." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "TraceForActorBase", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventTraceForActorBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventTraceForActorBase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_UnEqualizeBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_UnEqualizeBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Revert the base and all equalized pawns to their regular transforms. ReEqualizeBase must be called afterwards.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Revert the base and all equalized pawns to their regular transforms. ReEqualizeBase must be called afterwards.\n\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UnEqualizeBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "UnEqualizeBase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UnEqualizeBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_UnEqualizeBase_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_UnEqualizeBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_UnEqualizeBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateImmersionDepth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateImmersionDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Recalculates the current immersion depth of the pawn and updates CurrentImmersionDepth with the new value.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Recalculates the current immersion depth of the pawn and updates CurrentImmersionDepth with the new value.\n\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateImmersionDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "UpdateImmersionDepth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateImmersionDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateImmersionDepth_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateImmersionDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateImmersionDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Floor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventUpdateMovementModeDynamic_Parms, Floor), Z_Construct_UScriptStruct_FGMC_FloorParams, METADATA_PARAMS(0, nullptr) }; // 3617363195
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventUpdateMovementModeDynamic_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventUpdateMovementModeDynamic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventUpdateMovementModeDynamic_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::NewProp_Floor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Updates the movement mode dynamically (i.e. with regard to the current movement mode). Returning false indicates that the movement mode should still be\n/// updated statically (see UpdateMovementModeStatic) afterwards, returning true will skip the static update.\n///\n/// @param        Floor           The current floor parameters.\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      bool            If false, the movement mode will still be updated statically afterwards.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Updates the movement mode dynamically (i.e. with regard to the current movement mode). Returning false indicates that the movement mode should still be\nupdated statically (see UpdateMovementModeStatic) afterwards, returning true will skip the static update.\n\n@param        Floor           The current floor parameters.\n@param        DeltaSeconds    The delta time to use.\n@returns      bool            If false, the movement mode will still be updated statically afterwards." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "UpdateMovementModeDynamic", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventUpdateMovementModeDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventUpdateMovementModeDynamic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Floor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventUpdateMovementModeStatic_Parms, Floor), Z_Construct_UScriptStruct_FGMC_FloorParams, METADATA_PARAMS(0, nullptr) }; // 3617363195
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_OrganicMovementCmp_eventUpdateMovementModeStatic_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventUpdateMovementModeStatic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventUpdateMovementModeStatic_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::NewProp_Floor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Updates the movement mode statically (i.e. independent of the current movement mode).\n///\n/// @param        Floor           The current floor parameters.\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      bool            True if the movement mode was updated, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Updates the movement mode statically (i.e. independent of the current movement mode).\n\n@param        Floor           The current floor parameters.\n@param        DeltaSeconds    The delta time to use.\n@returns      bool            True if the movement mode was updated, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "UpdateMovementModeStatic", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::PropPointers), sizeof(GMC_OrganicMovementCmp_eventUpdateMovementModeStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_OrganicMovementCmp_eventUpdateMovementModeStatic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics
	{
		struct GMC_OrganicMovementCmp_eventUpdateRelativeBasedMovementTransform_Parms
		{
			bool bSimulated;
		};
		static void NewProp_bSimulated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::NewProp_bSimulated_SetBit(void* Obj)
	{
		((GMC_OrganicMovementCmp_eventUpdateRelativeBasedMovementTransform_Parms*)Obj)->bSimulated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::NewProp_bSimulated = { "bSimulated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_OrganicMovementCmp_eventUpdateRelativeBasedMovementTransform_Parms), &Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::NewProp_bSimulated_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::NewProp_bSimulated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Updates the saved transform of the pawn relative to the current base. Should be called if the pawn is moved outside of the movement logic while based on\n/// another component.\n///\n/// @param        bSimulated    Whether to update the simulated or prediction values.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Updates the saved transform of the pawn relative to the current base. Should be called if the pawn is moved outside of the movement logic while based on\nanother component.\n\n@param        bSimulated    Whether to update the simulated or prediction values.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_OrganicMovementCmp, nullptr, "UpdateRelativeBasedMovementTransform", nullptr, nullptr, Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::GMC_OrganicMovementCmp_eventUpdateRelativeBasedMovementTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::GMC_OrganicMovementCmp_eventUpdateRelativeBasedMovementTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_OrganicMovementCmp);
	UClass* Z_Construct_UClass_UGMC_OrganicMovementCmp_NoRegister()
	{
		return UGMC_OrganicMovementCmp::StaticClass();
	}
	struct Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_RawInputVector_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_RawInputVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_CurrentRootCollisionShape_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_CurrentRootCollisionShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_CurrentRootCollisionExtent_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_CurrentRootCollisionExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_MovementMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_MovementMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_ReceivedUpwardForce_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_ReceivedUpwardForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_HasRootMotion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_HasRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_MontageTracker_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_MontageTracker_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_MontageTracker_MontagePosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_MontageTracker_MontagePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_MontageTracker_MontagePlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_MontageTracker_MontagePlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_MontageTracker_MontagePaused_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_MontageTracker_MontagePaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BI_RelBasedMovementAux_ActorBaseRotation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BI_RelBasedMovementAux_ActorBaseRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFloor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivedUpwardForce_MetaData[];
#endif
		static void NewProp_bReceivedUpwardForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivedUpwardForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelBasedMovementAux_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelBasedMovementAux;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRootCollisionShape_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentRootCollisionShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRootCollisionExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRootCollisionExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawInputVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawInputVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessedInputVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessedInputVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkableFloorZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkableFloorZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentImmersionDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentImmersionDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LedgeFallOffDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeFallOffDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTracker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRootMotion_MetaData[];
#endif
		static void NewProp_bHasRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMontageSimulated_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousMontageSimulated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockMontageTimerSimulated_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockMontageTimerSimulated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndMontageTimerSimulated_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndMontageTimerSimulated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceUID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AvoidanceUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DirectionalInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAccelerationGrounded_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputAccelerationGrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAccelerationAirborne_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputAccelerationAirborne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAccelerationBuoyant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputAccelerationBuoyant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationGrounded_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationGrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationAirborne_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationAirborne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationBuoyant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationBuoyant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDesiredSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDesiredSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverMaxSpeedDecelerationGrounded_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverMaxSpeedDecelerationGrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverMaxSpeedDecelerationAirborne_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverMaxSpeedDecelerationAirborne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverMaxSpeedDecelerationBuoyant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverMaxSpeedDecelerationBuoyant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallControl_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientToInputDirection_MetaData[];
#endif
		static void NewProp_bOrientToInputDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientToInputDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientToControlRotationDirection_MetaData[];
#endif
		static void NewProp_bOrientToControlRotationDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientToControlRotationDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkableFloorAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkableFloorAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRescaleSlopeDelta_MetaData[];
#endif
		static void NewProp_bRescaleSlopeDelta_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRescaleSlopeDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStepUpHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStepUpHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStepDownHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStepDownHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGroundedVelocityZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGroundedVelocityZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanWalkOffLedges_MetaData[];
#endif
		static void NewProp_bCanWalkOffLedges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWalkOffLedges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LedgeFallOffThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeFallOffThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyantStateMinImmersion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyantStateMinImmersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartialImmersionThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PartialImmersionThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartialImmersionSlowDown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PartialImmersionSlowDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FluidMinExitSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FluidMinExitSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasedMovement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasedMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buoyancy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Buoyancy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInputModifier_MetaData[];
#endif
		static void NewProp_bIgnoreInputModifier_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInputModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAnalogWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnalogWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandOnEdges_MetaData[];
#endif
		static void NewProp_bLandOnEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandOnEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyStepUp_MetaData[];
#endif
		static void NewProp_bSimplifyStepUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyStepUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroundingWithoutGravity_MetaData[];
#endif
		static void NewProp_bGroundingWithoutGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroundingWithoutGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSafeRotations_MetaData[];
#endif
		static void NewProp_bUseSafeRotations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSafeRotations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorUpdateTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorUpdateTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationWithGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationWithGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationWithPawn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationWithPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePoseTickOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bDisablePoseTickOnDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePoseTickOnDedicatedServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageReplication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsInteraction_MetaData[];
#endif
		static void NewProp_bEnablePhysicsInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchForceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TouchForceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTouchForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTouchForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTouchForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTouchForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleTouchForceToMass_MetaData[];
#endif
		static void NewProp_bScaleTouchForceToMass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleTouchForceToMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushForceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PushForceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialPushForceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialPushForceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScalePushForceToMass_MetaData[];
#endif
		static void NewProp_bScalePushForceToMass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScalePushForceToMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScalePushForceToVelocity_MetaData[];
#endif
		static void NewProp_bScalePushForceToVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScalePushForceToVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePushForceZOffset_MetaData[];
#endif
		static void NewProp_bUsePushForceZOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePushForceZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushForceZOffsetFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PushForceZOffsetFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownwardForceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownwardForceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepulsionForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RepulsionForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAvoidance_MetaData[];
#endif
		static void NewProp_bUseAvoidance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAvoidance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidanceWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceConsiderationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidanceConsiderationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceGroup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvoidanceGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupsToAvoid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupsToAvoid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRequestedVelocityMaxSpeed_MetaData[];
#endif
		static void NewProp_bUseRequestedVelocityMaxSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRequestedVelocityMaxSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGMC_MovementUtilityCmp,
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_AdjustVelocityFromHitAirborne, "AdjustVelocityFromHitAirborne" }, // 2613055191
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyDeceleration, "ApplyDeceleration" }, // 3885619837
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyExternalForces, "ApplyExternalForces" }, // 286145919
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyInputVelocity, "ApplyInputVelocity" }, // 3015937276
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ApplyRotation, "ApplyRotation" }, // 1709634715
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_BotDirectMove, "BotDirectMove" }, // 3575063889
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculatePathFollowingBrakingDistance, "CalculatePathFollowingBrakingDistance" }, // 3948894191
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocity, "CalculateVelocity" }, // 2303822063
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_CalculateVelocityCustom, "CalculateVelocityCustom" }, // 161722455
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ComputeInputAcceleration, "ComputeInputAcceleration" }, // 2655272265
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_DisableMovement, "DisableMovement" }, // 4233290696
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_FindActorBase, "FindActorBase" }, // 875726969
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetAnimRootMotionTranslationScale, "GetAnimRootMotionTranslationScale" }, // 2607356489
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDeceleration, "GetBrakingDeceleration" }, // 3251355150
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetBrakingDecelerationCustom, "GetBrakingDecelerationCustom" }, // 733629300
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentFloor, "GetCurrentFloor" }, // 3910033845
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetCurrentImmersionDepth, "GetCurrentImmersionDepth" }, // 3433730794
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGMCMontageMetaData, "GetGMCMontageMetaData" }, // 8191063
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGravity, "GetGravity" }, // 1433127768
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetGroundFriction, "GetGroundFriction" }, // 2353749231
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAcceleration, "GetInputAcceleration" }, // 541319428
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetInputAccelerationCustom, "GetInputAccelerationCustom" }, // 3187316369
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetMovementMode, "GetMovementMode" }, // 2130329197
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOutermostAttachParent, "GetOutermostAttachParent" }, // 2186043744
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDeceleration, "GetOverMaxSpeedDeceleration" }, // 3254545025
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetOverMaxSpeedDecelerationCustom, "GetOverMaxSpeedDecelerationCustom" }, // 890939529
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousControlRotationSimulated, "GetPreviousControlRotationSimulated" }, // 1414720336
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetPreviousMovementModeSimulated, "GetPreviousMovementModeSimulated" }, // 956337135
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetProcessedInputVector, "GetProcessedInputVector" }, // 487295119
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetRawInputVector, "GetRawInputVector" }, // 3727146815
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_GetSkeletalMeshReference, "GetSkeletalMeshReference" }, // 577543572
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_HasRootMotion, "HasRootMotion" }, // 360136205
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_HitWalkableFloor, "HitWalkableFloor" }, // 3455047773
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAffectedByGravity, "IsAffectedByGravity" }, // 1295814720
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsAirborne, "IsAirborne" }, // 1669613833
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_IsExceedingMaxGroundedVelocityZ, "IsExceedingMaxGroundedVelocityZ" }, // 2329658188
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_LimitSpeed, "LimitSpeed" }, // 2426831501
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_MaintainDistanceToFloor, "MaintainDistanceToFloor" }, // 2027356194
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdate, "MovementUpdate" }, // 3484082320
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_MovementUpdateSimulated, "MovementUpdateSimulated" }, // 1259916867
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseRelative, "MoveWithBaseRelative" }, // 3747809635
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_MoveWithBaseVelocity, "MoveWithBaseVelocity" }, // 278187736
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_NavAgentPropsAdjustment, "NavAgentPropsAdjustment" }, // 4151699133
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChanged, "OnActorBaseChanged" }, // 2410134312
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnActorBaseChangedSimulated, "OnActorBaseChangedSimulated" }, // 1680927360
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLanded, "OnLanded" }, // 2675410914
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnLandedSimulated, "OnLandedSimulated" }, // 1662262571
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChanged, "OnMovementModeChanged" }, // 2782447294
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeChangedSimulated, "OnMovementModeChangedSimulated" }, // 3264147945
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_OnMovementModeUpdated, "OnMovementModeUpdated" }, // 315297455
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsAirborne, "PhysicsAirborne" }, // 149162973
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsBuoyant, "PhysicsBuoyant" }, // 2800382891
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsCustom, "PhysicsCustom" }, // 2243112174
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsGrounded, "PhysicsGrounded" }, // 1372395608
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PhysicsSimulationUpdate, "PhysicsSimulationUpdate" }, // 2471597390
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PlayMontageSimulated, "PlayMontageSimulated" }, // 2954209595
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostMovementUpdate, "PostMovementUpdate" }, // 3223717686
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostPhysicsUpdate, "PostPhysicsUpdate" }, // 898667321
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessAnimRootMotionVelocity, "PostProcessAnimRootMotionVelocity" }, // 605852725
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessPawnVelocity, "PostProcessPawnVelocity" }, // 1252223607
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PostProcessVelocityToImpart, "PostProcessVelocityToImpart" }, // 695797995
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreMovementUpdate, "PreMovementUpdate" }, // 572184340
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePhysicsUpdate, "PrePhysicsUpdate" }, // 2056986037
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PrePlayMontageSimulated, "PrePlayMontageSimulated" }, // 1297304501
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_PreProcessInputVector, "PreProcessInputVector" }, // 3323973393
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ReEqualizeBase, "ReEqualizeBase" }, // 2415299491
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_RootCollisionTouched, "RootCollisionTouched" }, // 642644111
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAnimRootMotionTranslationScale, "SetAnimRootMotionTranslationScale" }, // 3014309698
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetAvoidanceGroupMask, "SetAvoidanceGroupMask" }, // 931552252
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetBasedMovementSource, "SetBasedMovementSource" }, // 3292373983
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToAvoidMask, "SetGroupsToAvoidMask" }, // 4049986999
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetGroupsToIgnoreMask, "SetGroupsToIgnoreMask" }, // 1234000828
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetMovementMode, "SetMovementMode" }, // 1882620472
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetSkeletalMeshReference, "SetSkeletalMeshReference" }, // 2686611493
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorAngle, "SetWalkableFloorAngle" }, // 1443912618
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_SetWalkableFloorZ, "SetWalkableFloorZ" }, // 460772503
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldMoveGMCPawnForBaseEqualization, "ShouldMoveGMCPawnForBaseEqualization" }, // 1375050144
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_ShouldPerformDirectMove, "ShouldPerformDirectMove" }, // 3640455367
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_TraceForActorBase, "TraceForActorBase" }, // 1484568707
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_UnEqualizeBase, "UnEqualizeBase" }, // 962150687
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateImmersionDepth, "UpdateImmersionDepth" }, // 573230870
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeDynamic, "UpdateMovementModeDynamic" }, // 3743448022
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateMovementModeStatic, "UpdateMovementModeStatic" }, // 2819528131
		{ &Z_Construct_UFunction_UGMC_OrganicMovementCmp_UpdateRelativeBasedMovementTransform, "UpdateRelativeBasedMovementTransform" }, // 3716607493
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/// Movement component intended for animate actors such as humans and animals. Typically organic movement is characterized by quick acceleration to a maximum\n/// speed (where most of the movement happens) and quick deceleration to a stop again. Physical forces like air resistance are being ignored with this type of\n/// movement due to their negligible influence. This implementation is not limited to bipeds or any particular collision shape.\n" },
		{ "HideCategories", "Velocity Hidden" },
		{ "IncludePath", "Components/GMCOrganicMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movement component intended for animate actors such as humans and animals. Typically organic movement is characterized by quick acceleration to a maximum\nspeed (where most of the movement happens) and quick deceleration to a stop again. Physical forces like air resistance are being ignored with this type of\nmovement due to their negligible influence. This implementation is not limited to bipeds or any particular collision shape." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RawInputVector_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RawInputVector = { "BI_RawInputVector", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_RawInputVector), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RawInputVector_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RawInputVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionShape_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionShape = { "BI_CurrentRootCollisionShape", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_CurrentRootCollisionShape), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionShape_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionShape_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionExtent_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionExtent = { "BI_CurrentRootCollisionExtent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_CurrentRootCollisionExtent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionExtent_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionExtent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MovementMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MovementMode = { "BI_MovementMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_MovementMode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MovementMode_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MovementMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_ReceivedUpwardForce_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_ReceivedUpwardForce = { "BI_ReceivedUpwardForce", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_ReceivedUpwardForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_ReceivedUpwardForce_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_ReceivedUpwardForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_HasRootMotion_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_HasRootMotion = { "BI_HasRootMotion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_HasRootMotion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_HasRootMotion_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_HasRootMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_Montage_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_Montage = { "BI_MontageTracker_Montage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_MontageTracker_Montage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_Montage_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePosition_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePosition = { "BI_MontageTracker_MontagePosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_MontageTracker_MontagePosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePosition_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePlayRate_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePlayRate = { "BI_MontageTracker_MontagePlayRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_MontageTracker_MontagePlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePlayRate_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePaused_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePaused = { "BI_MontageTracker_MontagePaused", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_MontageTracker_MontagePaused), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePaused_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePaused_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RelBasedMovementAux_ActorBaseRotation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RelBasedMovementAux_ActorBaseRotation = { "BI_RelBasedMovementAux_ActorBaseRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BI_RelBasedMovementAux_ActorBaseRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RelBasedMovementAux_ActorBaseRotation_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RelBasedMovementAux_ActorBaseRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Reference to the skeletal mesh of the owning pawn.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Reference to the skeletal mesh of the owning pawn." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MovementMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current movement mode of the pawn. Default values: 0 = None, 1 = Grounded, 2 = Airborne, 3 = Buoyant. Supports up to 16 replicated states. Use\n/// SetMovementMode to prompt a call to OnMovementModeChanged. If you don't want the event to be triggered the movement mode can be set directly. We don't use\n/// the enum (see EGMC_MovementMode) directly for the movement mode to be able to simply bind it as half-byte for replication.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The current movement mode of the pawn. Default values: 0 = None, 1 = Grounded, 2 = Airborne, 3 = Buoyant. Supports up to 16 replicated states. Use\nSetMovementMode to prompt a call to OnMovementModeChanged. If you don't want the event to be triggered the movement mode can be set directly. We don't use\nthe enum (see EGMC_MovementMode) directly for the movement mode to be able to simply bind it as half-byte for replication." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MovementMode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MovementMode_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MovementMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentFloor_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Holds information about the floor currently located underneath the pawn. Note that the pawn does not necessarily have to be grounded for this to be valid\n/// (see FloorTraceLength).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Holds information about the floor currently located underneath the pawn. Note that the pawn does not necessarily have to be grounded for this to be valid\n(see FloorTraceLength)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentFloor = { "CurrentFloor", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, CurrentFloor), Z_Construct_UScriptStruct_FGMC_FloorParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentFloor_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentFloor_MetaData) }; // 3617363195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bReceivedUpwardForce_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn received some form of upward force that should be considered when the movement mode is updated during the next tick. This flag gets reset\n/// automatically after it was processed (see UpdateMovementModeDynamic).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether the pawn received some form of upward force that should be considered when the movement mode is updated during the next tick. This flag gets reset\nautomatically after it was processed (see UpdateMovementModeDynamic)." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bReceivedUpwardForce_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bReceivedUpwardForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bReceivedUpwardForce = { "bReceivedUpwardForce", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bReceivedUpwardForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bReceivedUpwardForce_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bReceivedUpwardForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DefaultSpeed_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Holds whatever the value of MaxDesiredSpeed was when the pawn spawned.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Holds whatever the value of MaxDesiredSpeed was when the pawn spawned." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DefaultSpeed = { "DefaultSpeed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, DefaultSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DefaultSpeed_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DefaultSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RelBasedMovementAux_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Contains auxiliary information for relative based movement.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Contains auxiliary information for relative based movement." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RelBasedMovementAux = { "RelBasedMovementAux", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, RelBasedMovementAux), Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RelBasedMovementAux_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RelBasedMovementAux_MetaData) }; // 882480794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionShape_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current collision shape of the pawn.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The current collision shape of the pawn." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionShape = { "CurrentRootCollisionShape", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, CurrentRootCollisionShape), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionShape_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionShape_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionExtent_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current extent of the pawn's root collision (unscaled).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The current extent of the pawn's root collision (unscaled)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionExtent = { "CurrentRootCollisionExtent", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, CurrentRootCollisionExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionExtent_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionExtent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RawInputVector_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The raw directional user input.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The raw directional user input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RawInputVector = { "RawInputVector", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, RawInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RawInputVector_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RawInputVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ProcessedInputVector_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The input vector that is used for all physics calculations.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The input vector that is used for all physics calculations." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ProcessedInputVector = { "ProcessedInputVector", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, ProcessedInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ProcessedInputVector_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ProcessedInputVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorZ_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Minimum Z value of the normal of a walkable surface. Computed from the walkable floor angle.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Minimum Z value of the normal of a walkable surface. Computed from the walkable floor angle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorZ = { "WalkableFloorZ", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, WalkableFloorZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorZ_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentImmersionDepth_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current immersion depth of the pawn. Range is from 0 (not in fluid) to 1 (fully immersed).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The current immersion depth of the pawn. Range is from 0 (not in fluid) to 1 (fully immersed)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentImmersionDepth = { "CurrentImmersionDepth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, CurrentImmersionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentImmersionDepth_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentImmersionDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffDirection_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The 2D direction in which the pawn should fall off a ledge when exceeding LedgeFallOffThreshold. Will be a zero vector if the pawn is currently not in the\n/// process of falling off.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The 2D direction in which the pawn should fall off a ledge when exceeding LedgeFallOffThreshold. Will be a zero vector if the pawn is currently not in the\nprocess of falling off." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffDirection = { "LedgeFallOffDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, LedgeFallOffDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffDirection_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageTracker_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Helper struct to track data from montages for prediction and replication purposes.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Helper struct to track data from montages for prediction and replication purposes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageTracker = { "MontageTracker", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MontageTracker), Z_Construct_UScriptStruct_FGMC_MontageTracker, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageTracker_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageTracker_MetaData) }; // 706984860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RootMotionParams_MetaData[] = {
		{ "Comment", "/// The root motion parameters extracted from the currently active root motion montage (if any).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The root motion parameters extracted from the currently active root motion montage (if any)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RootMotionParams = { "RootMotionParams", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, RootMotionParams), Z_Construct_UScriptStruct_FRootMotionMovementParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RootMotionParams_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RootMotionParams_MetaData) }; // 1900445241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bHasRootMotion_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether we have any root motion to consider for the current update.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether we have any root motion to consider for the current update." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bHasRootMotion_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bHasRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bHasRootMotion = { "bHasRootMotion", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bHasRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bHasRootMotion_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bHasRootMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AnimRootMotionTranslationScale_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Scaling factor applied to animation root motion translation on this pawn.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Scaling factor applied to animation root motion translation on this pawn." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, AnimRootMotionTranslationScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AnimRootMotionTranslationScale_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AnimRootMotionTranslationScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PreviousMontageSimulated_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The previously played simulated montage.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The previously played simulated montage." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PreviousMontageSimulated = { "PreviousMontageSimulated", nullptr, (EPropertyFlags)0x0024080000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, PreviousMontageSimulated), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PreviousMontageSimulated_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PreviousMontageSimulated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BlockMontageTimerSimulated_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Tracks the elapsed time to enforce the configured simulated montage timeout.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Tracks the elapsed time to enforce the configured simulated montage timeout." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BlockMontageTimerSimulated = { "BlockMontageTimerSimulated", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BlockMontageTimerSimulated), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BlockMontageTimerSimulated_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BlockMontageTimerSimulated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_EndMontageTimerSimulated_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Tracks the elapsed time to enforce the configured simulated completion tolerance.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Tracks the elapsed time to enforce the configured simulated completion tolerance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_EndMontageTimerSimulated = { "EndMontageTimerSimulated", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, EndMontageTimerSimulated), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_EndMontageTimerSimulated_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_EndMontageTimerSimulated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceUID_MetaData[] = {
		{ "Category", "RVO Avoidance" },
		{ "Comment", "/// UID generated by the avoidance manager.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "UID generated by the avoidance manager." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceUID = { "AvoidanceUID", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, AvoidanceUID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceUID_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceUID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DirectionalInput_MetaData[] = {
		{ "Category", "Movement|Input" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DirectionalInput = { "DirectionalInput", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, DirectionalInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DirectionalInput_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DirectionalInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ViewInput_MetaData[] = {
		{ "Category", "Movement|Input" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ViewInput = { "ViewInput", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, ViewInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ViewInput_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ViewInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationGrounded_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The amount of acceleration applied to the pawn by the controller's directional input when grounded.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The amount of acceleration applied to the pawn by the controller's directional input when grounded." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationGrounded = { "InputAccelerationGrounded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, InputAccelerationGrounded), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationGrounded_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationGrounded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationAirborne_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The amount of acceleration applied to the pawn by the controller's directional input when airborne.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The amount of acceleration applied to the pawn by the controller's directional input when airborne." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationAirborne = { "InputAccelerationAirborne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, InputAccelerationAirborne), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationAirborne_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationAirborne_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationBuoyant_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The amount of acceleration applied to the pawn by the controller's directional input when in a fluid volume.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The amount of acceleration applied to the pawn by the controller's directional input when in a fluid volume." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationBuoyant = { "InputAccelerationBuoyant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, InputAccelerationBuoyant), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationBuoyant_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationBuoyant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationGrounded_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How much deceleration is applied to the pawn when grounded.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How much deceleration is applied to the pawn when grounded." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationGrounded = { "BrakingDecelerationGrounded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BrakingDecelerationGrounded), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationGrounded_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationGrounded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationAirborne_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How much deceleration is applied to the pawn when airborne.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How much deceleration is applied to the pawn when airborne." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationAirborne = { "BrakingDecelerationAirborne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BrakingDecelerationAirborne), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationAirborne_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationAirborne_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationBuoyant_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How much deceleration is applied to the pawn when in a fluid volume.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How much deceleration is applied to the pawn when in a fluid volume." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationBuoyant = { "BrakingDecelerationBuoyant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BrakingDecelerationBuoyant), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationBuoyant_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationBuoyant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDesiredSpeed_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The max speed the pawn should have. When this limit is exceeded, the appropriate over-max-speed-deceleration will be applied.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The max speed the pawn should have. When this limit is exceeded, the appropriate over-max-speed-deceleration will be applied." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDesiredSpeed = { "MaxDesiredSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MaxDesiredSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDesiredSpeed_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDesiredSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationGrounded_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How much deceleration is applied when the pawn is grounded and is exceeding the max desired speed.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How much deceleration is applied when the pawn is grounded and is exceeding the max desired speed." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationGrounded = { "OverMaxSpeedDecelerationGrounded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, OverMaxSpeedDecelerationGrounded), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationGrounded_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationGrounded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationAirborne_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How much deceleration is applied when the pawn is airborne and is exceeding the max desired speed. In negative Z direction the max speed is determined by\n/// the terminal velocity of the current physics volume.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How much deceleration is applied when the pawn is airborne and is exceeding the max desired speed. In negative Z direction the max speed is determined by\nthe terminal velocity of the current physics volume." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationAirborne = { "OverMaxSpeedDecelerationAirborne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, OverMaxSpeedDecelerationAirborne), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationAirborne_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationAirborne_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationBuoyant_MetaData[] = {
		{ "Category", "Movement|Tempo" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How much deceleration is applied when the pawn is in a fluid and is exceeding the max desired speed.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How much deceleration is applied when the pawn is in a fluid and is exceeding the max desired speed." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationBuoyant = { "OverMaxSpeedDecelerationBuoyant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, OverMaxSpeedDecelerationBuoyant), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationBuoyant_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationBuoyant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FallControl_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMin", "0" },
		{ "Comment", "/// If greater than 0 airborne input acceleration will be applied in a different way to allow for more precise maneuvering. The fall control is a multiplier\n/// for the configured value of InputAccelerationAirborne and will determine how much control the pawn can exert over its XY direction while in the air and\n/// under the influence of gravity. The fall control has no effect on the deceleration behaviour (which is determined by BrakingDecelerationAirborne and\n/// OverMaxSpeedDecelerationAirborne).\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If greater than 0 airborne input acceleration will be applied in a different way to allow for more precise maneuvering. The fall control is a multiplier\nfor the configured value of InputAccelerationAirborne and will determine how much control the pawn can exert over its XY direction while in the air and\nunder the influence of gravity. The fall control has no effect on the deceleration behaviour (which is determined by BrakingDecelerationAirborne and\nOverMaxSpeedDecelerationAirborne)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FallControl = { "FallControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, FallControl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FallControl_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FallControl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToInputDirection_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "Comment", "/// When true, the pawn will smoothly rotate around the yaw axis to face the current input direction.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "When true, the pawn will smoothly rotate around the yaw axis to face the current input direction." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToInputDirection_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bOrientToInputDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToInputDirection = { "bOrientToInputDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToInputDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToInputDirection_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToInputDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToControlRotationDirection_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "Comment", "/// When true, the pawn will smoothly rotate around the yaw axis to face the current control rotation direction. This setting takes precedence over\n/// bOrientToInputDirection if both options are set.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "When true, the pawn will smoothly rotate around the yaw axis to face the current control rotation direction. This setting takes precedence over\nbOrientToInputDirection if both options are set." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToControlRotationDirection_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bOrientToControlRotationDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToControlRotationDirection = { "bOrientToControlRotationDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToControlRotationDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToControlRotationDirection_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToControlRotationDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMin", "0" },
		{ "Comment", "/// When orienting the pawn's rotation to the input or control rotation direction, this is the rate of rotation.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "When orienting the pawn's rotation to the input or control rotation direction, this is the rate of rotation." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, RotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RotationRate_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RotationRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorAngle_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Max angle in degrees of a surface the pawn can still walk on. Should only be set through SetWalkableFloorAngle.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Max angle in degrees of a surface the pawn can still walk on. Should only be set through SetWalkableFloorAngle." },
		{ "UIMax", "75" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorAngle = { "WalkableFloorAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, WalkableFloorAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorAngle_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bRescaleSlopeDelta_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "Comment", "/// If true, we will maintain the regular ground speed when walking up or down slopes by rescaling the location delta. If false, no scaling will be applied\n/// and the pawn will effectively move faster on slopes due to the additional Z component in the location delta.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, we will maintain the regular ground speed when walking up or down slopes by rescaling the location delta. If false, no scaling will be applied\nand the pawn will effectively move faster on slopes due to the additional Z component in the location delta." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bRescaleSlopeDelta_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bRescaleSlopeDelta = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bRescaleSlopeDelta = { "bRescaleSlopeDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bRescaleSlopeDelta_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bRescaleSlopeDelta_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bRescaleSlopeDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepUpHeight_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The maximum height the pawn can step up to while grounded.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The maximum height the pawn can step up to while grounded." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepUpHeight = { "MaxStepUpHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MaxStepUpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepUpHeight_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepUpHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepDownHeight_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMin", "0" },
		{ "Comment", "/// When walking down a slope or off a ledge, the pawn will remain grounded if the floor underneath is closer than this threshold.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "When walking down a slope or off a ledge, the pawn will remain grounded if the floor underneath is closer than this threshold." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepDownHeight = { "MaxStepDownHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MaxStepDownHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepDownHeight_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepDownHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxGroundedVelocityZ_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMin", "-1" },
		{ "Comment", "/// The max upward velocity the pawn should be able to absorb while grounded. While the Z velocity exceeds this value the pawn will not be able to land on the\n/// ground. Set to -1 to disable this functionality completely.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The max upward velocity the pawn should be able to absorb while grounded. While the Z velocity exceeds this value the pawn will not be able to land on the\nground. Set to -1 to disable this functionality completely." },
		{ "UIMax", "2000" },
		{ "UIMin", "500" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxGroundedVelocityZ = { "MaxGroundedVelocityZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MaxGroundedVelocityZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxGroundedVelocityZ_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxGroundedVelocityZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bCanWalkOffLedges_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "Comment", "/// Whether the pawn is able to walk off ledges which exceed the max step down height when grounded.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is able to walk off ledges which exceed the max step down height when grounded." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bCanWalkOffLedges_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bCanWalkOffLedges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bCanWalkOffLedges = { "bCanWalkOffLedges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bCanWalkOffLedges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bCanWalkOffLedges_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bCanWalkOffLedges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffThreshold_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/// When standing on a ledge the pawn will fall off if its collision shape perches further beyond the end of the ledge than the set threshold allows. This is\n/// percentage based with the center of the collision being 0 (i.e. the pawn will fall off as early as possible) and the outer boundary of the collision being\n/// 1 (i.e. the pawn will fall off as late as possible). For box collisions the threshold is internally treated as either 1 (if >= 0.5) or 0 (if < 0.5).\n" },
		{ "EditCondition", "bCanWalkOffLedges" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "When standing on a ledge the pawn will fall off if its collision shape perches further beyond the end of the ledge than the set threshold allows. This is\npercentage based with the center of the collision being 0 (i.e. the pawn will fall off as early as possible) and the outer boundary of the collision being\n1 (i.e. the pawn will fall off as late as possible). For box collisions the threshold is internally treated as either 1 (if >= 0.5) or 0 (if < 0.5)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffThreshold = { "LedgeFallOffThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, LedgeFallOffThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffThreshold_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BuoyantStateMinImmersion_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/// How deeply we need to be immersed in a fluid to enter the buoyant movement state with 1 being fully immersed in the fluid volume. The fluid volume should\n/// have the \"Physics on Contact\" flag enabled for this to work correctly.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How deeply we need to be immersed in a fluid to enter the buoyant movement state with 1 being fully immersed in the fluid volume. The fluid volume should\nhave the \"Physics on Contact\" flag enabled for this to work correctly." },
		{ "UIMax", "1" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BuoyantStateMinImmersion = { "BuoyantStateMinImmersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BuoyantStateMinImmersion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BuoyantStateMinImmersion_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BuoyantStateMinImmersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionThreshold_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/// How deeply we need to be immersed in a fluid while still grounded to experience a slow down from the fluid volume. Will be clamped if the value exceeds\n/// the buoyant state min immersion. The fluid volume should have the \"Physics on Contact\" flag enabled for this to work correctly.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How deeply we need to be immersed in a fluid while still grounded to experience a slow down from the fluid volume. Will be clamped if the value exceeds\nthe buoyant state min immersion. The fluid volume should have the \"Physics on Contact\" flag enabled for this to work correctly." },
		{ "UIMax", "1" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionThreshold = { "PartialImmersionThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, PartialImmersionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionThreshold_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionSlowDown_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Factor that determines how much slow down we experience while partially immersed in a fluid during grounded movement.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Factor that determines how much slow down we experience while partially immersed in a fluid during grounded movement." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionSlowDown = { "PartialImmersionSlowDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, PartialImmersionSlowDown), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionSlowDown_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionSlowDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FluidMinExitSpeed_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "ClampMin", "0" },
		{ "Comment", "/// When in a buoyant state this is the minimum upward speed (i.e. positive Z-velocity) the pawn needs to have to be able to exit the fluid volume. Disabling\n/// this functionality (by setting the value to 0) may cause the pawn to repeatedly switch in and out of the buoyant state when close to the water line.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "When in a buoyant state this is the minimum upward speed (i.e. positive Z-velocity) the pawn needs to have to be able to exit the fluid volume. Disabling\nthis functionality (by setting the value to 0) may cause the pawn to repeatedly switch in and out of the buoyant state when close to the water line." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FluidMinExitSpeed = { "FluidMinExitSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, FluidMinExitSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FluidMinExitSpeed_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FluidMinExitSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BasedMovement_MetaData[] = {
		{ "Category", "Movement|Operation" },
		{ "Comment", "/// Determines how movement is handled when based on another component.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Determines how movement is handled when based on another component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BasedMovement = { "BasedMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, BasedMovement), Z_Construct_UScriptStruct_FGMC_BasedMovement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BasedMovement_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BasedMovement_MetaData) }; // 1089489307
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Category", "Movement|Physics" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Scale the effects of gravity acting on this pawn by this factor. Upward gravity is not supported.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Scale the effects of gravity acting on this pawn by this factor. Upward gravity is not supported." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GravityScale_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GravityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroundFriction_MetaData[] = {
		{ "Category", "Movement|Physics" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Friction of the ground i.e. how slippery the surface is. Only applies to grounded movement.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Friction of the ground i.e. how slippery the surface is. Only applies to grounded movement." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, GroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroundFriction_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroundFriction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_Buoyancy_MetaData[] = {
		{ "Category", "Movement|Physics" },
		{ "Comment", "/// Fluid buoyancy.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Fluid buoyancy." },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_Buoyancy = { "Buoyancy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, Buoyancy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_Buoyancy_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_Buoyancy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bIgnoreInputModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// When true, input modification is ignored and we always accelerate up to the full max speed even if the analog stick is not at full tilt.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "When true, input modification is ignored and we always accelerate up to the full max speed even if the analog stick is not at full tilt." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bIgnoreInputModifier_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bIgnoreInputModifier = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bIgnoreInputModifier = { "bIgnoreInputModifier", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bIgnoreInputModifier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bIgnoreInputModifier_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bIgnoreInputModifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinAnalogWalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "1" },
		{ "Comment", "/// The walking speed that we should accelerate up to when walking at minimum analog stick tilt.\n" },
		{ "EditCondition", "!bIgnoreInputModifier" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The walking speed that we should accelerate up to when walking at minimum analog stick tilt." },
		{ "UIMin", "10" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinAnalogWalkSpeed = { "MinAnalogWalkSpeed", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MinAnalogWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinAnalogWalkSpeed_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinAnalogWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bLandOnEdges_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// If true, the contact normal of a hit will also be considered to check whether a floor is walkable when landing. This will often allow the pawn to land on\n/// hard edges that usually produce opposing impact normals.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the contact normal of a hit will also be considered to check whether a floor is walkable when landing. This will often allow the pawn to land on\nhard edges that usually produce opposing impact normals." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bLandOnEdges_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bLandOnEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bLandOnEdges = { "bLandOnEdges", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bLandOnEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bLandOnEdges_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bLandOnEdges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bSimplifyStepUp_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// If true, stepping up obstacles will be more efficient, but results may be inferior in some situations. Works best with a low max step up height.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, stepping up obstacles will be more efficient, but results may be inferior in some situations. Works best with a low max step up height." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bSimplifyStepUp_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bSimplifyStepUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bSimplifyStepUp = { "bSimplifyStepUp", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bSimplifyStepUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bSimplifyStepUp_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bSimplifyStepUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bGroundingWithoutGravity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// If false, grounded movement will be disabled when there's no gravity acting on the pawn.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If false, grounded movement will be disabled when there's no gravity acting on the pawn." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bGroundingWithoutGravity_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bGroundingWithoutGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bGroundingWithoutGravity = { "bGroundingWithoutGravity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bGroundingWithoutGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bGroundingWithoutGravity_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bGroundingWithoutGravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseSafeRotations_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// If true, safe rotations will be used during the internal movement physics. Only relevant when a flat capsule or box is used as root collision.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, safe rotations will be used during the internal movement physics. Only relevant when a flat capsule or box is used as root collision." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseSafeRotations_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bUseSafeRotations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseSafeRotations = { "bUseSafeRotations", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseSafeRotations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseSafeRotations_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseSafeRotations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorTraceLength_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How far downwards the trace should go when updating the floor.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How far downwards the trace should go when updating the floor." },
		{ "UIMin", "10" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorTraceLength = { "FloorTraceLength", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, FloorTraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorTraceLength_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorTraceLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorUpdateTolerance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How far the pawn must move to invalidate the current floor data. Setting this to 0 will cause the floor to be updated continuously.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "How far the pawn must move to invalidate the current floor data. Setting this to 0 will cause the floor to be updated continuously." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorUpdateTolerance = { "FloorUpdateTolerance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, FloorUpdateTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorUpdateTolerance_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorUpdateTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithGeometry_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Max distance allowed for depenetration when moving out of anything but pawns.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Max distance allowed for depenetration when moving out of anything but pawns." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithGeometry = { "MaxDepenetrationWithGeometry", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MaxDepenetrationWithGeometry), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithGeometry_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithGeometry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithPawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Max distance allowed for depenetration when moving out of other pawns.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Max distance allowed for depenetration when moving out of other pawns." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithPawn = { "MaxDepenetrationWithPawn", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MaxDepenetrationWithPawn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithPawn_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bDisablePoseTickOnDedicatedServer_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// If true, the pose of the skeletal mesh will never be ticked for kinematic movement on a dedicated server. This is different from merely setting the\n/// visibility based tick on the mesh to \"OnlyTickPoseWhenRendered\", which will still tick the pose for root motion montages.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the pose of the skeletal mesh will never be ticked for kinematic movement on a dedicated server. This is different from merely setting the\nvisibility based tick on the mesh to \"OnlyTickPoseWhenRendered\", which will still tick the pose for root motion montages." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bDisablePoseTickOnDedicatedServer_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bDisablePoseTickOnDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bDisablePoseTickOnDedicatedServer = { "bDisablePoseTickOnDedicatedServer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bDisablePoseTickOnDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bDisablePoseTickOnDedicatedServer_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bDisablePoseTickOnDedicatedServer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageReplication_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// The settings to use when networking montages.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The settings to use when networking montages." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageReplication = { "MontageReplication", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MontageReplication), Z_Construct_UScriptStruct_FGMC_MontageReplication, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageReplication_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageReplication_MetaData) }; // 4191041511
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bEnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// Whether the pawn should interact with physics objects in the world.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether the pawn should interact with physics objects in the world." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bEnablePhysicsInteraction_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bEnablePhysicsInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bEnablePhysicsInteraction = { "bEnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bEnablePhysicsInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bEnablePhysicsInteraction_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bEnablePhysicsInteraction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_TouchForceScale_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// Multiplier for the force that is applied to physics objects that are touched by the pawn.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Multiplier for the force that is applied to physics objects that are touched by the pawn." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_TouchForceScale = { "TouchForceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, TouchForceScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_TouchForceScale_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_TouchForceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinTouchForce_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The minimum force applied to physics objects touched by the pawn.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The minimum force applied to physics objects touched by the pawn." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinTouchForce = { "MinTouchForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MinTouchForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinTouchForce_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinTouchForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxTouchForce_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The maximum force applied to physics objects touched by the pawn.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The maximum force applied to physics objects touched by the pawn." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxTouchForce = { "MaxTouchForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, MaxTouchForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxTouchForce_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxTouchForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScaleTouchForceToMass_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// If true, TouchForceScale is applied per kilogram of mass of the affected object.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, TouchForceScale is applied per kilogram of mass of the affected object." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScaleTouchForceToMass_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bScaleTouchForceToMass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScaleTouchForceToMass = { "bScaleTouchForceToMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScaleTouchForceToMass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScaleTouchForceToMass_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScaleTouchForceToMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceScale_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// Multiplier for the force that is applied when the player collides with a blocking physics object.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Multiplier for the force that is applied when the player collides with a blocking physics object." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceScale = { "PushForceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, PushForceScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceScale_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InitialPushForceScale_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// Multiplier for the initial impulse force applied when the pawn bounces into a blocking physics object.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Multiplier for the initial impulse force applied when the pawn bounces into a blocking physics object." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InitialPushForceScale = { "InitialPushForceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, InitialPushForceScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InitialPushForceScale_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InitialPushForceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToMass_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// If true, PushForceScale is applied per kilogram of mass of the affected object.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, PushForceScale is applied per kilogram of mass of the affected object." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToMass_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bScalePushForceToMass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToMass = { "bScalePushForceToMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToMass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToMass_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToVelocity_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// If true, the applied push force will try to get the touched physics object to the same velocity as the pawn, not faster. This will only ever scale the\n/// force down and will never apply more force than calculated with regard to PushForceScale.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the applied push force will try to get the touched physics object to the same velocity as the pawn, not faster. This will only ever scale the\nforce down and will never apply more force than calculated with regard to PushForceScale." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToVelocity_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bScalePushForceToVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToVelocity = { "bScalePushForceToVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToVelocity_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUsePushForceZOffset_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// If true, the push force location is adjusted using PushForceZOffsetFactor. If false, the impact point is used.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the push force location is adjusted using PushForceZOffsetFactor. If false, the impact point is used." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUsePushForceZOffset_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bUsePushForceZOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUsePushForceZOffset = { "bUsePushForceZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUsePushForceZOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUsePushForceZOffset_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUsePushForceZOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceZOffsetFactor_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// Z-offset for the location the force is applied to the touched physics object (0 = center, 1 = top, -1 = bottom).\n" },
		{ "EditCondition", "bEnablePhysicsInteraction && bUsePushForceZOffset" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Z-offset for the location the force is applied to the touched physics object (0 = center, 1 = top, -1 = bottom)." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceZOffsetFactor = { "PushForceZOffsetFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, PushForceZOffsetFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceZOffsetFactor_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceZOffsetFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DownwardForceScale_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "Comment", "/// Multiplier for the gravity force applied to physics objects the pawn is walking on.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Multiplier for the gravity force applied to physics objects the pawn is walking on." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DownwardForceScale = { "DownwardForceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, DownwardForceScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DownwardForceScale_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DownwardForceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RepulsionForce_MetaData[] = {
		{ "Category", "Physics Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The force applied constantly per kilogram of mass of the pawn to all overlapping components.\n" },
		{ "EditCondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The force applied constantly per kilogram of mass of the pawn to all overlapping components." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RepulsionForce = { "RepulsionForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, RepulsionForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RepulsionForce_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RepulsionForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseAvoidance_MetaData[] = {
		{ "Category", "RVO Avoidance" },
		{ "Comment", "/// Whether avoidance should be used for bots.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Whether avoidance should be used for bots." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseAvoidance_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bUseAvoidance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseAvoidance = { "bUseAvoidance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseAvoidance_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseAvoidance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceWeight_MetaData[] = {
		{ "Category", "RVO Avoidance" },
		{ "Comment", "/// Indicates RVO behavior.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "Indicates RVO behavior." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceWeight = { "AvoidanceWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, AvoidanceWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceWeight_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceConsiderationRadius_MetaData[] = {
		{ "Category", "RVO Avoidance" },
		{ "Comment", "/// The radius around the pawn for which to consider avoidance of other agents.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "The radius around the pawn for which to consider avoidance of other agents." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceConsiderationRadius = { "AvoidanceConsiderationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, AvoidanceConsiderationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceConsiderationRadius_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceConsiderationRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceGroup_MetaData[] = {
		{ "Category", "RVO Avoidance" },
		{ "Comment", "/// This pawn's avoidance group.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "This pawn's avoidance group." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceGroup = { "AvoidanceGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, AvoidanceGroup), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceGroup_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceGroup_MetaData) }; // 4080258831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToAvoid_MetaData[] = {
		{ "Category", "RVO Avoidance" },
		{ "Comment", "/// This pawn will avoid other agents that belong to one of the groups specified in the mask.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "This pawn will avoid other agents that belong to one of the groups specified in the mask." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToAvoid = { "GroupsToAvoid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, GroupsToAvoid), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToAvoid_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToAvoid_MetaData) }; // 4080258831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToIgnore_MetaData[] = {
		{ "Category", "RVO Avoidance" },
		{ "Comment", "/// This pawn will ignore other agents that belong to one of the groups specified in the mask.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "This pawn will ignore other agents that belong to one of the groups specified in the mask." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToIgnore = { "GroupsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_OrganicMovementCmp, GroupsToIgnore), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToIgnore_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToIgnore_MetaData) }; // 4080258831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseRequestedVelocityMaxSpeed_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "Comment", "/// If true, the magnitude of the requested velocity will be used as max speed for direct bot movement.\n" },
		{ "DisplayAfter", "bUseFixedBrakingDistanceForPaths" },
		{ "ModuleRelativePath", "Public/Components/GMCOrganicMovementComponent.h" },
		{ "ToolTip", "If true, the magnitude of the requested velocity will be used as max speed for direct bot movement." },
	};
#endif
	void Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseRequestedVelocityMaxSpeed_SetBit(void* Obj)
	{
		((UGMC_OrganicMovementCmp*)Obj)->bUseRequestedVelocityMaxSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseRequestedVelocityMaxSpeed = { "bUseRequestedVelocityMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_OrganicMovementCmp), &Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseRequestedVelocityMaxSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseRequestedVelocityMaxSpeed_MetaData), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseRequestedVelocityMaxSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RawInputVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_CurrentRootCollisionExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_ReceivedUpwardForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_HasRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_MontageTracker_MontagePaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BI_RelBasedMovementAux_ActorBaseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bReceivedUpwardForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DefaultSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RelBasedMovementAux,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentRootCollisionExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RawInputVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ProcessedInputVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_CurrentImmersionDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RootMotionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bHasRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PreviousMontageSimulated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BlockMontageTimerSimulated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_EndMontageTimerSimulated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DirectionalInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_ViewInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationGrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationAirborne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InputAccelerationBuoyant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationGrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationAirborne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BrakingDecelerationBuoyant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDesiredSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationGrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationAirborne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_OverMaxSpeedDecelerationBuoyant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FallControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToInputDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bOrientToControlRotationDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_WalkableFloorAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bRescaleSlopeDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepUpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxStepDownHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxGroundedVelocityZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bCanWalkOffLedges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_LedgeFallOffThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BuoyantStateMinImmersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PartialImmersionSlowDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FluidMinExitSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_BasedMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroundFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_Buoyancy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bIgnoreInputModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinAnalogWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bLandOnEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bSimplifyStepUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bGroundingWithoutGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseSafeRotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_FloorUpdateTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxDepenetrationWithPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bDisablePoseTickOnDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MontageReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bEnablePhysicsInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_TouchForceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MinTouchForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_MaxTouchForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScaleTouchForceToMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_InitialPushForceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bScalePushForceToVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUsePushForceZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_PushForceZOffsetFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_DownwardForceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_RepulsionForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseAvoidance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceConsiderationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_AvoidanceGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToAvoid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_GroupsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::NewProp_bUseRequestedVelocityMaxSpeed,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URVOAvoidanceInterface_NoRegister, (int32)VTABLE_OFFSET(UGMC_OrganicMovementCmp, IRVOAvoidanceInterface), false },  // 1531756587
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_OrganicMovementCmp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::ClassParams = {
		&UGMC_OrganicMovementCmp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGMC_OrganicMovementCmp()
	{
		if (!Z_Registration_Info_UClass_UGMC_OrganicMovementCmp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_OrganicMovementCmp.OuterSingleton, Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGMC_OrganicMovementCmp.OuterSingleton;
	}
	template<> GMCCORE_API UClass* StaticClass<UGMC_OrganicMovementCmp>()
	{
		return UGMC_OrganicMovementCmp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_OrganicMovementCmp);
	UGMC_OrganicMovementCmp::~UGMC_OrganicMovementCmp() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics::EnumInfo[] = {
		{ EGMC_MovementMode_StaticEnum, TEXT("EGMC_MovementMode"), &Z_Registration_Info_UEnum_EGMC_MovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3092782939U) },
		{ EGMC_BasedMovementSource_StaticEnum, TEXT("EGMC_BasedMovementSource"), &Z_Registration_Info_UEnum_EGMC_BasedMovementSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3833440242U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics::ScriptStructInfo[] = {
		{ FGMC_BasedMovementVelocity::StaticStruct, Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics::NewStructOps, TEXT("GMC_BasedMovementVelocity"), &Z_Registration_Info_UScriptStruct_GMC_BasedMovementVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_BasedMovementVelocity), 4129117451U) },
		{ FGMC_BasedMovementRelative::StaticStruct, Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics::NewStructOps, TEXT("GMC_BasedMovementRelative"), &Z_Registration_Info_UScriptStruct_GMC_BasedMovementRelative, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_BasedMovementRelative), 2801556738U) },
		{ FGMC_BasedMovement::StaticStruct, Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics::NewStructOps, TEXT("GMC_BasedMovement"), &Z_Registration_Info_UScriptStruct_GMC_BasedMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_BasedMovement), 1089489307U) },
		{ FGMC_RelBasedMovementAux::StaticStruct, Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics::NewStructOps, TEXT("GMC_RelBasedMovementAux"), &Z_Registration_Info_UScriptStruct_GMC_RelBasedMovementAux, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_RelBasedMovementAux), 882480794U) },
		{ FGMC_MontagePrediction::StaticStruct, Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics::NewStructOps, TEXT("GMC_MontagePrediction"), &Z_Registration_Info_UScriptStruct_GMC_MontagePrediction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_MontagePrediction), 1993316795U) },
		{ FGMC_MontageSimulation::StaticStruct, Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics::NewStructOps, TEXT("GMC_MontageSimulation"), &Z_Registration_Info_UScriptStruct_GMC_MontageSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_MontageSimulation), 2293878105U) },
		{ FGMC_MontageReplication::StaticStruct, Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics::NewStructOps, TEXT("GMC_MontageReplication"), &Z_Registration_Info_UScriptStruct_GMC_MontageReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_MontageReplication), 4191041511U) },
		{ FGMC_RootMotionExtractionSettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics::NewStructOps, TEXT("GMC_RootMotionExtractionSettings"), &Z_Registration_Info_UScriptStruct_GMC_RootMotionExtractionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_RootMotionExtractionSettings), 1591314101U) },
		{ FGMC_RootMotionVelocitySettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics::NewStructOps, TEXT("GMC_RootMotionVelocitySettings"), &Z_Registration_Info_UScriptStruct_GMC_RootMotionVelocitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_RootMotionVelocitySettings), 1280216714U) },
		{ FGMC_SimulationSettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics::NewStructOps, TEXT("GMC_SimulationSettings"), &Z_Registration_Info_UScriptStruct_GMC_SimulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_SimulationSettings), 3886988572U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGMC_MontageMetaData, UGMC_MontageMetaData::StaticClass, TEXT("UGMC_MontageMetaData"), &Z_Registration_Info_UClass_UGMC_MontageMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_MontageMetaData), 780910007U) },
		{ Z_Construct_UClass_UGMC_OrganicMovementCmp, UGMC_OrganicMovementCmp::StaticClass, TEXT("UGMC_OrganicMovementCmp"), &Z_Registration_Info_UClass_UGMC_OrganicMovementCmp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_OrganicMovementCmp), 2325161062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_100335630(TEXT("/Script/GMCCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
