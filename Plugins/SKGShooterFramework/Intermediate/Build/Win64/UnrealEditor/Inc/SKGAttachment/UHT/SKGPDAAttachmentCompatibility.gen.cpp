// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGAttachment/Public/DataAssets/SKGPDAAttachmentCompatibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPDAAttachmentCompatibility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGPDAAttachmentCompatibility();
SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGPDAAttachmentCompatibility_NoRegister();
SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGDAAttachment();
UPackage* Z_Construct_UPackage__Script_SKGAttachment();
// End Cross Module References

// Begin ScriptStruct FSKGDAAttachment
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAAttachmentCompatibility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "SKGAttachmentDataTypes" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAAttachmentCompatibility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGDAAttachment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGDAAttachment, Class), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewProp_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::StructParams = {
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
UScriptStruct* Z_Construct_UScriptStruct_FSKGDAAttachment()
{
	if (!Z_Registration_Info_UScriptStruct_SKGDAAttachment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGDAAttachment.InnerSingleton, Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGDAAttachment.InnerSingleton;
}
// End ScriptStruct FSKGDAAttachment

// Begin Class USKGPDAAttachmentCompatibility
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/SKGPDAAttachmentCompatibility.h" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAAttachmentCompatibility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "ModuleRelativePath", "Public/DataAssets/SKGPDAAttachmentCompatibility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attachments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attachments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPDAAttachmentCompatibility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGDAAttachment, METADATA_PARAMS(0, nullptr) }; // 3048604780
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGPDAAttachmentCompatibility, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attachments_MetaData), NewProp_Attachments_MetaData) }; // 3048604780
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::NewProp_Attachments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPDAAttachmentCompatibility_Statics::DependentSingletons) < 16);
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
// End Class USKGPDAAttachmentCompatibility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGDAAttachment::StaticStruct, Z_Construct_UScriptStruct_FSKGDAAttachment_Statics::NewStructOps, TEXT("SKGDAAttachment"), &Z_Registration_Info_UScriptStruct_SKGDAAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGDAAttachment), 3048604780U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGPDAAttachmentCompatibility, USKGPDAAttachmentCompatibility::StaticClass, TEXT("USKGPDAAttachmentCompatibility"), &Z_Registration_Info_UClass_USKGPDAAttachmentCompatibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPDAAttachmentCompatibility), 1870948348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_922678421(TEXT("/Script/SKGAttachment"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataAssets_SKGPDAAttachmentCompatibility_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
