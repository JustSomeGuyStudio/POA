// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGShooterFrameworkCore/Public/Statics/SKGShooterFrameworkCoreJsonStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkCoreJsonStatics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References
	DEFINE_FUNCTION(USKGShooterFrameworkCoreJsonStatics::execApplyJsonStringToDataAssetAllowKeys)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_GET_OBJECT(UPrimaryDataAsset,Z_Param_Object);
		P_GET_TARRAY_REF(FString,Z_Param_Out_KeysToAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USKGShooterFrameworkCoreJsonStatics::ApplyJsonStringToDataAssetAllowKeys(Z_Param_String,Z_Param_Object,Z_Param_Out_KeysToAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkCoreJsonStatics::execApplyJsonStringToDataAssetIgnoreKeys)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_GET_OBJECT(UPrimaryDataAsset,Z_Param_Object);
		P_GET_TARRAY_REF(FString,Z_Param_Out_KeysToIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USKGShooterFrameworkCoreJsonStatics::ApplyJsonStringToDataAssetIgnoreKeys(Z_Param_String,Z_Param_Object,Z_Param_Out_KeysToIgnore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkCoreJsonStatics::execSerializeDataAssetToJsonStringAllowKeys)
	{
		P_GET_OBJECT(UPrimaryDataAsset,Z_Param_Object);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_JsonString);
		P_GET_TARRAY_REF(FString,Z_Param_Out_KeysToAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USKGShooterFrameworkCoreJsonStatics::SerializeDataAssetToJsonStringAllowKeys(Z_Param_Object,Z_Param_Out_JsonString,Z_Param_Out_KeysToAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkCoreJsonStatics::execSerializeDataAssetToJsonStringIgnoreKeys)
	{
		P_GET_OBJECT(UPrimaryDataAsset,Z_Param_Object);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_JsonString);
		P_GET_TARRAY_REF(FString,Z_Param_Out_KeysToIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USKGShooterFrameworkCoreJsonStatics::SerializeDataAssetToJsonStringIgnoreKeys(Z_Param_Object,Z_Param_Out_JsonString,Z_Param_Out_KeysToIgnore);
		P_NATIVE_END;
	}
	void USKGShooterFrameworkCoreJsonStatics::StaticRegisterNativesUSKGShooterFrameworkCoreJsonStatics()
	{
		UClass* Class = USKGShooterFrameworkCoreJsonStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyJsonStringToDataAssetAllowKeys", &USKGShooterFrameworkCoreJsonStatics::execApplyJsonStringToDataAssetAllowKeys },
			{ "ApplyJsonStringToDataAssetIgnoreKeys", &USKGShooterFrameworkCoreJsonStatics::execApplyJsonStringToDataAssetIgnoreKeys },
			{ "SerializeDataAssetToJsonStringAllowKeys", &USKGShooterFrameworkCoreJsonStatics::execSerializeDataAssetToJsonStringAllowKeys },
			{ "SerializeDataAssetToJsonStringIgnoreKeys", &USKGShooterFrameworkCoreJsonStatics::execSerializeDataAssetToJsonStringIgnoreKeys },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics
	{
		struct SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetAllowKeys_Parms
		{
			FString String;
			UPrimaryDataAsset* Object;
			TArray<FString> KeysToAllow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeysToAllow_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysToAllow_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysToAllow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetAllowKeys_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_String_MetaData), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_String_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetAllowKeys_Parms, Object), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_KeysToAllow_Inner = { "KeysToAllow", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_KeysToAllow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_KeysToAllow = { "KeysToAllow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetAllowKeys_Parms, KeysToAllow), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_KeysToAllow_MetaData), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_KeysToAllow_MetaData) };
	void Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetAllowKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetAllowKeys_Parms), &Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_KeysToAllow_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_KeysToAllow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkCoreNetworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreJsonStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics, nullptr, "ApplyJsonStringToDataAssetAllowKeys", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetAllowKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetAllowKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics
	{
		struct SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetIgnoreKeys_Parms
		{
			FString String;
			UPrimaryDataAsset* Object;
			TArray<FString> KeysToIgnore;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeysToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysToIgnore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetIgnoreKeys_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_String_MetaData), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_String_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetIgnoreKeys_Parms, Object), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_KeysToIgnore_Inner = { "KeysToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_KeysToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_KeysToIgnore = { "KeysToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetIgnoreKeys_Parms, KeysToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_KeysToIgnore_MetaData), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_KeysToIgnore_MetaData) };
	void Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetIgnoreKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetIgnoreKeys_Parms), &Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_KeysToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_KeysToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkCoreNetworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreJsonStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics, nullptr, "ApplyJsonStringToDataAssetIgnoreKeys", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetIgnoreKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::SKGShooterFrameworkCoreJsonStatics_eventApplyJsonStringToDataAssetIgnoreKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics
	{
		struct SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringAllowKeys_Parms
		{
			UPrimaryDataAsset* Object;
			FString JsonString;
			TArray<FString> KeysToAllow;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeysToAllow_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysToAllow_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysToAllow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringAllowKeys_Parms, Object), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringAllowKeys_Parms, JsonString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_KeysToAllow_Inner = { "KeysToAllow", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_KeysToAllow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_KeysToAllow = { "KeysToAllow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringAllowKeys_Parms, KeysToAllow), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_KeysToAllow_MetaData), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_KeysToAllow_MetaData) };
	void Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringAllowKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringAllowKeys_Parms), &Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_KeysToAllow_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_KeysToAllow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkCoreNetworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreJsonStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics, nullptr, "SerializeDataAssetToJsonStringAllowKeys", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringAllowKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringAllowKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics
	{
		struct SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringIgnoreKeys_Parms
		{
			UPrimaryDataAsset* Object;
			FString JsonString;
			TArray<FString> KeysToIgnore;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeysToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysToIgnore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringIgnoreKeys_Parms, Object), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringIgnoreKeys_Parms, JsonString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_KeysToIgnore_Inner = { "KeysToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_KeysToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_KeysToIgnore = { "KeysToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringIgnoreKeys_Parms, KeysToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_KeysToIgnore_MetaData), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_KeysToIgnore_MetaData) };
	void Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringIgnoreKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringIgnoreKeys_Parms), &Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_KeysToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_KeysToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkCoreNetworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreJsonStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics, nullptr, "SerializeDataAssetToJsonStringIgnoreKeys", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringIgnoreKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::SKGShooterFrameworkCoreJsonStatics_eventSerializeDataAssetToJsonStringIgnoreKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterFrameworkCoreJsonStatics);
	UClass* Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_NoRegister()
	{
		return USKGShooterFrameworkCoreJsonStatics::StaticClass();
	}
	struct Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetAllowKeys, "ApplyJsonStringToDataAssetAllowKeys" }, // 3629361593
		{ &Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_ApplyJsonStringToDataAssetIgnoreKeys, "ApplyJsonStringToDataAssetIgnoreKeys" }, // 1695721572
		{ &Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringAllowKeys, "SerializeDataAssetToJsonStringAllowKeys" }, // 4129177256
		{ &Z_Construct_UFunction_USKGShooterFrameworkCoreJsonStatics_SerializeDataAssetToJsonStringIgnoreKeys, "SerializeDataAssetToJsonStringIgnoreKeys" }, // 3282639470
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Statics/SKGShooterFrameworkCoreJsonStatics.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreJsonStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterFrameworkCoreJsonStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::ClassParams = {
		&USKGShooterFrameworkCoreJsonStatics::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics()
	{
		if (!Z_Registration_Info_UClass_USKGShooterFrameworkCoreJsonStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterFrameworkCoreJsonStatics.OuterSingleton, Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGShooterFrameworkCoreJsonStatics.OuterSingleton;
	}
	template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGShooterFrameworkCoreJsonStatics>()
	{
		return USKGShooterFrameworkCoreJsonStatics::StaticClass();
	}
	USKGShooterFrameworkCoreJsonStatics::USKGShooterFrameworkCoreJsonStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterFrameworkCoreJsonStatics);
	USKGShooterFrameworkCoreJsonStatics::~USKGShooterFrameworkCoreJsonStatics() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreJsonStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreJsonStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterFrameworkCoreJsonStatics, USKGShooterFrameworkCoreJsonStatics::StaticClass, TEXT("USKGShooterFrameworkCoreJsonStatics"), &Z_Registration_Info_UClass_USKGShooterFrameworkCoreJsonStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterFrameworkCoreJsonStatics), 2557971311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreJsonStatics_h_955424348(TEXT("/Script/SKGShooterFrameworkCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreJsonStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreJsonStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
