// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGOptional/Public/Actors/SKGCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGCharacter() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SKGOPTIONAL_API UClass* Z_Construct_UClass_ASKGCharacter();
	SKGOPTIONAL_API UClass* Z_Construct_UClass_ASKGCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGOptional();
// End Cross Module References
	void ASKGCharacter::StaticRegisterNativesASKGCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASKGCharacter);
	UClass* Z_Construct_UClass_ASKGCharacter_NoRegister()
	{
		return ASKGCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASKGCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BonesToCheck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonesToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASKGCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGOptional,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASKGCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASKGCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/SKGCharacter.h" },
		{ "ModuleRelativePath", "Public/Actors/SKGCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASKGCharacter_Statics::NewProp_BonesToCheck_Inner = { "BonesToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASKGCharacter_Statics::NewProp_BonesToCheck_MetaData[] = {
		{ "Category", "SKG|AI" },
		{ "ModuleRelativePath", "Public/Actors/SKGCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASKGCharacter_Statics::NewProp_BonesToCheck = { "BonesToCheck", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASKGCharacter, BonesToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASKGCharacter_Statics::NewProp_BonesToCheck_MetaData), Z_Construct_UClass_ASKGCharacter_Statics::NewProp_BonesToCheck_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASKGCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASKGCharacter_Statics::NewProp_BonesToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASKGCharacter_Statics::NewProp_BonesToCheck,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASKGCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ASKGCharacter, IAISightTargetInterface), false },  // 1740845523
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASKGCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASKGCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASKGCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASKGCharacter_Statics::ClassParams = {
		&ASKGCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASKGCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASKGCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASKGCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASKGCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASKGCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASKGCharacter()
	{
		if (!Z_Registration_Info_UClass_ASKGCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASKGCharacter.OuterSingleton, Z_Construct_UClass_ASKGCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASKGCharacter.OuterSingleton;
	}
	template<> SKGOPTIONAL_API UClass* StaticClass<ASKGCharacter>()
	{
		return ASKGCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASKGCharacter);
	ASKGCharacter::~ASKGCharacter() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASKGCharacter, ASKGCharacter::StaticClass, TEXT("ASKGCharacter"), &Z_Registration_Info_UClass_ASKGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASKGCharacter), 1883741684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_2936171933(TEXT("/Script/SKGOptional"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Actors_SKGCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
