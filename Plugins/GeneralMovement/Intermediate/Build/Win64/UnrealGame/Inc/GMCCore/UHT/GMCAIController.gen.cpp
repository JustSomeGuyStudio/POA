// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/GMCAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_Aggregator_NoRegister();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_AIController();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_AIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	void AGMC_AIController::StaticRegisterNativesAGMC_AIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMC_AIController);
	UClass* Z_Construct_UClass_AGMC_AIController_NoRegister()
	{
		return AGMC_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AGMC_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateControlRotation_MetaData[];
#endif
		static void NewProp_bUpdateControlRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePawn_MetaData[];
#endif
		static void NewProp_bUpdatePawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GMCAggregator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GMCAggregator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMC_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_AIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_AIController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// AI controller class intended to be used with UGMC_MovementReplicationComponent.\n" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Actors/GMCAIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AI controller class intended to be used with UGMC_MovementReplicationComponent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdateControlRotation_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/// If true, the integrated \"UpdateControlRotation\" function of the default AI controller will be executed each tick.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAIController.h" },
		{ "ToolTip", "If true, the integrated \"UpdateControlRotation\" function of the default AI controller will be executed each tick." },
	};
#endif
	void Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdateControlRotation_SetBit(void* Obj)
	{
		((AGMC_AIController*)Obj)->bUpdateControlRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdateControlRotation = { "bUpdateControlRotation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_AIController), &Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdateControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdateControlRotation_MetaData), Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdateControlRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdatePawn_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/// The value for the parameter of the same name that should be passed to the \"UpdateControlRotation\" function (if it executes).\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAIController.h" },
		{ "ToolTip", "The value for the parameter of the same name that should be passed to the \"UpdateControlRotation\" function (if it executes)." },
	};
#endif
	void Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdatePawn_SetBit(void* Obj)
	{
		((AGMC_AIController*)Obj)->bUpdatePawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdatePawn = { "bUpdatePawn", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_AIController), &Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdatePawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdatePawn_MetaData), Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdatePawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_AIController_Statics::NewProp_GMCAggregator_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Cached reference to the GMC aggregator (if present).\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAIController.h" },
		{ "ToolTip", "Cached reference to the GMC aggregator (if present)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGMC_AIController_Statics::NewProp_GMCAggregator = { "GMCAggregator", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_AIController, GMCAggregator), Z_Construct_UClass_AGMC_Aggregator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_AIController_Statics::NewProp_GMCAggregator_MetaData), Z_Construct_UClass_AGMC_AIController_Statics::NewProp_GMCAggregator_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMC_AIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdateControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_AIController_Statics::NewProp_bUpdatePawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_AIController_Statics::NewProp_GMCAggregator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMC_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMC_AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMC_AIController_Statics::ClassParams = {
		&AGMC_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGMC_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMC_AIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_AIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGMC_AIController()
	{
		if (!Z_Registration_Info_UClass_AGMC_AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMC_AIController.OuterSingleton, Z_Construct_UClass_AGMC_AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGMC_AIController.OuterSingleton;
	}
	template<> GMCCORE_API UClass* StaticClass<AGMC_AIController>()
	{
		return AGMC_AIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMC_AIController);
	AGMC_AIController::~AGMC_AIController() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGMC_AIController, AGMC_AIController::StaticClass, TEXT("AGMC_AIController"), &Z_Registration_Info_UClass_AGMC_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMC_AIController), 3965988048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAIController_h_1022653543(TEXT("/Script/GMCCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
