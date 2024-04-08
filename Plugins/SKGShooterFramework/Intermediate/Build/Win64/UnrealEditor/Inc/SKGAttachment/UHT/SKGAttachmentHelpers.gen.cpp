// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGAttachment/Public/Statics/SKGAttachmentHelpers.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGAttachment/Public/DataTypes/SKGAttachmentDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGAttachmentHelpers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentComponent_NoRegister();
SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentHelpers();
SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentHelpers_NoRegister();
SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister();
SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentActor();
UPackage* Z_Construct_UPackage__Script_SKGAttachment();
// End Cross Module References

// Begin Class USKGAttachmentHelpers Function ConstructActorFromAttachmentManagerData
struct Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics
{
	struct SKGAttachmentHelpers_eventConstructActorFromAttachmentManagerData_Parms
	{
		const UObject* WorldContextObject;
		FSKGAttachmentActor Data;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGAttachmentHelpers|Construction" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventConstructActorFromAttachmentManagerData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventConstructActorFromAttachmentManagerData_Parms, Data), Z_Construct_UScriptStruct_FSKGAttachmentActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1155780087
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventConstructActorFromAttachmentManagerData_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentHelpers, nullptr, "ConstructActorFromAttachmentManagerData", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::SKGAttachmentHelpers_eventConstructActorFromAttachmentManagerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::SKGAttachmentHelpers_eventConstructActorFromAttachmentManagerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGAttachmentHelpers::execConstructActorFromAttachmentManagerData)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FSKGAttachmentActor,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=USKGAttachmentHelpers::ConstructActorFromAttachmentManagerData(Z_Param_WorldContextObject,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USKGAttachmentHelpers Function ConstructActorFromAttachmentManagerData

// Begin Class USKGAttachmentHelpers Function ConstructAttachmentManagerData
struct Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics
{
	struct SKGAttachmentHelpers_eventConstructAttachmentManagerData_Parms
	{
		const USKGAttachmentManagerComponent* AttachmentManagerComponent;
		FSKGAttachmentActor Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGAttachmentHelpers|Construction" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentManagerComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::NewProp_AttachmentManagerComponent = { "AttachmentManagerComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventConstructAttachmentManagerData_Parms, AttachmentManagerComponent), Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentManagerComponent_MetaData), NewProp_AttachmentManagerComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventConstructAttachmentManagerData_Parms, Data), Z_Construct_UScriptStruct_FSKGAttachmentActor, METADATA_PARAMS(0, nullptr) }; // 1155780087
void Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGAttachmentHelpers_eventConstructAttachmentManagerData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentHelpers_eventConstructAttachmentManagerData_Parms), &Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::NewProp_AttachmentManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentHelpers, nullptr, "ConstructAttachmentManagerData", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::SKGAttachmentHelpers_eventConstructAttachmentManagerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::SKGAttachmentHelpers_eventConstructAttachmentManagerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGAttachmentHelpers::execConstructAttachmentManagerData)
{
	P_GET_OBJECT(USKGAttachmentManagerComponent,Z_Param_AttachmentManagerComponent);
	P_GET_STRUCT_REF(FSKGAttachmentActor,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USKGAttachmentHelpers::ConstructAttachmentManagerData(Z_Param_AttachmentManagerComponent,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USKGAttachmentHelpers Function ConstructAttachmentManagerData

// Begin Class USKGAttachmentHelpers Function DeserializeAttachmentManagerJson
struct Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics
{
	struct SKGAttachmentHelpers_eventDeserializeAttachmentManagerJson_Parms
	{
		FString JsonString;
		FSKGAttachmentActor Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGAttachmentHelpers|Construction" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventDeserializeAttachmentManagerJson_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventDeserializeAttachmentManagerJson_Parms, Data), Z_Construct_UScriptStruct_FSKGAttachmentActor, METADATA_PARAMS(0, nullptr) }; // 1155780087
void Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGAttachmentHelpers_eventDeserializeAttachmentManagerJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentHelpers_eventDeserializeAttachmentManagerJson_Parms), &Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentHelpers, nullptr, "DeserializeAttachmentManagerJson", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::SKGAttachmentHelpers_eventDeserializeAttachmentManagerJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::SKGAttachmentHelpers_eventDeserializeAttachmentManagerJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGAttachmentHelpers::execDeserializeAttachmentManagerJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_STRUCT_REF(FSKGAttachmentActor,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USKGAttachmentHelpers::DeserializeAttachmentManagerJson(Z_Param_JsonString,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USKGAttachmentHelpers Function DeserializeAttachmentManagerJson

// Begin Class USKGAttachmentHelpers Function GetAllFiles
struct Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics
{
	struct SKGAttachmentHelpers_eventGetAllFiles_Parms
	{
		FString Path;
		TArray<FString> OutFiles;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGAttachmentHelpers|File" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFiles;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventGetAllFiles_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_OutFiles_Inner = { "OutFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_OutFiles = { "OutFiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventGetAllFiles_Parms, OutFiles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGAttachmentHelpers_eventGetAllFiles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentHelpers_eventGetAllFiles_Parms), &Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_OutFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_OutFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentHelpers, nullptr, "GetAllFiles", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::SKGAttachmentHelpers_eventGetAllFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::SKGAttachmentHelpers_eventGetAllFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGAttachmentHelpers::execGetAllFiles)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USKGAttachmentHelpers::GetAllFiles(Z_Param_Path,Z_Param_Out_OutFiles);
	P_NATIVE_END;
}
// End Class USKGAttachmentHelpers Function GetAllFiles

// Begin Class USKGAttachmentHelpers Function GetAttachmentComponents
struct Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics
{
	struct SKGAttachmentHelpers_eventGetAttachmentComponents_Parms
	{
		const AActor* Actor;
		TArray<USKGAttachmentComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGAttachmentHelpers|Getters" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventGetAttachmentComponents_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGAttachmentComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventGetAttachmentComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentHelpers, nullptr, "GetAttachmentComponents", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::SKGAttachmentHelpers_eventGetAttachmentComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::SKGAttachmentHelpers_eventGetAttachmentComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGAttachmentHelpers::execGetAttachmentComponents)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USKGAttachmentComponent*>*)Z_Param__Result=USKGAttachmentHelpers::GetAttachmentComponents(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class USKGAttachmentHelpers Function GetAttachmentComponents

// Begin Class USKGAttachmentHelpers Function GetAttachmentManagerComponent
struct Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics
{
	struct SKGAttachmentHelpers_eventGetAttachmentManagerComponent_Parms
	{
		const AActor* Actor;
		USKGAttachmentManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGAttachmentHelpers|Getters" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventGetAttachmentManagerComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventGetAttachmentManagerComponent_Parms, ReturnValue), Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentHelpers, nullptr, "GetAttachmentManagerComponent", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::SKGAttachmentHelpers_eventGetAttachmentManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::SKGAttachmentHelpers_eventGetAttachmentManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGAttachmentHelpers::execGetAttachmentManagerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USKGAttachmentManagerComponent**)Z_Param__Result=USKGAttachmentHelpers::GetAttachmentManagerComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class USKGAttachmentHelpers Function GetAttachmentManagerComponent

// Begin Class USKGAttachmentHelpers Function LoadFileToString
struct Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics
{
	struct SKGAttachmentHelpers_eventLoadFileToString_Parms
	{
		FString Path;
		FString OutString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGAttachmentHelpers|File" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventLoadFileToString_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventLoadFileToString_Parms, OutString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGAttachmentHelpers_eventLoadFileToString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentHelpers_eventLoadFileToString_Parms), &Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::NewProp_OutString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentHelpers, nullptr, "LoadFileToString", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::SKGAttachmentHelpers_eventLoadFileToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::SKGAttachmentHelpers_eventLoadFileToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGAttachmentHelpers::execLoadFileToString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USKGAttachmentHelpers::LoadFileToString(Z_Param_Path,Z_Param_Out_OutString);
	P_NATIVE_END;
}
// End Class USKGAttachmentHelpers Function LoadFileToString

// Begin Class USKGAttachmentHelpers Function SaveStringToFile
struct Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics
{
	struct SKGAttachmentHelpers_eventSaveStringToFile_Parms
	{
		FString Path;
		FString FileContent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGAttachmentHelpers|File" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileContent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventSaveStringToFile_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::NewProp_FileContent = { "FileContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventSaveStringToFile_Parms, FileContent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileContent_MetaData), NewProp_FileContent_MetaData) };
void Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGAttachmentHelpers_eventSaveStringToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentHelpers_eventSaveStringToFile_Parms), &Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::NewProp_FileContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentHelpers, nullptr, "SaveStringToFile", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::SKGAttachmentHelpers_eventSaveStringToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::SKGAttachmentHelpers_eventSaveStringToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGAttachmentHelpers::execSaveStringToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileContent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USKGAttachmentHelpers::SaveStringToFile(Z_Param_Path,Z_Param_FileContent);
	P_NATIVE_END;
}
// End Class USKGAttachmentHelpers Function SaveStringToFile

// Begin Class USKGAttachmentHelpers Function SerializeAttachmentManagerToJson
struct Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics
{
	struct SKGAttachmentHelpers_eventSerializeAttachmentManagerToJson_Parms
	{
		const USKGAttachmentManagerComponent* AttachmentManagerComponent;
		FString SerializedString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USKGAttachmentHelpers|Construction" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentManagerComponent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SerializedString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::NewProp_AttachmentManagerComponent = { "AttachmentManagerComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventSerializeAttachmentManagerToJson_Parms, AttachmentManagerComponent), Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentManagerComponent_MetaData), NewProp_AttachmentManagerComponent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::NewProp_SerializedString = { "SerializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentHelpers_eventSerializeAttachmentManagerToJson_Parms, SerializedString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SKGAttachmentHelpers_eventSerializeAttachmentManagerToJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentHelpers_eventSerializeAttachmentManagerToJson_Parms), &Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::NewProp_AttachmentManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::NewProp_SerializedString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentHelpers, nullptr, "SerializeAttachmentManagerToJson", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::SKGAttachmentHelpers_eventSerializeAttachmentManagerToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::SKGAttachmentHelpers_eventSerializeAttachmentManagerToJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGAttachmentHelpers::execSerializeAttachmentManagerToJson)
{
	P_GET_OBJECT(USKGAttachmentManagerComponent,Z_Param_AttachmentManagerComponent);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SerializedString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USKGAttachmentHelpers::SerializeAttachmentManagerToJson(Z_Param_AttachmentManagerComponent,Z_Param_Out_SerializedString);
	P_NATIVE_END;
}
// End Class USKGAttachmentHelpers Function SerializeAttachmentManagerToJson

// Begin Class USKGAttachmentHelpers
void USKGAttachmentHelpers::StaticRegisterNativesUSKGAttachmentHelpers()
{
	UClass* Class = USKGAttachmentHelpers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConstructActorFromAttachmentManagerData", &USKGAttachmentHelpers::execConstructActorFromAttachmentManagerData },
		{ "ConstructAttachmentManagerData", &USKGAttachmentHelpers::execConstructAttachmentManagerData },
		{ "DeserializeAttachmentManagerJson", &USKGAttachmentHelpers::execDeserializeAttachmentManagerJson },
		{ "GetAllFiles", &USKGAttachmentHelpers::execGetAllFiles },
		{ "GetAttachmentComponents", &USKGAttachmentHelpers::execGetAttachmentComponents },
		{ "GetAttachmentManagerComponent", &USKGAttachmentHelpers::execGetAttachmentManagerComponent },
		{ "LoadFileToString", &USKGAttachmentHelpers::execLoadFileToString },
		{ "SaveStringToFile", &USKGAttachmentHelpers::execSaveStringToFile },
		{ "SerializeAttachmentManagerToJson", &USKGAttachmentHelpers::execSerializeAttachmentManagerToJson },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGAttachmentHelpers);
UClass* Z_Construct_UClass_USKGAttachmentHelpers_NoRegister()
{
	return USKGAttachmentHelpers::StaticClass();
}
struct Z_Construct_UClass_USKGAttachmentHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Statics/SKGAttachmentHelpers.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGAttachmentHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGAttachmentHelpers_ConstructActorFromAttachmentManagerData, "ConstructActorFromAttachmentManagerData" }, // 1275335577
		{ &Z_Construct_UFunction_USKGAttachmentHelpers_ConstructAttachmentManagerData, "ConstructAttachmentManagerData" }, // 2998292328
		{ &Z_Construct_UFunction_USKGAttachmentHelpers_DeserializeAttachmentManagerJson, "DeserializeAttachmentManagerJson" }, // 2041667366
		{ &Z_Construct_UFunction_USKGAttachmentHelpers_GetAllFiles, "GetAllFiles" }, // 1845802868
		{ &Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentComponents, "GetAttachmentComponents" }, // 709756766
		{ &Z_Construct_UFunction_USKGAttachmentHelpers_GetAttachmentManagerComponent, "GetAttachmentManagerComponent" }, // 715315227
		{ &Z_Construct_UFunction_USKGAttachmentHelpers_LoadFileToString, "LoadFileToString" }, // 989498551
		{ &Z_Construct_UFunction_USKGAttachmentHelpers_SaveStringToFile, "SaveStringToFile" }, // 849985887
		{ &Z_Construct_UFunction_USKGAttachmentHelpers_SerializeAttachmentManagerToJson, "SerializeAttachmentManagerToJson" }, // 3100030593
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGAttachmentHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USKGAttachmentHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGAttachmentHelpers_Statics::ClassParams = {
	&USKGAttachmentHelpers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGAttachmentHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGAttachmentHelpers()
{
	if (!Z_Registration_Info_UClass_USKGAttachmentHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGAttachmentHelpers.OuterSingleton, Z_Construct_UClass_USKGAttachmentHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGAttachmentHelpers.OuterSingleton;
}
template<> SKGATTACHMENT_API UClass* StaticClass<USKGAttachmentHelpers>()
{
	return USKGAttachmentHelpers::StaticClass();
}
USKGAttachmentHelpers::USKGAttachmentHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGAttachmentHelpers);
USKGAttachmentHelpers::~USKGAttachmentHelpers() {}
// End Class USKGAttachmentHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGAttachmentHelpers, USKGAttachmentHelpers::StaticClass, TEXT("USKGAttachmentHelpers"), &Z_Registration_Info_UClass_USKGAttachmentHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGAttachmentHelpers), 2122863686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_3223517312(TEXT("/Script/SKGAttachment"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Statics_SKGAttachmentHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
