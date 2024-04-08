// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFramework/Public/Statics/SKGShooterFrameworkStringLibrary.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFramework/Public/DataTypes/SKGShooterFrameworkDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkStringLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterFrameworkStringLibrary();
SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterFrameworkStringLibrary_NoRegister();
SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirearmStats();
UPackage* Z_Construct_UPackage__Script_SKGShooterFramework();
// End Cross Module References

// Begin Class USKGShooterFrameworkStringLibrary Function Conv_FirearmStatsToString
struct Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics
{
	struct SKGShooterFrameworkStringLibrary_eventConv_FirearmStatsToString_Parms
	{
		FSKGFirearmStats InStats;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "SKGStringLibrary" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (Firearm Stats)" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkStringLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStats;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::NewProp_InStats = { "InStats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkStringLibrary_eventConv_FirearmStatsToString_Parms, InStats), Z_Construct_UScriptStruct_FSKGFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStats_MetaData), NewProp_InStats_MetaData) }; // 1871522734
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkStringLibrary_eventConv_FirearmStatsToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::NewProp_InStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkStringLibrary, nullptr, "Conv_FirearmStatsToString", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::SKGShooterFrameworkStringLibrary_eventConv_FirearmStatsToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::SKGShooterFrameworkStringLibrary_eventConv_FirearmStatsToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGShooterFrameworkStringLibrary::execConv_FirearmStatsToString)
{
	P_GET_STRUCT_REF(FSKGFirearmStats,Z_Param_Out_InStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USKGShooterFrameworkStringLibrary::Conv_FirearmStatsToString(Z_Param_Out_InStats);
	P_NATIVE_END;
}
// End Class USKGShooterFrameworkStringLibrary Function Conv_FirearmStatsToString

// Begin Class USKGShooterFrameworkStringLibrary
void USKGShooterFrameworkStringLibrary::StaticRegisterNativesUSKGShooterFrameworkStringLibrary()
{
	UClass* Class = USKGShooterFrameworkStringLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Conv_FirearmStatsToString", &USKGShooterFrameworkStringLibrary::execConv_FirearmStatsToString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterFrameworkStringLibrary);
UClass* Z_Construct_UClass_USKGShooterFrameworkStringLibrary_NoRegister()
{
	return USKGShooterFrameworkStringLibrary::StaticClass();
}
struct Z_Construct_UClass_USKGShooterFrameworkStringLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Statics/SKGShooterFrameworkStringLibrary.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkStringLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGShooterFrameworkStringLibrary_Conv_FirearmStatsToString, "Conv_FirearmStatsToString" }, // 2252808062
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterFrameworkStringLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USKGShooterFrameworkStringLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkStringLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterFrameworkStringLibrary_Statics::ClassParams = {
	&USKGShooterFrameworkStringLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkStringLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterFrameworkStringLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGShooterFrameworkStringLibrary()
{
	if (!Z_Registration_Info_UClass_USKGShooterFrameworkStringLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterFrameworkStringLibrary.OuterSingleton, Z_Construct_UClass_USKGShooterFrameworkStringLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGShooterFrameworkStringLibrary.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UClass* StaticClass<USKGShooterFrameworkStringLibrary>()
{
	return USKGShooterFrameworkStringLibrary::StaticClass();
}
USKGShooterFrameworkStringLibrary::USKGShooterFrameworkStringLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterFrameworkStringLibrary);
USKGShooterFrameworkStringLibrary::~USKGShooterFrameworkStringLibrary() {}
// End Class USKGShooterFrameworkStringLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Statics_SKGShooterFrameworkStringLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterFrameworkStringLibrary, USKGShooterFrameworkStringLibrary::StaticClass, TEXT("USKGShooterFrameworkStringLibrary"), &Z_Registration_Info_UClass_USKGShooterFrameworkStringLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterFrameworkStringLibrary), 2136413159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Statics_SKGShooterFrameworkStringLibrary_h_1701504733(TEXT("/Script/SKGShooterFramework"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Statics_SKGShooterFrameworkStringLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Statics_SKGShooterFrameworkStringLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
