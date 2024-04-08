// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGAnimGraphNodes/Public/AnimGraphNodes/SKGAnimNode_GameplayTagBlend.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGAnimNode_GameplayTagBlend() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SKGANIMGRAPHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend();
	UPackage* Z_Construct_UPackage__Script_SKGAnimGraphNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FSKGAnimNode_GameplayTagBlend>() == std::is_polymorphic<FAnimNode_BlendListBase>(), "USTRUCT FSKGAnimNode_GameplayTagBlend cannot be polymorphic unless super FAnimNode_BlendListBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGAnimNode_GameplayTagBlend;
class UScriptStruct* FSKGAnimNode_GameplayTagBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGAnimNode_GameplayTagBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGAnimNode_GameplayTagBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend, (UObject*)Z_Construct_UPackage__Script_SKGAnimGraphNodes(), TEXT("SKGAnimNode_GameplayTagBlend"));
	}
	return Z_Registration_Info_UScriptStruct_SKGAnimNode_GameplayTagBlend.OuterSingleton;
}
template<> SKGANIMGRAPHNODES_API UScriptStruct* StaticStruct<FSKGAnimNode_GameplayTagBlend>()
{
	return FSKGAnimNode_GameplayTagBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGameplayTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/AnimGraphNodes/SKGAnimNode_GameplayTagBlend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGAnimNode_GameplayTagBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_GameplayTagContainer_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNodes/SKGAnimNode_GameplayTagBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_GameplayTagContainer = { "GameplayTagContainer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAnimNode_GameplayTagBlend, GameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_GameplayTagContainer_MetaData), Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_GameplayTagContainer_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_ActiveGameplayTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNodes/SKGAnimNode_GameplayTagBlend.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_ActiveGameplayTag = { "ActiveGameplayTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAnimNode_GameplayTagBlend, ActiveGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_ActiveGameplayTag_MetaData), Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_ActiveGameplayTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_GameplayTagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewProp_ActiveGameplayTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGAnimGraphNodes,
		Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
		&NewStructOps,
		"SKGAnimNode_GameplayTagBlend",
		Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::PropPointers),
		sizeof(FSKGAnimNode_GameplayTagBlend),
		alignof(FSKGAnimNode_GameplayTagBlend),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGAnimNode_GameplayTagBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGAnimNode_GameplayTagBlend.InnerSingleton, Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGAnimNode_GameplayTagBlend.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAnimGraphNodes_Public_AnimGraphNodes_SKGAnimNode_GameplayTagBlend_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAnimGraphNodes_Public_AnimGraphNodes_SKGAnimNode_GameplayTagBlend_h_Statics::ScriptStructInfo[] = {
		{ FSKGAnimNode_GameplayTagBlend::StaticStruct, Z_Construct_UScriptStruct_FSKGAnimNode_GameplayTagBlend_Statics::NewStructOps, TEXT("SKGAnimNode_GameplayTagBlend"), &Z_Registration_Info_UScriptStruct_SKGAnimNode_GameplayTagBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGAnimNode_GameplayTagBlend), 1576258178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAnimGraphNodes_Public_AnimGraphNodes_SKGAnimNode_GameplayTagBlend_h_2736116172(TEXT("/Script/SKGAnimGraphNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAnimGraphNodes_Public_AnimGraphNodes_SKGAnimNode_GameplayTagBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAnimGraphNodes_Public_AnimGraphNodes_SKGAnimNode_GameplayTagBlend_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
