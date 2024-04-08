// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Replication/SyncInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSyncInterface() {}
// Cross Module References
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_PawnState();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_PawnState;
class UScriptStruct* FGMC_PawnState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_PawnState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_PawnState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_PawnState, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_PawnState"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_PawnState.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_PawnState>()
{
	return FGMC_PawnState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_PawnState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_PawnState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/SyncInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_PawnState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_PawnState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_PawnState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_PawnState",
		nullptr,
		0,
		sizeof(FGMC_PawnState),
		alignof(FGMC_PawnState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_PawnState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_PawnState_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_PawnState()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_PawnState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_PawnState.InnerSingleton, Z_Construct_UScriptStruct_FGMC_PawnState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_PawnState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncInterface_h_Statics::ScriptStructInfo[] = {
		{ FGMC_PawnState::StaticStruct, Z_Construct_UScriptStruct_FGMC_PawnState_Statics::NewStructOps, TEXT("GMC_PawnState"), &Z_Registration_Info_UScriptStruct_GMC_PawnState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_PawnState), 1223012799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncInterface_h_606399850(TEXT("/Script/GMCCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
