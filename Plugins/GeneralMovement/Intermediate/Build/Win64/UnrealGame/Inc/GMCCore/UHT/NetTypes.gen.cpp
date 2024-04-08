// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Replication/NetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetTypes() {}
// Cross Module References
	GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_NetContext();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_ClientInfo();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_MetaData();
	GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_NetInfo();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_ClientInfo;
class UScriptStruct* FGMC_ClientInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_ClientInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_ClientInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_ClientInfo, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_ClientInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_ClientInfo.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_ClientInfo>()
{
	return FGMC_ClientInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_ClientInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_ClientInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_ClientInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_ClientInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_ClientInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_ClientInfo",
		nullptr,
		0,
		sizeof(FGMC_ClientInfo),
		alignof(FGMC_ClientInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_ClientInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_ClientInfo_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_ClientInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_ClientInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_ClientInfo.InnerSingleton, Z_Construct_UScriptStruct_FGMC_ClientInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_ClientInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_NetInfo;
class UScriptStruct* FGMC_NetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_NetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_NetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_NetInfo, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_NetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_NetInfo.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_NetInfo>()
{
	return FGMC_NetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_NetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_NetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_NetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_NetInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_NetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_NetInfo",
		nullptr,
		0,
		sizeof(FGMC_NetInfo),
		alignof(FGMC_NetInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_NetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_NetInfo_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_NetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_NetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_NetInfo.InnerSingleton, Z_Construct_UScriptStruct_FGMC_NetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_NetInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_MetaData;
class UScriptStruct* FGMC_MetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_MetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_MetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_MetaData, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_MetaData"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_MetaData.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_MetaData>()
{
	return FGMC_MetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGMC_MetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerAuthPhysicsTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ServerAuthPhysicsTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingServerAuthPhysics_MetaData[];
#endif
		static void NewProp_bIsUsingServerAuthPhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingServerAuthPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingClientAuthPhysics_MetaData[];
#endif
		static void NewProp_bIsUsingClientAuthPhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingClientAuthPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPredictedClientMove_MetaData[];
#endif
		static void NewProp_bPredictedClientMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPredictedClientMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidClientMove_MetaData[];
#endif
		static void NewProp_bValidClientMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidClientMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerOwned_MetaData[];
#endif
		static void NewProp_bPlayerOwned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerOwned;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_MetaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MetaData, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_Timestamp_MetaData), Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_Timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MetaData, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_DeltaTime_MetaData), Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_DeltaTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_ServerAuthPhysicsTimestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_ServerAuthPhysicsTimestamp = { "ServerAuthPhysicsTimestamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MetaData, ServerAuthPhysicsTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_ServerAuthPhysicsTimestamp_MetaData), Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_ServerAuthPhysicsTimestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingServerAuthPhysics_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingServerAuthPhysics_SetBit(void* Obj)
	{
		((FGMC_MetaData*)Obj)->bIsUsingServerAuthPhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingServerAuthPhysics = { "bIsUsingServerAuthPhysics", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MetaData), &Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingServerAuthPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingServerAuthPhysics_MetaData), Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingServerAuthPhysics_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingClientAuthPhysics_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingClientAuthPhysics_SetBit(void* Obj)
	{
		((FGMC_MetaData*)Obj)->bIsUsingClientAuthPhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingClientAuthPhysics = { "bIsUsingClientAuthPhysics", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MetaData), &Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingClientAuthPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingClientAuthPhysics_MetaData), Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingClientAuthPhysics_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPredictedClientMove_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPredictedClientMove_SetBit(void* Obj)
	{
		((FGMC_MetaData*)Obj)->bPredictedClientMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPredictedClientMove = { "bPredictedClientMove", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MetaData), &Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPredictedClientMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPredictedClientMove_MetaData), Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPredictedClientMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bValidClientMove_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bValidClientMove_SetBit(void* Obj)
	{
		((FGMC_MetaData*)Obj)->bValidClientMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bValidClientMove = { "bValidClientMove", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MetaData), &Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bValidClientMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bValidClientMove_MetaData), Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bValidClientMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPlayerOwned_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPlayerOwned_SetBit(void* Obj)
	{
		((FGMC_MetaData*)Obj)->bPlayerOwned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPlayerOwned = { "bPlayerOwned", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_MetaData), &Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPlayerOwned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPlayerOwned_MetaData), Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPlayerOwned_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_MetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_ServerAuthPhysicsTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingServerAuthPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bIsUsingClientAuthPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPredictedClientMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bValidClientMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewProp_bPlayerOwned,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_MetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		&NewStructOps,
		"GMC_MetaData",
		Z_Construct_UScriptStruct_FGMC_MetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::PropPointers),
		sizeof(FGMC_MetaData),
		alignof(FGMC_MetaData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_MetaData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MetaData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGMC_MetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_GMC_MetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_MetaData.InnerSingleton, Z_Construct_UScriptStruct_FGMC_MetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GMC_MetaData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_NetContext;
	static UEnum* EGMC_NetContext_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGMC_NetContext.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGMC_NetContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_NetContext, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_NetContext"));
		}
		return Z_Registration_Info_UEnum_EGMC_NetContext.OuterSingleton;
	}
	template<> GMCCORE_API UEnum* StaticEnum<EGMC_NetContext>()
	{
		return EGMC_NetContext_StaticEnum();
	}
	struct Z_Construct_UEnum_GMCCore_EGMC_NetContext_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GMCCore_EGMC_NetContext_Statics::Enumerators[] = {
		{ "EGMC_NetContext::NoContextInformation", (int64)EGMC_NetContext::NoContextInformation },
		{ "EGMC_NetContext::LocalServerPawn_PreMoveExecution", (int64)EGMC_NetContext::LocalServerPawn_PreMoveExecution },
		{ "EGMC_NetContext::LocalServerPawn_PostMoveExecution", (int64)EGMC_NetContext::LocalServerPawn_PostMoveExecution },
		{ "EGMC_NetContext::LocalClientPawn_PreMoveExecution", (int64)EGMC_NetContext::LocalClientPawn_PreMoveExecution },
		{ "EGMC_NetContext::LocalClientPawn_PostMoveExecution", (int64)EGMC_NetContext::LocalClientPawn_PostMoveExecution },
		{ "EGMC_NetContext::LocalClientPawn_PreMoveExecutionNoPrediction", (int64)EGMC_NetContext::LocalClientPawn_PreMoveExecutionNoPrediction },
		{ "EGMC_NetContext::LocalClientPawn_PostMoveExecutionNoPrediction", (int64)EGMC_NetContext::LocalClientPawn_PostMoveExecutionNoPrediction },
		{ "EGMC_NetContext::LocalClientPawn_ReplayAborted", (int64)EGMC_NetContext::LocalClientPawn_ReplayAborted },
		{ "EGMC_NetContext::LocalClientPawn_ServerStateAdoptedForReplay", (int64)EGMC_NetContext::LocalClientPawn_ServerStateAdoptedForReplay },
		{ "EGMC_NetContext::LocalClientPawn_PreReplay", (int64)EGMC_NetContext::LocalClientPawn_PreReplay },
		{ "EGMC_NetContext::LocalClientPawn_PreReplayMoveExecution", (int64)EGMC_NetContext::LocalClientPawn_PreReplayMoveExecution },
		{ "EGMC_NetContext::LocalClientPawn_PostReplayMoveExecution", (int64)EGMC_NetContext::LocalClientPawn_PostReplayMoveExecution },
		{ "EGMC_NetContext::LocalClientPawn_PostReplay", (int64)EGMC_NetContext::LocalClientPawn_PostReplay },
		{ "EGMC_NetContext::LocalClientPawn_Simulation", (int64)EGMC_NetContext::LocalClientPawn_Simulation },
		{ "EGMC_NetContext::LocalClientPawn_ExtrapolationAborted", (int64)EGMC_NetContext::LocalClientPawn_ExtrapolationAborted },
		{ "EGMC_NetContext::LocalClientPawn_PrePlayerTickNoPrediction", (int64)EGMC_NetContext::LocalClientPawn_PrePlayerTickNoPrediction },
		{ "EGMC_NetContext::LocalClientPawn_PostPlayerTickNoPrediction", (int64)EGMC_NetContext::LocalClientPawn_PostPlayerTickNoPrediction },
		{ "EGMC_NetContext::LocalClientPawn_PredictionEnabled", (int64)EGMC_NetContext::LocalClientPawn_PredictionEnabled },
		{ "EGMC_NetContext::LocalClientPawn_PredictionDisabled", (int64)EGMC_NetContext::LocalClientPawn_PredictionDisabled },
		{ "EGMC_NetContext::RemoteServerPawn_PreMoveProcessing", (int64)EGMC_NetContext::RemoteServerPawn_PreMoveProcessing },
		{ "EGMC_NetContext::RemoteServerPawn_PreMoveExecution", (int64)EGMC_NetContext::RemoteServerPawn_PreMoveExecution },
		{ "EGMC_NetContext::RemoteServerPawn_PostMoveExecution", (int64)EGMC_NetContext::RemoteServerPawn_PostMoveExecution },
		{ "EGMC_NetContext::RemoteServerPawn_PostMoveProcessing", (int64)EGMC_NetContext::RemoteServerPawn_PostMoveProcessing },
		{ "EGMC_NetContext::RemoteServerPawn_Smoothing", (int64)EGMC_NetContext::RemoteServerPawn_Smoothing },
		{ "EGMC_NetContext::RemoteServerPawn_UnSmoothing", (int64)EGMC_NetContext::RemoteServerPawn_UnSmoothing },
		{ "EGMC_NetContext::RemoteServerPawn_Simulation", (int64)EGMC_NetContext::RemoteServerPawn_Simulation },
		{ "EGMC_NetContext::RemoteServerPawn_ExtrapolationAborted", (int64)EGMC_NetContext::RemoteServerPawn_ExtrapolationAborted },
		{ "EGMC_NetContext::RemoteClientPawn_Simulation", (int64)EGMC_NetContext::RemoteClientPawn_Simulation },
		{ "EGMC_NetContext::RemoteClientPawn_ExtrapolationAborted", (int64)EGMC_NetContext::RemoteClientPawn_ExtrapolationAborted },
		{ "EGMC_NetContext::ManualRewind", (int64)EGMC_NetContext::ManualRewind },
		{ "EGMC_NetContext::PostManualRewind", (int64)EGMC_NetContext::PostManualRewind },
		{ "EGMC_NetContext::RollbackSwap", (int64)EGMC_NetContext::RollbackSwap },
		{ "EGMC_NetContext::RegularTickUpdate", (int64)EGMC_NetContext::RegularTickUpdate },
		{ "EGMC_NetContext::MAX", (int64)EGMC_NetContext::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GMCCore_EGMC_NetContext_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LocalClientPawn_ExtrapolationAborted.Name", "EGMC_NetContext::LocalClientPawn_ExtrapolationAborted" },
		{ "LocalClientPawn_PostMoveExecution.Name", "EGMC_NetContext::LocalClientPawn_PostMoveExecution" },
		{ "LocalClientPawn_PostMoveExecutionNoPrediction.Name", "EGMC_NetContext::LocalClientPawn_PostMoveExecutionNoPrediction" },
		{ "LocalClientPawn_PostPlayerTickNoPrediction.Name", "EGMC_NetContext::LocalClientPawn_PostPlayerTickNoPrediction" },
		{ "LocalClientPawn_PostReplay.Name", "EGMC_NetContext::LocalClientPawn_PostReplay" },
		{ "LocalClientPawn_PostReplayMoveExecution.Name", "EGMC_NetContext::LocalClientPawn_PostReplayMoveExecution" },
		{ "LocalClientPawn_PredictionDisabled.Name", "EGMC_NetContext::LocalClientPawn_PredictionDisabled" },
		{ "LocalClientPawn_PredictionEnabled.Name", "EGMC_NetContext::LocalClientPawn_PredictionEnabled" },
		{ "LocalClientPawn_PreMoveExecution.Name", "EGMC_NetContext::LocalClientPawn_PreMoveExecution" },
		{ "LocalClientPawn_PreMoveExecutionNoPrediction.Name", "EGMC_NetContext::LocalClientPawn_PreMoveExecutionNoPrediction" },
		{ "LocalClientPawn_PrePlayerTickNoPrediction.Name", "EGMC_NetContext::LocalClientPawn_PrePlayerTickNoPrediction" },
		{ "LocalClientPawn_PreReplay.Name", "EGMC_NetContext::LocalClientPawn_PreReplay" },
		{ "LocalClientPawn_PreReplayMoveExecution.Name", "EGMC_NetContext::LocalClientPawn_PreReplayMoveExecution" },
		{ "LocalClientPawn_ReplayAborted.Name", "EGMC_NetContext::LocalClientPawn_ReplayAborted" },
		{ "LocalClientPawn_ServerStateAdoptedForReplay.Name", "EGMC_NetContext::LocalClientPawn_ServerStateAdoptedForReplay" },
		{ "LocalClientPawn_Simulation.Name", "EGMC_NetContext::LocalClientPawn_Simulation" },
		{ "LocalServerPawn_PostMoveExecution.Name", "EGMC_NetContext::LocalServerPawn_PostMoveExecution" },
		{ "LocalServerPawn_PreMoveExecution.Name", "EGMC_NetContext::LocalServerPawn_PreMoveExecution" },
		{ "ManualRewind.Name", "EGMC_NetContext::ManualRewind" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGMC_NetContext::MAX" },
		{ "ModuleRelativePath", "Public/Replication/NetTypes.h" },
		{ "NoContextInformation.Name", "EGMC_NetContext::NoContextInformation" },
		{ "PostManualRewind.Name", "EGMC_NetContext::PostManualRewind" },
		{ "RegularTickUpdate.Name", "EGMC_NetContext::RegularTickUpdate" },
		{ "RemoteClientPawn_ExtrapolationAborted.Name", "EGMC_NetContext::RemoteClientPawn_ExtrapolationAborted" },
		{ "RemoteClientPawn_Simulation.Name", "EGMC_NetContext::RemoteClientPawn_Simulation" },
		{ "RemoteServerPawn_ExtrapolationAborted.Name", "EGMC_NetContext::RemoteServerPawn_ExtrapolationAborted" },
		{ "RemoteServerPawn_PostMoveExecution.Name", "EGMC_NetContext::RemoteServerPawn_PostMoveExecution" },
		{ "RemoteServerPawn_PostMoveProcessing.Name", "EGMC_NetContext::RemoteServerPawn_PostMoveProcessing" },
		{ "RemoteServerPawn_PreMoveExecution.Name", "EGMC_NetContext::RemoteServerPawn_PreMoveExecution" },
		{ "RemoteServerPawn_PreMoveProcessing.Name", "EGMC_NetContext::RemoteServerPawn_PreMoveProcessing" },
		{ "RemoteServerPawn_Simulation.Name", "EGMC_NetContext::RemoteServerPawn_Simulation" },
		{ "RemoteServerPawn_Smoothing.Name", "EGMC_NetContext::RemoteServerPawn_Smoothing" },
		{ "RemoteServerPawn_UnSmoothing.Name", "EGMC_NetContext::RemoteServerPawn_UnSmoothing" },
		{ "RollbackSwap.Name", "EGMC_NetContext::RollbackSwap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_NetContext_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
		nullptr,
		"EGMC_NetContext",
		"EGMC_NetContext",
		Z_Construct_UEnum_GMCCore_EGMC_NetContext_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_NetContext_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_NetContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_NetContext_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GMCCore_EGMC_NetContext()
	{
		if (!Z_Registration_Info_UEnum_EGMC_NetContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_NetContext.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_NetContext_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGMC_NetContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_Statics::EnumInfo[] = {
		{ EGMC_NetContext_StaticEnum, TEXT("EGMC_NetContext"), &Z_Registration_Info_UEnum_EGMC_NetContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3159525649U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_Statics::ScriptStructInfo[] = {
		{ FGMC_ClientInfo::StaticStruct, Z_Construct_UScriptStruct_FGMC_ClientInfo_Statics::NewStructOps, TEXT("GMC_ClientInfo"), &Z_Registration_Info_UScriptStruct_GMC_ClientInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_ClientInfo), 1226920056U) },
		{ FGMC_NetInfo::StaticStruct, Z_Construct_UScriptStruct_FGMC_NetInfo_Statics::NewStructOps, TEXT("GMC_NetInfo"), &Z_Registration_Info_UScriptStruct_GMC_NetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_NetInfo), 613773717U) },
		{ FGMC_MetaData::StaticStruct, Z_Construct_UScriptStruct_FGMC_MetaData_Statics::NewStructOps, TEXT("GMC_MetaData"), &Z_Registration_Info_UScriptStruct_GMC_MetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_MetaData), 3942026111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_1908083248(TEXT("/Script/GMCCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
