// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGStock/Public/Components/SKGStockComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGStockComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SKGSTOCK_API UClass* Z_Construct_UClass_USKGStockComponent();
SKGSTOCK_API UClass* Z_Construct_UClass_USKGStockComponent_NoRegister();
SKGSTOCK_API UFunction* Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature();
SKGSTOCK_API UFunction* Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SKGStock();
// End Cross Module References

// Begin Delegate FOnFolded
struct Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics
{
	struct _Script_SKGStock_eventOnFolded_Parms
	{
		bool Folded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Folded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Folded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::NewProp_Folded_SetBit(void* Obj)
{
	((_Script_SKGStock_eventOnFolded_Parms*)Obj)->Folded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::NewProp_Folded = { "Folded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SKGStock_eventOnFolded_Parms), &Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::NewProp_Folded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::NewProp_Folded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGStock, nullptr, "OnFolded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::_Script_SKGStock_eventOnFolded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::_Script_SKGStock_eventOnFolded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFolded_DelegateWrapper(const FMulticastScriptDelegate& OnFolded, bool Folded)
{
	struct _Script_SKGStock_eventOnFolded_Parms
	{
		bool Folded;
	};
	_Script_SKGStock_eventOnFolded_Parms Parms;
	Parms.Folded=Folded ? true : false;
	OnFolded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFolded

// Begin Delegate FOnLengthOfPullChanged
struct Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics
{
	struct _Script_SKGStock_eventOnLengthOfPullChanged_Parms
	{
		float NewLengthOfPull;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLengthOfPull;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::NewProp_NewLengthOfPull = { "NewLengthOfPull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGStock_eventOnLengthOfPullChanged_Parms, NewLengthOfPull), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::NewProp_NewLengthOfPull,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGStock, nullptr, "OnLengthOfPullChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::_Script_SKGStock_eventOnLengthOfPullChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::_Script_SKGStock_eventOnLengthOfPullChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLengthOfPullChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLengthOfPullChanged, float NewLengthOfPull)
{
	struct _Script_SKGStock_eventOnLengthOfPullChanged_Parms
	{
		float NewLengthOfPull;
	};
	_Script_SKGStock_eventOnLengthOfPullChanged_Parms Parms;
	Parms.NewLengthOfPull=NewLengthOfPull;
	OnLengthOfPullChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLengthOfPullChanged

// Begin Class USKGStockComponent Function CanBeFolded
struct Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics
{
	struct SKGStockComponent_eventCanBeFolded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGStockComponent_eventCanBeFolded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGStockComponent_eventCanBeFolded_Parms), &Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "CanBeFolded", nullptr, nullptr, Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::SKGStockComponent_eventCanBeFolded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::SKGStockComponent_eventCanBeFolded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGStockComponent_CanBeFolded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_CanBeFolded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execCanBeFolded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeFolded();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function CanBeFolded

// Begin Class USKGStockComponent Function Fold
struct Z_Construct_UFunction_USKGStockComponent_Fold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGStock" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_Fold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "Fold", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_Fold_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_Fold_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGStockComponent_Fold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_Fold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execFold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fold();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function Fold

// Begin Class USKGStockComponent Function GetFoldedLengthOfPull
struct Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics
{
	struct SKGStockComponent_eventGetFoldedLengthOfPull_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGStockComponent_eventGetFoldedLengthOfPull_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "GetFoldedLengthOfPull", nullptr, nullptr, Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::SKGStockComponent_eventGetFoldedLengthOfPull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::SKGStockComponent_eventGetFoldedLengthOfPull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execGetFoldedLengthOfPull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFoldedLengthOfPull();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function GetFoldedLengthOfPull

// Begin Class USKGStockComponent Function GetLengthOfPull
struct Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics
{
	struct SKGStockComponent_eventGetLengthOfPull_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGStock" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGStockComponent_eventGetLengthOfPull_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "GetLengthOfPull", nullptr, nullptr, Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::SKGStockComponent_eventGetLengthOfPull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::SKGStockComponent_eventGetLengthOfPull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execGetLengthOfPull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLengthOfPull();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function GetLengthOfPull

// Begin Class USKGStockComponent Function GetUnfoldedLengthOfPull
struct Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics
{
	struct SKGStockComponent_eventGetUnfoldedLengthOfPull_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGStockComponent_eventGetUnfoldedLengthOfPull_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "GetUnfoldedLengthOfPull", nullptr, nullptr, Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::SKGStockComponent_eventGetUnfoldedLengthOfPull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::SKGStockComponent_eventGetUnfoldedLengthOfPull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execGetUnfoldedLengthOfPull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUnfoldedLengthOfPull();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function GetUnfoldedLengthOfPull

// Begin Class USKGStockComponent Function IsFolded
struct Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics
{
	struct SKGStockComponent_eventIsFolded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGStock" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGStockComponent_eventIsFolded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGStockComponent_eventIsFolded_Parms), &Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "IsFolded", nullptr, nullptr, Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::SKGStockComponent_eventIsFolded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::SKGStockComponent_eventIsFolded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGStockComponent_IsFolded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_IsFolded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execIsFolded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFolded();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function IsFolded

// Begin Class USKGStockComponent Function OnRep_IsFolded
struct Z_Construct_UFunction_USKGStockComponent_OnRep_IsFolded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_OnRep_IsFolded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "OnRep_IsFolded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_OnRep_IsFolded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_OnRep_IsFolded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGStockComponent_OnRep_IsFolded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_OnRep_IsFolded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execOnRep_IsFolded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsFolded();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function OnRep_IsFolded

// Begin Class USKGStockComponent Function OnRep_LengthOfPull
struct Z_Construct_UFunction_USKGStockComponent_OnRep_LengthOfPull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_OnRep_LengthOfPull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "OnRep_LengthOfPull", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_OnRep_LengthOfPull_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_OnRep_LengthOfPull_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGStockComponent_OnRep_LengthOfPull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_OnRep_LengthOfPull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execOnRep_LengthOfPull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LengthOfPull();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function OnRep_LengthOfPull

// Begin Class USKGStockComponent Function Server_SetFoldedState
struct SKGStockComponent_eventServer_SetFoldedState_Parms
{
	bool bFold;
};
static FName NAME_USKGStockComponent_Server_SetFoldedState = FName(TEXT("Server_SetFoldedState"));
void USKGStockComponent::Server_SetFoldedState(bool bFold)
{
	SKGStockComponent_eventServer_SetFoldedState_Parms Parms;
	Parms.bFold=bFold ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_USKGStockComponent_Server_SetFoldedState),&Parms);
}
struct Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::NewProp_bFold_SetBit(void* Obj)
{
	((SKGStockComponent_eventServer_SetFoldedState_Parms*)Obj)->bFold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::NewProp_bFold = { "bFold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGStockComponent_eventServer_SetFoldedState_Parms), &Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::NewProp_bFold_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::NewProp_bFold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "Server_SetFoldedState", nullptr, nullptr, Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::PropPointers), sizeof(SKGStockComponent_eventServer_SetFoldedState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::Function_MetaDataParams) };
static_assert(sizeof(SKGStockComponent_eventServer_SetFoldedState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execServer_SetFoldedState)
{
	P_GET_UBOOL(Z_Param_bFold);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SetFoldedState_Validate(Z_Param_bFold))
	{
		RPC_ValidateFailed(TEXT("Server_SetFoldedState_Validate"));
		return;
	}
	P_THIS->Server_SetFoldedState_Implementation(Z_Param_bFold);
	P_NATIVE_END;
}
// End Class USKGStockComponent Function Server_SetFoldedState

// Begin Class USKGStockComponent Function SetOffset
struct Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics
{
	struct SKGStockComponent_eventSetOffset_Parms
	{
		float PositionOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This is to be called server side and useful alongside an attachment system.\n\x09 * If you slide the stock out (like an m4 with buffer tube) or in, this offset can be applied in addition.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is to be called server side and useful alongside an attachment system.\nIf you slide the stock out (like an m4 with buffer tube) or in, this offset can be applied in addition." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGStockComponent_eventSetOffset_Parms, PositionOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::NewProp_PositionOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "SetOffset", nullptr, nullptr, Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::SKGStockComponent_eventSetOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::SKGStockComponent_eventSetOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGStockComponent_SetOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_SetOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execSetOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PositionOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOffset(Z_Param_PositionOffset);
	P_NATIVE_END;
}
// End Class USKGStockComponent Function SetOffset

// Begin Class USKGStockComponent Function ToggleFold
struct Z_Construct_UFunction_USKGStockComponent_ToggleFold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGStock" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_ToggleFold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "ToggleFold", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_ToggleFold_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_ToggleFold_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGStockComponent_ToggleFold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_ToggleFold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execToggleFold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleFold();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function ToggleFold

// Begin Class USKGStockComponent Function Unfold
struct Z_Construct_UFunction_USKGStockComponent_Unfold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGStock" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGStockComponent_Unfold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGStockComponent, nullptr, "Unfold", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGStockComponent_Unfold_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGStockComponent_Unfold_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGStockComponent_Unfold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGStockComponent_Unfold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGStockComponent::execUnfold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unfold();
	P_NATIVE_END;
}
// End Class USKGStockComponent Function Unfold

// Begin Class USKGStockComponent
void USKGStockComponent::StaticRegisterNativesUSKGStockComponent()
{
	UClass* Class = USKGStockComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanBeFolded", &USKGStockComponent::execCanBeFolded },
		{ "Fold", &USKGStockComponent::execFold },
		{ "GetFoldedLengthOfPull", &USKGStockComponent::execGetFoldedLengthOfPull },
		{ "GetLengthOfPull", &USKGStockComponent::execGetLengthOfPull },
		{ "GetUnfoldedLengthOfPull", &USKGStockComponent::execGetUnfoldedLengthOfPull },
		{ "IsFolded", &USKGStockComponent::execIsFolded },
		{ "OnRep_IsFolded", &USKGStockComponent::execOnRep_IsFolded },
		{ "OnRep_LengthOfPull", &USKGStockComponent::execOnRep_LengthOfPull },
		{ "Server_SetFoldedState", &USKGStockComponent::execServer_SetFoldedState },
		{ "SetOffset", &USKGStockComponent::execSetOffset },
		{ "ToggleFold", &USKGStockComponent::execToggleFold },
		{ "Unfold", &USKGStockComponent::execUnfold },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGStockComponent);
UClass* Z_Construct_UClass_USKGStockComponent_NoRegister()
{
	return USKGStockComponent::StaticClass();
}
struct Z_Construct_UClass_USKGStockComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGStockComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeFolded_MetaData[] = {
		{ "BlueprintGetter", "CanBeFolded" },
		{ "Category", "SKGStock|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true the stock can be folded/collapsed (think an underfolding AK or MCX)\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true the stock can be folded/collapsed (think an underfolding AK or MCX)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeAffectedByOffset_MetaData[] = {
		{ "BlueprintGetter", "CanBeFolded" },
		{ "Category", "SKGStock|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnfoldedLengthOfPull_MetaData[] = {
		{ "BlueprintGetter", "GetUnfoldedLengthOfPull" },
		{ "Category", "SKGStock|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The length of pull when the stock is unfolded/open\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length of pull when the stock is unfolded/open" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoldedLengthOfPull_MetaData[] = {
		{ "BlueprintGetter", "GetFoldedLengthOfPull" },
		{ "Category", "SKGStock|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The length of pull when the stock is folded/collapsed\n" },
#endif
		{ "EditCondition", "bCanBeFolded" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length of pull when the stock is folded/collapsed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCallForceNetUpdate_MetaData[] = {
		{ "Category", "SKGStock|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Useful if your NetUpdateFrequency is set super low\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful if your NetUpdateFrequency is set super low" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFolded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthOfPull_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFolded_MetaData[] = {
		{ "Category", "SKGStock|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLengthOfPullChanged_MetaData[] = {
		{ "Category", "SKGStock|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGStockComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCanBeFolded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeFolded;
	static void NewProp_bCanBeAffectedByOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeAffectedByOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnfoldedLengthOfPull;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FoldedLengthOfPull;
	static void NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCallForceNetUpdate;
	static void NewProp_bIsFolded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFolded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthOfPull;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFolded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLengthOfPullChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGStockComponent_CanBeFolded, "CanBeFolded" }, // 3955874090
		{ &Z_Construct_UFunction_USKGStockComponent_Fold, "Fold" }, // 3434518859
		{ &Z_Construct_UFunction_USKGStockComponent_GetFoldedLengthOfPull, "GetFoldedLengthOfPull" }, // 1279262527
		{ &Z_Construct_UFunction_USKGStockComponent_GetLengthOfPull, "GetLengthOfPull" }, // 2828048156
		{ &Z_Construct_UFunction_USKGStockComponent_GetUnfoldedLengthOfPull, "GetUnfoldedLengthOfPull" }, // 1487439102
		{ &Z_Construct_UFunction_USKGStockComponent_IsFolded, "IsFolded" }, // 3419730935
		{ &Z_Construct_UFunction_USKGStockComponent_OnRep_IsFolded, "OnRep_IsFolded" }, // 2175722476
		{ &Z_Construct_UFunction_USKGStockComponent_OnRep_LengthOfPull, "OnRep_LengthOfPull" }, // 1029274893
		{ &Z_Construct_UFunction_USKGStockComponent_Server_SetFoldedState, "Server_SetFoldedState" }, // 586545654
		{ &Z_Construct_UFunction_USKGStockComponent_SetOffset, "SetOffset" }, // 2798924541
		{ &Z_Construct_UFunction_USKGStockComponent_ToggleFold, "ToggleFold" }, // 1674524965
		{ &Z_Construct_UFunction_USKGStockComponent_Unfold, "Unfold" }, // 2834487831
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGStockComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bCanBeFolded_SetBit(void* Obj)
{
	((USKGStockComponent*)Obj)->bCanBeFolded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bCanBeFolded = { "bCanBeFolded", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGStockComponent), &Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bCanBeFolded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeFolded_MetaData), NewProp_bCanBeFolded_MetaData) };
void Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bCanBeAffectedByOffset_SetBit(void* Obj)
{
	((USKGStockComponent*)Obj)->bCanBeAffectedByOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bCanBeAffectedByOffset = { "bCanBeAffectedByOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGStockComponent), &Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bCanBeAffectedByOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeAffectedByOffset_MetaData), NewProp_bCanBeAffectedByOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGStockComponent_Statics::NewProp_UnfoldedLengthOfPull = { "UnfoldedLengthOfPull", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGStockComponent, UnfoldedLengthOfPull), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnfoldedLengthOfPull_MetaData), NewProp_UnfoldedLengthOfPull_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGStockComponent_Statics::NewProp_FoldedLengthOfPull = { "FoldedLengthOfPull", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGStockComponent, FoldedLengthOfPull), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoldedLengthOfPull_MetaData), NewProp_FoldedLengthOfPull_MetaData) };
void Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj)
{
	((USKGStockComponent*)Obj)->bAutoCallForceNetUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bAutoCallForceNetUpdate = { "bAutoCallForceNetUpdate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGStockComponent), &Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCallForceNetUpdate_MetaData), NewProp_bAutoCallForceNetUpdate_MetaData) };
void Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bIsFolded_SetBit(void* Obj)
{
	((USKGStockComponent*)Obj)->bIsFolded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bIsFolded = { "bIsFolded", "OnRep_IsFolded", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGStockComponent), &Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bIsFolded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFolded_MetaData), NewProp_bIsFolded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGStockComponent_Statics::NewProp_LengthOfPull = { "LengthOfPull", "OnRep_IsFolded", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGStockComponent, LengthOfPull), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthOfPull_MetaData), NewProp_LengthOfPull_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGStockComponent_Statics::NewProp_OnFolded = { "OnFolded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGStockComponent, OnFolded), Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFolded_MetaData), NewProp_OnFolded_MetaData) }; // 1830269750
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGStockComponent_Statics::NewProp_OnLengthOfPullChanged = { "OnLengthOfPullChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGStockComponent, OnLengthOfPullChanged), Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLengthOfPullChanged_MetaData), NewProp_OnLengthOfPullChanged_MetaData) }; // 421360496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGStockComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bCanBeFolded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bCanBeAffectedByOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGStockComponent_Statics::NewProp_UnfoldedLengthOfPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGStockComponent_Statics::NewProp_FoldedLengthOfPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bAutoCallForceNetUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGStockComponent_Statics::NewProp_bIsFolded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGStockComponent_Statics::NewProp_LengthOfPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGStockComponent_Statics::NewProp_OnFolded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGStockComponent_Statics::NewProp_OnLengthOfPullChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGStockComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGStockComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGStock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGStockComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGStockComponent_Statics::ClassParams = {
	&USKGStockComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USKGStockComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USKGStockComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGStockComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGStockComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGStockComponent()
{
	if (!Z_Registration_Info_UClass_USKGStockComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGStockComponent.OuterSingleton, Z_Construct_UClass_USKGStockComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGStockComponent.OuterSingleton;
}
template<> SKGSTOCK_API UClass* StaticClass<USKGStockComponent>()
{
	return USKGStockComponent::StaticClass();
}
void USKGStockComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bIsFolded(TEXT("bIsFolded"));
	static const FName Name_LengthOfPull(TEXT("LengthOfPull"));
	const bool bIsValid = true
		&& Name_bIsFolded == ClassReps[(int32)ENetFields_Private::bIsFolded].Property->GetFName()
		&& Name_LengthOfPull == ClassReps[(int32)ENetFields_Private::LengthOfPull].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USKGStockComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGStockComponent);
USKGStockComponent::~USKGStockComponent() {}
// End Class USKGStockComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGStockComponent, USKGStockComponent::StaticClass, TEXT("USKGStockComponent"), &Z_Registration_Info_UClass_USKGStockComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGStockComponent), 1035380613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_3644273285(TEXT("/Script/SKGStock"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGStock_Public_Components_SKGStockComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
