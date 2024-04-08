// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGOptic/Public/DataTypes/SKGOpticCoreDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGOpticCoreDataTypes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticReticle();
UPackage* Z_Construct_UPackage__Script_SKGOptic();
// End Cross Module References

// Begin ScriptStruct FSKGOpticReticle
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGOpticCoreDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterial_MetaData[] = {
		{ "Category", "SKGOptic" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGOpticCoreDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicReticleMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataTypes/SKGOpticCoreDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReticleMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicReticleMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticReticle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_ReticleMaterial = { "ReticleMaterial", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticle, ReticleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleMaterial_MetaData), NewProp_ReticleMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_DynamicReticleMaterial = { "DynamicReticleMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticReticle, DynamicReticleMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicReticleMaterial_MetaData), NewProp_DynamicReticleMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_ReticleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewProp_DynamicReticleMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::StructParams = {
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
UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticReticle()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticReticle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticReticle.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticReticle.InnerSingleton;
}
// End ScriptStruct FSKGOpticReticle

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_DataTypes_SKGOpticCoreDataTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGOpticReticle::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticReticle_Statics::NewStructOps, TEXT("SKGOpticReticle"), &Z_Registration_Info_UScriptStruct_SKGOpticReticle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticReticle), 3356468478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_DataTypes_SKGOpticCoreDataTypes_h_390447818(TEXT("/Script/SKGOptic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_DataTypes_SKGOpticCoreDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_DataTypes_SKGOpticCoreDataTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
