// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGProceduralAnim/Public/Components/SKGProceduralAnimComponent.h"
#include "GameplayTagContainer.h"
#include "SKGProceduralAnim/Public/DataTypes/SKGProceduralDataTypes.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGProceduralAnimComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SKGPROCEDURALANIM_API UClass* Z_Construct_UClass_USKGProceduralAnimComponent();
	SKGPROCEDURALANIM_API UClass* Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGDeadzoneSettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementLagSettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMovementSwaySettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralAimingSettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralOffset();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGRecoilSettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGRotationLagSettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGToFromCurveSettings();
	UPackage* Z_Construct_UPackage__Script_SKGProceduralAnim();
// End Cross Module References
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execGetProceduralAnimMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetProceduralAnimMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execGetAimOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetAimOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execGetPose)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_STRUCT_REF(FSKGToFromCurveSettings,Z_Param_Out_PoseData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPose(Z_Param_Tag,Z_Param_Out_PoseData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execUpdateAimOffsetWithSocket)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_ComponentRelativeTo);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAimOffsetWithSocket(Z_Param_ComponentRelativeTo,Z_Param_Out_Socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execUpdateAimOffset)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentRelativeTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAimOffset(Z_Param_ComponentRelativeTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execStopPointAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPointAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execStartPointAiming)
	{
		P_GET_UBOOL(Z_Param_bRightHandDominant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartPointAiming(Z_Param_bRightHandDominant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execCycleAimSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CycleAimSocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execGetAimMuzzleTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetAimMuzzleTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execGetAimWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetAimWorldTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execSetCanAim)
	{
		P_GET_UBOOL(Z_Param_bCanAim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanAim(Z_Param_bCanAim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execGetCanAim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanAim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execGetProceduralAimingSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSKGProceduralAimingSettings*)Z_Param__Result=P_THIS->GetProceduralAimingSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGProceduralAnimComponent::execServer_SetAimSocketIndex)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetAimSocketIndex_Validate(Z_Param_Index))
		{
			RPC_ValidateFailed(TEXT("Server_SetAimSocketIndex_Validate"));
			return;
		}
		P_THIS->Server_SetAimSocketIndex_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	struct SKGProceduralAnimComponent_eventGetAimMuzzleTransform_Parms
	{
		FTransform ReturnValue;
	};
	struct SKGProceduralAnimComponent_eventServer_SetAimSocketIndex_Parms
	{
		uint8 Index;
	};
	static FName NAME_USKGProceduralAnimComponent_GetAimMuzzleTransform = FName(TEXT("GetAimMuzzleTransform"));
	FTransform USKGProceduralAnimComponent::GetAimMuzzleTransform()
	{
		SKGProceduralAnimComponent_eventGetAimMuzzleTransform_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USKGProceduralAnimComponent_GetAimMuzzleTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USKGProceduralAnimComponent_Server_SetAimSocketIndex = FName(TEXT("Server_SetAimSocketIndex"));
	void USKGProceduralAnimComponent::Server_SetAimSocketIndex(uint8 Index)
	{
		SKGProceduralAnimComponent_eventServer_SetAimSocketIndex_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_USKGProceduralAnimComponent_Server_SetAimSocketIndex),&Parms);
	}
	void USKGProceduralAnimComponent::StaticRegisterNativesUSKGProceduralAnimComponent()
	{
		UClass* Class = USKGProceduralAnimComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CycleAimSocket", &USKGProceduralAnimComponent::execCycleAimSocket },
			{ "GetAimMuzzleTransform", &USKGProceduralAnimComponent::execGetAimMuzzleTransform },
			{ "GetAimOffset", &USKGProceduralAnimComponent::execGetAimOffset },
			{ "GetAimWorldTransform", &USKGProceduralAnimComponent::execGetAimWorldTransform },
			{ "GetCanAim", &USKGProceduralAnimComponent::execGetCanAim },
			{ "GetPose", &USKGProceduralAnimComponent::execGetPose },
			{ "GetProceduralAimingSettings", &USKGProceduralAnimComponent::execGetProceduralAimingSettings },
			{ "GetProceduralAnimMesh", &USKGProceduralAnimComponent::execGetProceduralAnimMesh },
			{ "Server_SetAimSocketIndex", &USKGProceduralAnimComponent::execServer_SetAimSocketIndex },
			{ "SetCanAim", &USKGProceduralAnimComponent::execSetCanAim },
			{ "StartPointAiming", &USKGProceduralAnimComponent::execStartPointAiming },
			{ "StopPointAiming", &USKGProceduralAnimComponent::execStopPointAiming },
			{ "UpdateAimOffset", &USKGProceduralAnimComponent::execUpdateAimOffset },
			{ "UpdateAimOffsetWithSocket", &USKGProceduralAnimComponent::execUpdateAimOffsetWithSocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics
	{
		struct SKGProceduralAnimComponent_eventCycleAimSocket_Parms
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
	void Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGProceduralAnimComponent_eventCycleAimSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGProceduralAnimComponent_eventCycleAimSocket_Parms), &Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnimComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "CycleAimSocket", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::SKGProceduralAnimComponent_eventCycleAimSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::SKGProceduralAnimComponent_eventCycleAimSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventGetAimMuzzleTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnimComponent|Muzzle" },
		{ "Comment", "/**\n\x09 * Overrideable, utilizes the aim socket to calculate where to zero the muzzle at\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "Overrideable, utilizes the aim socket to calculate where to zero the muzzle at" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "GetAimMuzzleTransform", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::PropPointers), sizeof(SKGProceduralAnimComponent_eventGetAimMuzzleTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGProceduralAnimComponent_eventGetAimMuzzleTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics
	{
		struct SKGProceduralAnimComponent_eventGetAimOffset_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventGetAimOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "GetAimOffset", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::SKGProceduralAnimComponent_eventGetAimOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::SKGProceduralAnimComponent_eventGetAimOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics
	{
		struct SKGProceduralAnimComponent_eventGetAimWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventGetAimWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnimComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "GetAimWorldTransform", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::SKGProceduralAnimComponent_eventGetAimWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::SKGProceduralAnimComponent_eventGetAimWorldTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics
	{
		struct SKGProceduralAnimComponent_eventGetCanAim_Parms
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
	void Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGProceduralAnimComponent_eventGetCanAim_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGProceduralAnimComponent_eventGetCanAim_Parms), &Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnimComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "GetCanAim", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::SKGProceduralAnimComponent_eventGetCanAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::SKGProceduralAnimComponent_eventGetCanAim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics
	{
		struct SKGProceduralAnimComponent_eventGetPose_Parms
		{
			FGameplayTag Tag;
			FSKGToFromCurveSettings PoseData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventGetPose_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::NewProp_PoseData = { "PoseData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventGetPose_Parms, PoseData), Z_Construct_UScriptStruct_FSKGToFromCurveSettings, METADATA_PARAMS(0, nullptr) }; // 3335197975
	void Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGProceduralAnimComponent_eventGetPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGProceduralAnimComponent_eventGetPose_Parms), &Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::NewProp_PoseData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnim|Pose" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "GetPose", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::SKGProceduralAnimComponent_eventGetPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::SKGProceduralAnimComponent_eventGetPose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics
	{
		struct SKGProceduralAnimComponent_eventGetProceduralAimingSettings_Parms
		{
			FSKGProceduralAimingSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventGetProceduralAimingSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGProceduralAimingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::NewProp_ReturnValue_MetaData) }; // 88735939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnimComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "GetProceduralAimingSettings", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::SKGProceduralAnimComponent_eventGetProceduralAimingSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::SKGProceduralAnimComponent_eventGetProceduralAimingSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics
	{
		struct SKGProceduralAnimComponent_eventGetProceduralAnimMesh_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventGetProceduralAnimMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "GetProceduralAnimMesh", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::SKGProceduralAnimComponent_eventGetProceduralAnimMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::SKGProceduralAnimComponent_eventGetProceduralAnimMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventServer_SetAimSocketIndex_Parms, Index), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "Server_SetAimSocketIndex", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::PropPointers), sizeof(SKGProceduralAnimComponent_eventServer_SetAimSocketIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGProceduralAnimComponent_eventServer_SetAimSocketIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics
	{
		struct SKGProceduralAnimComponent_eventSetCanAim_Parms
		{
			bool bCanAim;
		};
		static void NewProp_bCanAim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::NewProp_bCanAim_SetBit(void* Obj)
	{
		((SKGProceduralAnimComponent_eventSetCanAim_Parms*)Obj)->bCanAim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::NewProp_bCanAim = { "bCanAim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGProceduralAnimComponent_eventSetCanAim_Parms), &Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::NewProp_bCanAim_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::NewProp_bCanAim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnimComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "SetCanAim", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::SKGProceduralAnimComponent_eventSetCanAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::SKGProceduralAnimComponent_eventSetCanAim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics
	{
		struct SKGProceduralAnimComponent_eventStartPointAiming_Parms
		{
			bool bRightHandDominant;
			bool ReturnValue;
		};
		static void NewProp_bRightHandDominant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightHandDominant;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::NewProp_bRightHandDominant_SetBit(void* Obj)
	{
		((SKGProceduralAnimComponent_eventStartPointAiming_Parms*)Obj)->bRightHandDominant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::NewProp_bRightHandDominant = { "bRightHandDominant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGProceduralAnimComponent_eventStartPointAiming_Parms), &Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::NewProp_bRightHandDominant_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGProceduralAnimComponent_eventStartPointAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGProceduralAnimComponent_eventStartPointAiming_Parms), &Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::NewProp_bRightHandDominant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnimComponent|Aim" },
		{ "Comment", "// Returns true if point aim possible and set successfully\n" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "Returns true if point aim possible and set successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "StartPointAiming", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::SKGProceduralAnimComponent_eventStartPointAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::SKGProceduralAnimComponent_eventStartPointAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_StopPointAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_StopPointAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnimComponent|Aim" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_StopPointAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "StopPointAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_StopPointAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_StopPointAiming_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_StopPointAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_StopPointAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics
	{
		struct SKGProceduralAnimComponent_eventUpdateAimOffset_Parms
		{
			UPrimitiveComponent* ComponentRelativeTo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRelativeTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentRelativeTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::NewProp_ComponentRelativeTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::NewProp_ComponentRelativeTo = { "ComponentRelativeTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventUpdateAimOffset_Parms, ComponentRelativeTo), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::NewProp_ComponentRelativeTo_MetaData), Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::NewProp_ComponentRelativeTo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::NewProp_ComponentRelativeTo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnim|Aim" },
		{ "Comment", "// If ComponentRelativeTo is null, then self will be used\n" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "If ComponentRelativeTo is null, then self will be used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "UpdateAimOffset", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::SKGProceduralAnimComponent_eventUpdateAimOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::SKGProceduralAnimComponent_eventUpdateAimOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics
	{
		struct SKGProceduralAnimComponent_eventUpdateAimOffsetWithSocket_Parms
		{
			UMeshComponent* ComponentRelativeTo;
			FName Socket;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRelativeTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentRelativeTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_ComponentRelativeTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_ComponentRelativeTo = { "ComponentRelativeTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventUpdateAimOffsetWithSocket_Parms, ComponentRelativeTo), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_ComponentRelativeTo_MetaData), Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_ComponentRelativeTo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_Socket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGProceduralAnimComponent_eventUpdateAimOffsetWithSocket_Parms, Socket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_Socket_MetaData), Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_Socket_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_ComponentRelativeTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::NewProp_Socket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGProceduralAnim|Aim" },
		{ "Comment", "// If ComponentRelativeTo is null, then self will be used\n" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "If ComponentRelativeTo is null, then self will be used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGProceduralAnimComponent, nullptr, "UpdateAimOffsetWithSocket", nullptr, nullptr, Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::SKGProceduralAnimComponent_eventUpdateAimOffsetWithSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::SKGProceduralAnimComponent_eventUpdateAimOffsetWithSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGProceduralAnimComponent);
	UClass* Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister()
	{
		return USKGProceduralAnimComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGProceduralAnimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProceduralMeshName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProceduralAimSocketNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralAimSocketNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralAimSocketNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandDominatePointAimAimSocketIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RightHandDominatePointAimAimSocketIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandDominatePointAimAimSocketIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LeftHandDominatePointAimAimSocketIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralAnimGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralAnimGameplayTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePoseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonRightHandedAimingOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonRightHandedAimingOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonLeftHandedAimingOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonLeftHandedAimingOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CycleAimingPointSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CycleAimingPointSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSwaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSwaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementLagSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementLagSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLagSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLagSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadzoneSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeadzoneSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralAnimMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProceduralAnimMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimSocketIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AimSocketIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAimSocket_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAimSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastRelativeToOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastRelativeToOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGProceduralAnimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGProceduralAnimComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_CycleAimSocket, "CycleAimSocket" }, // 1099372148
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimMuzzleTransform, "GetAimMuzzleTransform" }, // 2048675148
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimOffset, "GetAimOffset" }, // 647079638
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_GetAimWorldTransform, "GetAimWorldTransform" }, // 1288910793
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_GetCanAim, "GetCanAim" }, // 865302273
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_GetPose, "GetPose" }, // 2478735900
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAimingSettings, "GetProceduralAimingSettings" }, // 2244793826
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_GetProceduralAnimMesh, "GetProceduralAnimMesh" }, // 4149403681
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_Server_SetAimSocketIndex, "Server_SetAimSocketIndex" }, // 1517673581
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_SetCanAim, "SetCanAim" }, // 1118905605
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_StartPointAiming, "StartPointAiming" }, // 732722143
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_StopPointAiming, "StopPointAiming" }, // 440181251
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffset, "UpdateAimOffset" }, // 28943187
		{ &Z_Construct_UFunction_USKGProceduralAnimComponent_UpdateAimOffsetWithSocket, "UpdateAimOffsetWithSocket" }, // 842886125
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Component to be applied for procedurals such as aiming, sway, poses, recoil, etc\n" },
		{ "IncludePath", "Components/SKGProceduralAnimComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "Component to be applied for procedurals such as aiming, sway, poses, recoil, etc" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralMeshName_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Initialize" },
		{ "Comment", "// The mesh name to be found for the to be used for an optic, laser, firearm, etc. to aim with\n" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "The mesh name to be found for the to be used for an optic, laser, firearm, etc. to aim with" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralMeshName = { "ProceduralMeshName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, ProceduralMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralMeshName_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralMeshName_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAimSocketNames_Inner = { "ProceduralAimSocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAimSocketNames_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Initialize" },
		{ "Comment", "// The sockets on the ProceduralMeshName that can be used for aiming\n" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "The sockets on the ProceduralMeshName that can be used for aiming" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAimSocketNames = { "ProceduralAimSocketNames", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, ProceduralAimSocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAimSocketNames_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAimSocketNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RightHandDominatePointAimAimSocketIndex_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Initialize" },
		{ "Comment", "/** The index to use if you decide to point aim. Primarily useful for the\n\x09 * procedural anim component on a firearm. -1 = no point aim socket\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "The index to use if you decide to point aim. Primarily useful for the\nprocedural anim component on a firearm. -1 = no point aim socket" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RightHandDominatePointAimAimSocketIndex = { "RightHandDominatePointAimAimSocketIndex", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, RightHandDominatePointAimAimSocketIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RightHandDominatePointAimAimSocketIndex_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RightHandDominatePointAimAimSocketIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LeftHandDominatePointAimAimSocketIndex_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Initialize" },
		{ "Comment", "/** The index to use if you decide to point aim. Primarily useful for the\n\x09 * procedural anim component on a firearm. -1 = no point aim socket\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "The index to use if you decide to point aim. Primarily useful for the\nprocedural anim component on a firearm. -1 = no point aim socket" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LeftHandDominatePointAimAimSocketIndex = { "LeftHandDominatePointAimAimSocketIndex", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, LeftHandDominatePointAimAimSocketIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LeftHandDominatePointAimAimSocketIndex_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LeftHandDominatePointAimAimSocketIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimGameplayTag_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Initialize" },
		{ "Comment", "// Used to tell what you are holding (such as a rifle, pistol, optic, etc)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "Used to tell what you are holding (such as a rifle, pistol, optic, etc)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimGameplayTag = { "ProceduralAnimGameplayTag", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, ProceduralAnimGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimGameplayTag_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimGameplayTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_GameplayTags_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_GameplayTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimingSettings_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimingSettings = { "AimingSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, AimingSettings), Z_Construct_UScriptStruct_FSKGProceduralAimingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimingSettings_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimingSettings_MetaData) }; // 88735939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_BasePoseOffset_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "Comment", "// The held offset position of the held actor. Separate for first and third person\n" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "The held offset position of the held actor. Separate for first and third person" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_BasePoseOffset = { "BasePoseOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, BasePoseOffset), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonBasePoseOffset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_BasePoseOffset_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_BasePoseOffset_MetaData) }; // 1065058955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonRightHandedAimingOffset_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "Comment", "// Offset applied when aiming for third person view with left hand holding firearm\n" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "Offset applied when aiming for third person view with left hand holding firearm" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonRightHandedAimingOffset = { "ThirdPersonRightHandedAimingOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, ThirdPersonRightHandedAimingOffset), Z_Construct_UScriptStruct_FSKGProceduralOffset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonRightHandedAimingOffset_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonRightHandedAimingOffset_MetaData) }; // 1088130921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonLeftHandedAimingOffset_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "Comment", "// Offset applied when aiming for third person view with right hand holding firearm\n" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
		{ "ToolTip", "Offset applied when aiming for third person view with right hand holding firearm" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonLeftHandedAimingOffset = { "ThirdPersonLeftHandedAimingOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, ThirdPersonLeftHandedAimingOffset), Z_Construct_UScriptStruct_FSKGProceduralOffset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonLeftHandedAimingOffset_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonLeftHandedAimingOffset_MetaData) }; // 1088130921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CycleAimingPointSettings_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CycleAimingPointSettings = { "CycleAimingPointSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, CycleAimingPointSettings), Z_Construct_UScriptStruct_FSKGCycleAimingPointSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CycleAimingPointSettings_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CycleAimingPointSettings_MetaData) }; // 2840921608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementSwaySettings_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementSwaySettings = { "MovementSwaySettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, MovementSwaySettings), Z_Construct_UScriptStruct_FSKGMovementSwaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementSwaySettings_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementSwaySettings_MetaData) }; // 4201032064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementLagSettings_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementLagSettings = { "MovementLagSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, MovementLagSettings), Z_Construct_UScriptStruct_FSKGMovementLagSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementLagSettings_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementLagSettings_MetaData) }; // 4023904884
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RotationLagSettings_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RotationLagSettings = { "RotationLagSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, RotationLagSettings), Z_Construct_UScriptStruct_FSKGRotationLagSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RotationLagSettings_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RotationLagSettings_MetaData) }; // 343091422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_DeadzoneSettings_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_DeadzoneSettings = { "DeadzoneSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, DeadzoneSettings), Z_Construct_UScriptStruct_FSKGDeadzoneSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_DeadzoneSettings_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_DeadzoneSettings_MetaData) }; // 1571254102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RecoilSettings_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RecoilSettings = { "RecoilSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, RecoilSettings), Z_Construct_UScriptStruct_FSKGRecoilSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RecoilSettings_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RecoilSettings_MetaData) }; // 30231731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_PoseSettings_Inner = { "PoseSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGToFromCurveSettings, METADATA_PARAMS(0, nullptr) }; // 3335197975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_PoseSettings_MetaData[] = {
		{ "Category", "SKGProceduralAnim|Procedural" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_PoseSettings = { "PoseSettings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, PoseSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_PoseSettings_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_PoseSettings_MetaData) }; // 3335197975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimMesh_MetaData[] = {
		{ "BlueprintGetter", "GetProceduralAnimMesh" },
		{ "Category", "SKGProceduralAnim|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimMesh = { "ProceduralAnimMesh", nullptr, (EPropertyFlags)0x004400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, ProceduralAnimMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimMesh_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimSocketIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimSocketIndex = { "AimSocketIndex", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, AimSocketIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimSocketIndex_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimSocketIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CurrentAimSocket_MetaData[] = {
		{ "BlueprintGetter", "GetAimOffset" },
		{ "Category", "SKGProceduralAnim" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CurrentAimSocket = { "CurrentAimSocket", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, CurrentAimSocket), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CurrentAimSocket_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CurrentAimSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LastRelativeToOffset_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGProceduralAnimComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LastRelativeToOffset = { "LastRelativeToOffset", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGProceduralAnimComponent, LastRelativeToOffset), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LastRelativeToOffset_MetaData), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LastRelativeToOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGProceduralAnimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAimSocketNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAimSocketNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RightHandDominatePointAimAimSocketIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LeftHandDominatePointAimAimSocketIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_BasePoseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonRightHandedAimingOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ThirdPersonLeftHandedAimingOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CycleAimingPointSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementSwaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_MovementLagSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RotationLagSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_DeadzoneSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_RecoilSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_PoseSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_PoseSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_ProceduralAnimMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_AimSocketIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_CurrentAimSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGProceduralAnimComponent_Statics::NewProp_LastRelativeToOffset,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGProceduralAnimComponent, IGameplayTagAssetInterface), false },  // 3291755243
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGProceduralAnimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGProceduralAnimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGProceduralAnimComponent_Statics::ClassParams = {
		&USKGProceduralAnimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGProceduralAnimComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGProceduralAnimComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGProceduralAnimComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGProceduralAnimComponent()
	{
		if (!Z_Registration_Info_UClass_USKGProceduralAnimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGProceduralAnimComponent.OuterSingleton, Z_Construct_UClass_USKGProceduralAnimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGProceduralAnimComponent.OuterSingleton;
	}
	template<> SKGPROCEDURALANIM_API UClass* StaticClass<USKGProceduralAnimComponent>()
	{
		return USKGProceduralAnimComponent::StaticClass();
	}

	void USKGProceduralAnimComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AimSocketIndex(TEXT("AimSocketIndex"));

		const bool bIsValid = true
			&& Name_AimSocketIndex == ClassReps[(int32)ENetFields_Private::AimSocketIndex].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USKGProceduralAnimComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGProceduralAnimComponent);
	USKGProceduralAnimComponent::~USKGProceduralAnimComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGProceduralAnimComponent, USKGProceduralAnimComponent::StaticClass, TEXT("USKGProceduralAnimComponent"), &Z_Registration_Info_UClass_USKGProceduralAnimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGProceduralAnimComponent), 1547564645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_1576894777(TEXT("/Script/SKGProceduralAnim"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGProceduralAnimComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
