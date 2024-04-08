// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGStats/Public/DataAssets/SKGPDAFirearmStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPDAFirearmStats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmStats();
	SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmStats_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGStats();
// End Cross Module References
	void USKGPDAFirearmStats::StaticRegisterNativesUSKGPDAFirearmStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGPDAFirearmStats);
	UClass* Z_Construct_UClass_USKGPDAFirearmStats_NoRegister()
	{
		return USKGPDAFirearmStats::StaticClass();
	}
	struct Z_Construct_UClass_USKGPDAFirearmStats_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Durability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Durability;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGPDAFirearmStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGStats,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataAssets/SKGPDAFirearmStats.h" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Weight_MetaData), Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Durability_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, Durability), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Durability_MetaData), Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Durability_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Ergonomics_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Ergonomics = { "Ergonomics", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, Ergonomics), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Ergonomics_MetaData), Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Ergonomics_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Accuracy_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "Comment", "// Accuracy is in MOA\n" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
		{ "ToolTip", "Accuracy is in MOA" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Accuracy_MetaData), Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Accuracy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_VerticalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_VerticalRecoil = { "VerticalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, VerticalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_VerticalRecoil_MetaData), Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_VerticalRecoil_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_HorizontalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_HorizontalRecoil = { "HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, HorizontalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_HorizontalRecoil_MetaData), Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_HorizontalRecoil_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "Comment", "// Rounds per minute\n" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
		{ "ToolTip", "Rounds per minute" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_FireRate_MetaData), Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_FireRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGPDAFirearmStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Durability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Ergonomics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Accuracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_VerticalRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_HorizontalRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_FireRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGPDAFirearmStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPDAFirearmStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::ClassParams = {
		&USKGPDAFirearmStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USKGPDAFirearmStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGPDAFirearmStats_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGPDAFirearmStats()
	{
		if (!Z_Registration_Info_UClass_USKGPDAFirearmStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGPDAFirearmStats.OuterSingleton, Z_Construct_UClass_USKGPDAFirearmStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGPDAFirearmStats.OuterSingleton;
	}
	template<> SKGSTATS_API UClass* StaticClass<USKGPDAFirearmStats>()
	{
		return USKGPDAFirearmStats::StaticClass();
	}
	USKGPDAFirearmStats::USKGPDAFirearmStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGPDAFirearmStats);
	USKGPDAFirearmStats::~USKGPDAFirearmStats() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGPDAFirearmStats, USKGPDAFirearmStats::StaticClass, TEXT("USKGPDAFirearmStats"), &Z_Registration_Info_UClass_USKGPDAFirearmStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPDAFirearmStats), 1030580118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmStats_h_1721924988(TEXT("/Script/SKGStats"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
