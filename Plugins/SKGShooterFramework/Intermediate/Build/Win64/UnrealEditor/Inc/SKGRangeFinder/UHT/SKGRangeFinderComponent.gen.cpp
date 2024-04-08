// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGRangeFinder/Public/Components/SKGRangeFinderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGRangeFinderComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	SKGRANGEFINDER_API UClass* Z_Construct_UClass_USKGRangeFinderComponent();
	SKGRANGEFINDER_API UClass* Z_Construct_UClass_USKGRangeFinderComponent_NoRegister();
	SKGRANGEFINDER_API UFunction* Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature();
	SKGRANGEFINDER_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMeasurementSymbols();
	UPackage* Z_Construct_UPackage__Script_SKGRangeFinder();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGMeasurementSymbols;
class UScriptStruct* FSKGMeasurementSymbols::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMeasurementSymbols.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGMeasurementSymbols.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGMeasurementSymbols, (UObject*)Z_Construct_UPackage__Script_SKGRangeFinder(), TEXT("SKGMeasurementSymbols"));
	}
	return Z_Registration_Info_UScriptStruct_SKGMeasurementSymbols.OuterSingleton;
}
template<> SKGRANGEFINDER_API UScriptStruct* StaticStruct<FSKGMeasurementSymbols>()
{
	return FSKGMeasurementSymbols::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterSymbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeterSymbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YardSymbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_YardSymbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InchSymbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InchSymbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CentimeterSymbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CentimeterSymbol;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMeasurementSymbols>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_MeterSymbol_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "Comment", "// The symbol that gets appended to the end of the optional text render component\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "The symbol that gets appended to the end of the optional text render component" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_MeterSymbol = { "MeterSymbol", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMeasurementSymbols, MeterSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_MeterSymbol_MetaData), Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_MeterSymbol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_YardSymbol_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "Comment", "// The symbol that gets appended to the end of the optional text render component\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "The symbol that gets appended to the end of the optional text render component" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_YardSymbol = { "YardSymbol", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMeasurementSymbols, YardSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_YardSymbol_MetaData), Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_YardSymbol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_InchSymbol_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "Comment", "// The symbol that gets appended to the end of the optional text render component\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "The symbol that gets appended to the end of the optional text render component" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_InchSymbol = { "InchSymbol", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMeasurementSymbols, InchSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_InchSymbol_MetaData), Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_InchSymbol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_CentimeterSymbol_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "Comment", "// The symbol that gets appended to the end of the optional text render component\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "The symbol that gets appended to the end of the optional text render component" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_CentimeterSymbol = { "CentimeterSymbol", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMeasurementSymbols, CentimeterSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_CentimeterSymbol_MetaData), Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_CentimeterSymbol_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_MeterSymbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_YardSymbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_InchSymbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewProp_CentimeterSymbol,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGRangeFinder,
		nullptr,
		&NewStructOps,
		"SKGMeasurementSymbols",
		Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::PropPointers),
		sizeof(FSKGMeasurementSymbols),
		alignof(FSKGMeasurementSymbols),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGMeasurementSymbols()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGMeasurementSymbols.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMeasurementSymbols.InnerSingleton, Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGMeasurementSymbols.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics
	{
		struct _Script_SKGRangeFinder_eventOnRanged_Parms
		{
			float Distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGRangeFinder_eventOnRanged_Parms, Distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGRangeFinder, nullptr, "OnRanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::_Script_SKGRangeFinder_eventOnRanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::_Script_SKGRangeFinder_eventOnRanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRanged_DelegateWrapper(const FMulticastScriptDelegate& OnRanged, float Distance)
{
	struct _Script_SKGRangeFinder_eventOnRanged_Parms
	{
		float Distance;
	};
	_Script_SKGRangeFinder_eventOnRanged_Parms Parms;
	Parms.Distance=Distance;
	OnRanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USKGRangeFinderComponent::execGetRangeAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRangeAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGRangeFinderComponent::execGetRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGRangeFinderComponent::execGetTextRenderComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextRenderComponent**)Z_Param__Result=P_THIS->GetTextRenderComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGRangeFinderComponent::execGetRangeFinderMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetRangeFinderMesh();
		P_NATIVE_END;
	}
	void USKGRangeFinderComponent::StaticRegisterNativesUSKGRangeFinderComponent()
	{
		UClass* Class = USKGRangeFinderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRange", &USKGRangeFinderComponent::execGetRange },
			{ "GetRangeAsString", &USKGRangeFinderComponent::execGetRangeAsString },
			{ "GetRangeFinderMesh", &USKGRangeFinderComponent::execGetRangeFinderMesh },
			{ "GetTextRenderComponent", &USKGRangeFinderComponent::execGetTextRenderComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics
	{
		struct SKGRangeFinderComponent_eventGetRange_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGRangeFinderComponent_eventGetRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGRangeFinder|Range" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGRangeFinderComponent, nullptr, "GetRange", nullptr, nullptr, Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::SKGRangeFinderComponent_eventGetRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::SKGRangeFinderComponent_eventGetRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGRangeFinderComponent_GetRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGRangeFinderComponent_GetRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics
	{
		struct SKGRangeFinderComponent_eventGetRangeAsString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGRangeFinderComponent_eventGetRangeAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGRangeFinder|Range" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGRangeFinderComponent, nullptr, "GetRangeAsString", nullptr, nullptr, Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::SKGRangeFinderComponent_eventGetRangeAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::SKGRangeFinderComponent_eventGetRangeAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics
	{
		struct SKGRangeFinderComponent_eventGetRangeFinderMesh_Parms
		{
			UMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGRangeFinderComponent_eventGetRangeFinderMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGRangeFinderComponent, nullptr, "GetRangeFinderMesh", nullptr, nullptr, Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::SKGRangeFinderComponent_eventGetRangeFinderMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::SKGRangeFinderComponent_eventGetRangeFinderMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics
	{
		struct SKGRangeFinderComponent_eventGetTextRenderComponent_Parms
		{
			UTextRenderComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGRangeFinderComponent_eventGetTextRenderComponent_Parms, ReturnValue), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGRangeFinderComponent, nullptr, "GetTextRenderComponent", nullptr, nullptr, Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::SKGRangeFinderComponent_eventGetTextRenderComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::SKGRangeFinderComponent_eventGetTextRenderComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGRangeFinderComponent);
	UClass* Z_Construct_UClass_USKGRangeFinderComponent_NoRegister()
	{
		return USKGRangeFinderComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGRangeFinderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeFinderMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RangeFinderMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeFinderLaserSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RangeFinderLaserSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRenderComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextRenderComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasurementSymbols_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeasurementSymbols;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInYardMeter_MetaData[];
#endif
		static void NewProp_bUseInYardMeter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInYardMeter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMetric_MetaData[];
#endif
		static void NewProp_bUseMetric_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMetric;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRange_MetaData[];
#endif
		static void NewProp_bAutoRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoRangeInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRangeInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeFinderMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RangeFinderMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRenderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextRenderComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGRangeFinderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGRangeFinder,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGRangeFinderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGRangeFinderComponent_GetRange, "GetRange" }, // 3874497822
		{ &Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeAsString, "GetRangeAsString" }, // 290126574
		{ &Z_Construct_UFunction_USKGRangeFinderComponent_GetRangeFinderMesh, "GetRangeFinderMesh" }, // 2208306024
		{ &Z_Construct_UFunction_USKGRangeFinderComponent_GetTextRenderComponent, "GetTextRenderComponent" }, // 1096347395
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGRangeFinderComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMeshName_MetaData[] = {
		{ "Category", "SKGRangeFinder|Initialize" },
		{ "Comment", "// The mesh used for the range finder\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "The mesh used for the range finder" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMeshName = { "RangeFinderMeshName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, RangeFinderMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMeshName_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMeshName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderLaserSocketName_MetaData[] = {
		{ "Category", "SKGRangeFinder|Initialize" },
		{ "Comment", "// The socket to be used for performing the trace from\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "The socket to be used for performing the trace from" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderLaserSocketName = { "RangeFinderLaserSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, RangeFinderLaserSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderLaserSocketName_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderLaserSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponentName_MetaData[] = {
		{ "Category", "SKGRangeFinder|Initialize" },
		{ "Comment", "// Optional, but if set the distance will auto be applied as text to the found component\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "Optional, but if set the distance will auto be applied as text to the found component" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponentName = { "TextRenderComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, TextRenderComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponentName_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MinTraceDistance_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MinTraceDistance = { "MinTraceDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, MinTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MinTraceDistance_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MinTraceDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MaxTraceDistance_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MaxTraceDistance = { "MaxTraceDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, MaxTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MaxTraceDistance_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MaxTraceDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MeasurementSymbols_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "Comment", "// The symbols that gets appended to the end of the optional text render component and GetRangeAsString\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "The symbols that gets appended to the end of the optional text render component and GetRangeAsString" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MeasurementSymbols = { "MeasurementSymbols", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, MeasurementSymbols), Z_Construct_UScriptStruct_FSKGMeasurementSymbols, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MeasurementSymbols_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MeasurementSymbols_MetaData) }; // 2030363957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseInYardMeter_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "Comment", "// If false, will use feet and centimeter\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "If false, will use feet and centimeter" },
	};
#endif
	void Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseInYardMeter_SetBit(void* Obj)
	{
		((USKGRangeFinderComponent*)Obj)->bUseInYardMeter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseInYardMeter = { "bUseInYardMeter", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGRangeFinderComponent), &Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseInYardMeter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseInYardMeter_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseInYardMeter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseMetric_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "Comment", "// If false it will use imperial units\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "If false it will use imperial units" },
	};
#endif
	void Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseMetric_SetBit(void* Obj)
	{
		((USKGRangeFinderComponent*)Obj)->bUseMetric = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseMetric = { "bUseMetric", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGRangeFinderComponent), &Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseMetric_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseMetric_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseMetric_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bAutoRange_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "Comment", "// If true the range will be gotten automatically at the given interval\n" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "If true the range will be gotten automatically at the given interval" },
	};
#endif
	void Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bAutoRange_SetBit(void* Obj)
	{
		((USKGRangeFinderComponent*)Obj)->bAutoRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bAutoRange = { "bAutoRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGRangeFinderComponent), &Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bAutoRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bAutoRange_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bAutoRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_AutoRangeInterval_MetaData[] = {
		{ "Category", "SKGRangeFinder|Settings" },
		{ "Comment", "// Time between ranging\n" },
		{ "EditCondition", "bAutoRange" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
		{ "ToolTip", "Time between ranging" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_AutoRangeInterval = { "AutoRangeInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, AutoRangeInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_AutoRangeInterval_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_AutoRangeInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMesh_MetaData[] = {
		{ "BlueprintGetter", "GetRangeFinderMesh" },
		{ "Category", "SKGRangeFinder|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMesh = { "RangeFinderMesh", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, RangeFinderMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMesh_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponent_MetaData[] = {
		{ "BlueprintGetter", "GetTextRenderComponent" },
		{ "Category", "SKGRangeFinder|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponent = { "TextRenderComponent", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, TextRenderComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponent_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_OnRanged_MetaData[] = {
		{ "Category", "SKGRangeFinder|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGRangeFinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_OnRanged = { "OnRanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGRangeFinderComponent, OnRanged), Z_Construct_UDelegateFunction_SKGRangeFinder_OnRanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_OnRanged_MetaData), Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_OnRanged_MetaData) }; // 2102451011
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGRangeFinderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderLaserSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MinTraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MaxTraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_MeasurementSymbols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseInYardMeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bUseMetric,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_bAutoRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_AutoRangeInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_RangeFinderMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_TextRenderComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGRangeFinderComponent_Statics::NewProp_OnRanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGRangeFinderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGRangeFinderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGRangeFinderComponent_Statics::ClassParams = {
		&USKGRangeFinderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGRangeFinderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGRangeFinderComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGRangeFinderComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGRangeFinderComponent()
	{
		if (!Z_Registration_Info_UClass_USKGRangeFinderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGRangeFinderComponent.OuterSingleton, Z_Construct_UClass_USKGRangeFinderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGRangeFinderComponent.OuterSingleton;
	}
	template<> SKGRANGEFINDER_API UClass* StaticClass<USKGRangeFinderComponent>()
	{
		return USKGRangeFinderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGRangeFinderComponent);
	USKGRangeFinderComponent::~USKGRangeFinderComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_Statics::ScriptStructInfo[] = {
		{ FSKGMeasurementSymbols::StaticStruct, Z_Construct_UScriptStruct_FSKGMeasurementSymbols_Statics::NewStructOps, TEXT("SKGMeasurementSymbols"), &Z_Registration_Info_UScriptStruct_SKGMeasurementSymbols, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMeasurementSymbols), 2030363957U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGRangeFinderComponent, USKGRangeFinderComponent::StaticClass, TEXT("USKGRangeFinderComponent"), &Z_Registration_Info_UClass_USKGRangeFinderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGRangeFinderComponent), 3020407254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_1632290784(TEXT("/Script/SKGRangeFinder"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGRangeFinder_Public_Components_SKGRangeFinderComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
