// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGShooterFrameworkCore/Public/Curves/SKGCurveVectorRotator.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGCurveVectorRotator() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGCurveVectorRotator();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGCurveVectorRotator_NoRegister();
	SKGSHOOTERFRAMEWORKCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGVectorRotator();
	UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGVectorRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "SKGCurveVectorRotator" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGVectorRotator, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Vector_MetaData), Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Vector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "SKGCurveVectorRotator" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGVectorRotator, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Rotator_MetaData), Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Rotator_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewProp_Rotator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGVectorRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGVectorRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGVectorRotator.InnerSingleton, Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGVectorRotator.InnerSingleton;
	}
	DEFINE_FUNCTION(USKGCurveVectorRotator::execGetRotatorValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotatorValue(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGCurveVectorRotator::execGetVectorValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVectorValue(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGCurveVectorRotator::execGetVectorRotatorValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSKGVectorRotator*)Z_Param__Result=P_THIS->GetVectorRotatorValue(Z_Param_InTime);
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics
	{
		struct SKGCurveVectorRotator_eventGetRotatorValue_Parms
		{
			float InTime;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetRotatorValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetRotatorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
		{ "ToolTip", "Evaluate this float curve at the specified time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCurveVectorRotator, nullptr, "GetRotatorValue", nullptr, nullptr, Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::SKGCurveVectorRotator_eventGetRotatorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics
	{
		struct SKGCurveVectorRotator_eventGetVectorRotatorValue_Parms
		{
			float InTime;
			FSKGVectorRotator ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetVectorRotatorValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetVectorRotatorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGVectorRotator, METADATA_PARAMS(0, nullptr) }; // 2746907786
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
		{ "ToolTip", "Evaluate this float curve at the specified time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCurveVectorRotator, nullptr, "GetVectorRotatorValue", nullptr, nullptr, Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::SKGCurveVectorRotator_eventGetVectorRotatorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics
	{
		struct SKGCurveVectorRotator_eventGetVectorValue_Parms
		{
			float InTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetVectorValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCurveVectorRotator_eventGetVectorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
		{ "ToolTip", "Evaluate this float curve at the specified time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCurveVectorRotator, nullptr, "GetVectorValue", nullptr, nullptr, Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::SKGCurveVectorRotator_eventGetVectorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGCurveVectorRotator);
	UClass* Z_Construct_UClass_USKGCurveVectorRotator_NoRegister()
	{
		return USKGCurveVectorRotator::StaticClass();
	}
	struct Z_Construct_UClass_USKGCurveVectorRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGCurveVectorRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCurveVectorRotator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGCurveVectorRotator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGCurveVectorRotator_GetRotatorValue, "GetRotatorValue" }, // 3310140938
		{ &Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorRotatorValue, "GetVectorRotatorValue" }, // 4220778497
		{ &Z_Construct_UFunction_USKGCurveVectorRotator_GetVectorValue, "GetVectorValue" }, // 2237354976
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCurveVectorRotator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCurveVectorRotator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Curves/SKGCurveVectorRotator.h" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCurveVectorRotator_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "Comment", "/** Keyframe data, one curve for X, Y, Z, Pitch, Yaw, Roll */" },
		{ "ModuleRelativePath", "Public/Curves/SKGCurveVectorRotator.h" },
		{ "ToolTip", "Keyframe data, one curve for X, Y, Z, Pitch, Yaw, Roll" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGCurveVectorRotator_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(FloatCurves, USKGCurveVectorRotator), STRUCT_OFFSET(USKGCurveVectorRotator, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCurveVectorRotator_Statics::NewProp_FloatCurves_MetaData), Z_Construct_UClass_USKGCurveVectorRotator_Statics::NewProp_FloatCurves_MetaData) }; // 4189057203
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGCurveVectorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCurveVectorRotator_Statics::NewProp_FloatCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGCurveVectorRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGCurveVectorRotator>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCurveVectorRotator_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ScriptStructInfo[] = {
		{ FSKGVectorRotator::StaticStruct, Z_Construct_UScriptStruct_FSKGVectorRotator_Statics::NewStructOps, TEXT("SKGVectorRotator"), &Z_Registration_Info_UScriptStruct_SKGVectorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGVectorRotator), 2746907786U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGCurveVectorRotator, USKGCurveVectorRotator::StaticClass, TEXT("USKGCurveVectorRotator"), &Z_Registration_Info_UClass_USKGCurveVectorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGCurveVectorRotator), 4238566140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_4244436388(TEXT("/Script/SKGShooterFrameworkCore"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Curves_SKGCurveVectorRotator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
