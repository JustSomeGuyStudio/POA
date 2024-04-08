// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGAttachment/Public/DataAssets/SKGPDAAttachmentCompatibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPDAAttachmentCompatibility() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGPDAAttachmentCompatibility();
	SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGPDAAttachmentCompatibility_NoRegister();
	SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGDAAttachment();
	UPackage* Z_Construct_UPackage__Script_SKGAttachment();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGDAAttachment;
class UScriptStruct* FSKGDAAttachment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGDAAttachment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGDAAttachment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGDAAttachment, (UObject*)Z_Construct_UPackage__Script_SKGAttachment(), TEXT("SKGDAAttachment"));
	}
	return Z_Registration_Info_UScriptStruct_SKGDAAttachment.OuterSingleton;
}
template<> SKGATTACHMENT_API UScriptStruct* StaticStruct<FSKGDAAttachment>()
{
	return FSKGDAAttachment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGDAAttachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAAttachmentCompatibility.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGDAAttachment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "SKGAttachmentDataTypes" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAAttachmentCompatibility.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDAAttachment, Class), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewProp_Class_MetaData), Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewProp_Class_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
		nullptr,
		&NewStructOps,
		"SKGDAAttachment",
		Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::PropPointers),
		sizeof(FSKGDAAttachment),
		alignof(FSKGDAAttachment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGDAAttachment()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGDAAttachment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGDAAttachment.InnerSingleton, Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGDAAttachment.InnerSingleton;
	}
	void USKGPDAAttachmentCompatibility::StaticRegisterNativesUSKGPDAAttachmentCompatibility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGPDAAttachmentCompatibility);
	UClass* Z_Construct_UClass_USKGPDAAttachmentCompatibility_NoRegister()
	{
		return USKGPDAAttachmentCompatibility::StaticClass();
	}
	struct Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/SKGPDAAttachmentCompatibility.h" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAAttachmentCompatibility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGDAAttachment, METADATA_PARAMS(0, nullptr) }; // 1795441745
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAAttachmentCompatibility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAAttachmentCompatibility, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments_MetaData), Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments_MetaData) }; // 1795441745
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPDAAttachmentCompatibility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::ClassParams = {
		&USKGPDAAttachmentCompatibility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGPDAAttachmentCompatibility()
	{
		if (!Z_Registration_Info_UClass_USKGPDAAttachmentCompatibility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGPDAAttachmentCompatibility.OuterSingleton, Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGPDAAttachmentCompatibility.OuterSingleton;
	}
	template<> SKGATTACHMENT_API UClass* StaticClass<USKGPDAAttachmentCompatibility>()
	{
		return USKGPDAAttachmentCompatibility::StaticClass();
	}
	USKGPDAAttachmentCompatibility::USKGPDAAttachmentCompatibility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGPDAAttachmentCompatibility);
	USKGPDAAttachmentCompatibility::~USKGPDAAttachmentCompatibility() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ScriptStructInfo[] = {
		{ FSKGDAAttachment::StaticStruct, Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewStructOps, TEXT("SKGDAAttachment"), &Z_Registration_Info_UScriptStruct_SKGDAAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGDAAttachment), 1795441745U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGPDAAttachmentCompatibility, USKGPDAAttachmentCompatibility::StaticClass, TEXT("USKGPDAAttachmentCompatibility"), &Z_Registration_Info_UClass_USKGPDAAttachmentCompatibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPDAAttachmentCompatibility), 70438023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_2363685096(TEXT("/Script/SKGAttachment"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
