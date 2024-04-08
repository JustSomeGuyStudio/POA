// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGStats/Public/Components/SKGFirearmAttachmentStatComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGFirearmAttachmentStatComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SKGSTATS_API UClass* Z_Construct_UClass_USKGFirearmAttachmentStatComponent();
SKGSTATS_API UClass* Z_Construct_UClass_USKGFirearmAttachmentStatComponent_NoRegister();
SKGSTATS_API UClass* Z_Construct_UClass_USKGPDAFirearmAttachmentStats_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGStats();
// End Cross Module References

// Begin Class USKGFirearmAttachmentStatComponent Function GetAttachmentStats
struct Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics
{
	struct SKGFirearmAttachmentStatComponent_eventGetAttachmentStats_Parms
	{
		USKGPDAFirearmAttachmentStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmAttachmentStatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGFirearmAttachmentStatComponent_eventGetAttachmentStats_Parms, ReturnValue), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGFirearmAttachmentStatComponent, nullptr, "GetAttachmentStats", nullptr, nullptr, Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::SKGFirearmAttachmentStatComponent_eventGetAttachmentStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::SKGFirearmAttachmentStatComponent_eventGetAttachmentStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGFirearmAttachmentStatComponent::execGetAttachmentStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USKGPDAFirearmAttachmentStats**)Z_Param__Result=P_THIS->GetAttachmentStats();
	P_NATIVE_END;
}
// End Class USKGFirearmAttachmentStatComponent Function GetAttachmentStats

// Begin Class USKGFirearmAttachmentStatComponent
void USKGFirearmAttachmentStatComponent::StaticRegisterNativesUSKGFirearmAttachmentStatComponent()
{
	UClass* Class = USKGFirearmAttachmentStatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttachmentStats", &USKGFirearmAttachmentStatComponent::execGetAttachmentStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGFirearmAttachmentStatComponent);
UClass* Z_Construct_UClass_USKGFirearmAttachmentStatComponent_NoRegister()
{
	return USKGFirearmAttachmentStatComponent::StaticClass();
}
struct Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGFirearmAttachmentStatComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmAttachmentStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentStatsDataAsset_MetaData[] = {
		{ "BlueprintGetter", "GetAttachmentStats" },
		{ "Category", "SKGFirearmAttachmentStatComponent|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmAttachmentStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGFirearmAttachmentStatComponent|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGFirearmAttachmentStatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentStatsDataAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGFirearmAttachmentStatComponent_GetAttachmentStats, "GetAttachmentStats" }, // 3414044436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGFirearmAttachmentStatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::NewProp_AttachmentStatsDataAsset = { "AttachmentStatsDataAsset", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmAttachmentStatComponent, AttachmentStatsDataAsset), Z_Construct_UClass_USKGPDAFirearmAttachmentStats_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentStatsDataAsset_MetaData), NewProp_AttachmentStatsDataAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGFirearmAttachmentStatComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::NewProp_AttachmentStatsDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::NewProp_GameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGFirearmAttachmentStatComponent, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::ClassParams = {
	&USKGFirearmAttachmentStatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGFirearmAttachmentStatComponent()
{
	if (!Z_Registration_Info_UClass_USKGFirearmAttachmentStatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGFirearmAttachmentStatComponent.OuterSingleton, Z_Construct_UClass_USKGFirearmAttachmentStatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGFirearmAttachmentStatComponent.OuterSingleton;
}
template<> SKGSTATS_API UClass* StaticClass<USKGFirearmAttachmentStatComponent>()
{
	return USKGFirearmAttachmentStatComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGFirearmAttachmentStatComponent);
USKGFirearmAttachmentStatComponent::~USKGFirearmAttachmentStatComponent() {}
// End Class USKGFirearmAttachmentStatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGFirearmAttachmentStatComponent, USKGFirearmAttachmentStatComponent::StaticClass, TEXT("USKGFirearmAttachmentStatComponent"), &Z_Registration_Info_UClass_USKGFirearmAttachmentStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGFirearmAttachmentStatComponent), 3234522585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_3814241305(TEXT("/Script/SKGStats"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStats_Public_Components_SKGFirearmAttachmentStatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
