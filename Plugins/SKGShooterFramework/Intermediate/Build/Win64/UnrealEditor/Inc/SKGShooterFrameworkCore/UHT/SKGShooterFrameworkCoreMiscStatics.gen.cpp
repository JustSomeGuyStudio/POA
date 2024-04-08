// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFrameworkCore/Public/Statics/SKGShooterFrameworkCoreMiscStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkCoreMiscStatics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References

// Begin Class USKGShooterFrameworkCoreMiscStatics Function IsWorldTearingDown
struct Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics
{
	struct SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGShooterFrameworkCoreMiscStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreMiscStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms), &Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics, nullptr, "IsWorldTearingDown", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGShooterFrameworkCoreMiscStatics::execIsWorldTearingDown)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USKGShooterFrameworkCoreMiscStatics::IsWorldTearingDown(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USKGShooterFrameworkCoreMiscStatics Function IsWorldTearingDown

// Begin Class USKGShooterFrameworkCoreMiscStatics
void USKGShooterFrameworkCoreMiscStatics::StaticRegisterNativesUSKGShooterFrameworkCoreMiscStatics()
{
	UClass* Class = USKGShooterFrameworkCoreMiscStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsWorldTearingDown", &USKGShooterFrameworkCoreMiscStatics::execIsWorldTearingDown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterFrameworkCoreMiscStatics);
UClass* Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_NoRegister()
{
	return USKGShooterFrameworkCoreMiscStatics::StaticClass();
}
struct Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Statics/SKGShooterFrameworkCoreMiscStatics.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreMiscStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown, "IsWorldTearingDown" }, // 2784252290
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterFrameworkCoreMiscStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::ClassParams = {
	&USKGShooterFrameworkCoreMiscStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics()
{
	if (!Z_Registration_Info_UClass_USKGShooterFrameworkCoreMiscStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterFrameworkCoreMiscStatics.OuterSingleton, Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGShooterFrameworkCoreMiscStatics.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGShooterFrameworkCoreMiscStatics>()
{
	return USKGShooterFrameworkCoreMiscStatics::StaticClass();
}
USKGShooterFrameworkCoreMiscStatics::USKGShooterFrameworkCoreMiscStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterFrameworkCoreMiscStatics);
USKGShooterFrameworkCoreMiscStatics::~USKGShooterFrameworkCoreMiscStatics() {}
// End Class USKGShooterFrameworkCoreMiscStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreMiscStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics, USKGShooterFrameworkCoreMiscStatics::StaticClass, TEXT("USKGShooterFrameworkCoreMiscStatics"), &Z_Registration_Info_UClass_USKGShooterFrameworkCoreMiscStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterFrameworkCoreMiscStatics), 2231382504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreMiscStatics_h_1095828506(TEXT("/Script/SKGShooterFrameworkCore"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreMiscStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreMiscStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
