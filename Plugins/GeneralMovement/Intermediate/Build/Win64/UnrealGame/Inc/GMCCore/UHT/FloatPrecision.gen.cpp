// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Replication/FloatPrecision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatPrecision() {}
// Cross Module References
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint;
	static UEnum* EGMC_FloatPrecisionBlueprint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_FloatPrecisionBlueprint"));
		}
		return Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_FloatPrecisionBlueprint>()
	{
		return EGMC_FloatPrecisionBlueprint_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enumerators[] = {
		{ "EGMC_FloatPrecisionBlueprint::WholeNumber", (int64)EGMC_FloatPrecisionBlueprint::WholeNumber },
		{ "EGMC_FloatPrecisionBlueprint::OneDecimal", (int64)EGMC_FloatPrecisionBlueprint::OneDecimal },
		{ "EGMC_FloatPrecisionBlueprint::TwoDecimals", (int64)EGMC_FloatPrecisionBlueprint::TwoDecimals },
		{ "EGMC_FloatPrecisionBlueprint::ThreeDecimals", (int64)EGMC_FloatPrecisionBlueprint::ThreeDecimals },
		{ "EGMC_FloatPrecisionBlueprint::FourDecimals", (int64)EGMC_FloatPrecisionBlueprint::FourDecimals },
		{ "EGMC_FloatPrecisionBlueprint::FiveDecimals", (int64)EGMC_FloatPrecisionBlueprint::FiveDecimals },
		{ "EGMC_FloatPrecisionBlueprint::SixDecimals", (int64)EGMC_FloatPrecisionBlueprint::SixDecimals },
		{ "EGMC_FloatPrecisionBlueprint::FullPrecision", (int64)EGMC_FloatPrecisionBlueprint::FullPrecision },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FiveDecimals.Name", "EGMC_FloatPrecisionBlueprint::FiveDecimals" },
		{ "FourDecimals.Name", "EGMC_FloatPrecisionBlueprint::FourDecimals" },
		{ "FullPrecision.Name", "EGMC_FloatPrecisionBlueprint::FullPrecision" },
		{ "ModuleRelativePath", "Public/Replication/FloatPrecision.h" },
		{ "OneDecimal.Name", "EGMC_FloatPrecisionBlueprint::OneDecimal" },
		{ "SixDecimals.Name", "EGMC_FloatPrecisionBlueprint::SixDecimals" },
		{ "ThreeDecimals.Name", "EGMC_FloatPrecisionBlueprint::ThreeDecimals" },
		{ "TwoDecimals.Name", "EGMC_FloatPrecisionBlueprint::TwoDecimals" },
		{ "WholeNumber.Name", "EGMC_FloatPrecisionBlueprint::WholeNumber" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_FloatPrecisionBlueprint",
		"EGMC_FloatPrecisionBlueprint",
		Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint()
	{
		if (!Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h_Statics::EnumInfo[] = {
		{ EGMC_FloatPrecisionBlueprint_StaticEnum, TEXT("EGMC_FloatPrecisionBlueprint"), &Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1939313641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h_1561891433(TEXT("/Script/GMCCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
