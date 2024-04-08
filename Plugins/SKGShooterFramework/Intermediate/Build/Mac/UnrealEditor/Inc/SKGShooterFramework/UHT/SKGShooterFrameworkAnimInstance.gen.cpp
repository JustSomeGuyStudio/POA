// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGShooterFramework/Public/Animation/SKGShooterFrameworkAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "SKGProceduralAnim/Public/DataTypes/SKGProceduralDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SKGPROCEDURALANIM_API UClass* Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGFirearmComponent_NoRegister();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterFrameworkAnimInstance();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterFrameworkAnimInstance_NoRegister();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterPawnComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGShooterFramework();
// End Cross Module References
	DEFINE_FUNCTION(USKGShooterFrameworkAnimInstance::execGetCurrentPoseValues)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Rotation);
		P_GET_UBOOL(Z_Param_bFirearmCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentPoseValues(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_bFirearmCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkAnimInstance::execSetTestPose)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Rotation);
		P_GET_UBOOL(Z_Param_bFirearmCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTestPose(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_bFirearmCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkAnimInstance::execTestHit)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestHit(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterFrameworkAnimInstance::execPerformCustomCurve)
	{
		P_GET_STRUCT_REF(FSKGFirstAndThirdPersonCurveSettings,Z_Param_Out_CurveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformCustomCurve(Z_Param_Out_CurveData);
		P_NATIVE_END;
	}
	struct SKGShooterFrameworkAnimInstance_eventOnHeldActorSet_Parms
	{
		AActor* NewHeldActor;
		AActor* OldHeldActor;
	};
	static FName NAME_USKGShooterFrameworkAnimInstance_OnHeldActorSet = FName(TEXT("OnHeldActorSet"));
	void USKGShooterFrameworkAnimInstance::OnHeldActorSet(AActor* NewHeldActor, AActor* OldHeldActor)
	{
		SKGShooterFrameworkAnimInstance_eventOnHeldActorSet_Parms Parms;
		Parms.NewHeldActor=NewHeldActor;
		Parms.OldHeldActor=OldHeldActor;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterFrameworkAnimInstance_OnHeldActorSet),&Parms);
	}
	void USKGShooterFrameworkAnimInstance::StaticRegisterNativesUSKGShooterFrameworkAnimInstance()
	{
		UClass* Class = USKGShooterFrameworkAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentPoseValues", &USKGShooterFrameworkAnimInstance::execGetCurrentPoseValues },
			{ "PerformCustomCurve", &USKGShooterFrameworkAnimInstance::execPerformCustomCurve },
			{ "SetTestPose", &USKGShooterFrameworkAnimInstance::execSetTestPose },
			{ "TestHit", &USKGShooterFrameworkAnimInstance::execTestHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics
	{
		struct SKGShooterFrameworkAnimInstance_eventGetCurrentPoseValues_Parms
		{
			FVector Location;
			FVector Rotation;
			bool bFirearmCollision;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static void NewProp_bFirearmCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirearmCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkAnimInstance_eventGetCurrentPoseValues_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkAnimInstance_eventGetCurrentPoseValues_Parms, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::NewProp_bFirearmCollision_SetBit(void* Obj)
	{
		((SKGShooterFrameworkAnimInstance_eventGetCurrentPoseValues_Parms*)Obj)->bFirearmCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::NewProp_bFirearmCollision = { "bFirearmCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterFrameworkAnimInstance_eventGetCurrentPoseValues_Parms), &Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::NewProp_bFirearmCollision_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::NewProp_bFirearmCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGEDITORONLY" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkAnimInstance, nullptr, "GetCurrentPoseValues", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::SKGShooterFrameworkAnimInstance_eventGetCurrentPoseValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::SKGShooterFrameworkAnimInstance_eventGetCurrentPoseValues_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHeldActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldHeldActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::NewProp_NewHeldActor = { "NewHeldActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkAnimInstance_eventOnHeldActorSet_Parms, NewHeldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::NewProp_OldHeldActor = { "OldHeldActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkAnimInstance_eventOnHeldActorSet_Parms, OldHeldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::NewProp_NewHeldActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::NewProp_OldHeldActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Events" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkAnimInstance, nullptr, "OnHeldActorSet", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::PropPointers), sizeof(SKGShooterFrameworkAnimInstance_eventOnHeldActorSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterFrameworkAnimInstance_eventOnHeldActorSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics
	{
		struct SKGShooterFrameworkAnimInstance_eventPerformCustomCurve_Parms
		{
			FSKGFirstAndThirdPersonCurveSettings CurveData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::NewProp_CurveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkAnimInstance_eventPerformCustomCurve_Parms, CurveData), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::NewProp_CurveData_MetaData), Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::NewProp_CurveData_MetaData) }; // 2799564674
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::NewProp_CurveData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkAnimInstance, nullptr, "PerformCustomCurve", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::SKGShooterFrameworkAnimInstance_eventPerformCustomCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::SKGShooterFrameworkAnimInstance_eventPerformCustomCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics
	{
		struct SKGShooterFrameworkAnimInstance_eventSetTestPose_Parms
		{
			FVector Location;
			FVector Rotation;
			bool bFirearmCollision;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static void NewProp_bFirearmCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirearmCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkAnimInstance_eventSetTestPose_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkAnimInstance_eventSetTestPose_Parms, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Rotation_MetaData), Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Rotation_MetaData) };
	void Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_bFirearmCollision_SetBit(void* Obj)
	{
		((SKGShooterFrameworkAnimInstance_eventSetTestPose_Parms*)Obj)->bFirearmCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_bFirearmCollision = { "bFirearmCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterFrameworkAnimInstance_eventSetTestPose_Parms), &Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_bFirearmCollision_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::NewProp_bFirearmCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGEDITORONLY" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkAnimInstance, nullptr, "SetTestPose", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::SKGShooterFrameworkAnimInstance_eventSetTestPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::SKGShooterFrameworkAnimInstance_eventSetTestPose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics
	{
		struct SKGShooterFrameworkAnimInstance_eventTestHit_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkAnimInstance_eventTestHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::NewProp_HitResult_MetaData), Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::NewProp_HitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkAnimInstance, nullptr, "TestHit", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::SKGShooterFrameworkAnimInstance_eventTestHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::SKGShooterFrameworkAnimInstance_eventTestHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterFrameworkAnimInstance);
	UClass* Z_Construct_UClass_USKGShooterFrameworkAnimInstance_NoRegister()
	{
		return USKGShooterFrameworkAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShooterPawnComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShooterPawnComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLocallyControlledAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IsLocallyControlledAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirearmCollisionBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FirearmCollisionBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffhandIKCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OffhandIKCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPoseInterpolationSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPoseInterpolationSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AimCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFirearmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentFirearmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProceduralAnimComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentProceduralAnimComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocallyControlled_MetaData[];
#endif
		static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSpaceFinalLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentSpaceFinalLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSpaceFinalRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentSpaceFinalRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBoneSpaceFinalLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentBoneSpaceFinalLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBoneSpaceFinalRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentBoneSpaceFinalRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseProceduralSpineUpDown_MetaData[];
#endif
		static void NewProp_bUseProceduralSpineUpDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseProceduralSpineUpDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseProceduralSpineLeftRight_MetaData[];
#endif
		static void NewProp_bUseProceduralSpineLeftRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseProceduralSpineLeftRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineLeanLeftRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineLeanLeftRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineRotationUpDown_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineRotationUpDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseOffsetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePoseOffsetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseOffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePoseOffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTryingToAim_MetaData[];
#endif
		static void NewProp_bIsTryingToAim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTryingToAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimCurveAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimCurveAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadStraightRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeadStraightRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffsetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightOffsetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SightOffsetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightOffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SightOffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonAimingOffsetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonAimingOffsetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonAimingOffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonAimingOffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSwayLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSwayLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSwayRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSwayRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementLagRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementLagRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLagLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLagLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLagRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLagRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadzoneHandRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeadzoneHandRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffHandIKAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffHandIKLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKPose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OffHandIKPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOffHandIKIsLeftHand_MetaData[];
#endif
		static void NewProp_bOffHandIKIsLeftHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffHandIKIsLeftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthOfPull_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthOfPull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirearmCollisionLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirearmCollisionLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirearmCollisionRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirearmCollisionRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurveLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCurveLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurveRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCurveRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestHitRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestHitRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_GetCurrentPoseValues, "GetCurrentPoseValues" }, // 2985127968
		{ &Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_OnHeldActorSet, "OnHeldActorSet" }, // 929997360
		{ &Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_PerformCustomCurve, "PerformCustomCurve" }, // 765719448
		{ &Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_SetTestPose, "SetTestPose" }, // 106151707
		{ &Z_Construct_UFunction_USKGShooterFrameworkAnimInstance_TestHit, "TestHit" }, // 2566916006
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/SKGShooterFrameworkAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ShooterPawnComponent_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ShooterPawnComponent = { "ShooterPawnComponent", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, ShooterPawnComponent), Z_Construct_UClass_USKGShooterPawnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ShooterPawnComponent_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ShooterPawnComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_IsLocallyControlledAlpha_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|LocallyControlled" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_IsLocallyControlledAlpha = { "IsLocallyControlledAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, IsLocallyControlledAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_IsLocallyControlledAlpha_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_IsLocallyControlledAlpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionBoneName_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Settings|FirearmCollision" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionBoneName = { "FirearmCollisionBoneName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, FirearmCollisionBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionBoneName_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffhandIKCurveName_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Settings|OffhandIK" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffhandIKCurveName = { "OffhandIKCurveName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, OffhandIKCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffhandIKCurveName_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffhandIKCurveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DefaultPoseInterpolationSpeedMultiplier_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Settings|Pose" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DefaultPoseInterpolationSpeedMultiplier = { "DefaultPoseInterpolationSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, DefaultPoseInterpolationSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DefaultPoseInterpolationSpeedMultiplier_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DefaultPoseInterpolationSpeedMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveName_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Settings|Aiming" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveName = { "AimCurveName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, AimCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveName_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentActor = { "CurrentActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, CurrentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentActor_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentFirearmComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentFirearmComponent = { "CurrentFirearmComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, CurrentFirearmComponent), Z_Construct_UClass_USKGFirearmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentFirearmComponent_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentFirearmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentProceduralAnimComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentProceduralAnimComponent = { "CurrentProceduralAnimComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, CurrentProceduralAnimComponent), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentProceduralAnimComponent_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentProceduralAnimComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsLocallyControlled_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|LocallyControlled" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
	{
		((USKGShooterFrameworkAnimInstance*)Obj)->bIsLocallyControlled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterFrameworkAnimInstance), &Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsLocallyControlled_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsLocallyControlled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|ComponentSpace" },
		{ "Comment", "// Rotation/Movement Lag, Deadzone\n" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
		{ "ToolTip", "Rotation/Movement Lag, Deadzone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalLocation = { "ComponentSpaceFinalLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, ComponentSpaceFinalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|ComponentSpace" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalRotation = { "ComponentSpaceFinalRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, ComponentSpaceFinalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|ComponentSpace" },
		{ "Comment", "// Collision, Recoil, CustomCurve\n" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
		{ "ToolTip", "Collision, Recoil, CustomCurve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalLocation = { "ParentBoneSpaceFinalLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, ParentBoneSpaceFinalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|ComponentSpace" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalRotation = { "ParentBoneSpaceFinalRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, ParentBoneSpaceFinalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineUpDown_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Settings|Spine" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineUpDown_SetBit(void* Obj)
	{
		((USKGShooterFrameworkAnimInstance*)Obj)->bUseProceduralSpineUpDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineUpDown = { "bUseProceduralSpineUpDown", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterFrameworkAnimInstance), &Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineUpDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineUpDown_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineUpDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineLeftRight_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Settings|Spine" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineLeftRight_SetBit(void* Obj)
	{
		((USKGShooterFrameworkAnimInstance*)Obj)->bUseProceduralSpineLeftRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineLeftRight = { "bUseProceduralSpineLeftRight", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterFrameworkAnimInstance), &Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineLeftRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineLeftRight_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineLeftRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineLeanLeftRight_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Spine" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineLeanLeftRight = { "SpineLeanLeftRight", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, SpineLeanLeftRight), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineLeanLeftRight_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineLeanLeftRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineRotationUpDown_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Spine" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineRotationUpDown = { "SpineRotationUpDown", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, SpineRotationUpDown), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineRotationUpDown_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineRotationUpDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Offsets" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetLocation = { "BasePoseOffsetLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, BasePoseOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Offsets" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetRotation = { "BasePoseOffsetRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, BasePoseOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsTryingToAim_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsTryingToAim_SetBit(void* Obj)
	{
		((USKGShooterFrameworkAnimInstance*)Obj)->bIsTryingToAim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsTryingToAim = { "bIsTryingToAim", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterFrameworkAnimInstance), &Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsTryingToAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsTryingToAim_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsTryingToAim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimAlpha_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimAlpha = { "AimAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, AimAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimAlpha_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimAlpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveAlpha_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim" },
		{ "Comment", "// Used for controlling how much movement/rotation a montage has while aiming\n" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
		{ "ToolTip", "Used for controlling how much movement/rotation a montage has while aiming" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveAlpha = { "AimCurveAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, AimCurveAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveAlpha_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveAlpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_HeadStraightRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_HeadStraightRotation = { "HeadStraightRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, HeadStraightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_HeadStraightRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_HeadStraightRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetLocation = { "CameraOffsetLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, CameraOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetRotation = { "CameraOffsetRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, CameraOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetLocation = { "SightOffsetLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, SightOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetRotation = { "SightOffsetRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, SightOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim|Offsets" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetLocation = { "ThirdPersonAimingOffsetLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, ThirdPersonAimingOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Aim|Offsets" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetRotation = { "ThirdPersonAimingOffsetRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, ThirdPersonAimingOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|MovementSway" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayLocation = { "MovementSwayLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, MovementSwayLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|MovementSway" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayRotation = { "MovementSwayRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, MovementSwayRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementLagRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|MovementLag" },
		{ "Comment", "// COMPONENT SPACE\n" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
		{ "ToolTip", "COMPONENT SPACE" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementLagRotation = { "MovementLagRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, MovementLagRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementLagRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementLagRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|RotationLag" },
		{ "Comment", "// COMPONENT SPACE\n" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
		{ "ToolTip", "COMPONENT SPACE" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagLocation = { "RotationLagLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, RotationLagLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|RotationLag" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagRotation = { "RotationLagRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, RotationLagRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DeadzoneHandRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|DeadzoneAiming" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DeadzoneHandRotation = { "DeadzoneHandRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, DeadzoneHandRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DeadzoneHandRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DeadzoneHandRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKAlpha_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|OffHandIK" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKAlpha = { "OffHandIKAlpha", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, OffHandIKAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKAlpha_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKAlpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|OffHandIK" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKLocation = { "OffHandIKLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, OffHandIKLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKPose_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|OffHandIK" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKPose = { "OffHandIKPose", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, OffHandIKPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKPose_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKPose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bOffHandIKIsLeftHand_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|OffHandIK" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bOffHandIKIsLeftHand_SetBit(void* Obj)
	{
		((USKGShooterFrameworkAnimInstance*)Obj)->bOffHandIKIsLeftHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bOffHandIKIsLeftHand = { "bOffHandIKIsLeftHand", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterFrameworkAnimInstance), &Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bOffHandIKIsLeftHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bOffHandIKIsLeftHand_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bOffHandIKIsLeftHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Recoil" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilLocation = { "RecoilLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, RecoilLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Recoil" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilRotation = { "RecoilRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, RecoilRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_LengthOfPull_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|MovementLag" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_LengthOfPull = { "LengthOfPull", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, LengthOfPull), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_LengthOfPull_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_LengthOfPull_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Pose" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseLocation = { "PoseLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, PoseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|Pose" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseRotation = { "PoseRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, PoseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|FirearmCollision" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionLocation = { "FirearmCollisionLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, FirearmCollisionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|FirearmCollision" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionRotation = { "FirearmCollisionRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, FirearmCollisionRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveLocation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|CustomCurve" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveLocation = { "CustomCurveLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, CustomCurveLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveLocation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|CustomCurve" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveRotation = { "CustomCurveRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, CustomCurveRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_TestHitRotation_MetaData[] = {
		{ "Category", "SKGShooterFrameworkAnimInstance|CustomCurve" },
		{ "ModuleRelativePath", "Public/Animation/SKGShooterFrameworkAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_TestHitRotation = { "TestHitRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkAnimInstance, TestHitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_TestHitRotation_MetaData), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_TestHitRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ShooterPawnComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_IsLocallyControlledAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffhandIKCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DefaultPoseInterpolationSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentFirearmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CurrentProceduralAnimComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsLocallyControlled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ComponentSpaceFinalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ParentBoneSpaceFinalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineUpDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bUseProceduralSpineLeftRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineLeanLeftRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SpineRotationUpDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_BasePoseOffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bIsTryingToAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_AimCurveAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_HeadStraightRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CameraOffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_SightOffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_ThirdPersonAimingOffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementSwayRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_MovementLagRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RotationLagRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_DeadzoneHandRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_OffHandIKPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_bOffHandIKIsLeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_RecoilRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_LengthOfPull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_PoseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_FirearmCollisionRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_CustomCurveRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::NewProp_TestHitRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterFrameworkAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::ClassParams = {
		&USKGShooterFrameworkAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGShooterFrameworkAnimInstance()
	{
		if (!Z_Registration_Info_UClass_USKGShooterFrameworkAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterFrameworkAnimInstance.OuterSingleton, Z_Construct_UClass_USKGShooterFrameworkAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGShooterFrameworkAnimInstance.OuterSingleton;
	}
	template<> SKGSHOOTERFRAMEWORK_API UClass* StaticClass<USKGShooterFrameworkAnimInstance>()
	{
		return USKGShooterFrameworkAnimInstance::StaticClass();
	}
	USKGShooterFrameworkAnimInstance::USKGShooterFrameworkAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterFrameworkAnimInstance);
	USKGShooterFrameworkAnimInstance::~USKGShooterFrameworkAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterFrameworkAnimInstance, USKGShooterFrameworkAnimInstance::StaticClass, TEXT("USKGShooterFrameworkAnimInstance"), &Z_Registration_Info_UClass_USKGShooterFrameworkAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterFrameworkAnimInstance), 1161495341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_280789578(TEXT("/Script/SKGShooterFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Animation_SKGShooterFrameworkAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
