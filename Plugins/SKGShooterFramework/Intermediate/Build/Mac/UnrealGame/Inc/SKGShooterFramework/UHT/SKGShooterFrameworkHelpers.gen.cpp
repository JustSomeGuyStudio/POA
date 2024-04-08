// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGShooterFramework/Public/Statics/SKGShooterFrameworkHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkHelpers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SKGLIGHTLASER_API UClass* Z_Construct_UClass_USKGLightLaserComponent_NoRegister();
	SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticComponent_NoRegister();
	SKGPROCEDURALANIM_API UClass* Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGFirearmComponent_NoRegister();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterFrameworkHelpers();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterFrameworkHelpers_NoRegister();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterPawnComponent_NoRegister();
	SKGSTATS_API UClass* Z_Construct_UClass_USKGFirearmAttachmentStatComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGShooterFramework();
// End Cross Module References
	DEFINE_FUNCTION(USKGShooterFrameworkHelpers::execGetParentFirearmComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=USKGShooterFrameworkHelpers::GetParentFirearmComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkHelpers::execGetLightLaserComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGLightLaserComponent**)Z_Param__Result=USKGShooterFrameworkHelpers::GetLightLaserComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkHelpers::execGetFirearmAttachmentStatComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGFirearmAttachmentStatComponent**)Z_Param__Result=USKGShooterFrameworkHelpers::GetFirearmAttachmentStatComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkHelpers::execGetOpticComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGOpticComponent**)Z_Param__Result=USKGShooterFrameworkHelpers::GetOpticComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkHelpers::execGetFirearmComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGFirearmComponent**)Z_Param__Result=USKGShooterFrameworkHelpers::GetFirearmComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkHelpers::execGetProceduralAnimComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGProceduralAnimComponent**)Z_Param__Result=USKGShooterFrameworkHelpers::GetProceduralAnimComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkHelpers::execGetShooterPawnComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGShooterPawnComponent**)Z_Param__Result=USKGShooterFrameworkHelpers::GetShooterPawnComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void USKGShooterFrameworkHelpers::StaticRegisterNativesUSKGShooterFrameworkHelpers()
	{
		UClass* Class = USKGShooterFrameworkHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirearmAttachmentStatComponent", &USKGShooterFrameworkHelpers::execGetFirearmAttachmentStatComponent },
			{ "GetFirearmComponent", &USKGShooterFrameworkHelpers::execGetFirearmComponent },
			{ "GetLightLaserComponent", &USKGShooterFrameworkHelpers::execGetLightLaserComponent },
			{ "GetOpticComponent", &USKGShooterFrameworkHelpers::execGetOpticComponent },
			{ "GetParentFirearmComponent", &USKGShooterFrameworkHelpers::execGetParentFirearmComponent },
			{ "GetProceduralAnimComponent", &USKGShooterFrameworkHelpers::execGetProceduralAnimComponent },
			{ "GetShooterPawnComponent", &USKGShooterFrameworkHelpers::execGetShooterPawnComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics
	{
		struct SKGShooterFrameworkHelpers_eventGetFirearmAttachmentStatComponent_Parms
		{
			const AActor* Actor;
			USKGFirearmAttachmentStatComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetFirearmAttachmentStatComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetFirearmAttachmentStatComponent_Parms, ReturnValue), Z_Construct_UClass_USKGFirearmAttachmentStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkHelpers, nullptr, "GetFirearmAttachmentStatComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::SKGShooterFrameworkHelpers_eventGetFirearmAttachmentStatComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::SKGShooterFrameworkHelpers_eventGetFirearmAttachmentStatComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics
	{
		struct SKGShooterFrameworkHelpers_eventGetFirearmComponent_Parms
		{
			const AActor* Actor;
			USKGFirearmComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetFirearmComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetFirearmComponent_Parms, ReturnValue), Z_Construct_UClass_USKGFirearmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkHelpers, nullptr, "GetFirearmComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::SKGShooterFrameworkHelpers_eventGetFirearmComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::SKGShooterFrameworkHelpers_eventGetFirearmComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics
	{
		struct SKGShooterFrameworkHelpers_eventGetLightLaserComponent_Parms
		{
			const AActor* Actor;
			USKGLightLaserComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetLightLaserComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetLightLaserComponent_Parms, ReturnValue), Z_Construct_UClass_USKGLightLaserComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkHelpers, nullptr, "GetLightLaserComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::SKGShooterFrameworkHelpers_eventGetLightLaserComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::SKGShooterFrameworkHelpers_eventGetLightLaserComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics
	{
		struct SKGShooterFrameworkHelpers_eventGetOpticComponent_Parms
		{
			const AActor* Actor;
			USKGOpticComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetOpticComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetOpticComponent_Parms, ReturnValue), Z_Construct_UClass_USKGOpticComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkHelpers, nullptr, "GetOpticComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::SKGShooterFrameworkHelpers_eventGetOpticComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::SKGShooterFrameworkHelpers_eventGetOpticComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics
	{
		struct SKGShooterFrameworkHelpers_eventGetParentFirearmComponent_Parms
		{
			const AActor* Actor;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetParentFirearmComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::NewProp_Actor_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetParentFirearmComponent_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkStatics" },
		{ "Comment", "// Searches for the firearm that Actor is attached to\n" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkHelpers.h" },
		{ "ToolTip", "Searches for the firearm that Actor is attached to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkHelpers, nullptr, "GetParentFirearmComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::SKGShooterFrameworkHelpers_eventGetParentFirearmComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::SKGShooterFrameworkHelpers_eventGetParentFirearmComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics
	{
		struct SKGShooterFrameworkHelpers_eventGetProceduralAnimComponent_Parms
		{
			const AActor* Actor;
			USKGProceduralAnimComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetProceduralAnimComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetProceduralAnimComponent_Parms, ReturnValue), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkHelpers, nullptr, "GetProceduralAnimComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::SKGShooterFrameworkHelpers_eventGetProceduralAnimComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::SKGShooterFrameworkHelpers_eventGetProceduralAnimComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics
	{
		struct SKGShooterFrameworkHelpers_eventGetShooterPawnComponent_Parms
		{
			const AActor* Actor;
			USKGShooterPawnComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetShooterPawnComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkHelpers_eventGetShooterPawnComponent_Parms, ReturnValue), Z_Construct_UClass_USKGShooterPawnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkHelpers, nullptr, "GetShooterPawnComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::SKGShooterFrameworkHelpers_eventGetShooterPawnComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::SKGShooterFrameworkHelpers_eventGetShooterPawnComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterFrameworkHelpers);
	UClass* Z_Construct_UClass_USKGShooterFrameworkHelpers_NoRegister()
	{
		return USKGShooterFrameworkHelpers::StaticClass();
	}
	struct Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmAttachmentStatComponent, "GetFirearmAttachmentStatComponent" }, // 1488755807
		{ &Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetFirearmComponent, "GetFirearmComponent" }, // 245048974
		{ &Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetLightLaserComponent, "GetLightLaserComponent" }, // 1688461504
		{ &Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetOpticComponent, "GetOpticComponent" }, // 2899645362
		{ &Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetParentFirearmComponent, "GetParentFirearmComponent" }, // 1160559448
		{ &Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetProceduralAnimComponent, "GetProceduralAnimComponent" }, // 1956852046
		{ &Z_Construct_UFunction_USKGShooterFrameworkHelpers_GetShooterPawnComponent, "GetShooterPawnComponent" }, // 1026039484
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Statics/SKGShooterFrameworkHelpers.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterFrameworkHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::ClassParams = {
		&USKGShooterFrameworkHelpers::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USKGShooterFrameworkHelpers()
	{
		if (!Z_Registration_Info_UClass_USKGShooterFrameworkHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterFrameworkHelpers.OuterSingleton, Z_Construct_UClass_USKGShooterFrameworkHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGShooterFrameworkHelpers.OuterSingleton;
	}
	template<> SKGSHOOTERFRAMEWORK_API UClass* StaticClass<USKGShooterFrameworkHelpers>()
	{
		return USKGShooterFrameworkHelpers::StaticClass();
	}
	USKGShooterFrameworkHelpers::USKGShooterFrameworkHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterFrameworkHelpers);
	USKGShooterFrameworkHelpers::~USKGShooterFrameworkHelpers() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Statics_SKGShooterFrameworkHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Statics_SKGShooterFrameworkHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterFrameworkHelpers, USKGShooterFrameworkHelpers::StaticClass, TEXT("USKGShooterFrameworkHelpers"), &Z_Registration_Info_UClass_USKGShooterFrameworkHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterFrameworkHelpers), 1714718646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Statics_SKGShooterFrameworkHelpers_h_3307841535(TEXT("/Script/SKGShooterFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Statics_SKGShooterFrameworkHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Statics_SKGShooterFrameworkHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
