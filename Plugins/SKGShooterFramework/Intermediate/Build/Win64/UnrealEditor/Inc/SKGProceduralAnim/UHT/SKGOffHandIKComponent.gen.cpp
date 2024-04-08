// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGProceduralAnim/Public/Components/SKGOffHandIKComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGOffHandIKComponent() {}

// Begin Cross Module References
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

// Begin Class USKGOffHandIKComponent Function GetOffHandIKMesh
struct Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics
{
	struct SKGOffHandIKComponent_eventGetOffHandIKMesh_Parms
	{
		UMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOffHandIKComponent_eventGetOffHandIKMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOffHandIKComponent, nullptr, "GetOffHandIKMesh", nullptr, nullptr, Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::SKGOffHandIKComponent_eventGetOffHandIKMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(USKGOffHandIKComponent::execGetOffHandIKMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshComponent**)Z_Param__Result=P_THIS->GetOffHandIKMesh();
	P_NATIVE_END;
}
// End Class USKGOffHandIKComponent Function GetOffHandIKMesh

// Begin Class USKGOffHandIKComponent Function GetOffHandIKOffset
struct Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics
{
	struct SKGOffHandIKComponent_eventGetOffHandIKOffset_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOffHandIKComponent_eventGetOffHandIKOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOffHandIKComponent, nullptr, "GetOffHandIKOffset", nullptr, nullptr, Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::SKGOffHandIKComponent_eventGetOffHandIKOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(USKGOffHandIKComponent::execGetOffHandIKOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetOffHandIKOffset();
	P_NATIVE_END;
}
// End Class USKGOffHandIKComponent Function GetOffHandIKOffset

// Begin Class USKGOffHandIKComponent Function GetOffHandIKPose
struct Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics
{
	struct SKGOffHandIKComponent_eventGetOffHandIKPose_Parms
	{
		UAnimSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOffHandIKComponent_eventGetOffHandIKPose_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOffHandIKComponent, nullptr, "GetOffHandIKPose", nullptr, nullptr, Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::SKGOffHandIKComponent_eventGetOffHandIKPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(USKGOffHandIKComponent::execGetOffHandIKPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimSequence**)Z_Param__Result=P_THIS->GetOffHandIKPose();
	P_NATIVE_END;
}
// End Class USKGOffHandIKComponent Function GetOffHandIKPose

// Begin Class USKGOffHandIKComponent Function UpdateOffHandIK
struct Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics
{
	struct SKGOffHandIKComponent_eventUpdateOffHandIK_Parms
	{
		UPrimitiveComponent* ComponentRelativeTo;
		bool bLeftHand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOffHandIK" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRelativeTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentRelativeTo;
	static void NewProp_bLeftHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_ComponentRelativeTo = { "ComponentRelativeTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOffHandIKComponent_eventUpdateOffHandIK_Parms, ComponentRelativeTo), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentRelativeTo_MetaData), NewProp_ComponentRelativeTo_MetaData) };
void Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_bLeftHand_SetBit(void* Obj)
{
	((SKGOffHandIKComponent_eventUpdateOffHandIK_Parms*)Obj)->bLeftHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_bLeftHand = { "bLeftHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGOffHandIKComponent_eventUpdateOffHandIK_Parms), &Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_bLeftHand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_ComponentRelativeTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::NewProp_bLeftHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOffHandIKComponent, nullptr, "UpdateOffHandIK", nullptr, nullptr, Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::SKGOffHandIKComponent_eventUpdateOffHandIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(USKGOffHandIKComponent::execUpdateOffHandIK)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentRelativeTo);
	P_GET_UBOOL(Z_Param_bLeftHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateOffHandIK(Z_Param_ComponentRelativeTo,Z_Param_bLeftHand);
	P_NATIVE_END;
}
// End Class USKGOffHandIKComponent Function UpdateOffHandIK

// Begin Class USKGOffHandIKComponent
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
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGOffHandIKComponent);
UClass* Z_Construct_UClass_USKGOffHandIKComponent_NoRegister()
{
	return USKGOffHandIKComponent::StaticClass();
}
struct Z_Construct_UClass_USKGOffHandIKComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Used for off hand ik. For example with a right handed shooter holding a rifle, the\n * offhand would be the left hand, for a left handed shooter the offhand would be the right hand\n */" },
#endif
		{ "IncludePath", "Components/SKGOffHandIKComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for off hand ik. For example with a right handed shooter holding a rifle, the\noffhand would be the left hand, for a left handed shooter the offhand would be the right hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKMeshName_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The mesh used to gather data for the Left Hand IK (think forward grip/handguard)\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh used to gather data for the Left Hand IK (think forward grip/handguard)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandIKSocketName_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Socket used for the Left Hand IK transform (S_OffHandIK in example project)\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket used for the Left Hand IK transform (S_OffHandIK in example project)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandIKPose_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKPose" },
		{ "Category", "SKGOffHandIK|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation to be played on the left hand for the left hand IK\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation to be played on the left hand for the left hand IK" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandIKSocketName_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Socket used for the Right Hand IK transform (S_OffHandIK in example project)\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket used for the Right Hand IK transform (S_OffHandIK in example project)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandIKPose_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKPose" },
		{ "Category", "SKGOffHandIK|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation to be played on the Right hand for the Right hand IK\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation to be played on the Right hand for the Right hand IK" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKTag_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The tag to be used to determine which offhand ik component should be used. If complete firearm (no forward\n\x09 * grip) = OffHandIKComponentType.Firearm, Handguard = OffHandIKComponentType.Handguard, ForwardGrip = OffHandIKComponentType.ForwardGrip\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tag to be used to determine which offhand ik component should be used. If complete firearm (no forward\ngrip) = OffHandIKComponentType.Firearm, Handguard = OffHandIKComponentType.Handguard, ForwardGrip = OffHandIKComponentType.ForwardGrip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGOffHandIK|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKMesh_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKMesh" },
		{ "Category", "SKGOffHandIK|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKOffset_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKOffset" },
		{ "Category", "SKGOffHandIK" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRelativeToOffset_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKPose_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKPose" },
		{ "Category", "SKGOffHandIK" },
		{ "ModuleRelativePath", "Public/Components/SKGOffHandIKComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OffHandIKMeshName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandIKSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandIKPose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandIKSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandIKPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffHandIKTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OffHandIKMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffHandIKOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastRelativeToOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OffHandIKPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKMesh, "GetOffHandIKMesh" }, // 3860567917
		{ &Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKOffset, "GetOffHandIKOffset" }, // 1487845758
		{ &Z_Construct_UFunction_USKGOffHandIKComponent_GetOffHandIKPose, "GetOffHandIKPose" }, // 3425193995
		{ &Z_Construct_UFunction_USKGOffHandIKComponent_UpdateOffHandIK, "UpdateOffHandIK" }, // 182237484
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGOffHandIKComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMeshName = { "OffHandIKMeshName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffHandIKMeshName_MetaData), NewProp_OffHandIKMeshName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKSocketName = { "LeftHandIKSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, LeftHandIKSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandIKSocketName_MetaData), NewProp_LeftHandIKSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LeftHandIKPose = { "LeftHandIKPose", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, LeftHandIKPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandIKPose_MetaData), NewProp_LeftHandIKPose_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKSocketName = { "RightHandIKSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, RightHandIKSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandIKSocketName_MetaData), NewProp_RightHandIKSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_RightHandIKPose = { "RightHandIKPose", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, RightHandIKPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandIKPose_MetaData), NewProp_RightHandIKPose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKTag = { "OffHandIKTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffHandIKTag_MetaData), NewProp_OffHandIKTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKMesh = { "OffHandIKMesh", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffHandIKMesh_MetaData), NewProp_OffHandIKMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKOffset = { "OffHandIKOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffHandIKOffset_MetaData), NewProp_OffHandIKOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_LastRelativeToOffset = { "LastRelativeToOffset", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, LastRelativeToOffset), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRelativeToOffset_MetaData), NewProp_LastRelativeToOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::NewProp_OffHandIKPose = { "OffHandIKPose", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOffHandIKComponent, OffHandIKPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffHandIKPose_MetaData), NewProp_OffHandIKPose_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGOffHandIKComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGProceduralAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOffHandIKComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGOffHandIKComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGOffHandIKComponent, IGameplayTagAssetInterface), false },  // 2863124436
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
// End Class USKGOffHandIKComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGOffHandIKComponent, USKGOffHandIKComponent::StaticClass, TEXT("USKGOffHandIKComponent"), &Z_Registration_Info_UClass_USKGOffHandIKComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGOffHandIKComponent), 2772904234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_3584030747(TEXT("/Script/SKGProceduralAnim"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGProceduralAnim_Public_Components_SKGOffHandIKComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
