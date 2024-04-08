// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/GMCRollbackActor.h"
#include "Components/GMCReplicationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCRollbackActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_Aggregator_NoRegister();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_RollbackActor();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_RollbackActor_NoRegister();
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_NetContext();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_Move();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_RollbackState();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_RollbackState;
class UScriptStruct* FGMC_RollbackState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_RollbackState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_RollbackState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_RollbackState, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_RollbackState"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_RollbackState.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_RollbackState>()
{
	return FGMC_RollbackState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_RollbackState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_RollbackState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RollbackState, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_Transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RollbackState, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_LinearVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_LinearVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RollbackState, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_AngularVelocity_MetaData), Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_AngularVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_AngularVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_RollbackState",
		Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::PropPointers),
		sizeof(FGMC_RollbackState),
		alignof(FGMC_RollbackState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_RollbackState()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_RollbackState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_RollbackState.InnerSingleton, Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_RollbackState.InnerSingleton;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execHasTicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execLoadState)
	{
		P_GET_ENUM(EGMC_NetContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadState_Implementation(EGMC_NetContext(Z_Param_Context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execSaveState)
	{
		P_GET_ENUM(EGMC_NetContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveState_Implementation(EGMC_NetContext(Z_Param_Context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execUpdateState)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Time);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_STRUCT_REF(FGMC_Move,Z_Param_Out_Move);
		P_GET_ENUM(EGMC_NetContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateState_Implementation(Z_Param_Time,Z_Param_DeltaTime,Z_Param_Out_Move,EGMC_NetContext(Z_Param_Context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execComputeTangentialVelocity)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ComputeTangentialVelocity(Z_Param_Out_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execSetAngularVelocityInRadians)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularVelocityInRadians(Z_Param_Out_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execSetAngularVelocityInDegrees)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularVelocityInDegrees(Z_Param_Out_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execSetLinearVelocity)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearVelocity(Z_Param_Out_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execGetAngularVelocityInRadians)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetAngularVelocityInRadians();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execGetAngularVelocityInDegrees)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetAngularVelocityInDegrees();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_RollbackActor::execGetLinearVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLinearVelocity();
		P_NATIVE_END;
	}
	struct GMC_RollbackActor_eventLoadState_Parms
	{
		EGMC_NetContext Context;
	};
	struct GMC_RollbackActor_eventSaveState_Parms
	{
		EGMC_NetContext Context;
	};
	struct GMC_RollbackActor_eventUpdateState_Parms
	{
		double Time;
		float DeltaTime;
		FGMC_Move Move;
		EGMC_NetContext Context;
	};
	static FName NAME_AGMC_RollbackActor_LoadState = FName(TEXT("LoadState"));
	void AGMC_RollbackActor::LoadState(EGMC_NetContext Context)
	{
		GMC_RollbackActor_eventLoadState_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_AGMC_RollbackActor_LoadState),&Parms);
	}
	static FName NAME_AGMC_RollbackActor_SaveState = FName(TEXT("SaveState"));
	void AGMC_RollbackActor::SaveState(EGMC_NetContext Context)
	{
		GMC_RollbackActor_eventSaveState_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_AGMC_RollbackActor_SaveState),&Parms);
	}
	static FName NAME_AGMC_RollbackActor_UpdateState = FName(TEXT("UpdateState"));
	void AGMC_RollbackActor::UpdateState(double Time, float DeltaTime, FGMC_Move const& Move, EGMC_NetContext Context)
	{
		GMC_RollbackActor_eventUpdateState_Parms Parms;
		Parms.Time=Time;
		Parms.DeltaTime=DeltaTime;
		Parms.Move=Move;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_AGMC_RollbackActor_UpdateState),&Parms);
	}
	void AGMC_RollbackActor::StaticRegisterNativesAGMC_RollbackActor()
	{
		UClass* Class = AGMC_RollbackActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeTangentialVelocity", &AGMC_RollbackActor::execComputeTangentialVelocity },
			{ "GetAngularVelocityInDegrees", &AGMC_RollbackActor::execGetAngularVelocityInDegrees },
			{ "GetAngularVelocityInRadians", &AGMC_RollbackActor::execGetAngularVelocityInRadians },
			{ "GetLinearVelocity", &AGMC_RollbackActor::execGetLinearVelocity },
			{ "GetTime", &AGMC_RollbackActor::execGetTime },
			{ "HasTicked", &AGMC_RollbackActor::execHasTicked },
			{ "LoadState", &AGMC_RollbackActor::execLoadState },
			{ "SaveState", &AGMC_RollbackActor::execSaveState },
			{ "SetAngularVelocityInDegrees", &AGMC_RollbackActor::execSetAngularVelocityInDegrees },
			{ "SetAngularVelocityInRadians", &AGMC_RollbackActor::execSetAngularVelocityInRadians },
			{ "SetLinearVelocity", &AGMC_RollbackActor::execSetLinearVelocity },
			{ "UpdateState", &AGMC_RollbackActor::execUpdateState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics
	{
		struct GMC_RollbackActor_eventComputeTangentialVelocity_Parms
		{
			FVector WorldLocation;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventComputeTangentialVelocity_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_WorldLocation_MetaData), Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_WorldLocation_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventComputeTangentialVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Calculates the tangential velocity that would act on an object at the passed position. Only relevant if the actor has any angular velocity.\n///\n/// @param        WorldLocation    The location to calculate the tangential velocity at in world space.\n/// @returns      FVector          The tangential velocity at the passed location in cm/sec.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Calculates the tangential velocity that would act on an object at the passed position. Only relevant if the actor has any angular velocity.\n\n@param        WorldLocation    The location to calculate the tangential velocity at in world space.\n@returns      FVector          The tangential velocity at the passed location in cm/sec." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "ComputeTangentialVelocity", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::GMC_RollbackActor_eventComputeTangentialVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::GMC_RollbackActor_eventComputeTangentialVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics
	{
		struct GMC_RollbackActor_eventGetAngularVelocityInDegrees_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventGetAngularVelocityInDegrees_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the angular velocity of the actor in deg/sec.\n///\n/// @returns      FVector    The angular velocity of the actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Returns the angular velocity of the actor in deg/sec.\n\n@returns      FVector    The angular velocity of the actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "GetAngularVelocityInDegrees", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::GMC_RollbackActor_eventGetAngularVelocityInDegrees_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::GMC_RollbackActor_eventGetAngularVelocityInDegrees_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics
	{
		struct GMC_RollbackActor_eventGetAngularVelocityInRadians_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventGetAngularVelocityInRadians_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the angular velocity of the actor in rad/sec.\n///\n/// @returns      FVector    The angular velocity of the actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Returns the angular velocity of the actor in rad/sec.\n\n@returns      FVector    The angular velocity of the actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "GetAngularVelocityInRadians", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::GMC_RollbackActor_eventGetAngularVelocityInRadians_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::GMC_RollbackActor_eventGetAngularVelocityInRadians_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics
	{
		struct GMC_RollbackActor_eventGetLinearVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventGetLinearVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the linear velocity of the actor in cm/sec.\n///\n/// @returns      FVector    The linear velocity of the actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Returns the linear velocity of the actor in cm/sec.\n\n@returns      FVector    The linear velocity of the actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "GetLinearVelocity", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::GMC_RollbackActor_eventGetLinearVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::GMC_RollbackActor_eventGetLinearVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics
	{
		struct GMC_RollbackActor_eventGetTime_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventGetTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the current synchronised world time i.e. when called on the client the network delay is already accounted for.\n///\n/// @returns      double    The current world time.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Returns the current synchronised world time i.e. when called on the client the network delay is already accounted for.\n\n@returns      double    The current world time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::GMC_RollbackActor_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::GMC_RollbackActor_eventGetTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics
	{
		struct GMC_RollbackActor_eventHasTicked_Parms
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
	void Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_RollbackActor_eventHasTicked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_RollbackActor_eventHasTicked_Parms), &Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// Checks whether UpdateState has already been called on this actor during the current frame.\n///\n/// @returns      bool    True if the rollback actor have already been ticked this frame, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Checks whether UpdateState has already been called on this actor during the current frame.\n\n@returns      bool    True if the rollback actor have already been ticked this frame, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "HasTicked", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::GMC_RollbackActor_eventHasTicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::GMC_RollbackActor_eventHasTicked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_HasTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventLoadState_Parms, Context), Z_Construct_UEnum_GMCCore_EGMC_NetContext, METADATA_PARAMS(0, nullptr) }; // 3159525649
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::NewProp_Context_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Restores the currently saved state of the actor after rollback.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Restores the currently saved state of the actor after rollback.\n\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "LoadState", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::PropPointers), sizeof(GMC_RollbackActor_eventLoadState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_RollbackActor_eventLoadState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_LoadState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventSaveState_Parms, Context), Z_Construct_UEnum_GMCCore_EGMC_NetContext, METADATA_PARAMS(0, nullptr) }; // 3159525649
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::NewProp_Context_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Saves the current state of the actor before rollback.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Saves the current state of the actor before rollback.\n\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "SaveState", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::PropPointers), sizeof(GMC_RollbackActor_eventSaveState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_RollbackActor_eventSaveState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_SaveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics
	{
		struct GMC_RollbackActor_eventSetAngularVelocityInDegrees_Parms
		{
			FVector NewVelocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::NewProp_NewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventSetAngularVelocityInDegrees_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::NewProp_NewVelocity_MetaData), Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::NewProp_NewVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sets the angular velocity of the rollback actor.\n///\n/// @param        NewVelocity    The new angular velocity the actor should have in deg/sec.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Sets the angular velocity of the rollback actor.\n\n@param        NewVelocity    The new angular velocity the actor should have in deg/sec.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "SetAngularVelocityInDegrees", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::GMC_RollbackActor_eventSetAngularVelocityInDegrees_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::GMC_RollbackActor_eventSetAngularVelocityInDegrees_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics
	{
		struct GMC_RollbackActor_eventSetAngularVelocityInRadians_Parms
		{
			FVector NewVelocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::NewProp_NewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventSetAngularVelocityInRadians_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::NewProp_NewVelocity_MetaData), Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::NewProp_NewVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sets the angular velocity of the rollback actor.\n///\n/// @param        NewVelocity    The new angular velocity the actor should have in rad/sec.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Sets the angular velocity of the rollback actor.\n\n@param        NewVelocity    The new angular velocity the actor should have in rad/sec.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "SetAngularVelocityInRadians", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::GMC_RollbackActor_eventSetAngularVelocityInRadians_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::GMC_RollbackActor_eventSetAngularVelocityInRadians_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics
	{
		struct GMC_RollbackActor_eventSetLinearVelocity_Parms
		{
			FVector NewVelocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::NewProp_NewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventSetLinearVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::NewProp_NewVelocity_MetaData), Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::NewProp_NewVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sets the linear velocity of the actor.\n///\n/// @param        NewVelocity    The new linear velocity the actor should have in cm/sec.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Sets the linear velocity of the actor.\n\n@param        NewVelocity    The new linear velocity the actor should have in cm/sec.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "SetLinearVelocity", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::GMC_RollbackActor_eventSetLinearVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::GMC_RollbackActor_eventSetLinearVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics
	{
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Move;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventUpdateState_Parms, Time), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventUpdateState_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Move_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventUpdateState_Parms, Move), Z_Construct_UScriptStruct_FGMC_Move, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Move_MetaData), Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Move_MetaData) }; // 3564103889
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventUpdateState_Parms, Context), Z_Construct_UEnum_GMCCore_EGMC_NetContext, METADATA_PARAMS(0, nullptr) }; // 3159525649
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Context_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Overridable function to update the state of the rollback actor (called every frame). This function should be implemented in a way that the state of the\n/// actor can be recreated solely based on the passed arguments.\n///\n/// @param        Time         The time of the move (or the current world time for regular tick updates).\n/// @param        DeltaTime    The delta time to use.\n/// @param        Move         The move that is about to be executed (empty move with timestamp -1 for regular tick updates).\n/// @param        Context      The context in which the actor state is being updated.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Overridable function to update the state of the rollback actor (called every frame). This function should be implemented in a way that the state of the\nactor can be recreated solely based on the passed arguments.\n\n@param        Time         The time of the move (or the current world time for regular tick updates).\n@param        DeltaTime    The delta time to use.\n@param        Move         The move that is about to be executed (empty move with timestamp -1 for regular tick updates).\n@param        Context      The context in which the actor state is being updated.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "UpdateState", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::PropPointers), sizeof(GMC_RollbackActor_eventUpdateState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_RollbackActor_eventUpdateState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_RollbackActor_UpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMC_RollbackActor);
	UClass* Z_Construct_UClass_AGMC_RollbackActor_NoRegister()
	{
		return AGMC_RollbackActor::StaticClass();
	}
	struct Z_Construct_UClass_AGMC_RollbackActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeFromRollback_MetaData[];
#endif
		static void NewProp_bExcludeFromRollback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeFromRollback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoBlueprintEvents_MetaData[];
#endif
		static void NewProp_bNoBlueprintEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoBlueprintEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedRollbackState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedRollbackState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GMCAggregator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GMCAggregator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMC_RollbackActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGMC_RollbackActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity, "ComputeTangentialVelocity" }, // 3524548007
		{ &Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees, "GetAngularVelocityInDegrees" }, // 3587663032
		{ &Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians, "GetAngularVelocityInRadians" }, // 275109535
		{ &Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity, "GetLinearVelocity" }, // 1592204393
		{ &Z_Construct_UFunction_AGMC_RollbackActor_GetTime, "GetTime" }, // 1673587675
		{ &Z_Construct_UFunction_AGMC_RollbackActor_HasTicked, "HasTicked" }, // 1867028203
		{ &Z_Construct_UFunction_AGMC_RollbackActor_LoadState, "LoadState" }, // 2207207477
		{ &Z_Construct_UFunction_AGMC_RollbackActor_SaveState, "SaveState" }, // 1797787031
		{ &Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees, "SetAngularVelocityInDegrees" }, // 3836313803
		{ &Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians, "SetAngularVelocityInRadians" }, // 4229787665
		{ &Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity, "SetLinearVelocity" }, // 3962696500
		{ &Z_Construct_UFunction_AGMC_RollbackActor_UpdateState, "UpdateState" }, // 997299618
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/// Base class for actors that have no net role on the client but should still be synchronised for gameplay. All actors of this type can be rolled back to a\n/// previous deterministic state for move execution by UGMC_ReplicationCmp.\n" },
		{ "IncludePath", "Actors/GMCRollbackActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for actors that have no net role on the client but should still be synchronised for gameplay. All actors of this type can be rolled back to a\nprevious deterministic state for move execution by UGMC_ReplicationCmp." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "/// If true, this actor will never be rolled back by a pawn for move execution and won't be ticked from the replication component. This will effectively make\n/// it behave like a regular (non-rollback) actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "If true, this actor will never be rolled back by a pawn for move execution and won't be ticked from the replication component. This will effectively make\nit behave like a regular (non-rollback) actor." },
	};
#endif
	void Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback_SetBit(void* Obj)
	{
		((AGMC_RollbackActor*)Obj)->bExcludeFromRollback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback = { "bExcludeFromRollback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_RollbackActor), &Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback_MetaData), Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "/// Disables all Blueprint events called for this actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Disables all Blueprint events called for this actor." },
	};
#endif
	void Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents_SetBit(void* Obj)
	{
		((AGMC_RollbackActor*)Obj)->bNoBlueprintEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents = { "bNoBlueprintEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_RollbackActor), &Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents_MetaData), Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// The linear velocity of the actor in cm/sec.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The linear velocity of the actor in cm/sec." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_LinearVelocity_MetaData), Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_LinearVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// The angular velocity of the actor in deg/sec.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The angular velocity of the actor in deg/sec." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_AngularVelocity_MetaData), Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_AngularVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseLinearVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The linear velocity the actor started with when it was spawned.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The linear velocity the actor started with when it was spawned." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseLinearVelocity = { "BaseLinearVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, BaseLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseLinearVelocity_MetaData), Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseLinearVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseAngularVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The angular velocity the actor started with when it was spawned.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The angular velocity the actor started with when it was spawned." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseAngularVelocity = { "BaseAngularVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, BaseAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseAngularVelocity_MetaData), Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseAngularVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseTransform_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The transform the actor started with when it was spawned.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The transform the actor started with when it was spawned." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseTransform_MetaData), Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_SavedRollbackState_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Used to buffer the state of the actor for rollback.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Used to buffer the state of the actor for rollback." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_SavedRollbackState = { "SavedRollbackState", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, SavedRollbackState), Z_Construct_UScriptStruct_FGMC_RollbackState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_SavedRollbackState_MetaData), Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_SavedRollbackState_MetaData) }; // 3143591696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_GMCAggregator_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Cached reference to the GMC aggregator (if present).\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Cached reference to the GMC aggregator (if present)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_GMCAggregator = { "GMCAggregator", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, GMCAggregator), Z_Construct_UClass_AGMC_Aggregator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_GMCAggregator_MetaData), Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_GMCAggregator_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMC_RollbackActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_SavedRollbackState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_GMCAggregator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMC_RollbackActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMC_RollbackActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMC_RollbackActor_Statics::ClassParams = {
		&AGMC_RollbackActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGMC_RollbackActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMC_RollbackActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGMC_RollbackActor()
	{
		if (!Z_Registration_Info_UClass_AGMC_RollbackActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMC_RollbackActor.OuterSingleton, Z_Construct_UClass_AGMC_RollbackActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGMC_RollbackActor.OuterSingleton;
	}
	template<> GMCCORE_API UClass* StaticClass<AGMC_RollbackActor>()
	{
		return AGMC_RollbackActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMC_RollbackActor);
	AGMC_RollbackActor::~AGMC_RollbackActor() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ScriptStructInfo[] = {
		{ FGMC_RollbackState::StaticStruct, Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewStructOps, TEXT("GMC_RollbackState"), &Z_Registration_Info_UScriptStruct_GMC_RollbackState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_RollbackState), 3143591696U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGMC_RollbackActor, AGMC_RollbackActor::StaticClass, TEXT("AGMC_RollbackActor"), &Z_Registration_Info_UClass_AGMC_RollbackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMC_RollbackActor), 2340924790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_997620563(TEXT("/Script/GMCCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
