// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGProceduralAnim/Public/DataTypes/SKGProceduralDataTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGProceduralDataTypes() {}
// Cross Module References
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMinMax_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMinMax>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMinMax, Min), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Min_MetaData), Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Min_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMinMax, Max), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Max_MetaData), Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Max_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMinMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewProp_Max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMinMax_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMinMax_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGMinMax()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGMinMax.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMinMax.InnerSingleton, Z_Construct_UScriptStruct_FSKGMinMax_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGMinMax.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpringInterp_MetaData[];
#endif
		static void NewProp_bUseSpringInterp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpringInterp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDampingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDampingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVelocityAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLeanLeftAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLeanLeftAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLeanRightAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLeanRightAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGLeanLeftRightSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Whether or not to use movement sway (such as idle breathing and walking sway)\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Whether or not to use movement sway (such as idle breathing and walking sway)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp_SetBit(void* Obj)
	{
		((FSKGLeanLeftRightSettings*)Obj)->bUseSpringInterp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp = { "bUseSpringInterp", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGLeanLeftRightSettings), &Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp_MetaData), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_bUseSpringInterp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Stiffness_MetaData), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Stiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_CriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_CriticalDampingFactor = { "CriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, CriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_CriticalDampingFactor_MetaData), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_CriticalDampingFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Mass_MetaData), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_Mass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_TargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_TargetVelocityAmount = { "TargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, TargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_TargetVelocityAmount_MetaData), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_TargetVelocityAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "!bUseSpringInterp" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_InterpSpeed_MetaData), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_InterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanLeftAngle_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanLeftAngle = { "MaxLeanLeftAngle", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, MaxLeanLeftAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanLeftAngle_MetaData), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanLeftAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanRightAngle_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanRightAngle = { "MaxLeanRightAngle", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLeanLeftRightSettings, MaxLeanRightAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanRightAngle_MetaData), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewProp_MaxLeanRightAngle_MetaData) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationCriticalDampingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationCriticalDampingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationTargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationTargetVelocityAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCriticalDampingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationCriticalDampingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationTargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationTargetVelocityAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCycleAimingPointSpringInterpSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationStiffness = { "LocationStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, LocationStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationStiffness_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationCriticalDampingFactor = { "LocationCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, LocationCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationCriticalDampingFactor_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationCriticalDampingFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationMass = { "LocationMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, LocationMass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationMass_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationTargetVelocityAmount = { "LocationTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, LocationTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationTargetVelocityAmount_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_LocationTargetVelocityAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationStiffness = { "RotationStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, RotationStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationStiffness_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationCriticalDampingFactor = { "RotationCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, RotationCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationCriticalDampingFactor_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationCriticalDampingFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationMass = { "RotationMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, RotationMass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationMass_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationTargetVelocityAmount = { "RotationTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSpringInterpSettings, RotationTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationTargetVelocityAmount_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewProp_RotationTargetVelocityAmount_MetaData) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpringInterpForCyclingAimingPoint_MetaData[];
#endif
		static void NewProp_bUseSpringInterpForCyclingAimingPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpringInterpForCyclingAimingPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringInterpSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringInterpSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Settings used for when changing aiming points (such as going from one optic to another for aiming, or point aiming)\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Settings used for when changing aiming points (such as going from one optic to another for aiming, or point aiming)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCycleAimingPointSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint_SetBit(void* Obj)
	{
		((FSKGCycleAimingPointSettings*)Obj)->bUseSpringInterpForCyclingAimingPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint = { "bUseSpringInterpForCyclingAimingPoint", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGCycleAimingPointSettings), &Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_SpringInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseSpringInterpForCyclingAimingPoint" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_SpringInterpSettings = { "SpringInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCycleAimingPointSettings, SpringInterpSettings), Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_SpringInterpSettings_MetaData), Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_SpringInterpSettings_MetaData) }; // 3435783163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_bUseSpringInterpForCyclingAimingPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewProp_SpringInterpSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierInterpolationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplierInterpolationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMovementSwayLocationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// How much to add/reduce the sway provided from the movement sway curve\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "How much to add/reduce the sway provided from the movement sway curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwayLocationSettings, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Multiplier_MetaData), Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Multiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_MultiplierInterpolationRate_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// How fast it will interpolate to the new sway multiplier\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "How fast it will interpolate to the new sway multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_MultiplierInterpolationRate = { "MultiplierInterpolationRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwayLocationSettings, MultiplierInterpolationRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_MultiplierInterpolationRate_MetaData), Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_MultiplierInterpolationRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwayLocationSettings, Curve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Curve_MetaData), Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Curve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// The speed in which it interpolates to a new value in the curve\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "The speed in which it interpolates to a new value in the curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwayLocationSettings, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_InterpSpeed_MetaData), Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_InterpSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_MultiplierInterpolationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewProp_InterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMovementSway_MetaData[];
#endif
		static void NewProp_bUseMovementSway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMovementSway;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMovementSwaySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Whether or not to use movement sway (such as idle breathing and walking sway)\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Whether or not to use movement sway (such as idle breathing and walking sway)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway_SetBit(void* Obj)
	{
		((FSKGMovementSwaySettings*)Obj)->bUseMovementSway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway = { "bUseMovementSway", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGMovementSwaySettings), &Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway_MetaData), Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_LocationSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementSway" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_LocationSettings = { "LocationSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwaySettings, LocationSettings), Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_LocationSettings_MetaData), Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_LocationSettings_MetaData) }; // 4224813775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_RotationSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementSway" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_RotationSettings = { "RotationSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementSwaySettings, RotationSettings), Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_RotationSettings_MetaData), Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_RotationSettings_MetaData) }; // 4224813775
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_bUseMovementSway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_LocationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewProp_RotationSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementSwaySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringCriticalDampingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringCriticalDampingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringTargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringTargetVelocityAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMovementLagSpringInterpSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSpringInterpSettings, SpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringStiffness_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringCriticalDampingFactor = { "SpringCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSpringInterpSettings, SpringCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringCriticalDampingFactor_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringCriticalDampingFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringMass = { "SpringMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSpringInterpSettings, SpringMass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringMass_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringTargetVelocityAmount = { "SpringTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSpringInterpSettings, SpringTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringTargetVelocityAmount_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringTargetVelocityAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringCriticalDampingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewProp_SpringTargetVelocityAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMovementLag_MetaData[];
#endif
		static void NewProp_bUseMovementLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMovementLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpringInterpolation_MetaData[];
#endif
		static void NewProp_bUseSpringInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpringInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringInterpSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringInterpSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftRightMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftRightMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpDownMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpDownMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMovementLagSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag_SetBit(void* Obj)
	{
		((FSKGMovementLagSettings*)Obj)->bUseMovementLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag = { "bUseMovementLag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGMovementLagSettings), &Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation_SetBit(void* Obj)
	{
		((FSKGMovementLagSettings*)Obj)->bUseSpringInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation = { "bUseSpringInterpolation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGMovementLagSettings), &Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_SpringInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementLag && bUseSpringInterpolation" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_SpringInterpSettings = { "SpringInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, SpringInterpSettings), Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_SpringInterpSettings_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_SpringInterpSettings_MetaData) }; // 3858978446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_LeftRightMax_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// The max amount the procedurals will move left/right\n" },
		{ "EditCondition", "bUseMovementLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "The max amount the procedurals will move left/right" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_LeftRightMax = { "LeftRightMax", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, LeftRightMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_LeftRightMax_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_LeftRightMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_UpDownMax_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// The max amount the procedurals will move up/down\n" },
		{ "EditCondition", "bUseMovementLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "The max amount the procedurals will move up/down" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_UpDownMax = { "UpDownMax", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, UpDownMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_UpDownMax_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_UpDownMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, Multiplier), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_Multiplier_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_Multiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseMovementLag && !bUseSpringInterpolation" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMovementLagSettings, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_InterpSpeed_MetaData), Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_InterpSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseMovementLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_bUseSpringInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_SpringInterpSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_LeftRightMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_UpDownMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewProp_InterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementLagSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGMovementLagSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMovementLagSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGMovementLagSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpringCriticalDampingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpringCriticalDampingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpringMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpringMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpringTargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpringTargetVelocityAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationSpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationSpringCriticalDampingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpringCriticalDampingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationSpringMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpringMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationSpringTargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpringTargetVelocityAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGRotationLagSpringInterpSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringStiffness = { "RotationSpringStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, RotationSpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringStiffness_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringCriticalDampingFactor = { "RotationSpringCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, RotationSpringCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringCriticalDampingFactor_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringCriticalDampingFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringMass = { "RotationSpringMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, RotationSpringMass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringMass_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringTargetVelocityAmount = { "RotationSpringTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, RotationSpringTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringTargetVelocityAmount_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_RotationSpringTargetVelocityAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringStiffness_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringStiffness = { "LocationSpringStiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, LocationSpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringStiffness_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringCriticalDampingFactor_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringCriticalDampingFactor = { "LocationSpringCriticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, LocationSpringCriticalDampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringCriticalDampingFactor_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringCriticalDampingFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringMass_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringMass = { "LocationSpringMass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, LocationSpringMass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringMass_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringTargetVelocityAmount_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringTargetVelocityAmount = { "LocationSpringTargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSpringInterpSettings, LocationSpringTargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringTargetVelocityAmount_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewProp_LocationSpringTargetVelocityAmount_MetaData) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGRotationLagInterpSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagInterpSettings, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_RotationInterpSpeed_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_RotationInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_LocationInterpSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_LocationInterpSpeed = { "LocationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagInterpSettings, LocationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_LocationInterpSpeed_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_LocationInterpSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_RotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewProp_LocationInterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRotationLag_MetaData[];
#endif
		static void NewProp_bUseRotationLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRotationLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpringInterpolation_MetaData[];
#endif
		static void NewProp_bUseSpringInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpringInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringInterpSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringInterpSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGRotationLagSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag_SetBit(void* Obj)
	{
		((FSKGRotationLagSettings*)Obj)->bUseRotationLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag = { "bUseRotationLag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGRotationLagSettings), &Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// I advise this to be false if you are using deadzone, in my opinion it gives a better result\n" },
		{ "EditCondition", "bUseRotationLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "I advise this to be false if you are using deadzone, in my opinion it gives a better result" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation_SetBit(void* Obj)
	{
		((FSKGRotationLagSettings*)Obj)->bUseSpringInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation = { "bUseSpringInterpolation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGRotationLagSettings), &Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_SpringInterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseRotationLag && bUseSpringInterpolation" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_SpringInterpSettings = { "SpringInterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, SpringInterpSettings), Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_SpringInterpSettings_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_SpringInterpSettings_MetaData) }; // 2124383124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_InterpSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseRotationLag && !bUseSpringInterpolation" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_InterpSettings = { "InterpSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, InterpSettings), Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_InterpSettings_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_InterpSettings_MetaData) }; // 3382707593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_MaxRotation_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseRotationLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_MaxRotation = { "MaxRotation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, MaxRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_MaxRotation_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_MaxRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_RotationMultiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Default in BP: X = Roll, Y = Pitch, Z = Yaw\n" },
		{ "EditCondition", "bUseRotationLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Default in BP: X = Roll, Y = Pitch, Z = Yaw" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_RotationMultiplier = { "RotationMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, RotationMultiplier), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_RotationMultiplier_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_RotationMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_LocationMultiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseRotationLag" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_LocationMultiplier = { "LocationMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRotationLagSettings, LocationMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_LocationMultiplier_MetaData), Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_LocationMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseRotationLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_bUseSpringInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_SpringInterpSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_InterpSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_MaxRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_RotationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewProp_LocationMultiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGRotationLagSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGRotationLagSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGRotationLagSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlRotationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlPitchRandom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPitchRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlYawRandom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlYawRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRollRandom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRollRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInterpToNoneSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationInterpToNoneSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XRandom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YRandom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZRandom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpToNoneSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpToNoneSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRandom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRandom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollRandom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollRandom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGRecoilSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRotationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRotationCurve = { "ControlRotationCurve", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ControlRotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRotationCurve_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRotationCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlPitchRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilControlRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlPitchRandom = { "ControlPitchRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ControlPitchRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlPitchRandom_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlPitchRandom_MetaData) }; // 1418165916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlYawRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilControlRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlYawRandom = { "ControlYawRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ControlYawRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlYawRandom_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlYawRandom_MetaData) }; // 1418165916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRollRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilControlRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRollRandom = { "ControlRollRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ControlRollRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRollRandom_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ControlRollRandom_MetaData) }; // 1418165916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationCurve = { "LocationCurve", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, LocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationCurve_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationInterpToNoneSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilLocationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationInterpToNoneSpeed = { "LocationInterpToNoneSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, LocationInterpToNoneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationInterpToNoneSpeed_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_LocationInterpToNoneSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_XRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilLocationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_XRandom = { "XRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, XRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_XRandom_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_XRandom_MetaData) }; // 1418165916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilLocationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YRandom = { "YRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, YRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YRandom_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YRandom_MetaData) }; // 1418165916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ZRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilLocationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ZRandom = { "ZRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, ZRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ZRandom_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_ZRandom_MetaData) }; // 1418165916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, RotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationCurve_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationInterpToNoneSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationInterpToNoneSpeed = { "RotationInterpToNoneSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, RotationInterpToNoneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationInterpToNoneSpeed_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RotationInterpToNoneSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_PitchRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_PitchRandom = { "PitchRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, PitchRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_PitchRandom_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_PitchRandom_MetaData) }; // 1418165916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YawRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YawRandom = { "YawRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, YawRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YawRandom_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_YawRandom_MetaData) }; // 1418165916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RollRandom_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "RecoilRotationCurve != nullptr" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RollRandom = { "RollRandom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGRecoilSettings, RollRandom), Z_Construct_UScriptStruct_FSKGMinMax, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RollRandom_MetaData), Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewProp_RollRandom_MetaData) }; // 1418165916
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGRecoilSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGRecoilSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGRecoilSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGRecoilSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedAimingDistance_MetaData[];
#endif
		static void NewProp_bUseFixedAimingDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedAimingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAim_MetaData[];
#endif
		static void NewProp_bCanAim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProceduralAimingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_ForwardAxis_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "/*\n\x09 * The forward axis of the firearm (NOT the attachment) which is used for correcting the aiming distance\n\x09 * and it must be set on all attachments used to aim\n\x09*/" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "* The forward axis of the firearm (NOT the attachment) which is used for correcting the aiming distance\n* and it must be set on all attachments used to aim" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralAimingSettings, ForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_ForwardAxis_MetaData), Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_ForwardAxis_MetaData) }; // 1662690994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_AimingDistance_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// The higher the value the further the aim point will be from your camera\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "The higher the value the further the aim point will be from your camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_AimingDistance = { "AimingDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralAimingSettings, AimingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_AimingDistance_MetaData), Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_AimingDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "/*\n\x09 * If true, the position of the aim point is discarded and will the aim point to be exactly\n\x09 * the AimingDistance behind the camera\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "* If true, the position of the aim point is discarded and will the aim point to be exactly\n* the AimingDistance behind the camera" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance_SetBit(void* Obj)
	{
		((FSKGProceduralAimingSettings*)Obj)->bUseFixedAimingDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance = { "bUseFixedAimingDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProceduralAimingSettings), &Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance_MetaData), Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// If false, this aiming device will not be used when cycling aiming devices\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "If false, this aiming device will not be used when cycling aiming devices" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim_SetBit(void* Obj)
	{
		((FSKGProceduralAimingSettings*)Obj)->bCanAim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim = { "bCanAim", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGProceduralAimingSettings), &Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim_MetaData), Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_ForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_AimingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bUseFixedAimingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewProp_bCanAim,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralAimingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeadzone_MetaData[];
#endif
		static void NewProp_bUseDeadzone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeadzone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDeadzoneWhenAiming_MetaData[];
#endif
		static void NewProp_bDisableDeadzoneWhenAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDeadzoneWhenAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadzoneAimingDisableInterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadzoneAimingDisableInterpolationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGDeadzoneSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone_SetBit(void* Obj)
	{
		((FSKGDeadzoneSettings*)Obj)->bUseDeadzone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone = { "bUseDeadzone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGDeadzoneSettings), &Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone_MetaData), Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bUseDeadzone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchRate_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchRate = { "PitchRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, PitchRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchRate_MetaData), Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawRate_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawRate = { "YawRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, YawRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawRate_MetaData), Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchLimit_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchLimit = { "PitchLimit", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, PitchLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchLimit_MetaData), Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_PitchLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawLimit_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawLimit = { "YawLimit", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, YawLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawLimit_MetaData), Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_YawLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_InterpolationSpeed_MetaData), Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_InterpolationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming_SetBit(void* Obj)
	{
		((FSKGDeadzoneSettings*)Obj)->bDisableDeadzoneWhenAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming = { "bDisableDeadzoneWhenAiming", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGDeadzoneSettings), &Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming_MetaData), Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_bDisableDeadzoneWhenAiming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_DeadzoneAimingDisableInterpolationSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bUseDeadzone && bDisableDeadzoneWhenAiming" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_DeadzoneAimingDisableInterpolationSpeed = { "DeadzoneAimingDisableInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDeadzoneSettings, DeadzoneAimingDisableInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_DeadzoneAimingDisableInterpolationSpeed_MetaData), Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewProp_DeadzoneAimingDisableInterpolationSpeed_MetaData) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGDeadzoneSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGProceduralOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralOffset, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGProceduralOffset, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Rotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGProceduralOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGProceduralOffset.InnerSingleton, Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGProceduralOffset.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPersonOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGFirstAndThirdPersonBasePoseOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_FirstPersonOffset_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_FirstPersonOffset = { "FirstPersonOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirstAndThirdPersonBasePoseOffset, FirstPersonOffset), Z_Construct_UScriptStruct_FSKGProceduralOffset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_FirstPersonOffset_MetaData), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_FirstPersonOffset_MetaData) }; // 1088130921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_ThirdPersonOffset_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_ThirdPersonOffset = { "ThirdPersonOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirstAndThirdPersonBasePoseOffset, ThirdPersonOffset), Z_Construct_UScriptStruct_FSKGProceduralOffset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_ThirdPersonOffset_MetaData), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_ThirdPersonOffset_MetaData) }; // 1088130921
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_FirstPersonOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewProp_ThirdPersonOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset.InnerSingleton, Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveEndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_LocationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_LocationCurve = { "LocationCurve", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurve, LocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_LocationCurve_MetaData), Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_LocationCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_RotationCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurve, RotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_RotationCurve_MetaData), Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_RotationCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Rate/Speed at which the curves play\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Rate/Speed at which the curves play" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurve, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_CurveEndTime_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "/**\n\x09 * Time for when the curve is finished. For example, if your in high port and going back to\n\x09 * none (normal idle curve with firearm), your CurveEndTime should be the Time in the curve\n\x09 * in which the Values in the CurveLocation AND CurveRotation are 0\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Time for when the curve is finished. For example, if your in high port and going back to\nnone (normal idle curve with firearm), your CurveEndTime should be the Time in the curve\nin which the Values in the CurveLocation AND CurveRotation are 0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_CurveEndTime = { "CurveEndTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurve, CurveEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_CurveEndTime_MetaData), Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_CurveEndTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_LocationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_RotationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurve_Statics::NewProp_CurveEndTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCurve_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurve_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCurve.InnerSingleton, Z_Construct_UScriptStruct_FSKGCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGCurve.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPersonCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGFirstAndThirdPersonCurveSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_FirstPersonCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_FirstPersonCurve = { "FirstPersonCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirstAndThirdPersonCurveSettings, FirstPersonCurve), Z_Construct_UScriptStruct_FSKGCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_FirstPersonCurve_MetaData), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_FirstPersonCurve_MetaData) }; // 3052521996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_ThirdPersonCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_ThirdPersonCurve = { "ThirdPersonCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFirstAndThirdPersonCurveSettings, ThirdPersonCurve), Z_Construct_UScriptStruct_FSKGCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_ThirdPersonCurve_MetaData), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_ThirdPersonCurve_MetaData) }; // 3052521996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_FirstPersonCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewProp_ThirdPersonCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolate_MetaData[];
#endif
		static void NewProp_bInterpolate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeedMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGToFromCurveSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_ToCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Going from none to the curve\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Going from none to the curve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_ToCurve = { "ToCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, ToCurve), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_ToCurve_MetaData), Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_ToCurve_MetaData) }; // 2799564674
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_FromCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Going from the curve to none\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Going from the curve to none" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_FromCurve = { "FromCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, FromCurve), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_FromCurve_MetaData), Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_FromCurve_MetaData) }; // 2799564674
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_CurveTag_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Tag for this curve. This is used to recognize what curve this is.\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Tag for this curve. This is used to recognize what curve this is." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_CurveTag = { "CurveTag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, CurveTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_CurveTag_MetaData), Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_CurveTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// True will interpolate the curve (not follow the graph strictly, but add some additional blending\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "True will interpolate the curve (not follow the graph strictly, but add some additional blending" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate_SetBit(void* Obj)
	{
		((FSKGToFromCurveSettings*)Obj)->bInterpolate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGToFromCurveSettings), &Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate_MetaData), Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Will interpolate for the first X amount of time before it stops interpolation\n" },
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Will interpolate for the first X amount of time before it stops interpolation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, InterpolationTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationTime_MetaData), Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Speed as which the curve is interpolated between. This will allow for some general smoothing while following the curve\n" },
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Speed as which the curve is interpolated between. This will allow for some general smoothing while following the curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeed_MetaData), Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeedMultiplier_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeedMultiplier = { "InterpolationSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGToFromCurveSettings, InterpolationSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeedMultiplier_MetaData), Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeedMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_ToCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_FromCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_CurveTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_bInterpolate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewProp_InterpolationSpeedMultiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGToFromCurveSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateCurve_MetaData[];
#endif
		static void NewProp_bReplicateCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReliable_MetaData[];
#endif
		static void NewProp_bReliable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReliable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCurveReplicationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// True replicate the playing of the curve\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "True replicate the playing of the curve" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve_SetBit(void* Obj)
	{
		((FSKGCurveReplicationSettings*)Obj)->bReplicateCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve = { "bReplicateCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGCurveReplicationSettings), &Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve_MetaData), Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "EditCondition", "bReplicateCurve" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable_SetBit(void* Obj)
	{
		((FSKGCurveReplicationSettings*)Obj)->bReliable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable = { "bReliable", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGCurveReplicationSettings), &Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable_MetaData), Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReplicateCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewProp_bReliable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGCurveReplicationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGCurveSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Going from none to the curve\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Going from none to the curve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurveSettings, Curve), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_Curve_MetaData), Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_Curve_MetaData) }; // 2799564674
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_ReplicationSettings_MetaData[] = {
		{ "Category", "SKGProcedural" },
		{ "Comment", "// Replication settings for playing the curve (Not replicated by default)\n" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGProceduralDataTypes.h" },
		{ "ToolTip", "Replication settings for playing the curve (Not replicated by default)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_ReplicationSettings = { "ReplicationSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGCurveSettings, ReplicationSettings), Z_Construct_UScriptStruct_FSKGCurveReplicationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_ReplicationSettings_MetaData), Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_ReplicationSettings_MetaData) }; // 1681841302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewProp_ReplicationSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGCurveSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGCurveSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGCurveSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGCurveSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_DataTypes_SKGProceduralDataTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_DataTypes_SKGProceduralDataTypes_h_Statics::ScriptStructInfo[] = {
		{ FSKGMinMax::StaticStruct, Z_Construct_UScriptStruct_FSKGMinMax_Statics::NewStructOps, TEXT("SKGMinMax"), &Z_Registration_Info_UScriptStruct_SKGMinMax, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMinMax), 1418165916U) },
		{ FSKGLeanLeftRightSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings_Statics::NewStructOps, TEXT("SKGLeanLeftRightSettings"), &Z_Registration_Info_UScriptStruct_SKGLeanLeftRightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGLeanLeftRightSettings), 2183493425U) },
		{ FSKGCycleAimingPointSpringInterpSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGCycleAimingPointSpringInterpSettings_Statics::NewStructOps, TEXT("SKGCycleAimingPointSpringInterpSettings"), &Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSpringInterpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCycleAimingPointSpringInterpSettings), 3435783163U) },
		{ FSKGCycleAimingPointSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings_Statics::NewStructOps, TEXT("SKGCycleAimingPointSettings"), &Z_Registration_Info_UScriptStruct_SKGCycleAimingPointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCycleAimingPointSettings), 2840921608U) },
		{ FSKGMovementSwayLocationSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGMovementSwayLocationSettings_Statics::NewStructOps, TEXT("SKGMovementSwayLocationSettings"), &Z_Registration_Info_UScriptStruct_SKGMovementSwayLocationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMovementSwayLocationSettings), 4224813775U) },
		{ FSKGMovementSwaySettings::StaticStruct, Z_Construct_UScriptStruct_FSKGMovementSwaySettings_Statics::NewStructOps, TEXT("SKGMovementSwaySettings"), &Z_Registration_Info_UScriptStruct_SKGMovementSwaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMovementSwaySettings), 4201032064U) },
		{ FSKGMovementLagSpringInterpSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGMovementLagSpringInterpSettings_Statics::NewStructOps, TEXT("SKGMovementLagSpringInterpSettings"), &Z_Registration_Info_UScriptStruct_SKGMovementLagSpringInterpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMovementLagSpringInterpSettings), 3858978446U) },
		{ FSKGMovementLagSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGMovementLagSettings_Statics::NewStructOps, TEXT("SKGMovementLagSettings"), &Z_Registration_Info_UScriptStruct_SKGMovementLagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMovementLagSettings), 4023904884U) },
		{ FSKGRotationLagSpringInterpSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGRotationLagSpringInterpSettings_Statics::NewStructOps, TEXT("SKGRotationLagSpringInterpSettings"), &Z_Registration_Info_UScriptStruct_SKGRotationLagSpringInterpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGRotationLagSpringInterpSettings), 2124383124U) },
		{ FSKGRotationLagInterpSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGRotationLagInterpSettings_Statics::NewStructOps, TEXT("SKGRotationLagInterpSettings"), &Z_Registration_Info_UScriptStruct_SKGRotationLagInterpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGRotationLagInterpSettings), 3382707593U) },
		{ FSKGRotationLagSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGRotationLagSettings_Statics::NewStructOps, TEXT("SKGRotationLagSettings"), &Z_Registration_Info_UScriptStruct_SKGRotationLagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGRotationLagSettings), 343091422U) },
		{ FSKGRecoilSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGRecoilSettings_Statics::NewStructOps, TEXT("SKGRecoilSettings"), &Z_Registration_Info_UScriptStruct_SKGRecoilSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGRecoilSettings), 30231731U) },
		{ FSKGProceduralAimingSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGProceduralAimingSettings_Statics::NewStructOps, TEXT("SKGProceduralAimingSettings"), &Z_Registration_Info_UScriptStruct_SKGProceduralAimingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProceduralAimingSettings), 88735939U) },
		{ FSKGDeadzoneSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGDeadzoneSettings_Statics::NewStructOps, TEXT("SKGDeadzoneSettings"), &Z_Registration_Info_UScriptStruct_SKGDeadzoneSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGDeadzoneSettings), 1571254102U) },
		{ FSKGProceduralOffset::StaticStruct, Z_Construct_UScriptStruct_FSKGProceduralOffset_Statics::NewStructOps, TEXT("SKGProceduralOffset"), &Z_Registration_Info_UScriptStruct_SKGProceduralOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGProceduralOffset), 1088130921U) },
		{ FSKGFirstAndThirdPersonBasePoseOffset::StaticStruct, Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset_Statics::NewStructOps, TEXT("SKGFirstAndThirdPersonBasePoseOffset"), &Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonBasePoseOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGFirstAndThirdPersonBasePoseOffset), 1065058955U) },
		{ FSKGCurve::StaticStruct, Z_Construct_UScriptStruct_FSKGCurve_Statics::NewStructOps, TEXT("SKGCurve"), &Z_Registration_Info_UScriptStruct_SKGCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCurve), 3052521996U) },
		{ FSKGFirstAndThirdPersonCurveSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings_Statics::NewStructOps, TEXT("SKGFirstAndThirdPersonCurveSettings"), &Z_Registration_Info_UScriptStruct_SKGFirstAndThirdPersonCurveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGFirstAndThirdPersonCurveSettings), 2799564674U) },
		{ FSKGToFromCurveSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGToFromCurveSettings_Statics::NewStructOps, TEXT("SKGToFromCurveSettings"), &Z_Registration_Info_UScriptStruct_SKGToFromCurveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGToFromCurveSettings), 3335197975U) },
		{ FSKGCurveReplicationSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGCurveReplicationSettings_Statics::NewStructOps, TEXT("SKGCurveReplicationSettings"), &Z_Registration_Info_UScriptStruct_SKGCurveReplicationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCurveReplicationSettings), 1681841302U) },
		{ FSKGCurveSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGCurveSettings_Statics::NewStructOps, TEXT("SKGCurveSettings"), &Z_Registration_Info_UScriptStruct_SKGCurveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGCurveSettings), 3940496294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_DataTypes_SKGProceduralDataTypes_h_1628483412(TEXT("/Script/SKGProceduralAnim"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_DataTypes_SKGProceduralDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_DataTypes_SKGProceduralDataTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
