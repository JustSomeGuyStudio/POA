// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/GMCPawn.h"
#include "Components/GMCReplicationComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_Aggregator_NoRegister();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_Pawn();
	GMCCORE_API UClass* Z_Construct_UClass_AGMC_Pawn_NoRegister();
	GMCCORE_API UClass* Z_Construct_UClass_UGMC_ReplicationCmp_NoRegister();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_Move();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	DEFINE_FUNCTION(AGMC_Pawn::execSV_ReceiveMoves)
	{
		P_GET_TARRAY(FGMC_Move,Z_Param_RemoteMoves);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SV_ReceiveMoves_Validate(Z_Param_RemoteMoves))
		{
			RPC_ValidateFailed(TEXT("SV_ReceiveMoves_Validate"));
			return;
		}
		P_THIS->SV_ReceiveMoves_Implementation(Z_Param_RemoteMoves);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_Pawn::execCL_OnRepSPMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CL_OnRepSPMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_Pawn::execCL_OnRepAPMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CL_OnRepAPMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_Pawn::execOnControllerChanged)
	{
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_GET_OBJECT(AController,Z_Param_OldController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControllerChanged_Implementation(Z_Param_NewController,Z_Param_OldController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_Pawn::execSV_NeedsNetReserialization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SV_NeedsNetReserialization();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_Pawn::execSV_MarkForNetReserialization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SV_MarkForNetReserialization();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMC_Pawn::execGetReplicationComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGMC_ReplicationCmp**)Z_Param__Result=P_THIS->GetReplicationComponent();
		P_NATIVE_END;
	}
	struct GMC_Pawn_eventOnControllerChanged_Parms
	{
		AController* NewController;
		AController* OldController;
	};
	struct GMC_Pawn_eventSV_ReceiveMoves_Parms
	{
		TArray<FGMC_Move> RemoteMoves;
	};
	static FName NAME_AGMC_Pawn_OnControllerChanged = FName(TEXT("OnControllerChanged"));
	void AGMC_Pawn::OnControllerChanged(AController* NewController, AController* OldController)
	{
		GMC_Pawn_eventOnControllerChanged_Parms Parms;
		Parms.NewController=NewController;
		Parms.OldController=OldController;
		ProcessEvent(FindFunctionChecked(NAME_AGMC_Pawn_OnControllerChanged),&Parms);
	}
	static FName NAME_AGMC_Pawn_SV_ReceiveMoves = FName(TEXT("SV_ReceiveMoves"));
	void AGMC_Pawn::SV_ReceiveMoves(TArray<FGMC_Move> const& RemoteMoves)
	{
		GMC_Pawn_eventSV_ReceiveMoves_Parms Parms;
		Parms.RemoteMoves=RemoteMoves;
		ProcessEvent(FindFunctionChecked(NAME_AGMC_Pawn_SV_ReceiveMoves),&Parms);
	}
	void AGMC_Pawn::StaticRegisterNativesAGMC_Pawn()
	{
		UClass* Class = AGMC_Pawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CL_OnRepAPMove", &AGMC_Pawn::execCL_OnRepAPMove },
			{ "CL_OnRepSPMove", &AGMC_Pawn::execCL_OnRepSPMove },
			{ "GetReplicationComponent", &AGMC_Pawn::execGetReplicationComponent },
			{ "OnControllerChanged", &AGMC_Pawn::execOnControllerChanged },
			{ "SV_MarkForNetReserialization", &AGMC_Pawn::execSV_MarkForNetReserialization },
			{ "SV_NeedsNetReserialization", &AGMC_Pawn::execSV_NeedsNetReserialization },
			{ "SV_ReceiveMoves", &AGMC_Pawn::execSV_ReceiveMoves },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGMC_Pawn_CL_OnRepAPMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_Pawn_CL_OnRepAPMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Pawn_CL_OnRepAPMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Pawn, nullptr, "CL_OnRepAPMove", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_CL_OnRepAPMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Pawn_CL_OnRepAPMove_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGMC_Pawn_CL_OnRepAPMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Pawn_CL_OnRepAPMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_Pawn_CL_OnRepSPMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_Pawn_CL_OnRepSPMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Pawn_CL_OnRepSPMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Pawn, nullptr, "CL_OnRepSPMove", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_CL_OnRepSPMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Pawn_CL_OnRepSPMove_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGMC_Pawn_CL_OnRepSPMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Pawn_CL_OnRepSPMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics
	{
		struct GMC_Pawn_eventGetReplicationComponent_Parms
		{
			UGMC_ReplicationCmp* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Pawn_eventGetReplicationComponent_Parms, ReturnValue), Z_Construct_UClass_UGMC_ReplicationCmp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns this pawn's replication component.\n///\n/// @returns      UGMC_ReplicationCmp*    The replication component of this pawn.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
		{ "ToolTip", "Returns this pawn's replication component.\n\n@returns      UGMC_ReplicationCmp*    The replication component of this pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Pawn, nullptr, "GetReplicationComponent", nullptr, nullptr, Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::GMC_Pawn_eventGetReplicationComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::GMC_Pawn_eventGetReplicationComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Pawn_eventOnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Pawn_eventOnControllerChanged_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::NewProp_NewController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::NewProp_OldController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called on the server and owning client when the controller for this pawn has changed.\n///\n/// @param        NewController    The new controller.\n/// @param        OldController    The previous controller.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
		{ "ToolTip", "Called on the server and owning client when the controller for this pawn has changed.\n\n@param        NewController    The new controller.\n@param        OldController    The previous controller.\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Pawn, nullptr, "OnControllerChanged", nullptr, nullptr, Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::PropPointers), sizeof(GMC_Pawn_eventOnControllerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_Pawn_eventOnControllerChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_Pawn_SV_MarkForNetReserialization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_Pawn_SV_MarkForNetReserialization_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Can be used to force the replication component to reserialize the move data for this pawn on the next replication update.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
		{ "ToolTip", "Can be used to force the replication component to reserialize the move data for this pawn on the next replication update.\n\n@returns      void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Pawn_SV_MarkForNetReserialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Pawn, nullptr, "SV_MarkForNetReserialization", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_SV_MarkForNetReserialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Pawn_SV_MarkForNetReserialization_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGMC_Pawn_SV_MarkForNetReserialization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Pawn_SV_MarkForNetReserialization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics
	{
		struct GMC_Pawn_eventSV_NeedsNetReserialization_Parms
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
	void Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMC_Pawn_eventSV_NeedsNetReserialization_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_Pawn_eventSV_NeedsNetReserialization_Parms), &Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the replication component should reserialize the move data for this pawn on the next replication update.\n///\n/// @returns      bool    True if this pawn needs net reserialization, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
		{ "ToolTip", "Whether the replication component should reserialize the move data for this pawn on the next replication update.\n\n@returns      bool    True if this pawn needs net reserialization, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Pawn, nullptr, "SV_NeedsNetReserialization", nullptr, nullptr, Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::GMC_Pawn_eventSV_NeedsNetReserialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::GMC_Pawn_eventSV_NeedsNetReserialization_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteMoves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteMoves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoteMoves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::NewProp_RemoteMoves_Inner = { "RemoteMoves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGMC_Move, METADATA_PARAMS(0, nullptr) }; // 3564103889
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::NewProp_RemoteMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::NewProp_RemoteMoves = { "RemoteMoves", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Pawn_eventSV_ReceiveMoves_Parms, RemoteMoves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::NewProp_RemoteMoves_MetaData), Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::NewProp_RemoteMoves_MetaData) }; // 3564103889
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::NewProp_RemoteMoves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::NewProp_RemoteMoves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Pawn, nullptr, "SV_ReceiveMoves", nullptr, nullptr, Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::PropPointers), sizeof(GMC_Pawn_eventSV_ReceiveMoves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::PropPointers) < 2048);
	static_assert(sizeof(GMC_Pawn_eventSV_ReceiveMoves_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMC_Pawn);
	UClass* Z_Construct_UClass_AGMC_Pawn_NoRegister()
	{
		return AGMC_Pawn::StaticClass();
	}
	struct Z_Construct_UClass_AGMC_Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GMCAggregator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GMCAggregator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicationComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalMove_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APMove_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_APMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SPMove_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SPMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMC_Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGMC_Pawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMC_Pawn_CL_OnRepAPMove, "CL_OnRepAPMove" }, // 3846033175
		{ &Z_Construct_UFunction_AGMC_Pawn_CL_OnRepSPMove, "CL_OnRepSPMove" }, // 83717861
		{ &Z_Construct_UFunction_AGMC_Pawn_GetReplicationComponent, "GetReplicationComponent" }, // 58838193
		{ &Z_Construct_UFunction_AGMC_Pawn_OnControllerChanged, "OnControllerChanged" }, // 1864531601
		{ &Z_Construct_UFunction_AGMC_Pawn_SV_MarkForNetReserialization, "SV_MarkForNetReserialization" }, // 1851378107
		{ &Z_Construct_UFunction_AGMC_Pawn_SV_NeedsNetReserialization, "SV_NeedsNetReserialization" }, // 3632445896
		{ &Z_Construct_UFunction_AGMC_Pawn_SV_ReceiveMoves, "SV_ReceiveMoves" }, // 4160758138
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_Pawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Pawn class intended to be used with UGMC_ReplicationCmp.\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/GMCPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Pawn class intended to be used with UGMC_ReplicationCmp." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_GMCAggregator_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Cached reference to the GMC aggregator (if present).\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
		{ "ToolTip", "Cached reference to the GMC aggregator (if present)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_GMCAggregator = { "GMCAggregator", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Pawn, GMCAggregator), Z_Construct_UClass_AGMC_Aggregator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_GMCAggregator_MetaData), Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_GMCAggregator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_ReplicationComponent_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The replication component of this pawn.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
		{ "ToolTip", "The replication component of this pawn." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_ReplicationComponent = { "ReplicationComponent", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Pawn, ReplicationComponent), Z_Construct_UClass_UGMC_ReplicationCmp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_ReplicationComponent_MetaData), Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_ReplicationComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_LocalMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_LocalMove = { "LocalMove", nullptr, (EPropertyFlags)0x0040000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Pawn, LocalMove), Z_Construct_UScriptStruct_FGMC_Move, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_LocalMove_MetaData), Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_LocalMove_MetaData) }; // 3564103889
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_APMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_APMove = { "APMove", "CL_OnRepAPMove", (EPropertyFlags)0x0040000100002024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Pawn, APMove), Z_Construct_UScriptStruct_FGMC_Move, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_APMove_MetaData), Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_APMove_MetaData) }; // 3564103889
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_SPMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Actors/GMCPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_SPMove = { "SPMove", "CL_OnRepSPMove", (EPropertyFlags)0x0040000100002024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Pawn, SPMove), Z_Construct_UScriptStruct_FGMC_Move, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_SPMove_MetaData), Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_SPMove_MetaData) }; // 3564103889
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMC_Pawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_GMCAggregator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_ReplicationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_LocalMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_APMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Pawn_Statics::NewProp_SPMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMC_Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMC_Pawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMC_Pawn_Statics::ClassParams = {
		&AGMC_Pawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGMC_Pawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMC_Pawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Pawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGMC_Pawn()
	{
		if (!Z_Registration_Info_UClass_AGMC_Pawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMC_Pawn.OuterSingleton, Z_Construct_UClass_AGMC_Pawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGMC_Pawn.OuterSingleton;
	}
	template<> GMCCORE_API UClass* StaticClass<AGMC_Pawn>()
	{
		return AGMC_Pawn::StaticClass();
	}

	void AGMC_Pawn::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_APMove(TEXT("APMove"));
		static const FName Name_SPMove(TEXT("SPMove"));

		const bool bIsValid = true
			&& Name_APMove == ClassReps[(int32)ENetFields_Private::APMove].Property->GetFName()
			&& Name_SPMove == ClassReps[(int32)ENetFields_Private::SPMove].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGMC_Pawn"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMC_Pawn);
	AGMC_Pawn::~AGMC_Pawn() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGMC_Pawn, AGMC_Pawn::StaticClass, TEXT("AGMC_Pawn"), &Z_Registration_Info_UClass_AGMC_Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMC_Pawn), 3696950756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPawn_h_157932838(TEXT("/Script/GMCCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
