// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Replication/Smoothing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmoothing() {}
// Cross Module References
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_InterpolationMode;
	static UEnum* EGMC_InterpolationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_InterpolationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_InterpolationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_InterpolationMode"));
		}
		return Z_Registration_Info_UEnum_EGMC_InterpolationMode.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_InterpolationMode>()
	{
		return EGMC_InterpolationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enumerators[] = {
		{ "EGMC_InterpolationMode::None", (int64)EGMC_InterpolationMode::None },
		{ "EGMC_InterpolationMode::MatchLatest", (int64)EGMC_InterpolationMode::MatchLatest },
		{ "EGMC_InterpolationMode::FixedDelay", (int64)EGMC_InterpolationMode::FixedDelay },
		{ "EGMC_InterpolationMode::AdaptiveDelay", (int64)EGMC_InterpolationMode::AdaptiveDelay },
		{ "EGMC_InterpolationMode::UniformSimulation", (int64)EGMC_InterpolationMode::UniformSimulation },
		{ "EGMC_InterpolationMode::CumulativeSimulation", (int64)EGMC_InterpolationMode::CumulativeSimulation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enum_MetaDataParams[] = {
		{ "AdaptiveDelay.Name", "EGMC_InterpolationMode::AdaptiveDelay" },
		{ "BlueprintType", "true" },
		{ "CumulativeSimulation.Name", "EGMC_InterpolationMode::CumulativeSimulation" },
		{ "FixedDelay.Name", "EGMC_InterpolationMode::FixedDelay" },
		{ "MatchLatest.Name", "EGMC_InterpolationMode::MatchLatest" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "None.Name", "EGMC_InterpolationMode::None" },
		{ "UniformSimulation.Name", "EGMC_InterpolationMode::UniformSimulation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_InterpolationMode",
		"EGMC_InterpolationMode",
		Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode()
	{
		if (!Z_Registration_Info_UEnum_EGMC_InterpolationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_InterpolationMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_InterpolationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_InterpolationStates;
	static UEnum* EGMC_InterpolationStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_InterpolationStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_InterpolationStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_InterpolationStates"));
		}
		return Z_Registration_Info_UEnum_EGMC_InterpolationStates.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_InterpolationStates>()
	{
		return EGMC_InterpolationStates_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enumerators[] = {
		{ "EGMC_InterpolationStates::Input", (int64)EGMC_InterpolationStates::Input },
		{ "EGMC_InterpolationStates::Output", (int64)EGMC_InterpolationStates::Output },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Input.Name", "EGMC_InterpolationStates::Input" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "Output.Name", "EGMC_InterpolationStates::Output" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_InterpolationStates",
		"EGMC_InterpolationStates",
		Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates()
	{
		if (!Z_Registration_Info_UEnum_EGMC_InterpolationStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_InterpolationStates.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_InterpolationStates.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_NetworkTolerance;
	static UEnum* EGMC_NetworkTolerance_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_NetworkTolerance.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_NetworkTolerance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_NetworkTolerance"));
		}
		return Z_Registration_Info_UEnum_EGMC_NetworkTolerance.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_NetworkTolerance>()
	{
		return EGMC_NetworkTolerance_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enumerators[] = {
		{ "EGMC_NetworkTolerance::Auto", (int64)EGMC_NetworkTolerance::Auto },
		{ "EGMC_NetworkTolerance::Low", (int64)EGMC_NetworkTolerance::Low },
		{ "EGMC_NetworkTolerance::Normal", (int64)EGMC_NetworkTolerance::Normal },
		{ "EGMC_NetworkTolerance::High", (int64)EGMC_NetworkTolerance::High },
		{ "EGMC_NetworkTolerance::VeryHigh", (int64)EGMC_NetworkTolerance::VeryHigh },
		{ "EGMC_NetworkTolerance::Manual", (int64)EGMC_NetworkTolerance::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EGMC_NetworkTolerance::Auto" },
		{ "BlueprintType", "true" },
		{ "High.Name", "EGMC_NetworkTolerance::High" },
		{ "Low.Name", "EGMC_NetworkTolerance::Low" },
		{ "Manual.Name", "EGMC_NetworkTolerance::Manual" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "Normal.Name", "EGMC_NetworkTolerance::Normal" },
		{ "VeryHigh.Name", "EGMC_NetworkTolerance::VeryHigh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_NetworkTolerance",
		"EGMC_NetworkTolerance",
		Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance()
	{
		if (!Z_Registration_Info_UEnum_EGMC_NetworkTolerance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_NetworkTolerance.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_NetworkTolerance.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_ExtrapolationMode;
	static UEnum* EGMC_ExtrapolationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_ExtrapolationMode"));
		}
		return Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_ExtrapolationMode>()
	{
		return EGMC_ExtrapolationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enumerators[] = {
		{ "EGMC_ExtrapolationMode::None", (int64)EGMC_ExtrapolationMode::None },
		{ "EGMC_ExtrapolationMode::DeadReckoning", (int64)EGMC_ExtrapolationMode::DeadReckoning },
		{ "EGMC_ExtrapolationMode::UniformSimulation", (int64)EGMC_ExtrapolationMode::UniformSimulation },
		{ "EGMC_ExtrapolationMode::CumulativeSimulation", (int64)EGMC_ExtrapolationMode::CumulativeSimulation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CumulativeSimulation.Name", "EGMC_ExtrapolationMode::CumulativeSimulation" },
		{ "DeadReckoning.Name", "EGMC_ExtrapolationMode::DeadReckoning" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "None.Name", "EGMC_ExtrapolationMode::None" },
		{ "UniformSimulation.Name", "EGMC_ExtrapolationMode::UniformSimulation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_ExtrapolationMode",
		"EGMC_ExtrapolationMode",
		Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode()
	{
		if (!Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_InterpolationFunction;
	static UEnum* EGMC_InterpolationFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_InterpolationFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_InterpolationFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_InterpolationFunction"));
		}
		return Z_Registration_Info_UEnum_EGMC_InterpolationFunction.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_InterpolationFunction>()
	{
		return EGMC_InterpolationFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enumerators[] = {
		{ "EGMC_InterpolationFunction::NearestNeighbour", (int64)EGMC_InterpolationFunction::NearestNeighbour },
		{ "EGMC_InterpolationFunction::StartValue", (int64)EGMC_InterpolationFunction::StartValue },
		{ "EGMC_InterpolationFunction::TargetValue", (int64)EGMC_InterpolationFunction::TargetValue },
		{ "EGMC_InterpolationFunction::Linear", (int64)EGMC_InterpolationFunction::Linear },
		{ "EGMC_InterpolationFunction::Cubic", (int64)EGMC_InterpolationFunction::Cubic },
		{ "EGMC_InterpolationFunction::Custom1", (int64)EGMC_InterpolationFunction::Custom1 },
		{ "EGMC_InterpolationFunction::Custom2", (int64)EGMC_InterpolationFunction::Custom2 },
		{ "EGMC_InterpolationFunction::Custom3", (int64)EGMC_InterpolationFunction::Custom3 },
		{ "EGMC_InterpolationFunction::Custom4", (int64)EGMC_InterpolationFunction::Custom4 },
		{ "EGMC_InterpolationFunction::Custom5", (int64)EGMC_InterpolationFunction::Custom5 },
		{ "EGMC_InterpolationFunction::Custom6", (int64)EGMC_InterpolationFunction::Custom6 },
		{ "EGMC_InterpolationFunction::Custom7", (int64)EGMC_InterpolationFunction::Custom7 },
		{ "EGMC_InterpolationFunction::Custom8", (int64)EGMC_InterpolationFunction::Custom8 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cubic.Name", "EGMC_InterpolationFunction::Cubic" },
		{ "Custom1.Name", "EGMC_InterpolationFunction::Custom1" },
		{ "Custom2.Name", "EGMC_InterpolationFunction::Custom2" },
		{ "Custom3.Name", "EGMC_InterpolationFunction::Custom3" },
		{ "Custom4.Name", "EGMC_InterpolationFunction::Custom4" },
		{ "Custom5.Name", "EGMC_InterpolationFunction::Custom5" },
		{ "Custom6.Name", "EGMC_InterpolationFunction::Custom6" },
		{ "Custom7.Name", "EGMC_InterpolationFunction::Custom7" },
		{ "Custom8.Name", "EGMC_InterpolationFunction::Custom8" },
		{ "Linear.Name", "EGMC_InterpolationFunction::Linear" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "NearestNeighbour.Name", "EGMC_InterpolationFunction::NearestNeighbour" },
		{ "StartValue.Name", "EGMC_InterpolationFunction::StartValue" },
		{ "TargetValue.Name", "EGMC_InterpolationFunction::TargetValue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_InterpolationFunction",
		"EGMC_InterpolationFunction",
		Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction()
	{
		if (!Z_Registration_Info_UEnum_EGMC_InterpolationFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_InterpolationFunction.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_InterpolationFunction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams;
class UScriptStruct* FGMC_MatchLatestPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_MatchLatestPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_MatchLatestPersistentParams>()
{
	return FGMC_MatchLatestPersistentParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpStates_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpStates_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetStateTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetStateTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SimTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_MatchLatestPersistentParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MaxDeltaTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The max time delta over which the smoothing algorithm is allowed to interpolate between two server state updates.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The max time delta over which the smoothing algorithm is allowed to interpolate between two server state updates." },
		{ "UIMax", "1" },
		{ "UIMin", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, MaxDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MaxDeltaTime_MetaData), Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MaxDeltaTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MinDeltaTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The min time delta over which the smoothing algorithm must interpolate between two server state updates.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min time delta over which the smoothing algorithm must interpolate between two server state updates." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MinDeltaTime = { "MinDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, MinDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MinDeltaTime_MetaData), Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MinDeltaTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TeleportThreshold_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "-1" },
		{ "Comment", "/// The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality." },
		{ "UIMax", "1000" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TeleportThreshold = { "TeleportThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, TeleportThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TeleportThreshold_MetaData), Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TeleportThreshold_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether interpolation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether interpolation should be based on input or output states." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates = { "InterpStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, InterpStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates_MetaData), Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates_MetaData) }; // 1062842721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetStateTimestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The timestamp of the interpolation target state.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The timestamp of the interpolation target state." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetStateTimestamp = { "TargetStateTimestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, TargetStateTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetStateTimestamp_MetaData), Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetStateTimestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_SimTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current simulation time.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The current simulation time." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_SimTime = { "SimTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, SimTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_SimTime_MetaData), Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_SimTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetDelta_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current target delta to move.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The current target delta to move." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetDelta = { "TargetDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, TargetDelta), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetDelta_MetaData), Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetDelta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MaxDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MinDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TeleportThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetStateTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_SimTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetDelta,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_MatchLatestPersistentParams",
		Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::PropPointers),
		sizeof(FGMC_MatchLatestPersistentParams),
		alignof(FGMC_MatchLatestPersistentParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams;
class UScriptStruct* FGMC_FixedDelayPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_FixedDelayPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_FixedDelayPersistentParams>()
{
	return FGMC_FixedDelayPersistentParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrapolationRecoveryTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrapolationRecoveryTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPhysicsExtrapolation_MetaData[];
#endif
		static void NewProp_bAllowPhysicsExtrapolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPhysicsExtrapolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpStates_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpStates_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_FixedDelayPersistentParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_FixedDelay_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How far back in time (in seconds) simulated pawns are displayed on the local machine. Lower values are more \"real-time\" but may produce unsatisfactory\n/// results with bad network conditions. Larger values enable a greater tolerance for packet loss, latency spikes and higher ping but simulated pawns are\n/// farther in the past on the local machine. Since timestamps are based on the world time of the machine where the original move was created you need to\n/// consider the longest time it can take for one packet to get from one client to another (i.e. the two highest client latencies added up) as well as the\n/// frame times of all machines involved. When running a server that accepts only one client connection (e.g. co-op games where one player hosts as a listen\n/// server and only one other player can join as a client) you only have to consider the latency of that one connection.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How far back in time (in seconds) simulated pawns are displayed on the local machine. Lower values are more \"real-time\" but may produce unsatisfactory\nresults with bad network conditions. Larger values enable a greater tolerance for packet loss, latency spikes and higher ping but simulated pawns are\nfarther in the past on the local machine. Since timestamps are based on the world time of the machine where the original move was created you need to\nconsider the longest time it can take for one packet to get from one client to another (i.e. the two highest client latencies added up) as well as the\nframe times of all machines involved. When running a server that accepts only one client connection (e.g. co-op games where one player hosts as a listen\nserver and only one other player can join as a client) you only have to consider the latency of that one connection." },
		{ "UIMax", "2" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_FixedDelay = { "FixedDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_FixedDelayPersistentParams, FixedDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_FixedDelay_MetaData), Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_FixedDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The time over which to smoothly return to an interpolated pawn state after extrapolation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time over which to smoothly return to an interpolated pawn state after extrapolation." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime = { "ExtrapolationRecoveryTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_FixedDelayPersistentParams, ExtrapolationRecoveryTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime_MetaData), Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether extrapolation should be allowed when simulating physics.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether extrapolation should be allowed when simulating physics." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_SetBit(void* Obj)
	{
		((FGMC_FixedDelayPersistentParams*)Obj)->bAllowPhysicsExtrapolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation = { "bAllowPhysicsExtrapolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_FixedDelayPersistentParams), &Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_MetaData), Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_TeleportThreshold_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "-1" },
		{ "Comment", "/// The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality." },
		{ "UIMax", "1000" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_TeleportThreshold = { "TeleportThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_FixedDelayPersistentParams, TeleportThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_TeleportThreshold_MetaData), Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_TeleportThreshold_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether interpolation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether interpolation should be based on input or output states." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates = { "InterpStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_FixedDelayPersistentParams, InterpStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates_MetaData), Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates_MetaData) }; // 1062842721
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_FixedDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_TeleportThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_FixedDelayPersistentParams",
		Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::PropPointers),
		sizeof(FGMC_FixedDelayPersistentParams),
		alignof(FGMC_FixedDelayPersistentParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams;
class UScriptStruct* FGMC_AdaptiveDelayPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_AdaptiveDelayPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_AdaptiveDelayPersistentParams>()
{
	return FGMC_AdaptiveDelayPersistentParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SyncInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicBufferTime_MetaData[];
#endif
		static void NewProp_bUseDynamicBufferTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicBufferTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrapolationRecoveryTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrapolationRecoveryTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPhysicsExtrapolation_MetaData[];
#endif
		static void NewProp_bAllowPhysicsExtrapolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPhysicsExtrapolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpStates_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpStates_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_AdaptiveDelayPersistentParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_SyncInterval_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/// The interval at which the adaptive delay is synced between server and client. Regardless of this setting, new parameters may still get transmitted more\n/// than once per interval if they change by more than the set tolerance or when using a dynamic buffer time.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The interval at which the adaptive delay is synced between server and client. Regardless of this setting, new parameters may still get transmitted more\nthan once per interval if they change by more than the set tolerance or when using a dynamic buffer time." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_SyncInterval = { "SyncInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, SyncInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_SyncInterval_MetaData), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_SyncInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime_MetaData[] = {
		{ "Category", "Networking" },
		{ "ClampMin", "0" },
		{ "Comment", "/// If true, the client will request the buffer time dynamically from the server based on the current network conditions. Works best for good connections\n/// (little packet loss) and higher net update frequencies.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "If true, the client will request the buffer time dynamically from the server based on the current network conditions. Works best for good connections\n(little packet loss) and higher net update frequencies." },
		{ "UIMax", "5" },
		{ "UIMin", "0.1" },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime_SetBit(void* Obj)
	{
		((FGMC_AdaptiveDelayPersistentParams*)Obj)->bUseDynamicBufferTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime = { "bUseDynamicBufferTime", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_AdaptiveDelayPersistentParams), &Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime_MetaData), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_BufferTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How much additional time should be added to the calculated base simulation delay to account for variable network conditions, packet loss, frame rate, etc.\n/// When using a dynamic buffer time this will merely determine the initial value.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How much additional time should be added to the calculated base simulation delay to account for variable network conditions, packet loss, frame rate, etc.\nWhen using a dynamic buffer time this will merely determine the initial value." },
		{ "UIMax", "2" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_BufferTime = { "BufferTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, BufferTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_BufferTime_MetaData), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_BufferTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/// Tolerance within which a newly calculated simulation delay will be considered equal to the current one. Only if the new delay value differs by more than\n/// the set tolerance the simulation delay will be updated.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Tolerance within which a newly calculated simulation delay will be considered equal to the current one. Only if the new delay value differs by more than\nthe set tolerance the simulation delay will be updated." },
		{ "UIMax", "0.2" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_Tolerance_MetaData), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_Tolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The time over which to smoothly return to an interpolated pawn state after extrapolation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time over which to smoothly return to an interpolated pawn state after extrapolation." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime = { "ExtrapolationRecoveryTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, ExtrapolationRecoveryTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime_MetaData), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether extrapolation should be allowed when simulating physics.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether extrapolation should be allowed when simulating physics." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_SetBit(void* Obj)
	{
		((FGMC_AdaptiveDelayPersistentParams*)Obj)->bAllowPhysicsExtrapolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation = { "bAllowPhysicsExtrapolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_AdaptiveDelayPersistentParams), &Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_MetaData), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_TeleportThreshold_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "-1" },
		{ "Comment", "/// The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality." },
		{ "UIMax", "1000" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_TeleportThreshold = { "TeleportThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, TeleportThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_TeleportThreshold_MetaData), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_TeleportThreshold_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether interpolation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether interpolation should be based on input or output states." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates = { "InterpStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, InterpStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates_MetaData), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates_MetaData) }; // 1062842721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_CurrentDelay_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current simulation delay. Automatically adapts to the client's ping.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The current simulation delay. Automatically adapts to the client's ping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_CurrentDelay = { "CurrentDelay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, CurrentDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_CurrentDelay_MetaData), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_CurrentDelay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_SyncInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_BufferTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_TeleportThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_CurrentDelay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_AdaptiveDelayPersistentParams",
		Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::PropPointers),
		sizeof(FGMC_AdaptiveDelayPersistentParams),
		alignof(FGMC_AdaptiveDelayPersistentParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket;
class UScriptStruct* FGMC_AdaptiveDelayServerPacket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_AdaptiveDelayServerPacket"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_AdaptiveDelayServerPacket>()
{
	return FGMC_AdaptiveDelayServerPacket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_AdaptiveDelayServerPacket>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_AdaptiveDelayServerPacket",
		nullptr,
		0,
		sizeof(FGMC_AdaptiveDelayServerPacket),
		alignof(FGMC_AdaptiveDelayServerPacket),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.InnerSingleton, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket;
class UScriptStruct* FGMC_AdaptiveDelayClientPacket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_AdaptiveDelayClientPacket"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_AdaptiveDelayClientPacket>()
{
	return FGMC_AdaptiveDelayClientPacket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_AdaptiveDelayClientPacket>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_AdaptiveDelayClientPacket",
		nullptr,
		0,
		sizeof(FGMC_AdaptiveDelayClientPacket),
		alignof(FGMC_AdaptiveDelayClientPacket),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.InnerSingleton, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams;
class UScriptStruct* FGMC_UniformSimulationPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_UniformSimulationPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_UniformSimulationPersistentParams>()
{
	return FGMC_UniformSimulationPersistentParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimStates_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimStates_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMoveTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PreviousMoveTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastNewMove_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastNewMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_UniformSimulationPersistentParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_InterpTolerance_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// How much tolerance in seconds there should be before switching to extrapolation when simulated interpolation is also used.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How much tolerance in seconds there should be before switching to extrapolation when simulated interpolation is also used." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_InterpTolerance = { "InterpTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, InterpTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_InterpTolerance_MetaData), Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_InterpTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxTimeStep_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/// The time interval in which to subdivide the delta time of a move for simulated pawns.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time interval in which to subdivide the delta time of a move for simulated pawns." },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxTimeStep = { "MaxTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, MaxTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxTimeStep_MetaData), Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxTimeStep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "1" },
		{ "Comment", "/// How many iterations of a sub-stepped move execution are allowed at most for simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How many iterations of a sub-stepped move execution are allowed at most for simulation." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxIterations_MetaData), Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxIterations_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether simulation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether simulation should be based on input or output states." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates = { "SimStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, SimStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates_MetaData), Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates_MetaData) }; // 1062842721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The timestamp of the previous move simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The timestamp of the previous move simulation." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp = { "PreviousMoveTimestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, PreviousMoveTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp_MetaData), Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The time since we last got a new move for simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time since we last got a new move for simulation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove = { "TimeSinceLastNewMove", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, TimeSinceLastNewMove), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove_MetaData), Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_InterpTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_UniformSimulationPersistentParams",
		Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::PropPointers),
		sizeof(FGMC_UniformSimulationPersistentParams),
		alignof(FGMC_UniformSimulationPersistentParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams;
class UScriptStruct* FGMC_CumulativeSimulationPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_CumulativeSimulationPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_CumulativeSimulationPersistentParams>()
{
	return FGMC_CumulativeSimulationPersistentParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDissociativeExtrapolation_MetaData[];
#endif
		static void NewProp_bUseDissociativeExtrapolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDissociativeExtrapolation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimStates_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimStates_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMoveTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PreviousMoveTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastNewMove_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastNewMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_CumulativeSimulationPersistentParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_InterpTolerance_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// How much tolerance in seconds there should be before switching to extrapolation when simulated interpolation is also used.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How much tolerance in seconds there should be before switching to extrapolation when simulated interpolation is also used." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_InterpTolerance = { "InterpTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, InterpTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_InterpTolerance_MetaData), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_InterpTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxTimeStep_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/// The time interval in which to subdivide the delta time of a move for simulated pawns.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time interval in which to subdivide the delta time of a move for simulated pawns." },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxTimeStep = { "MaxTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, MaxTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxTimeStep_MetaData), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxTimeStep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "1" },
		{ "Comment", "/// How many iterations of a sub-stepped move execution are allowed at most for simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How many iterations of a sub-stepped move execution are allowed at most for simulation." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxIterations_MetaData), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// If true, the local simulation will continue to run on its own while extrapolating until we have a recent enough state available again to interpolate.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "If true, the local simulation will continue to run on its own while extrapolating until we have a recent enough state available again to interpolate." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation_SetBit(void* Obj)
	{
		((FGMC_CumulativeSimulationPersistentParams*)Obj)->bUseDissociativeExtrapolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation = { "bUseDissociativeExtrapolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_CumulativeSimulationPersistentParams), &Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation_MetaData), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether simulation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether simulation should be based on input or output states." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates = { "SimStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, SimStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates_MetaData), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates_MetaData) }; // 1062842721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The timestamp of the previous move simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The timestamp of the previous move simulation." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp = { "PreviousMoveTimestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, PreviousMoveTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp_MetaData), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The time since we last got a new move for simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time since we last got a new move for simulation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove = { "TimeSinceLastNewMove", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, TimeSinceLastNewMove), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove_MetaData), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_AccDeltaTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The accumulated delta time since the last new move.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The accumulated delta time since the last new move." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_AccDeltaTime = { "AccDeltaTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, AccDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_AccDeltaTime_MetaData), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_AccDeltaTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_InterpTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_AccDeltaTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_CumulativeSimulationPersistentParams",
		Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::PropPointers),
		sizeof(FGMC_CumulativeSimulationPersistentParams),
		alignof(FGMC_CumulativeSimulationPersistentParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::EnumInfo[] = {
		{ EGMC_InterpolationMode_StaticEnum, TEXT("EGMC_InterpolationMode"), &Z_Registration_Info_UEnum_EGMC_InterpolationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2784986916U) },
		{ EGMC_InterpolationStates_StaticEnum, TEXT("EGMC_InterpolationStates"), &Z_Registration_Info_UEnum_EGMC_InterpolationStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1062842721U) },
		{ EGMC_NetworkTolerance_StaticEnum, TEXT("EGMC_NetworkTolerance"), &Z_Registration_Info_UEnum_EGMC_NetworkTolerance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2048415211U) },
		{ EGMC_ExtrapolationMode_StaticEnum, TEXT("EGMC_ExtrapolationMode"), &Z_Registration_Info_UEnum_EGMC_ExtrapolationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 774593146U) },
		{ EGMC_InterpolationFunction_StaticEnum, TEXT("EGMC_InterpolationFunction"), &Z_Registration_Info_UEnum_EGMC_InterpolationFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1765561128U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::ScriptStructInfo[] = {
		{ FGMC_MatchLatestPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewStructOps, TEXT("GMC_MatchLatestPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_MatchLatestPersistentParams), 2542822885U) },
		{ FGMC_FixedDelayPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewStructOps, TEXT("GMC_FixedDelayPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_FixedDelayPersistentParams), 1385993076U) },
		{ FGMC_AdaptiveDelayPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewStructOps, TEXT("GMC_AdaptiveDelayPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_AdaptiveDelayPersistentParams), 1456884265U) },
		{ FGMC_AdaptiveDelayServerPacket::StaticStruct, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::NewStructOps, TEXT("GMC_AdaptiveDelayServerPacket"), &Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_AdaptiveDelayServerPacket), 599573660U) },
		{ FGMC_AdaptiveDelayClientPacket::StaticStruct, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::NewStructOps, TEXT("GMC_AdaptiveDelayClientPacket"), &Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_AdaptiveDelayClientPacket), 4148340753U) },
		{ FGMC_UniformSimulationPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewStructOps, TEXT("GMC_UniformSimulationPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_UniformSimulationPersistentParams), 2616857835U) },
		{ FGMC_CumulativeSimulationPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewStructOps, TEXT("GMC_CumulativeSimulationPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_CumulativeSimulationPersistentParams), 1972996212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_3757502423(TEXT("/Script/GMCCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
