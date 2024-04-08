// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGShooterFramework/Public/Components/SKGCharacterMovementComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGCharacterMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGCharacterMovementComponent();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGCharacterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGShooterFramework();
// End Cross Module References
	DEFINE_FUNCTION(USKGCharacterMovementComponent::execServer_SetWalkSpeedMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_WalkSpeedMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetWalkSpeedMultiplier_Validate(Z_Param_WalkSpeedMultiplier))
		{
			RPC_ValidateFailed(TEXT("Server_SetWalkSpeedMultiplier_Validate"));
			return;
		}
		P_THIS->Server_SetWalkSpeedMultiplier_Implementation(Z_Param_WalkSpeedMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGCharacterMovementComponent::execDecreaseWalkSpeedMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DecreaseAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseWalkSpeedMultiplier(Z_Param_DecreaseAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGCharacterMovementComponent::execIncreaseWalkSpeedMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_IncreaseAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseWalkSpeedMultiplier(Z_Param_IncreaseAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGCharacterMovementComponent::execSetWalkSpeedMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_WalkSpeedMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWalkSpeedMultiplier(Z_Param_WalkSpeedMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGCharacterMovementComponent::execGetIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGCharacterMovementComponent::execStopSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGCharacterMovementComponent::execStartSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSprinting();
		P_NATIVE_END;
	}
	struct SKGCharacterMovementComponent_eventServer_SetWalkSpeedMultiplier_Parms
	{
		float WalkSpeedMultiplier;
	};
	static FName NAME_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier = FName(TEXT("Server_SetWalkSpeedMultiplier"));
	void USKGCharacterMovementComponent::Server_SetWalkSpeedMultiplier(float WalkSpeedMultiplier)
	{
		SKGCharacterMovementComponent_eventServer_SetWalkSpeedMultiplier_Parms Parms;
		Parms.WalkSpeedMultiplier=WalkSpeedMultiplier;
		ProcessEvent(FindFunctionChecked(NAME_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier),&Parms);
	}
	void USKGCharacterMovementComponent::StaticRegisterNativesUSKGCharacterMovementComponent()
	{
		UClass* Class = USKGCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseWalkSpeedMultiplier", &USKGCharacterMovementComponent::execDecreaseWalkSpeedMultiplier },
			{ "GetIsSprinting", &USKGCharacterMovementComponent::execGetIsSprinting },
			{ "IncreaseWalkSpeedMultiplier", &USKGCharacterMovementComponent::execIncreaseWalkSpeedMultiplier },
			{ "Server_SetWalkSpeedMultiplier", &USKGCharacterMovementComponent::execServer_SetWalkSpeedMultiplier },
			{ "SetWalkSpeedMultiplier", &USKGCharacterMovementComponent::execSetWalkSpeedMultiplier },
			{ "StartSprinting", &USKGCharacterMovementComponent::execStartSprinting },
			{ "StopSprinting", &USKGCharacterMovementComponent::execStopSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics
	{
		struct SKGCharacterMovementComponent_eventDecreaseWalkSpeedMultiplier_Parms
		{
			float DecreaseAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecreaseAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::NewProp_DecreaseAmount = { "DecreaseAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCharacterMovementComponent_eventDecreaseWalkSpeedMultiplier_Parms, DecreaseAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::NewProp_DecreaseAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "CPP_Default_DecreaseAmount", "0.100000" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "DecreaseWalkSpeedMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::SKGCharacterMovementComponent_eventDecreaseWalkSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::SKGCharacterMovementComponent_eventDecreaseWalkSpeedMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics
	{
		struct SKGCharacterMovementComponent_eventGetIsSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGCharacterMovementComponent_eventGetIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGCharacterMovementComponent_eventGetIsSprinting_Parms), &Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "GetIsSprinting", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::SKGCharacterMovementComponent_eventGetIsSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::SKGCharacterMovementComponent_eventGetIsSprinting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics
	{
		struct SKGCharacterMovementComponent_eventIncreaseWalkSpeedMultiplier_Parms
		{
			float IncreaseAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IncreaseAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::NewProp_IncreaseAmount = { "IncreaseAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCharacterMovementComponent_eventIncreaseWalkSpeedMultiplier_Parms, IncreaseAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::NewProp_IncreaseAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "CPP_Default_IncreaseAmount", "0.100000" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "IncreaseWalkSpeedMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::SKGCharacterMovementComponent_eventIncreaseWalkSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::SKGCharacterMovementComponent_eventIncreaseWalkSpeedMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::NewProp_WalkSpeedMultiplier = { "WalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCharacterMovementComponent_eventServer_SetWalkSpeedMultiplier_Parms, WalkSpeedMultiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::NewProp_WalkSpeedMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "Server_SetWalkSpeedMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::PropPointers), sizeof(SKGCharacterMovementComponent_eventServer_SetWalkSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGCharacterMovementComponent_eventServer_SetWalkSpeedMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics
	{
		struct SKGCharacterMovementComponent_eventSetWalkSpeedMultiplier_Parms
		{
			float WalkSpeedMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::NewProp_WalkSpeedMultiplier = { "WalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCharacterMovementComponent_eventSetWalkSpeedMultiplier_Parms, WalkSpeedMultiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::NewProp_WalkSpeedMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "SetWalkSpeedMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::SKGCharacterMovementComponent_eventSetWalkSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::SKGCharacterMovementComponent_eventSetWalkSpeedMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "StartSprinting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "StopSprinting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGCharacterMovementComponent);
	UClass* Z_Construct_UClass_USKGCharacterMovementComponent_NoRegister()
	{
		return USKGCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperSprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuperSprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDirectionTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanOnlySprintForwards_MetaData[];
#endif
		static void NewProp_bCanOnlySprintForwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanOnlySprintForwards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSprintSideways_MetaData[];
#endif
		static void NewProp_bSprintSideways_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprintSideways;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSidewaysSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSidewaysSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWalkSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWalkSpeedMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier, "DecreaseWalkSpeedMultiplier" }, // 3068711836
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting, "GetIsSprinting" }, // 1559001425
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier, "IncreaseWalkSpeedMultiplier" }, // 1848810198
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier, "Server_SetWalkSpeedMultiplier" }, // 3697811304
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier, "SetWalkSpeedMultiplier" }, // 2586514306
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting, "StartSprinting" }, // 1400489126
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting, "StopSprinting" }, // 599248575
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/SKGCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSpeed_MetaData), Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SuperSprintSpeed_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SuperSprintSpeed = { "SuperSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, SuperSprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SuperSprintSpeed_MetaData), Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SuperSprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MoveDirectionTolerance_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MoveDirectionTolerance = { "MoveDirectionTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, MoveDirectionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MoveDirectionTolerance_MetaData), Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MoveDirectionTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards_SetBit(void* Obj)
	{
		((USKGCharacterMovementComponent*)Obj)->bCanOnlySprintForwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards = { "bCanOnlySprintForwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGCharacterMovementComponent), &Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards_MetaData), Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "EditCondition", "!bCanOnlySprintForwards" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways_SetBit(void* Obj)
	{
		((USKGCharacterMovementComponent*)Obj)->bSprintSideways = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways = { "bSprintSideways", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGCharacterMovementComponent), &Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways_MetaData), Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSidewaysSpeed_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "EditCondition", "!bCanOnlySprintForwards && bSprintSideways" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSidewaysSpeed = { "SprintSidewaysSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, SprintSidewaysSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSidewaysSpeed_MetaData), Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSidewaysSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedMultiplier_MetaData[] = {
		{ "Category", "SKGMovementComponent|Walking" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedMultiplier = { "MaxWalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, MaxWalkSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedMultiplier_MetaData), Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MinWalkSpeedMultiplier_MetaData[] = {
		{ "Category", "SKGMovementComponent|Walking" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MinWalkSpeedMultiplier = { "MinWalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, MinWalkSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MinWalkSpeedMultiplier_MetaData), Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MinWalkSpeedMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SuperSprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MoveDirectionTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSidewaysSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MinWalkSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::ClassParams = {
		&USKGCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_USKGCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_USKGCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGCharacterMovementComponent.OuterSingleton;
	}
	template<> SKGSHOOTERFRAMEWORK_API UClass* StaticClass<USKGCharacterMovementComponent>()
	{
		return USKGCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGCharacterMovementComponent);
	USKGCharacterMovementComponent::~USKGCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGCharacterMovementComponent, USKGCharacterMovementComponent::StaticClass, TEXT("USKGCharacterMovementComponent"), &Z_Registration_Info_UClass_USKGCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGCharacterMovementComponent), 2086995635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGCharacterMovementComponent_h_1080015437(TEXT("/Script/SKGShooterFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
