// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGStats/Public/DataAssets/SKGPDAFirearmAttachmentStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPDAFirearmAttachmentStats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmAttachmentStats();
	SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmAttachmentStats_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGStats();
// End Cross Module References
	void USKGPDAFirearmAttachmentStats::StaticRegisterNativesUSKGPDAFirearmAttachmentStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGPDAFirearmAttachmentStats);
	UClass* Z_Construct_UClass_USKGPDAFirearmAttachmentStats_NoRegister()
	{
		return USKGPDAFirearmAttachmentStats::StaticClass();
	}
	struct Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ergonomics_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ergonomics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRecoil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocityPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocityPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRateChangePercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRateChangePercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGStats,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataAssets/SKGPDAFirearmAttachmentStats.h" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Weight_MetaData), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Ergonomics_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Ergonomics = { "Ergonomics", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, Ergonomics), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Ergonomics_MetaData), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Ergonomics_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Accuracy_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "Comment", "// Accuracy is in MOA\n" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
		{ "ToolTip", "Accuracy is in MOA" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Accuracy_MetaData), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Accuracy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_VerticalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_VerticalRecoil = { "VerticalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, VerticalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_VerticalRecoil_MetaData), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_VerticalRecoil_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_HorizontalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_HorizontalRecoil = { "HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, HorizontalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_HorizontalRecoil_MetaData), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_HorizontalRecoil_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_MuzzleVelocityPercentage_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "Comment", "// Higher = faster muzzle velocity (such as going from 11.5in barrel to 20in barrel)\n" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
		{ "ToolTip", "Higher = faster muzzle velocity (such as going from 11.5in barrel to 20in barrel)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_MuzzleVelocityPercentage = { "MuzzleVelocityPercentage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, MuzzleVelocityPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_MuzzleVelocityPercentage_MetaData), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_MuzzleVelocityPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_FireRateChangePercent_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "Comment", "// Rounds per minute\n" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
		{ "ToolTip", "Rounds per minute" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_FireRateChangePercent = { "FireRateChangePercent", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, FireRateChangePercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_FireRateChangePercent_MetaData), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_FireRateChangePercent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Ergonomics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Accuracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_VerticalRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_HorizontalRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_MuzzleVelocityPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_FireRateChangePercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPDAFirearmAttachmentStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::ClassParams = {
		&USKGPDAFirearmAttachmentStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGPDAFirearmAttachmentStats()
	{
		if (!Z_Registration_Info_UClass_USKGPDAFirearmAttachmentStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGPDAFirearmAttachmentStats.OuterSingleton, Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGPDAFirearmAttachmentStats.OuterSingleton;
	}
	template<> SKGSTATS_API UClass* StaticClass<USKGPDAFirearmAttachmentStats>()
	{
		return USKGPDAFirearmAttachmentStats::StaticClass();
	}
	USKGPDAFirearmAttachmentStats::USKGPDAFirearmAttachmentStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGPDAFirearmAttachmentStats);
	USKGPDAFirearmAttachmentStats::~USKGPDAFirearmAttachmentStats() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmAttachmentStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmAttachmentStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGPDAFirearmAttachmentStats, USKGPDAFirearmAttachmentStats::StaticClass, TEXT("USKGPDAFirearmAttachmentStats"), &Z_Registration_Info_UClass_USKGPDAFirearmAttachmentStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPDAFirearmAttachmentStats), 1518146043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmAttachmentStats_h_811192007(TEXT("/Script/SKGStats"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmAttachmentStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmAttachmentStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
