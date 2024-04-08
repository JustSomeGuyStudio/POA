// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/GMCAnimMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCAnimMontage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontageTracker();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_MontageTracker;
class UScriptStruct* FGMC_MontageTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_MontageTracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_MontageTracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_MontageTracker, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_MontageTracker"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_MontageTracker.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_MontageTracker>()
{
	return FGMC_MontageTracker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MontagePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MontagePlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMontagePaused_MetaData[];
#endif
		static void NewProp_bMontagePaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMontagePaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_MontageTracker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The active montage.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
		{ "ToolTip", "The active montage." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageTracker, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_Montage_MetaData), Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePosition_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The position of the active montage.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
		{ "ToolTip", "The position of the active montage." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePosition = { "MontagePosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageTracker, MontagePosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePosition_MetaData), Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePlayRate_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// The play rate of the active montage.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
		{ "ToolTip", "The play rate of the active montage." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePlayRate = { "MontagePlayRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageTracker, MontagePlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePlayRate_MetaData), Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether the active montage is currently paused.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
		{ "ToolTip", "Whether the active montage is currently paused." },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused_SetBit(void* Obj)
	{
		((FGMC_MontageTracker*)Obj)->bMontagePaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused = { "bMontagePaused", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MontageTracker), &Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused_MetaData), Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_MontageTracker",
		Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::PropPointers),
		sizeof(FGMC_MontageTracker),
		alignof(FGMC_MontageTracker),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontageTracker()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_MontageTracker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_MontageTracker.InnerSingleton, Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_MontageTracker.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCAnimMontage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCAnimMontage_h_Statics::ScriptStructInfo[] = {
		{ FGMC_MontageTracker::StaticStruct, Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewStructOps, TEXT("GMC_MontageTracker"), &Z_Registration_Info_UScriptStruct_GMC_MontageTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_MontageTracker), 706984860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCAnimMontage_h_1201997995(TEXT("/Script/GMCCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCAnimMontage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCAnimMontage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
