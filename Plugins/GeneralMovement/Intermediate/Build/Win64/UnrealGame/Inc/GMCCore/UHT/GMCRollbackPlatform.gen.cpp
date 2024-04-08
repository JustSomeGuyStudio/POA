// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/GMCRollbackPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCRollbackPlatform() {}
// Cross Module References
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_RollbackActor();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_RollbackPlatform();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_RollbackPlatform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	void AGMC_RollbackPlatform::StaticRegisterNativesAGMC_RollbackPlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMC_RollbackPlatform);
	UClass* Z_Construct_UClass_AGMC_RollbackPlatform_NoRegister()
	{
		return AGMC_RollbackPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AGMC_RollbackPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearMoveDuration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearMoveDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMC_RollbackPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGMC_RollbackActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackPlatform_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackPlatform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/// Rollback actor that will continuously rotate and/or move back and forth in a straight line between two points at a fixed speed.\n" },
		{ "IncludePath", "Actors/GMCRollbackPlatform.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackPlatform.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Rollback actor that will continuously rotate and/or move back and forth in a straight line between two points at a fixed speed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackPlatform_Statics::NewProp_LinearMoveDuration_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/// For how long the platform should move with the configured linear velocity before reverting its direction (in seconds).\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackPlatform.h" },
		{ "ToolTip", "For how long the platform should move with the configured linear velocity before reverting its direction (in seconds)." },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AGMC_RollbackPlatform_Statics::NewProp_LinearMoveDuration = { "LinearMoveDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackPlatform, LinearMoveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackPlatform_Statics::NewProp_LinearMoveDuration_MetaData), Z_Construct_UClass_AGMC_RollbackPlatform_Statics::NewProp_LinearMoveDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMC_RollbackPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackPlatform_Statics::NewProp_LinearMoveDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMC_RollbackPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMC_RollbackPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMC_RollbackPlatform_Statics::ClassParams = {
		&AGMC_RollbackPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGMC_RollbackPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMC_RollbackPlatform_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackPlatform_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGMC_RollbackPlatform()
	{
		if (!Z_Registration_Info_UClass_AGMC_RollbackPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMC_RollbackPlatform.OuterSingleton, Z_Construct_UClass_AGMC_RollbackPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGMC_RollbackPlatform.OuterSingleton;
	}
	template<> GMCCORE_API UClass* StaticClass<AGMC_RollbackPlatform>()
	{
		return AGMC_RollbackPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMC_RollbackPlatform);
	AGMC_RollbackPlatform::~AGMC_RollbackPlatform() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGMC_RollbackPlatform, AGMC_RollbackPlatform::StaticClass, TEXT("AGMC_RollbackPlatform"), &Z_Registration_Info_UClass_AGMC_RollbackPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMC_RollbackPlatform), 815750951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackPlatform_h_3649510554(TEXT("/Script/GMCCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
