// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGStats/Public/DataAssets/SKGPDAFirearmAttachmentStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPDAFirearmAttachmentStats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmAttachmentStats();
SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmAttachmentStats_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGStats();
// End Cross Module References

// Begin Class USKGPDAFirearmAttachmentStats
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/SKGPDAFirearmAttachmentStats.h" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ergonomics_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Accuracy is in MOA\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accuracy is in MOA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoil_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocityPercentage_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Higher = faster muzzle velocity (such as going from 11.5in barrel to 20in barrel)\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher = faster muzzle velocity (such as going from 11.5in barrel to 20in barrel)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRateChangePercent_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rounds per minute\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAFirearmAttachmentStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rounds per minute" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ergonomics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocityPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRateChangePercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPDAFirearmAttachmentStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Ergonomics = { "Ergonomics", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, Ergonomics), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ergonomics_MetaData), NewProp_Ergonomics_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accuracy_MetaData), NewProp_Accuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_VerticalRecoil = { "VerticalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, VerticalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalRecoil_MetaData), NewProp_VerticalRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_HorizontalRecoil = { "HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, HorizontalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalRecoil_MetaData), NewProp_HorizontalRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_MuzzleVelocityPercentage = { "MuzzleVelocityPercentage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, MuzzleVelocityPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleVelocityPercentage_MetaData), NewProp_MuzzleVelocityPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_FireRateChangePercent = { "FireRateChangePercent", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAFirearmAttachmentStats, FireRateChangePercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRateChangePercent_MetaData), NewProp_FireRateChangePercent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Ergonomics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_VerticalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_HorizontalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_MuzzleVelocityPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::NewProp_FireRateChangePercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAFirearmAttachmentStats_Statics::DependentSingletons) < 16);
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
// End Class USKGPDAFirearmAttachmentStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmAttachmentStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGPDAFirearmAttachmentStats, USKGPDAFirearmAttachmentStats::StaticClass, TEXT("USKGPDAFirearmAttachmentStats"), &Z_Registration_Info_UClass_USKGPDAFirearmAttachmentStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPDAFirearmAttachmentStats), 3815791088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmAttachmentStats_h_3322245784(TEXT("/Script/SKGStats"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmAttachmentStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_DataAssets_SKGPDAFirearmAttachmentStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
