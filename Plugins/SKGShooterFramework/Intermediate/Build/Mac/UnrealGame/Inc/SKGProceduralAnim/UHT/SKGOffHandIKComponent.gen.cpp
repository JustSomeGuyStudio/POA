// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGProceduralAnim/Public/Components/SKGOffHandIKComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGOffHandIKComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SKGPROCEDURALANIM_API UClass* Z_Construct_UClass_USKGOffHandIKComponent();
	SKGPROCEDURALANIM_API UClass* Z_Construct_UClass_USKGOffHandIKComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGProceduralAnim();
// End Cross Module References
	DEFINE_FUNCTION(USKGOffHandIKComponent::execGetOffHandIKMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetOffHandIKMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOffHandIKComponent::execGetOffHandIKPose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetOffHandIKPose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOffHandIKComponent::execGetOffHandIKOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetOffHandIKOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGOffHandIKComponent::execUpdateOffHandIK)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentRelativeTo);
		P_GET_UBOOL(Z_Param_bLeftHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOffHandIK(Z_Param_ComponentRelativeTo,Z_Param_bLeftHand);
		P_NATIVE_END;
	}
	void USKGOffHandIKComponent::StaticRegisterNativesUSKGOffHandIKComponent()
	{
		UClass* Class = USKGOffHandIKComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOffHandIKMesh", &USKGOffHandIKComponent::execGetOffHandIKMesh },
			{ "GetOffHandIKOffset", &USKGOffHandIKComponent::execGetOffHandIKOffset },
			{ "GetOffHandIKPose", &USKGOffHandIKComponent::execGetOffHandIKPose },
			{ "UpdateOffHandIK", &USKGOffHandIKComponent::execUpdateOffHandIK },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics
	{
		struct SKGOffHandIKComponent_eventGetOffHandIKMesh_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOffHandIKComponent_eventGetOffHandIKMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOffHandIKComponent, nullptr, "GetOffHandIKMesh", nullptr, nullptr, Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::SKGOffHandIKComponent_eventGetOffHandIKMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::SKGOffHandIKComponent_eventGetOffHandIKMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics
	{
		struct SKGOffHandIKComponent_eventGetOffHandIKOffset_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOffHandIKComponent_eventGetOffHandIKOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOffHandIKComponent, nullptr, "GetOffHandIKOffset", nullptr, nullptr, Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::SKGOffHandIKComponent_eventGetOffHandIKOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::SKGOffHandIKComponent_eventGetOffHandIKOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics
	{
		struct SKGOffHandIKComponent_eventGetOffHandIKPose_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOffHandIKComponent_eventGetOffHandIKPose_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOffHandIKComponent, nullptr, "GetOffHandIKPose", nullptr, nullptr, Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::SKGOffHandIKComponent_eventGetOffHandIKPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::SKGOffHandIKComponent_eventGetOffHandIKPose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics
	{
		struct SKGOffHandIKComponent_eventUpdateOffHandIK_Parms
		{
			UPrimitiveComponent* ComponentRelativeTo;
			bool bLeftHand;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRelativeTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentRelativeTo;
		static void NewProp_bLeftHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftHand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_ComponentRelativeTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_ComponentRelativeTo = { "ComponentRelativeTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOffHandIKComponent_eventUpdateOffHandIK_Parms, ComponentRelativeTo), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_ComponentRelativeTo_MetaData), Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_ComponentRelativeTo_MetaData) };
	void Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_bLeftHand_SetBit(void* Obj)
	{
		((SKGOffHandIKComponent_eventUpdateOffHandIK_Parms*)Obj)->bLeftHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_bLeftHand = { "bLeftHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGOffHandIKComponent_eventUpdateOffHandIK_Parms), &Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_bLeftHand_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_ComponentRelativeTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_bLeftHand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGOffHandIK" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOffHandIKComponent, nullptr, "UpdateOffHandIK", nullptr, nullptr, Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::SKGOffHandIKComponent_eventUpdateOffHandIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::SKGOffHandIKComponent_eventUpdateOffHandIK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGOffHandIKComponent);
	UClass* Z_Construct_UClass_USKGOffHandIKComponent_NoRegister()
	{
		return USKGOffHandIKComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGOffHandIKComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OffHandIKMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandIKSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandIKSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandIKPose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftHandIKPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandIKSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandIKSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandIKPose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightHandIKPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffHandIKTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OffHandIKMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffHandIKOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastRelativeToOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastRelativeToOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKPose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OffHandIKPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGOffHandIKComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGOffHandIKComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh, "GetOffHandIKMesh" }, // 283711097
		{ &Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset, "GetOffHandIKOffset" }, // 155264105
		{ &Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose, "GetOffHandIKPose" }, // 627114316
		{ &Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK, "UpdateOffHandIK" }, // 2869613757
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Used for off hand ik. For example with a right handed shooter holding a rifle, the\n * offhand would be the left hand, for a left handed shooter the offhand would be the right hand\n */" },
		{ "IncludePath", "Components/SKGOffHandIKComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
		{ "ToolTip", "Used for off hand ik. For example with a right handed shooter holding a rifle, the\noffhand would be the left hand, for a left handed shooter the offhand would be the right hand" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMeshName_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
		{ "Comment", "// The mesh used to gather data for the Left Hand IK (think forward grip/handguard)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
		{ "ToolTip", "The mesh used to gather data for the Left Hand IK (think forward grip/handguard)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMeshName = { "OffHandIKMeshName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMeshName_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMeshName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKSocketName_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
		{ "Comment", "// Socket used for the Left Hand IK transform (S_OffHandIK in example project)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
		{ "ToolTip", "Socket used for the Left Hand IK transform (S_OffHandIK in example project)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKSocketName = { "LeftHandIKSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, LeftHandIKSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKSocketName_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKPose_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKPose" },
		{ "Category", "SKGOffHandIK|Initialize" },
		{ "Comment", "// Animation to be played on the left hand for the left hand IK\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
		{ "ToolTip", "Animation to be played on the left hand for the left hand IK" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKPose = { "LeftHandIKPose", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, LeftHandIKPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKPose_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKPose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKSocketName_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
		{ "Comment", "// Socket used for the Right Hand IK transform (S_OffHandIK in example project)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
		{ "ToolTip", "Socket used for the Right Hand IK transform (S_OffHandIK in example project)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKSocketName = { "RightHandIKSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, RightHandIKSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKSocketName_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKPose_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKPose" },
		{ "Category", "SKGOffHandIK|Initialize" },
		{ "Comment", "// Animation to be played on the Right hand for the Right hand IK\n" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
		{ "ToolTip", "Animation to be played on the Right hand for the Right hand IK" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKPose = { "RightHandIKPose", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, RightHandIKPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKPose_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKPose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKTag_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
		{ "Comment", "/**\n\x09 * The tag to be used to determine which offhand ik component should be used. If complete firearm (no forward\n\x09 * grip) = OffHandIKComponentType.Firearm, Handguard = OffHandIKComponentType.Handguard, ForwardGrip = OffHandIKComponentType.ForwardGrip\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
		{ "ToolTip", "The tag to be used to determine which offhand ik component should be used. If complete firearm (no forward\ngrip) = OffHandIKComponentType.Firearm, Handguard = OffHandIKComponentType.Handguard, ForwardGrip = OffHandIKComponentType.ForwardGrip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKTag = { "OffHandIKTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKTag_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_GameplayTags_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_GameplayTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMesh_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKMesh" },
		{ "Category", "SKGOffHandIK|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMesh = { "OffHandIKMesh", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMesh_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKOffset_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKOffset" },
		{ "Category", "SKGOffHandIK" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKOffset = { "OffHandIKOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKOffset_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LastRelativeToOffset_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LastRelativeToOffset = { "LastRelativeToOffset", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, LastRelativeToOffset), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LastRelativeToOffset_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LastRelativeToOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKPose_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKPose" },
		{ "Category", "SKGOffHandIK" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKPose = { "OffHandIKPose", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKPose_MetaData), Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKPose_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGOffHandIKComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LastRelativeToOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKPose,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGOffHandIKComponent, IGameplayTagAssetInterface), false },  // 3291755243
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGOffHandIKComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGOffHandIKComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::ClassParams = {
		&USKGOffHandIKComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGOffHandIKComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGOffHandIKComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGOffHandIKComponent()
	{
		if (!Z_Registration_Info_UClass_USKGOffHandIKComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGOffHandIKComponent.OuterSingleton, Z_Construct_UClass_USKGOffHandIKComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGOffHandIKComponent.OuterSingleton;
	}
	template<> SKGPROCEDURALANIM_API UClass* StaticClass<USKGOffHandIKComponent>()
	{
		return USKGOffHandIKComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGOffHandIKComponent);
	USKGOffHandIKComponent::~USKGOffHandIKComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGOffHandIKComponent, USKGOffHandIKComponent::StaticClass, TEXT("USKGOffHandIKComponent"), &Z_Registration_Info_UClass_USKGOffHandIKComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGOffHandIKComponent), 901723938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_2356324075(TEXT("/Script/SKGProceduralAnim"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
