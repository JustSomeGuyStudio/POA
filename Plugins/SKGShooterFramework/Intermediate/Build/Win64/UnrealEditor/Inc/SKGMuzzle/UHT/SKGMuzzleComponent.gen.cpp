// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGMuzzle/Public/Components/SKGMuzzleComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGMuzzleComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SKGMUZZLE_API UClass* Z_Construct_UClass_USKGMuzzleComponent();
	SKGMUZZLE_API UClass* Z_Construct_UClass_USKGMuzzleComponent_NoRegister();
	SKGMUZZLE_API UFunction* Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature();
	SKGMUZZLE_API UScriptStruct* Z_Construct_UScriptStruct_FSKGMuzzleTransform();
	UPackage* Z_Construct_UPackage__Script_SKGMuzzle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGMuzzleTransform;
class UScriptStruct* FSKGMuzzleTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGMuzzleTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGMuzzleTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGMuzzleTransform, (UObject*)Z_Construct_UPackage__Script_SKGMuzzle(), TEXT("SKGMuzzleTransform"));
	}
	return Z_Registration_Info_UScriptStruct_SKGMuzzleTransform.OuterSingleton;
}
template<> SKGMUZZLE_API UScriptStruct* StaticStruct<FSKGMuzzleTransform>()
{
	return FSKGMuzzleTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data type used for replication as it's much smaller than sending a RPC with a FTransform\n" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "Data type used for replication as it's much smaller than sending a RPC with a FTransform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGMuzzleTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "SKGMuzzle" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMuzzleTransform, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Location_MetaData) }; // 561190916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "SKGMuzzle" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGMuzzleTransform, Direction), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Direction_MetaData), Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Direction_MetaData) }; // 1419749565
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewProp_Direction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGMuzzle,
		nullptr,
		&NewStructOps,
		"SKGMuzzleTransform",
		Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::PropPointers),
		sizeof(FSKGMuzzleTransform),
		alignof(FSKGMuzzleTransform),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGMuzzleTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGMuzzleTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGMuzzleTransform.InnerSingleton, Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGMuzzleTransform.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics
	{
		struct _Script_SKGMuzzle_eventOnMuzzleTemperatureChanged_Parms
		{
			float Temperature;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGMuzzle_eventOnMuzzleTemperatureChanged_Parms, Temperature), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::NewProp_Temperature,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGMuzzle, nullptr, "OnMuzzleTemperatureChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::_Script_SKGMuzzle_eventOnMuzzleTemperatureChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::_Script_SKGMuzzle_eventOnMuzzleTemperatureChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMuzzleTemperatureChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMuzzleTemperatureChanged, float Temperature)
{
	struct _Script_SKGMuzzle_eventOnMuzzleTemperatureChanged_Parms
	{
		float Temperature;
	};
	_Script_SKGMuzzle_eventOnMuzzleTemperatureChanged_Parms Parms;
	Parms.Temperature=Temperature;
	OnMuzzleTemperatureChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USKGMuzzleComponent::execGetMuzzleProjectileTransform)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MOA);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSKGMuzzleTransform*)Z_Param__Result=P_THIS->GetMuzzleProjectileTransform(Z_Param_MOA);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGMuzzleComponent::execGetMuzzleProjectileTransformCompensated)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZeroDistanceMeters);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MOA);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AimTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSKGMuzzleTransform*)Z_Param__Result=P_THIS->GetMuzzleProjectileTransformCompensated(Z_Param_ZeroDistanceMeters,Z_Param_MOA,Z_Param_Out_AimTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGMuzzleComponent::execGetMuzzleTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetMuzzleTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGMuzzleComponent::execIsUsingMuzzleTemperatureSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingMuzzleTemperatureSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGMuzzleComponent::execGetMuzzleTemperatureNormalized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMuzzleTemperatureNormalized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGMuzzleComponent::execGetMuzzleTemperature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMuzzleTemperature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGMuzzleComponent::execShotPerformed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShotPerformed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGMuzzleComponent::execGetMuzzleTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetMuzzleTag();
		P_NATIVE_END;
	}
	void USKGMuzzleComponent::StaticRegisterNativesUSKGMuzzleComponent()
	{
		UClass* Class = USKGMuzzleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMuzzleProjectileTransform", &USKGMuzzleComponent::execGetMuzzleProjectileTransform },
			{ "GetMuzzleProjectileTransformCompensated", &USKGMuzzleComponent::execGetMuzzleProjectileTransformCompensated },
			{ "GetMuzzleTag", &USKGMuzzleComponent::execGetMuzzleTag },
			{ "GetMuzzleTemperature", &USKGMuzzleComponent::execGetMuzzleTemperature },
			{ "GetMuzzleTemperatureNormalized", &USKGMuzzleComponent::execGetMuzzleTemperatureNormalized },
			{ "GetMuzzleTransform", &USKGMuzzleComponent::execGetMuzzleTransform },
			{ "IsUsingMuzzleTemperatureSystem", &USKGMuzzleComponent::execIsUsingMuzzleTemperatureSystem },
			{ "ShotPerformed", &USKGMuzzleComponent::execShotPerformed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics
	{
		struct SKGMuzzleComponent_eventGetMuzzleProjectileTransform_Parms
		{
			float MOA;
			FSKGMuzzleTransform ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MOA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::NewProp_MOA = { "MOA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleProjectileTransform_Parms, MOA), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleProjectileTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGMuzzleTransform, METADATA_PARAMS(0, nullptr) }; // 3631249153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::NewProp_MOA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMuzzle|Transform" },
		{ "Comment", "/**\n\x09 * Useful as a way to get a transform for launching projectiles straight from the muzzle (no compensation)\n\x09 * @param MOA Accuracy (1 = 1 inch of spread at 100 yards/91.44 meters\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "Useful as a way to get a transform for launching projectiles straight from the muzzle (no compensation)\n@param MOA Accuracy (1 = 1 inch of spread at 100 yards/91.44 meters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleComponent, nullptr, "GetMuzzleProjectileTransform", nullptr, nullptr, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::SKGMuzzleComponent_eventGetMuzzleProjectileTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::SKGMuzzleComponent_eventGetMuzzleProjectileTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics
	{
		struct SKGMuzzleComponent_eventGetMuzzleProjectileTransformCompensated_Parms
		{
			float ZeroDistanceMeters;
			float MOA;
			FTransform AimTransform;
			FSKGMuzzleTransform ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZeroDistanceMeters;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MOA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_ZeroDistanceMeters = { "ZeroDistanceMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleProjectileTransformCompensated_Parms, ZeroDistanceMeters), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_MOA = { "MOA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleProjectileTransformCompensated_Parms, MOA), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_AimTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_AimTransform = { "AimTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleProjectileTransformCompensated_Parms, AimTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_AimTransform_MetaData), Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_AimTransform_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleProjectileTransformCompensated_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGMuzzleTransform, METADATA_PARAMS(0, nullptr) }; // 3631249153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_ZeroDistanceMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_MOA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_AimTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMuzzle|Transform" },
		{ "Comment", "/**\n\x09 * Useful as a way to get a transform for launching projectiles with an estimated zero distance\n\x09 * @param ZeroDistanceMeters Range to zero to (eg 100 meters)\n\x09 * @param MOA Accuracy (1 = 1 inch of spread at 100 yards/91.44 meters\n\x09 * @param AimTransform Transform of the sight socket (current aiming point)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "Useful as a way to get a transform for launching projectiles with an estimated zero distance\n@param ZeroDistanceMeters Range to zero to (eg 100 meters)\n@param MOA Accuracy (1 = 1 inch of spread at 100 yards/91.44 meters\n@param AimTransform Transform of the sight socket (current aiming point)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleComponent, nullptr, "GetMuzzleProjectileTransformCompensated", nullptr, nullptr, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::SKGMuzzleComponent_eventGetMuzzleProjectileTransformCompensated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::SKGMuzzleComponent_eventGetMuzzleProjectileTransformCompensated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics
	{
		struct SKGMuzzleComponent_eventGetMuzzleTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMuzzle|Transform" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleComponent, nullptr, "GetMuzzleTag", nullptr, nullptr, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::SKGMuzzleComponent_eventGetMuzzleTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::SKGMuzzleComponent_eventGetMuzzleTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics
	{
		struct SKGMuzzleComponent_eventGetMuzzleTemperature_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleTemperature_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMuzzle|Transform" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleComponent, nullptr, "GetMuzzleTemperature", nullptr, nullptr, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::SKGMuzzleComponent_eventGetMuzzleTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::SKGMuzzleComponent_eventGetMuzzleTemperature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics
	{
		struct SKGMuzzleComponent_eventGetMuzzleTemperatureNormalized_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleTemperatureNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMuzzle|Transform" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleComponent, nullptr, "GetMuzzleTemperatureNormalized", nullptr, nullptr, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::SKGMuzzleComponent_eventGetMuzzleTemperatureNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::SKGMuzzleComponent_eventGetMuzzleTemperatureNormalized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics
	{
		struct SKGMuzzleComponent_eventGetMuzzleTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGMuzzleComponent_eventGetMuzzleTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMuzzle|Transform" },
		{ "Comment", "// Returns the transform of the muzzle socket\n" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "Returns the transform of the muzzle socket" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleComponent, nullptr, "GetMuzzleTransform", nullptr, nullptr, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::SKGMuzzleComponent_eventGetMuzzleTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::SKGMuzzleComponent_eventGetMuzzleTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics
	{
		struct SKGMuzzleComponent_eventIsUsingMuzzleTemperatureSystem_Parms
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
	void Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGMuzzleComponent_eventIsUsingMuzzleTemperatureSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGMuzzleComponent_eventIsUsingMuzzleTemperatureSystem_Parms), &Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMuzzle|Transform" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleComponent, nullptr, "IsUsingMuzzleTemperatureSystem", nullptr, nullptr, Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::SKGMuzzleComponent_eventIsUsingMuzzleTemperatureSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::SKGMuzzleComponent_eventIsUsingMuzzleTemperatureSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGMuzzleComponent_ShotPerformed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGMuzzleComponent_ShotPerformed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGMuzzle|MuzzleTemperature" },
		{ "Comment", "// To be called when you fire your firearm to work with muzzle temperature\n" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "To be called when you fire your firearm to work with muzzle temperature" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGMuzzleComponent_ShotPerformed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGMuzzleComponent, nullptr, "ShotPerformed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGMuzzleComponent_ShotPerformed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGMuzzleComponent_ShotPerformed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGMuzzleComponent_ShotPerformed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGMuzzleComponent_ShotPerformed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGMuzzleComponent);
	UClass* Z_Construct_UClass_USKGMuzzleComponent_NoRegister()
	{
		return USKGMuzzleComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGMuzzleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleMeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleMeshComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMuzzleTemperatureSystem_MetaData[];
#endif
		static void NewProp_bUseMuzzleTemperatureSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMuzzleTemperatureSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleTemperatureTickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleTemperatureTickInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMuzzleTemperatureFahrenheit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMuzzleTemperatureFahrenheit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleTemperatureNormalizeRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleTemperatureNormalizeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncreaseMuzzleTemperatureAmountFahrenheit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IncreaseMuzzleTemperatureAmountFahrenheit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecreaseMuzzleTemperatureAmountPerTick_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecreaseMuzzleTemperatureAmountPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MuzzleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMuzzleTemperatureChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMuzzleTemperatureChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGMuzzleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGMuzzle,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGMuzzleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransform, "GetMuzzleProjectileTransform" }, // 2286737959
		{ &Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleProjectileTransformCompensated, "GetMuzzleProjectileTransformCompensated" }, // 73762702
		{ &Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTag, "GetMuzzleTag" }, // 1033512230
		{ &Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperature, "GetMuzzleTemperature" }, // 3767593689
		{ &Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTemperatureNormalized, "GetMuzzleTemperatureNormalized" }, // 2783448626
		{ &Z_Construct_UFunction_USKGMuzzleComponent_GetMuzzleTransform, "GetMuzzleTransform" }, // 3509641300
		{ &Z_Construct_UFunction_USKGMuzzleComponent_IsUsingMuzzleTemperatureSystem, "IsUsingMuzzleTemperatureSystem" }, // 4285774067
		{ &Z_Construct_UFunction_USKGMuzzleComponent_ShotPerformed, "ShotPerformed" }, // 3795800291
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGMuzzleComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMeshComponentName_MetaData[] = {
		{ "Category", "SKGMuzzle|Initialize" },
		{ "Comment", "// The name of the mesh to be used for the muzzle (to gather the muzzle transform from)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "The name of the mesh to be used for the muzzle (to gather the muzzle transform from)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMeshComponentName = { "MuzzleMeshComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, MuzzleMeshComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMeshComponentName_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMeshComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "SKGMuzzle|Initialize" },
		{ "Comment", "// The name of the socket on the MuzzleMeshComponentName mesh to be used to gather the muzzle transform from\n" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "The name of the socket on the MuzzleMeshComponentName mesh to be used to gather the muzzle transform from" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, MuzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleSocketName_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTag_MetaData[] = {
		{ "Category", "SKGMuzzle|Initialize" },
		{ "Comment", "/**\n\x09 * The tag for the muzzle. Firearms with barrels = MuzzleComponentType.Barrel, Barrels = MuzzleComponentType.Barrel, Muzzle Devices\n\x09 * like muzzle brakes = MuzzleComponentType.MuzzleDevice, Suppressors ontop of muzzle devices = MuzzleComponentType.Suppressor\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "The tag for the muzzle. Firearms with barrels = MuzzleComponentType.Barrel, Barrels = MuzzleComponentType.Barrel, Muzzle Devices\nlike muzzle brakes = MuzzleComponentType.MuzzleDevice, Suppressors ontop of muzzle devices = MuzzleComponentType.Suppressor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTag = { "MuzzleTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, MuzzleTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTag_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGMuzzle|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_GameplayTags_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_GameplayTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_bUseMuzzleTemperatureSystem_MetaData[] = {
		{ "Category", "SKGMuzzle|MuzzleTemperature" },
		{ "Comment", "// If true, the temperature system will be used (temperature accumulates with each shot and slowly cools)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "If true, the temperature system will be used (temperature accumulates with each shot and slowly cools)" },
	};
#endif
	void Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_bUseMuzzleTemperatureSystem_SetBit(void* Obj)
	{
		((USKGMuzzleComponent*)Obj)->bUseMuzzleTemperatureSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_bUseMuzzleTemperatureSystem = { "bUseMuzzleTemperatureSystem", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGMuzzleComponent), &Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_bUseMuzzleTemperatureSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_bUseMuzzleTemperatureSystem_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_bUseMuzzleTemperatureSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureTickInterval_MetaData[] = {
		{ "Category", "SKGMuzzle|MuzzleTemperature" },
		{ "Comment", "// The rate at which the muzzle ticks to handle cooling down the muzzle\n" },
		{ "EditCondition", "bUseMuzzleTemperatureSystem" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "The rate at which the muzzle ticks to handle cooling down the muzzle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureTickInterval = { "MuzzleTemperatureTickInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, MuzzleTemperatureTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureTickInterval_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureTickInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MaxMuzzleTemperatureFahrenheit_MetaData[] = {
		{ "Category", "SKGMuzzle|MuzzleTemperature" },
		{ "Comment", "// The max temperature the muzzle can get\n" },
		{ "EditCondition", "bUseMuzzleTemperatureSystem" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "The max temperature the muzzle can get" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MaxMuzzleTemperatureFahrenheit = { "MaxMuzzleTemperatureFahrenheit", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, MaxMuzzleTemperatureFahrenheit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MaxMuzzleTemperatureFahrenheit_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MaxMuzzleTemperatureFahrenheit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureNormalizeRate_MetaData[] = {
		{ "Category", "SKGMuzzle|MuzzleTemperature" },
		{ "Comment", "// The normalize rate (used in the normalize calculation) to get a normalized temperature between 0 and 1 (changes scaling)\n" },
		{ "EditCondition", "bUseMuzzleTemperatureSystem" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "The normalize rate (used in the normalize calculation) to get a normalized temperature between 0 and 1 (changes scaling)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureNormalizeRate = { "MuzzleTemperatureNormalizeRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, MuzzleTemperatureNormalizeRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureNormalizeRate_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureNormalizeRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_IncreaseMuzzleTemperatureAmountFahrenheit_MetaData[] = {
		{ "Category", "SKGMuzzle|MuzzleTemperature" },
		{ "Comment", "// The amount the muzzle temperature increases per shot\n" },
		{ "EditCondition", "bUseMuzzleTemperatureSystem" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "The amount the muzzle temperature increases per shot" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_IncreaseMuzzleTemperatureAmountFahrenheit = { "IncreaseMuzzleTemperatureAmountFahrenheit", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, IncreaseMuzzleTemperatureAmountFahrenheit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_IncreaseMuzzleTemperatureAmountFahrenheit_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_IncreaseMuzzleTemperatureAmountFahrenheit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_DecreaseMuzzleTemperatureAmountPerTick_MetaData[] = {
		{ "Category", "SKGMuzzle|MuzzleTemperature" },
		{ "Comment", "// The amount the muzzle temperature decreases per tick\n" },
		{ "EditCondition", "bUseMuzzleTemperatureSystem" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
		{ "ToolTip", "The amount the muzzle temperature decreases per tick" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_DecreaseMuzzleTemperatureAmountPerTick = { "DecreaseMuzzleTemperatureAmountPerTick", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, DecreaseMuzzleTemperatureAmountPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_DecreaseMuzzleTemperatureAmountPerTick_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_DecreaseMuzzleTemperatureAmountPerTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMesh = { "MuzzleMesh", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, MuzzleMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMesh_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_OnMuzzleTemperatureChanged_MetaData[] = {
		{ "Category", "SKGMuzzle|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGMuzzleComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_OnMuzzleTemperatureChanged = { "OnMuzzleTemperatureChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGMuzzleComponent, OnMuzzleTemperatureChanged), Z_Construct_UDelegateFunction_SKGMuzzle_OnMuzzleTemperatureChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_OnMuzzleTemperatureChanged_MetaData), Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_OnMuzzleTemperatureChanged_MetaData) }; // 1196773175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGMuzzleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_bUseMuzzleTemperatureSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureTickInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MaxMuzzleTemperatureFahrenheit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleTemperatureNormalizeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_IncreaseMuzzleTemperatureAmountFahrenheit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_DecreaseMuzzleTemperatureAmountPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_MuzzleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGMuzzleComponent_Statics::NewProp_OnMuzzleTemperatureChanged,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGMuzzleComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGMuzzleComponent, IGameplayTagAssetInterface), false },  // 3291755243
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGMuzzleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGMuzzleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGMuzzleComponent_Statics::ClassParams = {
		&USKGMuzzleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGMuzzleComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGMuzzleComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGMuzzleComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGMuzzleComponent()
	{
		if (!Z_Registration_Info_UClass_USKGMuzzleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGMuzzleComponent.OuterSingleton, Z_Construct_UClass_USKGMuzzleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGMuzzleComponent.OuterSingleton;
	}
	template<> SKGMUZZLE_API UClass* StaticClass<USKGMuzzleComponent>()
	{
		return USKGMuzzleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGMuzzleComponent);
	USKGMuzzleComponent::~USKGMuzzleComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_Statics::ScriptStructInfo[] = {
		{ FSKGMuzzleTransform::StaticStruct, Z_Construct_UScriptStruct_FSKGMuzzleTransform_Statics::NewStructOps, TEXT("SKGMuzzleTransform"), &Z_Registration_Info_UScriptStruct_SKGMuzzleTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGMuzzleTransform), 3631249153U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGMuzzleComponent, USKGMuzzleComponent::StaticClass, TEXT("USKGMuzzleComponent"), &Z_Registration_Info_UClass_USKGMuzzleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGMuzzleComponent), 2495042546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_1206661929(TEXT("/Script/SKGMuzzle"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGMuzzle_Public_Components_SKGMuzzleComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
