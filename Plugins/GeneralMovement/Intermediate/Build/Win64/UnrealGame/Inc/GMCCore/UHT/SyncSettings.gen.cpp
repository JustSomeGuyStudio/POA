// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Replication/SyncSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSyncSettings() {}
// Cross Module References
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_CombineMode();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_PredictionMode();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_SimulationMode();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_PredictionMode;
	static UEnum* EGMC_PredictionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_PredictionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_PredictionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_PredictionMode"));
		}
		return Z_Registration_Info_UEnum_EGMC_PredictionMode.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_PredictionMode>()
	{
		return EGMC_PredictionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_PredictionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_PredictionMode_Statics::Enumerators[] = {
		{ "EGMC_PredictionMode::ServerAuth_Output_ClientValidated", (int64)EGMC_PredictionMode::ServerAuth_Output_ClientValidated },
		{ "EGMC_PredictionMode::ServerAuth_Input_ClientValidated", (int64)EGMC_PredictionMode::ServerAuth_Input_ClientValidated },
		{ "EGMC_PredictionMode::ServerAuth_InputOutput_ClientValidated", (int64)EGMC_PredictionMode::ServerAuth_InputOutput_ClientValidated },
		{ "EGMC_PredictionMode::ServerAuth_Output_ServerValidated", (int64)EGMC_PredictionMode::ServerAuth_Output_ServerValidated },
		{ "EGMC_PredictionMode::ServerAuth_Input_ServerValidated", (int64)EGMC_PredictionMode::ServerAuth_Input_ServerValidated },
		{ "EGMC_PredictionMode::ServerAuth_InputOutput_ServerValidated", (int64)EGMC_PredictionMode::ServerAuth_InputOutput_ServerValidated },
		{ "EGMC_PredictionMode::ClientAuth_Output", (int64)EGMC_PredictionMode::ClientAuth_Output },
		{ "EGMC_PredictionMode::ClientAuth_Input", (int64)EGMC_PredictionMode::ClientAuth_Input },
		{ "EGMC_PredictionMode::ClientAuth_InputOutput", (int64)EGMC_PredictionMode::ClientAuth_InputOutput },
		{ "EGMC_PredictionMode::Local", (int64)EGMC_PredictionMode::Local },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_PredictionMode_Statics::Enum_MetaDataParams[] = {
		{ "ClientAuth_Input.DisplayName", "ClientAuth Input" },
		{ "ClientAuth_Input.Name", "EGMC_PredictionMode::ClientAuth_Input" },
		{ "ClientAuth_Input.ToolTip", "Client authoritative input value, the server will accept the client value without question." },
		{ "ClientAuth_InputOutput.DisplayName", "ClientAuth InputOutput" },
		{ "ClientAuth_InputOutput.Name", "EGMC_PredictionMode::ClientAuth_InputOutput" },
		{ "ClientAuth_InputOutput.ToolTip", "Client authoritative input and output values, the server will accept the client values without question." },
		{ "ClientAuth_Output.DisplayName", "ClientAuth Output" },
		{ "ClientAuth_Output.Name", "EGMC_PredictionMode::ClientAuth_Output" },
		{ "ClientAuth_Output.ToolTip", "Client authoritative output value, the server will accept the client value without question." },
		{ "Local.DisplayName", "Local" },
		{ "Local.Name", "EGMC_PredictionMode::Local" },
		{ "Local.ToolTip", "No network synchronisation." },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
		{ "ServerAuth_Input_ClientValidated.DisplayName", "ServerAuth Input ClientValidated" },
		{ "ServerAuth_Input_ClientValidated.Name", "EGMC_PredictionMode::ServerAuth_Input_ClientValidated" },
		{ "ServerAuth_Input_ClientValidated.ToolTip", "Server authoritative input value validated client-side. Puts more pressure on the client's downstream." },
		{ "ServerAuth_Input_ServerValidated.DisplayName", "ServerAuth Input ServerValidated" },
		{ "ServerAuth_Input_ServerValidated.Name", "EGMC_PredictionMode::ServerAuth_Input_ServerValidated" },
		{ "ServerAuth_Input_ServerValidated.ToolTip", "Server authoritative input value validated server-side. Puts more pressure on the client's upstream." },
		{ "ServerAuth_InputOutput_ClientValidated.DisplayName", "ServerAuth InputOutput ClientValidated" },
		{ "ServerAuth_InputOutput_ClientValidated.Name", "EGMC_PredictionMode::ServerAuth_InputOutput_ClientValidated" },
		{ "ServerAuth_InputOutput_ClientValidated.ToolTip", "Server authoritative input and output values validated client-side. Puts more pressure on the client's downstream." },
		{ "ServerAuth_InputOutput_ServerValidated.DisplayName", "ServerAuth InputOutput ServerValidated" },
		{ "ServerAuth_InputOutput_ServerValidated.Name", "EGMC_PredictionMode::ServerAuth_InputOutput_ServerValidated" },
		{ "ServerAuth_InputOutput_ServerValidated.ToolTip", "Server authoritative input and output values validated server-side. Puts more pressure on the client's upstream." },
		{ "ServerAuth_Output_ClientValidated.DisplayName", "ServerAuth Output ClientValidated" },
		{ "ServerAuth_Output_ClientValidated.Name", "EGMC_PredictionMode::ServerAuth_Output_ClientValidated" },
		{ "ServerAuth_Output_ClientValidated.ToolTip", "Server authoritative output value validated client-side. Puts more pressure on the client's downstream." },
		{ "ServerAuth_Output_ServerValidated.DisplayName", "ServerAuth Output ServerValidated" },
		{ "ServerAuth_Output_ServerValidated.Name", "EGMC_PredictionMode::ServerAuth_Output_ServerValidated" },
		{ "ServerAuth_Output_ServerValidated.ToolTip", "Server authoritative output value validated server-side. Puts more pressure on the client's upstream." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_PredictionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_PredictionMode",
		"EGMC_PredictionMode",
		Z_Construct_UEnum_GMCCore_EGMC_PredictionMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_PredictionMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_PredictionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_PredictionMode()
	{
		if (!Z_Registration_Info_UEnum_EGMC_PredictionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_PredictionMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_PredictionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_PredictionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_CombineMode;
	static UEnum* EGMC_CombineMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_CombineMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_CombineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_CombineMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_CombineMode"));
		}
		return Z_Registration_Info_UEnum_EGMC_CombineMode.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_CombineMode>()
	{
		return EGMC_CombineMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_CombineMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_CombineMode_Statics::Enumerators[] = {
		{ "EGMC_CombineMode::AlwaysCombine", (int64)EGMC_CombineMode::AlwaysCombine },
		{ "EGMC_CombineMode::CombineIfUnchanged", (int64)EGMC_CombineMode::CombineIfUnchanged },
		{ "EGMC_CombineMode::Default", (int64)EGMC_CombineMode::Default },
		{ "EGMC_CombineMode::NeverCombine", (int64)EGMC_CombineMode::NeverCombine },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_CombineMode_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysCombine.DisplayName", "AlwaysCombine" },
		{ "AlwaysCombine.Name", "EGMC_CombineMode::AlwaysCombine" },
		{ "AlwaysCombine.ToolTip", "This value can always be combined." },
		{ "CombineIfUnchanged.DisplayName", "CombineIfUnchanged" },
		{ "CombineIfUnchanged.Name", "EGMC_CombineMode::CombineIfUnchanged" },
		{ "CombineIfUnchanged.ToolTip", "This value can only be combined if it has not changed from the previous one." },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EGMC_CombineMode::Default" },
		{ "Default.ToolTip", "Use the integrated C++ sync interface function to determine whether this value can be combined." },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
		{ "NeverCombine.DisplayName", "NeverCombine" },
		{ "NeverCombine.Hidden", "" },
		{ "NeverCombine.Name", "EGMC_CombineMode::NeverCombine" },
		{ "NeverCombine.ToolTip", "This value can never be combined." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_CombineMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_CombineMode",
		"EGMC_CombineMode",
		Z_Construct_UEnum_GMCCore_EGMC_CombineMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_CombineMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_CombineMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_CombineMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_CombineMode()
	{
		if (!Z_Registration_Info_UEnum_EGMC_CombineMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_CombineMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_CombineMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_CombineMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_SimulationMode;
	static UEnum* EGMC_SimulationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_SimulationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_SimulationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_SimulationMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_SimulationMode"));
		}
		return Z_Registration_Info_UEnum_EGMC_SimulationMode.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_SimulationMode>()
	{
		return EGMC_SimulationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_SimulationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_SimulationMode_Statics::Enumerators[] = {
		{ "EGMC_SimulationMode::Periodic_Output", (int64)EGMC_SimulationMode::Periodic_Output },
		{ "EGMC_SimulationMode::Periodic_Input", (int64)EGMC_SimulationMode::Periodic_Input },
		{ "EGMC_SimulationMode::Periodic_InputOutput", (int64)EGMC_SimulationMode::Periodic_InputOutput },
		{ "EGMC_SimulationMode::PeriodicAndOnChange_Output", (int64)EGMC_SimulationMode::PeriodicAndOnChange_Output },
		{ "EGMC_SimulationMode::PeriodicAndOnChange_Input", (int64)EGMC_SimulationMode::PeriodicAndOnChange_Input },
		{ "EGMC_SimulationMode::PeriodicAndOnChange_InputOutput", (int64)EGMC_SimulationMode::PeriodicAndOnChange_InputOutput },
		{ "EGMC_SimulationMode::None", (int64)EGMC_SimulationMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_SimulationMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EGMC_SimulationMode::None" },
		{ "None.ToolTip", "Not replicated for simulation." },
		{ "Periodic_Input.DisplayName", "Periodic Input" },
		{ "Periodic_Input.Name", "EGMC_SimulationMode::Periodic_Input" },
		{ "Periodic_Input.ToolTip", "The input value is replicated periodically, clients may not receive every intermediate value." },
		{ "Periodic_InputOutput.DisplayName", "Periodic InputOutput" },
		{ "Periodic_InputOutput.Name", "EGMC_SimulationMode::Periodic_InputOutput" },
		{ "Periodic_InputOutput.ToolTip", "The input and output values are replicated periodically, clients may not receive every intermediate value." },
		{ "Periodic_Output.DisplayName", "Periodic Output" },
		{ "Periodic_Output.Name", "EGMC_SimulationMode::Periodic_Output" },
		{ "Periodic_Output.ToolTip", "The output value is replicated periodically, clients may not receive every intermediate value." },
		{ "PeriodicAndOnChange_Input.DisplayName", "PeriodicAndOnChange Input" },
		{ "PeriodicAndOnChange_Input.Name", "EGMC_SimulationMode::PeriodicAndOnChange_Input" },
		{ "PeriodicAndOnChange_Input.ToolTip", "The input value is replicated periodically and on every change, use only for values that change infrequently." },
		{ "PeriodicAndOnChange_InputOutput.DisplayName", "PeriodicAndOnChange InputOutput" },
		{ "PeriodicAndOnChange_InputOutput.Name", "EGMC_SimulationMode::PeriodicAndOnChange_InputOutput" },
		{ "PeriodicAndOnChange_InputOutput.ToolTip", "The input and output values are replicated periodically and on every change, use only for values that change infrequently." },
		{ "PeriodicAndOnChange_Output.DisplayName", "PeriodicAndOnChange Output" },
		{ "PeriodicAndOnChange_Output.Name", "EGMC_SimulationMode::PeriodicAndOnChange_Output" },
		{ "PeriodicAndOnChange_Output.ToolTip", "The output value is replicated periodically and on every change, use only for values that change infrequently." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_SimulationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_SimulationMode",
		"EGMC_SimulationMode",
		Z_Construct_UEnum_GMCCore_EGMC_SimulationMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_SimulationMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_SimulationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_SimulationMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_SimulationMode()
	{
		if (!Z_Registration_Info_UEnum_EGMC_SimulationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_SimulationMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_SimulationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_SimulationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_DefaultPredictionSettings;
class UScriptStruct* FGMC_DefaultPredictionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_DefaultPredictionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_DefaultPredictionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_DefaultPredictionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_DefaultPredictionSettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_DefaultPredictionSettings>()
{
	return FGMC_DefaultPredictionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorBase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorBase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorBase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_DefaultPredictionSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorBase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorBase_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorBase = { "ActorBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultPredictionSettings, ActorBase), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorBase_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorBase_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_LinearVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultPredictionSettings, LinearVelocity), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_LinearVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_LinearVelocity_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_AngularVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultPredictionSettings, AngularVelocity), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_AngularVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_AngularVelocity_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorLocation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultPredictionSettings, ActorLocation), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorLocation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorLocation_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultPredictionSettings, ActorRotation), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorRotation_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorScale_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorScale = { "ActorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultPredictionSettings, ActorScale), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorScale_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorScale_MetaData) }; // 1265865235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ControlRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultPredictionSettings, ControlRotation), Z_Construct_UEnum_GMCCore_EGMC_PredictionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ControlRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ControlRotation_MetaData) }; // 1265865235
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorBase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_LinearVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_AngularVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ActorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ControlRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewProp_ControlRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_DefaultPredictionSettings",
		Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::PropPointers),
		sizeof(FGMC_DefaultPredictionSettings),
		alignof(FGMC_DefaultPredictionSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_DefaultPredictionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_DefaultPredictionSettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_DefaultPredictionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_DefaultCombineSettings;
class UScriptStruct* FGMC_DefaultCombineSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_DefaultCombineSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_DefaultCombineSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_DefaultCombineSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_DefaultCombineSettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_DefaultCombineSettings>()
{
	return FGMC_DefaultCombineSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorBase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorBase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorBase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_DefaultCombineSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorBase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorBase_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorBase = { "ActorBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCombineSettings, ActorBase), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorBase_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorBase_MetaData) }; // 904251608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_LinearVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCombineSettings, LinearVelocity), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_LinearVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_LinearVelocity_MetaData) }; // 904251608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_AngularVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCombineSettings, AngularVelocity), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_AngularVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_AngularVelocity_MetaData) }; // 904251608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorLocation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCombineSettings, ActorLocation), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorLocation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorLocation_MetaData) }; // 904251608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCombineSettings, ActorRotation), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorRotation_MetaData) }; // 904251608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorScale_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorScale = { "ActorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCombineSettings, ActorScale), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorScale_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorScale_MetaData) }; // 904251608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ControlRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCombineSettings, ControlRotation), Z_Construct_UEnum_GMCCore_EGMC_CombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ControlRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ControlRotation_MetaData) }; // 904251608
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorBase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_LinearVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_AngularVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ActorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ControlRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewProp_ControlRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_DefaultCombineSettings",
		Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::PropPointers),
		sizeof(FGMC_DefaultCombineSettings),
		alignof(FGMC_DefaultCombineSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_DefaultCombineSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_DefaultCombineSettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_DefaultCombineSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_DefaultSimulationSettings;
class UScriptStruct* FGMC_DefaultSimulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_DefaultSimulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_DefaultSimulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_DefaultSimulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_DefaultSimulationSettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_DefaultSimulationSettings>()
{
	return FGMC_DefaultSimulationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorBase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorBase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorBase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_DefaultSimulationSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorBase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorBase_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorBase = { "ActorBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultSimulationSettings, ActorBase), Z_Construct_UEnum_GMCCore_EGMC_SimulationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorBase_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorBase_MetaData) }; // 772553417
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_LinearVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultSimulationSettings, LinearVelocity), Z_Construct_UEnum_GMCCore_EGMC_SimulationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_LinearVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_LinearVelocity_MetaData) }; // 772553417
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_AngularVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultSimulationSettings, AngularVelocity), Z_Construct_UEnum_GMCCore_EGMC_SimulationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_AngularVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_AngularVelocity_MetaData) }; // 772553417
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorLocation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultSimulationSettings, ActorLocation), Z_Construct_UEnum_GMCCore_EGMC_SimulationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorLocation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorLocation_MetaData) }; // 772553417
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultSimulationSettings, ActorRotation), Z_Construct_UEnum_GMCCore_EGMC_SimulationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorRotation_MetaData) }; // 772553417
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorScale_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorScale = { "ActorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultSimulationSettings, ActorScale), Z_Construct_UEnum_GMCCore_EGMC_SimulationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorScale_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorScale_MetaData) }; // 772553417
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ControlRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultSimulationSettings, ControlRotation), Z_Construct_UEnum_GMCCore_EGMC_SimulationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ControlRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ControlRotation_MetaData) }; // 772553417
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorBase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_LinearVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_AngularVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ActorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ControlRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewProp_ControlRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_DefaultSimulationSettings",
		Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::PropPointers),
		sizeof(FGMC_DefaultSimulationSettings),
		alignof(FGMC_DefaultSimulationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_DefaultSimulationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_DefaultSimulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_DefaultSimulationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_DefaultInterpolationFunctions;
class UScriptStruct* FGMC_DefaultInterpolationFunctions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_DefaultInterpolationFunctions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_DefaultInterpolationFunctions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_DefaultInterpolationFunctions"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_DefaultInterpolationFunctions.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_DefaultInterpolationFunctions>()
{
	return FGMC_DefaultInterpolationFunctions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorBase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorBase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorBase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_DefaultInterpolationFunctions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorBase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorBase_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorBase = { "ActorBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultInterpolationFunctions, ActorBase), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorBase_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorBase_MetaData) }; // 1765561128
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_LinearVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultInterpolationFunctions, LinearVelocity), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_LinearVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_LinearVelocity_MetaData) }; // 1765561128
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_AngularVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultInterpolationFunctions, AngularVelocity), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_AngularVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_AngularVelocity_MetaData) }; // 1765561128
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorLocation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultInterpolationFunctions, ActorLocation), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorLocation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorLocation_MetaData) }; // 1765561128
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultInterpolationFunctions, ActorRotation), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorRotation_MetaData) }; // 1765561128
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorScale_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorScale = { "ActorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultInterpolationFunctions, ActorScale), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorScale_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorScale_MetaData) }; // 1765561128
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ControlRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultInterpolationFunctions, ControlRotation), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ControlRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ControlRotation_MetaData) }; // 1765561128
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorBase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_LinearVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_AngularVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ActorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ControlRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewProp_ControlRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_DefaultInterpolationFunctions",
		Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::PropPointers),
		sizeof(FGMC_DefaultInterpolationFunctions),
		alignof(FGMC_DefaultInterpolationFunctions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_DefaultInterpolationFunctions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_DefaultInterpolationFunctions.InnerSingleton, Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_DefaultInterpolationFunctions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_DefaultCompressionSettings;
class UScriptStruct* FGMC_DefaultCompressionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_DefaultCompressionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_DefaultCompressionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_DefaultCompressionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_DefaultCompressionSettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_DefaultCompressionSettings>()
{
	return FGMC_DefaultCompressionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularVelocity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_DefaultCompressionSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_LinearVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCompressionSettings, LinearVelocity), Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_LinearVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_LinearVelocity_MetaData) }; // 1939313641
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_AngularVelocity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCompressionSettings, AngularVelocity), Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_AngularVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_AngularVelocity_MetaData) }; // 1939313641
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorLocation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCompressionSettings, ActorLocation), Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorLocation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorLocation_MetaData) }; // 1939313641
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCompressionSettings, ActorRotation), Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorRotation_MetaData) }; // 1939313641
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorScale_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorScale = { "ActorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCompressionSettings, ActorScale), Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorScale_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorScale_MetaData) }; // 1939313641
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ControlRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultCompressionSettings, ControlRotation), Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ControlRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ControlRotation_MetaData) }; // 1939313641
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_LinearVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_AngularVelocity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ActorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ControlRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewProp_ControlRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_DefaultCompressionSettings",
		Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::PropPointers),
		sizeof(FGMC_DefaultCompressionSettings),
		alignof(FGMC_DefaultCompressionSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_DefaultCompressionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_DefaultCompressionSettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_DefaultCompressionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_DefaultErrorTolerances;
class UScriptStruct* FGMC_DefaultErrorTolerances::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_DefaultErrorTolerances.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_DefaultErrorTolerances.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_DefaultErrorTolerances"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_DefaultErrorTolerances.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_DefaultErrorTolerances>()
{
	return FGMC_DefaultErrorTolerances::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_DefaultErrorTolerances>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultErrorTolerances, LinearVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_LinearVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_LinearVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultErrorTolerances, AngularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_AngularVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_AngularVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorLocation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultErrorTolerances, ActorLocation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorLocation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultErrorTolerances, ActorRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorScale_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorScale = { "ActorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultErrorTolerances, ActorScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorScale_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultErrorTolerances, ControlRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ControlRotation_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ControlRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ActorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewProp_ControlRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_DefaultErrorTolerances",
		Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::PropPointers),
		sizeof(FGMC_DefaultErrorTolerances),
		alignof(FGMC_DefaultErrorTolerances),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_DefaultErrorTolerances.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_DefaultErrorTolerances.InnerSingleton, Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_DefaultErrorTolerances.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_DefaultReplicationSettings;
class UScriptStruct* FGMC_DefaultReplicationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_DefaultReplicationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_DefaultReplicationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_DefaultReplicationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_DefaultReplicationSettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_DefaultReplicationSettings>()
{
	return FGMC_DefaultReplicationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPredictionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPredictionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCombineSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCombineSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSimulationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSimulationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInterpolationFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInterpolationFunctions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCompressionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultErrorTolerances_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultErrorTolerances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_DefaultReplicationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultPredictionSettings_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultPredictionSettings = { "DefaultPredictionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultReplicationSettings, DefaultPredictionSettings), Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultPredictionSettings_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultPredictionSettings_MetaData) }; // 4288088575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCombineSettings_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCombineSettings = { "DefaultCombineSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultReplicationSettings, DefaultCombineSettings), Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCombineSettings_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCombineSettings_MetaData) }; // 2542797052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultSimulationSettings_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultSimulationSettings = { "DefaultSimulationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultReplicationSettings, DefaultSimulationSettings), Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultSimulationSettings_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultSimulationSettings_MetaData) }; // 577827170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultInterpolationFunctions_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultInterpolationFunctions = { "DefaultInterpolationFunctions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultReplicationSettings, DefaultInterpolationFunctions), Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultInterpolationFunctions_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultInterpolationFunctions_MetaData) }; // 3268222280
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCompressionSettings_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCompressionSettings = { "DefaultCompressionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultReplicationSettings, DefaultCompressionSettings), Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCompressionSettings_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCompressionSettings_MetaData) }; // 1743061848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultErrorTolerances_MetaData[] = {
		{ "Category", "Replication Settings" },
		{ "ModuleRelativePath", "Public/Replication/SyncSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultErrorTolerances = { "DefaultErrorTolerances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_DefaultReplicationSettings, DefaultErrorTolerances), Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultErrorTolerances_MetaData), Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultErrorTolerances_MetaData) }; // 2946793445
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultPredictionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCombineSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultSimulationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultInterpolationFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultCompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewProp_DefaultErrorTolerances,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_DefaultReplicationSettings",
		Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::PropPointers),
		sizeof(FGMC_DefaultReplicationSettings),
		alignof(FGMC_DefaultReplicationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_DefaultReplicationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_DefaultReplicationSettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_DefaultReplicationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_Statics::EnumInfo[] = {
		{ EGMC_PredictionMode_StaticEnum, TEXT("EGMC_PredictionMode"), &Z_Registration_Info_UEnum_EGMC_PredictionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1265865235U) },
		{ EGMC_CombineMode_StaticEnum, TEXT("EGMC_CombineMode"), &Z_Registration_Info_UEnum_EGMC_CombineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 904251608U) },
		{ EGMC_SimulationMode_StaticEnum, TEXT("EGMC_SimulationMode"), &Z_Registration_Info_UEnum_EGMC_SimulationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 772553417U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_Statics::ScriptStructInfo[] = {
		{ FGMC_DefaultPredictionSettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics::NewStructOps, TEXT("GMC_DefaultPredictionSettings"), &Z_Registration_Info_UScriptStruct_GMC_DefaultPredictionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_DefaultPredictionSettings), 4288088575U) },
		{ FGMC_DefaultCombineSettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics::NewStructOps, TEXT("GMC_DefaultCombineSettings"), &Z_Registration_Info_UScriptStruct_GMC_DefaultCombineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_DefaultCombineSettings), 2542797052U) },
		{ FGMC_DefaultSimulationSettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics::NewStructOps, TEXT("GMC_DefaultSimulationSettings"), &Z_Registration_Info_UScriptStruct_GMC_DefaultSimulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_DefaultSimulationSettings), 577827170U) },
		{ FGMC_DefaultInterpolationFunctions::StaticStruct, Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics::NewStructOps, TEXT("GMC_DefaultInterpolationFunctions"), &Z_Registration_Info_UScriptStruct_GMC_DefaultInterpolationFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_DefaultInterpolationFunctions), 3268222280U) },
		{ FGMC_DefaultCompressionSettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics::NewStructOps, TEXT("GMC_DefaultCompressionSettings"), &Z_Registration_Info_UScriptStruct_GMC_DefaultCompressionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_DefaultCompressionSettings), 1743061848U) },
		{ FGMC_DefaultErrorTolerances::StaticStruct, Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics::NewStructOps, TEXT("GMC_DefaultErrorTolerances"), &Z_Registration_Info_UScriptStruct_GMC_DefaultErrorTolerances, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_DefaultErrorTolerances), 2946793445U) },
		{ FGMC_DefaultReplicationSettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics::NewStructOps, TEXT("GMC_DefaultReplicationSettings"), &Z_Registration_Info_UScriptStruct_GMC_DefaultReplicationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_DefaultReplicationSettings), 2603544170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_1494622312(TEXT("/Script/GMCCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
