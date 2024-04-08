// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/GeneralMovement/Source/GMCCore/Public/Utility/GMCAnimMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCAnimMontage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontageTracker();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin ScriptStruct FGMC_MontageTracker
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[] = {
		{ "Category", "General Movement Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The active montage.\n" },
#endif
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The active montage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontagePosition_MetaData[] = {
		{ "Category", "General Movement Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The position of the active montage.\n" },
#endif
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The position of the active montage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontagePlayRate_MetaData[] = {
		{ "Category", "General Movement Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The play rate of the active montage.\n" },
#endif
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The play rate of the active montage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMontagePaused_MetaData[] = {
		{ "Category", "General Movement Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the active montage is currently paused.\n" },
#endif
		{ "ModuleRelativePath", "Public/Utility/GMCAnimMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the active montage is currently paused." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MontagePosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MontagePlayRate;
	static void NewProp_bMontagePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMontagePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_MontageTracker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageTracker, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Montage_MetaData), NewProp_Montage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePosition = { "MontagePosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageTracker, MontagePosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontagePosition_MetaData), NewProp_MontagePosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePlayRate = { "MontagePlayRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MontageTracker, MontagePlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontagePlayRate_MetaData), NewProp_MontagePlayRate_MetaData) };
void Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused_SetBit(void* Obj)
{
	((FGMC_MontageTracker*)Obj)->bMontagePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused = { "bMontagePaused", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MontageTracker), &Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMontagePaused_MetaData), NewProp_bMontagePaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_MontagePlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewProp_bMontagePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::StructParams = {
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
UScriptStruct* Z_Construct_UScriptStruct_FGMC_MontageTracker()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_MontageTracker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_MontageTracker.InnerSingleton, Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_MontageTracker.InnerSingleton;
}
// End ScriptStruct FGMC_MontageTracker

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Utility_GMCAnimMontage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGMC_MontageTracker::StaticStruct, Z_Construct_UScriptStruct_FGMC_MontageTracker_Statics::NewStructOps, TEXT("GMC_MontageTracker"), &Z_Registration_Info_UScriptStruct_GMC_MontageTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_MontageTracker), 3219916790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Utility_GMCAnimMontage_h_3534652797(TEXT("/Script/GMCCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Utility_GMCAnimMontage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_GeneralMovement_Source_GMCCore_Public_Utility_GMCAnimMontage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
