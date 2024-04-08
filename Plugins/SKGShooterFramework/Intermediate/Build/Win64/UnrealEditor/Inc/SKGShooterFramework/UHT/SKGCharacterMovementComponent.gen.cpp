// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFramework/Public/Components/SKGCharacterMovementComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGCharacterMovementComponent();
SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGShooterFramework();
// End Cross Module References

// Begin Class USKGCharacterMovementComponent Function DecreaseWalkSpeedMultiplier
struct Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics
{
	struct SKGCharacterMovementComponent_eventDecreaseWalkSpeedMultiplier_Parms
	{
		float DecreaseAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "CPP_Default_DecreaseAmount", "0.100000" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecreaseAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::NewProp_DecreaseAmount = { "DecreaseAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCharacterMovementComponent_eventDecreaseWalkSpeedMultiplier_Parms, DecreaseAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::NewProp_DecreaseAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "DecreaseWalkSpeedMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::SKGCharacterMovementComponent_eventDecreaseWalkSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(USKGCharacterMovementComponent::execDecreaseWalkSpeedMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DecreaseAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseWalkSpeedMultiplier(Z_Param_DecreaseAmount);
	P_NATIVE_END;
}
// End Class USKGCharacterMovementComponent Function DecreaseWalkSpeedMultiplier

// Begin Class USKGCharacterMovementComponent Function GetIsSprinting
struct Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics
{
	struct SKGCharacterMovementComponent_eventGetIsSprinting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "GetIsSprinting", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::SKGCharacterMovementComponent_eventGetIsSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(USKGCharacterMovementComponent::execGetIsSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsSprinting();
	P_NATIVE_END;
}
// End Class USKGCharacterMovementComponent Function GetIsSprinting

// Begin Class USKGCharacterMovementComponent Function IncreaseWalkSpeedMultiplier
struct Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics
{
	struct SKGCharacterMovementComponent_eventIncreaseWalkSpeedMultiplier_Parms
	{
		float IncreaseAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "CPP_Default_IncreaseAmount", "0.100000" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IncreaseAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::NewProp_IncreaseAmount = { "IncreaseAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCharacterMovementComponent_eventIncreaseWalkSpeedMultiplier_Parms, IncreaseAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::NewProp_IncreaseAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "IncreaseWalkSpeedMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::SKGCharacterMovementComponent_eventIncreaseWalkSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(USKGCharacterMovementComponent::execIncreaseWalkSpeedMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_IncreaseAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseWalkSpeedMultiplier(Z_Param_IncreaseAmount);
	P_NATIVE_END;
}
// End Class USKGCharacterMovementComponent Function IncreaseWalkSpeedMultiplier

// Begin Class USKGCharacterMovementComponent Function Server_SetWalkSpeedMultiplier
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
struct Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::NewProp_WalkSpeedMultiplier = { "WalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCharacterMovementComponent_eventServer_SetWalkSpeedMultiplier_Parms, WalkSpeedMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::NewProp_WalkSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "Server_SetWalkSpeedMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::PropPointers), sizeof(SKGCharacterMovementComponent_eventServer_SetWalkSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams) };
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
// End Class USKGCharacterMovementComponent Function Server_SetWalkSpeedMultiplier

// Begin Class USKGCharacterMovementComponent Function SetWalkSpeedMultiplier
struct Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics
{
	struct SKGCharacterMovementComponent_eventSetWalkSpeedMultiplier_Parms
	{
		float WalkSpeedMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::NewProp_WalkSpeedMultiplier = { "WalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGCharacterMovementComponent_eventSetWalkSpeedMultiplier_Parms, WalkSpeedMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::NewProp_WalkSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGCharacterMovementComponent, nullptr, "SetWalkSpeedMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::SKGCharacterMovementComponent_eventSetWalkSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(USKGCharacterMovementComponent::execSetWalkSpeedMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_WalkSpeedMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWalkSpeedMultiplier(Z_Param_WalkSpeedMultiplier);
	P_NATIVE_END;
}
// End Class USKGCharacterMovementComponent Function SetWalkSpeedMultiplier

// Begin Class USKGCharacterMovementComponent Function StartSprinting
struct Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
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
DEFINE_FUNCTION(USKGCharacterMovementComponent::execStartSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprinting();
	P_NATIVE_END;
}
// End Class USKGCharacterMovementComponent Function StartSprinting

// Begin Class USKGCharacterMovementComponent Function StopSprinting
struct Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGMovementComponent|CharacterMovement" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
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
DEFINE_FUNCTION(USKGCharacterMovementComponent::execStopSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprinting();
	P_NATIVE_END;
}
// End Class USKGCharacterMovementComponent Function StopSprinting

// Begin Class USKGCharacterMovementComponent
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
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGCharacterMovementComponent);
UClass* Z_Construct_UClass_USKGCharacterMovementComponent_NoRegister()
{
	return USKGCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_USKGCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Components/SKGCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperSprintSpeed_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionTolerance_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanOnlySprintForwards_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSprintSideways_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "EditCondition", "!bCanOnlySprintForwards" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSidewaysSpeed_MetaData[] = {
		{ "Category", "SKGMovementComponent|Sprinting" },
		{ "EditCondition", "!bCanOnlySprintForwards && bSprintSideways" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedMultiplier_MetaData[] = {
		{ "Category", "SKGMovementComponent|Walking" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinWalkSpeedMultiplier_MetaData[] = {
		{ "Category", "SKGMovementComponent|Walking" },
		{ "ModuleRelativePath", "Public/Components/SKGCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SuperSprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDirectionTolerance;
	static void NewProp_bCanOnlySprintForwards_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanOnlySprintForwards;
	static void NewProp_bSprintSideways_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprintSideways;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSidewaysSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWalkSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_DecreaseWalkSpeedMultiplier, "DecreaseWalkSpeedMultiplier" }, // 520413614
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_GetIsSprinting, "GetIsSprinting" }, // 2634007591
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_IncreaseWalkSpeedMultiplier, "IncreaseWalkSpeedMultiplier" }, // 3171695466
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_Server_SetWalkSpeedMultiplier, "Server_SetWalkSpeedMultiplier" }, // 1269495465
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_SetWalkSpeedMultiplier, "SetWalkSpeedMultiplier" }, // 627566553
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_StartSprinting, "StartSprinting" }, // 1247978008
		{ &Z_Construct_UFunction_USKGCharacterMovementComponent_StopSprinting, "StopSprinting" }, // 1847627759
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SuperSprintSpeed = { "SuperSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, SuperSprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperSprintSpeed_MetaData), NewProp_SuperSprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MoveDirectionTolerance = { "MoveDirectionTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, MoveDirectionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirectionTolerance_MetaData), NewProp_MoveDirectionTolerance_MetaData) };
void Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards_SetBit(void* Obj)
{
	((USKGCharacterMovementComponent*)Obj)->bCanOnlySprintForwards = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards = { "bCanOnlySprintForwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGCharacterMovementComponent), &Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bCanOnlySprintForwards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanOnlySprintForwards_MetaData), NewProp_bCanOnlySprintForwards_MetaData) };
void Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways_SetBit(void* Obj)
{
	((USKGCharacterMovementComponent*)Obj)->bSprintSideways = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways = { "bSprintSideways", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGCharacterMovementComponent), &Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_bSprintSideways_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSprintSideways_MetaData), NewProp_bSprintSideways_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_SprintSidewaysSpeed = { "SprintSidewaysSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, SprintSidewaysSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSidewaysSpeed_MetaData), NewProp_SprintSidewaysSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedMultiplier = { "MaxWalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, MaxWalkSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeedMultiplier_MetaData), NewProp_MaxWalkSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGCharacterMovementComponent_Statics::NewProp_MinWalkSpeedMultiplier = { "MinWalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGCharacterMovementComponent, MinWalkSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinWalkSpeedMultiplier_MetaData), NewProp_MinWalkSpeedMultiplier_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGCharacterMovementComponent_Statics::DependentSingletons) < 16);
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
// End Class USKGCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGCharacterMovementComponent, USKGCharacterMovementComponent::StaticClass, TEXT("USKGCharacterMovementComponent"), &Z_Registration_Info_UClass_USKGCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGCharacterMovementComponent), 1613712315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGCharacterMovementComponent_h_42945177(TEXT("/Script/SKGShooterFramework"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
