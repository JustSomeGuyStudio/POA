// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGOptic/Public/Statics/SKGOpticLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGOpticLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticLibrary();
SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGOptic();
// End Cross Module References

// Begin Class USKGOpticLibrary Function MagnificationToFOVAngle
struct Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics
{
	struct SKGOpticLibrary_eventMagnificationToFOVAngle_Parms
	{
		float Magnification;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticLibrary" },
		{ "ModuleRelativePath", "Public/Statics/SKGOpticLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnification;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::NewProp_Magnification = { "Magnification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticLibrary_eventMagnificationToFOVAngle_Parms, Magnification), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnification_MetaData), NewProp_Magnification_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticLibrary_eventMagnificationToFOVAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::NewProp_Magnification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticLibrary, nullptr, "MagnificationToFOVAngle", nullptr, nullptr, Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::SKGOpticLibrary_eventMagnificationToFOVAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::SKGOpticLibrary_eventMagnificationToFOVAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticLibrary::execMagnificationToFOVAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnification);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USKGOpticLibrary::MagnificationToFOVAngle(Z_Param_Magnification);
	P_NATIVE_END;
}
// End Class USKGOpticLibrary Function MagnificationToFOVAngle

// Begin Class USKGOpticLibrary
void USKGOpticLibrary::StaticRegisterNativesUSKGOpticLibrary()
{
	UClass* Class = USKGOpticLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MagnificationToFOVAngle", &USKGOpticLibrary::execMagnificationToFOVAngle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGOpticLibrary);
UClass* Z_Construct_UClass_USKGOpticLibrary_NoRegister()
{
	return USKGOpticLibrary::StaticClass();
}
struct Z_Construct_UClass_USKGOpticLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Statics/SKGOpticLibrary.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGOpticLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGOpticLibrary_MagnificationToFOVAngle, "MagnificationToFOVAngle" }, // 3221770834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGOpticLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USKGOpticLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGOpticLibrary_Statics::ClassParams = {
	&USKGOpticLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGOpticLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGOpticLibrary()
{
	if (!Z_Registration_Info_UClass_USKGOpticLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGOpticLibrary.OuterSingleton, Z_Construct_UClass_USKGOpticLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGOpticLibrary.OuterSingleton;
}
template<> SKGOPTIC_API UClass* StaticClass<USKGOpticLibrary>()
{
	return USKGOpticLibrary::StaticClass();
}
USKGOpticLibrary::USKGOpticLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGOpticLibrary);
USKGOpticLibrary::~USKGOpticLibrary() {}
// End Class USKGOpticLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Statics_SKGOpticLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGOpticLibrary, USKGOpticLibrary::StaticClass, TEXT("USKGOpticLibrary"), &Z_Registration_Info_UClass_USKGOpticLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGOpticLibrary), 3979325214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Statics_SKGOpticLibrary_h_3516858550(TEXT("/Script/SKGOptic"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Statics_SKGOpticLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Statics_SKGOpticLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
