// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGStats/Public/DataAssets/SKGPDAFirearmStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPDAFirearmStats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmStats();
SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmStats_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGStats();
// End Cross Module References

// Begin Class USKGPDAFirearmStats
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/SKGPDAFirearmStats.h" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Durability_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ergonomics_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Accuracy is in MOA\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accuracy is in MOA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "SKGFirearmStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rounds per minute\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rounds per minute" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Durability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ergonomics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPDAFirearmStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, Durability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Durability_MetaData), NewProp_Durability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Ergonomics = { "Ergonomics", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, Ergonomics), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ergonomics_MetaData), NewProp_Ergonomics_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accuracy_MetaData), NewProp_Accuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_VerticalRecoil = { "VerticalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, VerticalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalRecoil_MetaData), NewProp_VerticalRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_HorizontalRecoil = { "HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, HorizontalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalRecoil_MetaData), NewProp_HorizontalRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmStats, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGPDAFirearmStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Durability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Ergonomics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_VerticalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_HorizontalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmStats_Statics::NewProp_FireRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGPDAFirearmStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmStats_Statics::DependentSingletons) < 16);
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
// End Class USKGPDAFirearmStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGPDAFirearmStats, USKGPDAFirearmStats::StaticClass, TEXT("USKGPDAFirearmStats"), &Z_Registration_Info_UClass_USKGPDAFirearmStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPDAFirearmStats), 921281378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmStats_h_1222037424(TEXT("/Script/SKGStats"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
