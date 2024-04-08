// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGMuzzle/Public/Statics/SKGMuzzleHelpers.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGMuzzle/Public/Components/SKGMuzzleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGMuzzleHelpers() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SKGMUZZLE_API UClass* Z_Construct_UClass_USKGMuzzleHelpers();
SKGMUZZLE_API UClass* Z_Construct_UClass_USKGMuzzleHelpers_NoRegister();
SKGMUZZLE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMuzzleTransform();
UPackage* Z_Construct_UPackage__Script_SKGMuzzle();
// End Cross Module References

// Begin Class USKGMuzzleHelpers Function Conv_MuzzleTransformsToTransforms
struct Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics
{
	struct SKGMuzzleHelpers_eventConv_MuzzleTransformsToTransforms_Parms
	{
		TArray<FSKGMuzzleTransform> MuzzleTransforms;
		TArray<FTransform> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "SKGMuzzle|Conversion" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Array Of SKGMuzzleTransform To Transform" },
		{ "ModuleRelativePath", "Public/Statics/SKGMuzzleHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MuzzleTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::NewProp_MuzzleTransforms_Inner = { "MuzzleTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGMuzzleTransform, METADATA_PARAMS(0, nullptr) }; // 1931557247
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::NewProp_MuzzleTransforms = { "MuzzleTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleHelpers_eventConv_MuzzleTransformsToTransforms_Parms, MuzzleTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleTransforms_MetaData), NewProp_MuzzleTransforms_MetaData) }; // 1931557247
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleHelpers_eventConv_MuzzleTransformsToTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::NewProp_MuzzleTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::NewProp_MuzzleTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleHelpers, nullptr, "Conv_MuzzleTransformsToTransforms", nullptr, nullptr, Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::SKGMuzzleHelpers_eventConv_MuzzleTransformsToTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::SKGMuzzleHelpers_eventConv_MuzzleTransformsToTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGMuzzleHelpers::execConv_MuzzleTransformsToTransforms)
{
	P_GET_TARRAY_REF(FSKGMuzzleTransform,Z_Param_Out_MuzzleTransforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTransform>*)Z_Param__Result=USKGMuzzleHelpers::Conv_MuzzleTransformsToTransforms(Z_Param_Out_MuzzleTransforms);
	P_NATIVE_END;
}
// End Class USKGMuzzleHelpers Function Conv_MuzzleTransformsToTransforms

// Begin Class USKGMuzzleHelpers Function Conv_MuzzleTransformToTransform
struct Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics
{
	struct SKGMuzzleHelpers_eventConv_MuzzleTransformToTransform_Parms
	{
		FSKGMuzzleTransform MuzzleTransform;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "SKGMuzzle|Conversion" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "SKGMuzzleTransform To Transform" },
		{ "ModuleRelativePath", "Public/Statics/SKGMuzzleHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::NewProp_MuzzleTransform = { "MuzzleTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleHelpers_eventConv_MuzzleTransformToTransform_Parms, MuzzleTransform), Z_Construct_UScriptStruct_FSKGMuzzleTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleTransform_MetaData), NewProp_MuzzleTransform_MetaData) }; // 1931557247
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleHelpers_eventConv_MuzzleTransformToTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::NewProp_MuzzleTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleHelpers, nullptr, "Conv_MuzzleTransformToTransform", nullptr, nullptr, Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::SKGMuzzleHelpers_eventConv_MuzzleTransformToTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::SKGMuzzleHelpers_eventConv_MuzzleTransformToTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGMuzzleHelpers::execConv_MuzzleTransformToTransform)
{
	P_GET_STRUCT_REF(FSKGMuzzleTransform,Z_Param_Out_MuzzleTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=USKGMuzzleHelpers::Conv_MuzzleTransformToTransform(Z_Param_Out_MuzzleTransform);
	P_NATIVE_END;
}
// End Class USKGMuzzleHelpers Function Conv_MuzzleTransformToTransform

// Begin Class USKGMuzzleHelpers
void USKGMuzzleHelpers::StaticRegisterNativesUSKGMuzzleHelpers()
{
	UClass* Class = USKGMuzzleHelpers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Conv_MuzzleTransformsToTransforms", &USKGMuzzleHelpers::execConv_MuzzleTransformsToTransforms },
		{ "Conv_MuzzleTransformToTransform", &USKGMuzzleHelpers::execConv_MuzzleTransformToTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGMuzzleHelpers);
UClass* Z_Construct_UClass_USKGMuzzleHelpers_NoRegister()
{
	return USKGMuzzleHelpers::StaticClass();
}
struct Z_Construct_UClass_USKGMuzzleHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Statics/SKGMuzzleHelpers.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGMuzzleHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformsToTransforms, "Conv_MuzzleTransformsToTransforms" }, // 1487933157
		{ &Z_Construct_UFunction_USKGMuzzleHelpers_Conv_MuzzleTransformToTransform, "Conv_MuzzleTransformToTransform" }, // 918989200
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGMuzzleHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USKGMuzzleHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGMuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGMuzzleHelpers_Statics::ClassParams = {
	&USKGMuzzleHelpers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGMuzzleHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGMuzzleHelpers()
{
	if (!Z_Registration_Info_UClass_USKGMuzzleHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGMuzzleHelpers.OuterSingleton, Z_Construct_UClass_USKGMuzzleHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGMuzzleHelpers.OuterSingleton;
}
template<> SKGMUZZLE_API UClass* StaticClass<USKGMuzzleHelpers>()
{
	return USKGMuzzleHelpers::StaticClass();
}
USKGMuzzleHelpers::USKGMuzzleHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGMuzzleHelpers);
USKGMuzzleHelpers::~USKGMuzzleHelpers() {}
// End Class USKGMuzzleHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGMuzzleHelpers, USKGMuzzleHelpers::StaticClass, TEXT("USKGMuzzleHelpers"), &Z_Registration_Info_UClass_USKGMuzzleHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGMuzzleHelpers), 464919306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_2015289956(TEXT("/Script/SKGMuzzle"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Statics_SKGMuzzleHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
