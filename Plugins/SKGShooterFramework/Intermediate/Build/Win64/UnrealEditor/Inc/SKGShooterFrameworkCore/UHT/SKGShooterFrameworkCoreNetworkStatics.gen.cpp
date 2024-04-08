// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFrameworkCore/Public/Statics/SKGShooterFrameworkCoreNetworkStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkCoreNetworkStatics() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References

// Begin Class USKGShooterFrameworkCoreNetworkStatics Function CompressFloatToByte
struct Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics
{
	struct SKGShooterFrameworkCoreNetworkStatics_eventCompressFloatToByte_Parms
	{
		float Value;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkCoreNetworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreNetworkStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreNetworkStatics_eventCompressFloatToByte_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreNetworkStatics_eventCompressFloatToByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics, nullptr, "CompressFloatToByte", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::SKGShooterFrameworkCoreNetworkStatics_eventCompressFloatToByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::SKGShooterFrameworkCoreNetworkStatics_eventCompressFloatToByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGShooterFrameworkCoreNetworkStatics::execCompressFloatToByte)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=USKGShooterFrameworkCoreNetworkStatics::CompressFloatToByte(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USKGShooterFrameworkCoreNetworkStatics Function CompressFloatToByte

// Begin Class USKGShooterFrameworkCoreNetworkStatics Function DecompressByteToFloat
struct Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics
{
	struct SKGShooterFrameworkCoreNetworkStatics_eventDecompressByteToFloat_Parms
	{
		float Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkCoreNetworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreNetworkStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreNetworkStatics_eventDecompressByteToFloat_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreNetworkStatics_eventDecompressByteToFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics, nullptr, "DecompressByteToFloat", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::SKGShooterFrameworkCoreNetworkStatics_eventDecompressByteToFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::SKGShooterFrameworkCoreNetworkStatics_eventDecompressByteToFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGShooterFrameworkCoreNetworkStatics::execDecompressByteToFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USKGShooterFrameworkCoreNetworkStatics::DecompressByteToFloat(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USKGShooterFrameworkCoreNetworkStatics Function DecompressByteToFloat

// Begin Class USKGShooterFrameworkCoreNetworkStatics
void USKGShooterFrameworkCoreNetworkStatics::StaticRegisterNativesUSKGShooterFrameworkCoreNetworkStatics()
{
	UClass* Class = USKGShooterFrameworkCoreNetworkStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompressFloatToByte", &USKGShooterFrameworkCoreNetworkStatics::execCompressFloatToByte },
		{ "DecompressByteToFloat", &USKGShooterFrameworkCoreNetworkStatics::execDecompressByteToFloat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterFrameworkCoreNetworkStatics);
UClass* Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics_NoRegister()
{
	return USKGShooterFrameworkCoreNetworkStatics::StaticClass();
}
struct Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Statics/SKGShooterFrameworkCoreNetworkStatics.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreNetworkStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_CompressFloatToByte, "CompressFloatToByte" }, // 2330287127
		{ &Z_Construct_UFunction_USKGShooterFrameworkCoreNetworkStatics_DecompressByteToFloat, "DecompressByteToFloat" }, // 639064189
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterFrameworkCoreNetworkStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics_Statics::ClassParams = {
	&USKGShooterFrameworkCoreNetworkStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics()
{
	if (!Z_Registration_Info_UClass_USKGShooterFrameworkCoreNetworkStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterFrameworkCoreNetworkStatics.OuterSingleton, Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGShooterFrameworkCoreNetworkStatics.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGShooterFrameworkCoreNetworkStatics>()
{
	return USKGShooterFrameworkCoreNetworkStatics::StaticClass();
}
USKGShooterFrameworkCoreNetworkStatics::USKGShooterFrameworkCoreNetworkStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterFrameworkCoreNetworkStatics);
USKGShooterFrameworkCoreNetworkStatics::~USKGShooterFrameworkCoreNetworkStatics() {}
// End Class USKGShooterFrameworkCoreNetworkStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreNetworkStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterFrameworkCoreNetworkStatics, USKGShooterFrameworkCoreNetworkStatics::StaticClass, TEXT("USKGShooterFrameworkCoreNetworkStatics"), &Z_Registration_Info_UClass_USKGShooterFrameworkCoreNetworkStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterFrameworkCoreNetworkStatics), 176028829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreNetworkStatics_h_4182299149(TEXT("/Script/SKGShooterFrameworkCore"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreNetworkStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreNetworkStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
