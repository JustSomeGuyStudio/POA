// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGOptic/Public/DataTypes/SKGOpticCoreDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGOpticCoreDataTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticReticle();
	UPackage* Z_Construct_UPackage__Script_SKGOptic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGOpticReticle;
class UScriptStruct* FSKGOpticReticle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticReticle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGOpticReticle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGOpticReticle, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("SKGOpticReticle"));
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticReticle.OuterSingleton;
}
template<> SKGOPTIC_API UScriptStruct* StaticStruct<FSKGOpticReticle>()
{
	return FSKGOpticReticle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGOpticReticle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReticleMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicReticleMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicReticleMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGOpticCoreDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticReticle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_ReticleMaterial_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGOpticCoreDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_ReticleMaterial = { "ReticleMaterial", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticle, ReticleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_ReticleMaterial_MetaData), Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_ReticleMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_DynamicReticleMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataTypes/SKGOpticCoreDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_DynamicReticleMaterial = { "DynamicReticleMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticle, DynamicReticleMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_DynamicReticleMaterial_MetaData), Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_DynamicReticleMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_ReticleMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_DynamicReticleMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
		nullptr,
		&NewStructOps,
		"SKGOpticReticle",
		Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::PropPointers),
		sizeof(FSKGOpticReticle),
		alignof(FSKGOpticReticle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticReticle()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGOpticReticle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticReticle.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGOpticReticle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_DataTypes_SKGOpticCoreDataTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_DataTypes_SKGOpticCoreDataTypes_h_Statics::ScriptStructInfo[] = {
		{ FSKGOpticReticle::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewStructOps, TEXT("SKGOpticReticle"), &Z_Registration_Info_UScriptStruct_SKGOpticReticle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticReticle), 1653590864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_DataTypes_SKGOpticCoreDataTypes_h_4048660110(TEXT("/Script/SKGOptic"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_DataTypes_SKGOpticCoreDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_DataTypes_SKGOpticCoreDataTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
