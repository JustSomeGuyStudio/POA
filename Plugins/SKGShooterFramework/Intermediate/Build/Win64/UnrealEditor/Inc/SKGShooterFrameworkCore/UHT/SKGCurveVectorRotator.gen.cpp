// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFrameworkCore/Public/Curves/SKGCurveVectorRotator.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGCurveVectorRotator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGCurveVectorRotator();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGCurveVectorRotator_NoRegister();
SKGSHOOTERFRAMEWORKCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGVectorRotator();
UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References

// Begin ScriptStruct FSKGVectorRotator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGVectorRotator;
class UScriptStruct* FSKGVectorRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGVectorRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGVectorRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGVectorRotator, (UObject*)Z_Construct_UPackage__Script_SKGShooterFrameworkCore(), TEXT("SKGVectorRotator"));
	}
	return Z_Registration_Info_UScriptStruct_SKGVectorRotator.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORKCORE_API UScriptStruct* StaticStruct<FSKGVectorRotator>()
{
	return FSKGVectorRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGVectorRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "SKGCurveVectorRotator" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[] = {
		{ "Category", "SKGCurveVectorRotator" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGVectorRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGVectorRotator, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGVectorRotator, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator_MetaData), NewProp_Rotator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Rotator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
	nullptr,
	&NewStructOps,
	"SKGVectorRotator",
	Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::PropPointers),
	sizeof(FSKGVectorRotator),
	alignof(FSKGVectorRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGVectorRotator()
{
	if (!Z_Registration_Info_UScriptStruct_SKGVectorRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGVectorRotator.InnerSingleton, Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGVectorRotator.InnerSingleton;
}
// End ScriptStruct FSKGVectorRotator

// Begin Class USKGCurveVectorRotator Function GetRotatorValue
struct Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics
{
	struct SKGCurveVectorRotator_eventGetRotatorValue_Parms
	{
		float InTime;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
#endif
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluate this float curve at the specified time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetRotatorValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetRotatorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCurveVectorRotator, nullptr, "GetRotatorValue", nullptr, nullptr, Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::SKGCurveVectorRotator_eventGetRotatorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::SKGCurveVectorRotator_eventGetRotatorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGCurveVectorRotator::execGetRotatorValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetRotatorValue(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class USKGCurveVectorRotator Function GetRotatorValue

// Begin Class USKGCurveVectorRotator Function GetVectorRotatorValue
struct Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics
{
	struct SKGCurveVectorRotator_eventGetVectorRotatorValue_Parms
	{
		float InTime;
		FSKGVectorRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
#endif
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluate this float curve at the specified time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetVectorRotatorValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetVectorRotatorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGVectorRotator, METADATA_PARAMS(0, nullptr) }; // 4173119175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCurveVectorRotator, nullptr, "GetVectorRotatorValue", nullptr, nullptr, Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::SKGCurveVectorRotator_eventGetVectorRotatorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::SKGCurveVectorRotator_eventGetVectorRotatorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGCurveVectorRotator::execGetVectorRotatorValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSKGVectorRotator*)Z_Param__Result=P_THIS->GetVectorRotatorValue(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class USKGCurveVectorRotator Function GetVectorRotatorValue

// Begin Class USKGCurveVectorRotator Function GetVectorValue
struct Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics
{
	struct SKGCurveVectorRotator_eventGetVectorValue_Parms
	{
		float InTime;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
#endif
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluate this float curve at the specified time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetVectorValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetVectorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCurveVectorRotator, nullptr, "GetVectorValue", nullptr, nullptr, Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::SKGCurveVectorRotator_eventGetVectorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::SKGCurveVectorRotator_eventGetVectorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGCurveVectorRotator::execGetVectorValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVectorValue(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class USKGCurveVectorRotator Function GetVectorValue

// Begin Class USKGCurveVectorRotator
void USKGCurveVectorRotator::StaticRegisterNativesUSKGCurveVectorRotator()
{
	UClass* Class = USKGCurveVectorRotator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRotatorValue", &USKGCurveVectorRotator::execGetRotatorValue },
		{ "GetVectorRotatorValue", &USKGCurveVectorRotator::execGetVectorRotatorValue },
		{ "GetVectorValue", &USKGCurveVectorRotator::execGetVectorValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGCurveVectorRotator);
UClass* Z_Construct_UClass_USKGCurveVectorRotator_NoRegister()
{
	return USKGCurveVectorRotator::StaticClass();
}
struct Z_Construct_UClass_USKGCurveVectorRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Curves/SKGCurveVectorRotator.h" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keyframe data, one curve for X, Y, Z, Pitch, Yaw, Roll */" },
#endif
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keyframe data, one curve for X, Y, Z, Pitch, Yaw, Roll" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue, "GetRotatorValue" }, // 1345626071
		{ &Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue, "GetVectorRotatorValue" }, // 873852591
		{ &Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue, "GetVectorValue" }, // 4199617328
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGCurveVectorRotator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGCurveVectorRotator_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(FloatCurves, USKGCurveVectorRotator), STRUCT_OFFSET(USKGCurveVectorRotator, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurves_MetaData), NewProp_FloatCurves_MetaData) }; // 1340883375
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGCurveVectorRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCurveVectorRotator_Statics::NewProp_FloatCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCurveVectorRotator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGCurveVectorRotator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCurveBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCurveVectorRotator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGCurveVectorRotator_Statics::ClassParams = {
	&USKGCurveVectorRotator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USKGCurveVectorRotator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USKGCurveVectorRotator_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCurveVectorRotator_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGCurveVectorRotator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGCurveVectorRotator()
{
	if (!Z_Registration_Info_UClass_USKGCurveVectorRotator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGCurveVectorRotator.OuterSingleton, Z_Construct_UClass_USKGCurveVectorRotator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGCurveVectorRotator.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGCurveVectorRotator>()
{
	return USKGCurveVectorRotator::StaticClass();
}
USKGCurveVectorRotator::USKGCurveVectorRotator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGCurveVectorRotator);
USKGCurveVectorRotator::~USKGCurveVectorRotator() {}
// End Class USKGCurveVectorRotator

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGVectorRotator::StaticStruct, Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewStructOps, TEXT("SKGVectorRotator"), &Z_Registration_Info_UScriptStruct_SKGVectorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGVectorRotator), 4173119175U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGCurveVectorRotator, USKGCurveVectorRotator::StaticClass, TEXT("USKGCurveVectorRotator"), &Z_Registration_Info_UClass_USKGCurveVectorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGCurveVectorRotator), 2575792818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_2419418376(TEXT("/Script/SKGShooterFrameworkCore"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
