// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGAttachment/Public/Components/SKGAttachmentManagerComponent.h"
#include "GameplayTagContainer.h"
#include "SKGAttachment/Public/DataTypes/SKGAttachmentDataTypes.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGAttachmentManagerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentComponent_NoRegister();
	SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentManagerComponent();
	SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentsChanged__DelegateSignature();
	SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentComponentItem();
	SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentComponentItems();
	UPackage* Z_Construct_UPackage__Script_SKGAttachment();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentsChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnAttachmentComponentsChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentComponentsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentComponentsChanged)
{
	OnAttachmentComponentsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics
	{
		struct _Script_SKGAttachment_eventOnAttachmentComponentAdded_Parms
		{
			USKGAttachmentComponent* AttachmentComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::NewProp_AttachmentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::NewProp_AttachmentComponent = { "AttachmentComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGAttachment_eventOnAttachmentComponentAdded_Parms, AttachmentComponent), Z_Construct_UClass_USKGAttachmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::NewProp_AttachmentComponent_MetaData), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::NewProp_AttachmentComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::NewProp_AttachmentComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnAttachmentComponentAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentComponentAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentComponentAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentComponentAdded_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentComponentAdded, USKGAttachmentComponent* AttachmentComponent)
{
	struct _Script_SKGAttachment_eventOnAttachmentComponentAdded_Parms
	{
		USKGAttachmentComponent* AttachmentComponent;
	};
	_Script_SKGAttachment_eventOnAttachmentComponentAdded_Parms Parms;
	Parms.AttachmentComponent=AttachmentComponent;
	OnAttachmentComponentAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics
	{
		struct _Script_SKGAttachment_eventOnAttachmentComponentRemoved_Parms
		{
			USKGAttachmentComponent* AttachmentComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::NewProp_AttachmentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::NewProp_AttachmentComponent = { "AttachmentComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGAttachment_eventOnAttachmentComponentRemoved_Parms, AttachmentComponent), Z_Construct_UClass_USKGAttachmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::NewProp_AttachmentComponent_MetaData), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::NewProp_AttachmentComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::NewProp_AttachmentComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnAttachmentComponentRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentComponentRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentComponentRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentComponentRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentComponentRemoved, USKGAttachmentComponent* AttachmentComponent)
{
	struct _Script_SKGAttachment_eventOnAttachmentComponentRemoved_Parms
	{
		USKGAttachmentComponent* AttachmentComponent;
	};
	_Script_SKGAttachment_eventOnAttachmentComponentRemoved_Parms Parms;
	Parms.AttachmentComponent=AttachmentComponent;
	OnAttachmentComponentRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics
	{
		struct _Script_SKGAttachment_eventOnAttachmentComponentAttachmentAdded_Parms
		{
			AActor* Attachment;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGAttachment_eventOnAttachmentComponentAttachmentAdded_Parms, Attachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::NewProp_Attachment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnAttachmentComponentAttachmentAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentComponentAttachmentAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentComponentAttachmentAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentComponentAttachmentAdded_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentComponentAttachmentAdded, AActor* Attachment)
{
	struct _Script_SKGAttachment_eventOnAttachmentComponentAttachmentAdded_Parms
	{
		AActor* Attachment;
	};
	_Script_SKGAttachment_eventOnAttachmentComponentAttachmentAdded_Parms Parms;
	Parms.Attachment=Attachment;
	OnAttachmentComponentAttachmentAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics
	{
		struct _Script_SKGAttachment_eventOnAttachmentComponentAttachmentRemoved_Parms
		{
			AActor* Attachment;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGAttachment_eventOnAttachmentComponentAttachmentRemoved_Parms, Attachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::NewProp_Attachment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnAttachmentComponentAttachmentRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentComponentAttachmentRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentComponentAttachmentRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentComponentAttachmentRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentComponentAttachmentRemoved, AActor* Attachment)
{
	struct _Script_SKGAttachment_eventOnAttachmentComponentAttachmentRemoved_Parms
	{
		AActor* Attachment;
	};
	_Script_SKGAttachment_eventOnAttachmentComponentAttachmentRemoved_Parms Parms;
	Parms.Attachment=Attachment;
	OnAttachmentComponentAttachmentRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execGetManagerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetManagerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execEnableCollisionAllAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCollisionAllAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execDisableCollisionAllAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableCollisionAllAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execUnHideAllAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnHideAllAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execHideAllAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideAllAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execGetAttachmentComponentWithAttachment)
	{
		P_GET_OBJECT(AActor,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGAttachmentComponent**)Z_Param__Result=P_THIS->GetAttachmentComponentWithAttachment(Z_Param_Attachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execGetCompatibleAttachmentComponentsFromClass)
	{
		P_GET_TARRAY_REF(USKGAttachmentComponent*,Z_Param_Out_Components);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCompatibleAttachmentComponentsFromClass(Z_Param_Out_Components,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execGetCompatibleAttachmentComponentsFromActor)
	{
		P_GET_TARRAY_REF(USKGAttachmentComponent*,Z_Param_Out_Components);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCompatibleAttachmentComponentsFromActor(Z_Param_Out_Components,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execGetAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execGetAttachmentComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSKGAttachmentComponentItem>*)Z_Param__Result=P_THIS->GetAttachmentComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execServer_SetAllAttachmentsCollision)
	{
		P_GET_UBOOL(Z_Param_EnableCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetAllAttachmentsCollision_Validate(Z_Param_EnableCollision))
		{
			RPC_ValidateFailed(TEXT("Server_SetAllAttachmentsCollision_Validate"));
			return;
		}
		P_THIS->Server_SetAllAttachmentsCollision_Implementation(Z_Param_EnableCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execServer_HideAllAttachments)
	{
		P_GET_UBOOL(Z_Param_Hide);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HideAllAttachments_Validate(Z_Param_Hide))
		{
			RPC_ValidateFailed(TEXT("Server_HideAllAttachments_Validate"));
			return;
		}
		P_THIS->Server_HideAllAttachments_Implementation(Z_Param_Hide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execOnRep_AttachmentsStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachmentsStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execOnRep_Attachments)
	{
		P_GET_TARRAY(AActor*,Z_Param_OldAttachments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Attachments(Z_Param_OldAttachments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentManagerComponent::execOnRep_AttachmentComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachmentComponents();
		P_NATIVE_END;
	}
	struct SKGAttachmentManagerComponent_eventServer_HideAllAttachments_Parms
	{
		bool Hide;
	};
	struct SKGAttachmentManagerComponent_eventServer_SetAllAttachmentsCollision_Parms
	{
		bool EnableCollision;
	};
	static FName NAME_USKGAttachmentManagerComponent_Server_HideAllAttachments = FName(TEXT("Server_HideAllAttachments"));
	void USKGAttachmentManagerComponent::Server_HideAllAttachments(bool Hide)
	{
		SKGAttachmentManagerComponent_eventServer_HideAllAttachments_Parms Parms;
		Parms.Hide=Hide ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USKGAttachmentManagerComponent_Server_HideAllAttachments),&Parms);
	}
	static FName NAME_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision = FName(TEXT("Server_SetAllAttachmentsCollision"));
	void USKGAttachmentManagerComponent::Server_SetAllAttachmentsCollision(bool EnableCollision)
	{
		SKGAttachmentManagerComponent_eventServer_SetAllAttachmentsCollision_Parms Parms;
		Parms.EnableCollision=EnableCollision ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision),&Parms);
	}
	void USKGAttachmentManagerComponent::StaticRegisterNativesUSKGAttachmentManagerComponent()
	{
		UClass* Class = USKGAttachmentManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableCollisionAllAttachments", &USKGAttachmentManagerComponent::execDisableCollisionAllAttachments },
			{ "EnableCollisionAllAttachments", &USKGAttachmentManagerComponent::execEnableCollisionAllAttachments },
			{ "GetAttachmentComponents", &USKGAttachmentManagerComponent::execGetAttachmentComponents },
			{ "GetAttachmentComponentWithAttachment", &USKGAttachmentManagerComponent::execGetAttachmentComponentWithAttachment },
			{ "GetAttachments", &USKGAttachmentManagerComponent::execGetAttachments },
			{ "GetCompatibleAttachmentComponentsFromActor", &USKGAttachmentManagerComponent::execGetCompatibleAttachmentComponentsFromActor },
			{ "GetCompatibleAttachmentComponentsFromClass", &USKGAttachmentManagerComponent::execGetCompatibleAttachmentComponentsFromClass },
			{ "GetManagerName", &USKGAttachmentManagerComponent::execGetManagerName },
			{ "HideAllAttachments", &USKGAttachmentManagerComponent::execHideAllAttachments },
			{ "OnRep_AttachmentComponents", &USKGAttachmentManagerComponent::execOnRep_AttachmentComponents },
			{ "OnRep_Attachments", &USKGAttachmentManagerComponent::execOnRep_Attachments },
			{ "OnRep_AttachmentsStates", &USKGAttachmentManagerComponent::execOnRep_AttachmentsStates },
			{ "Server_HideAllAttachments", &USKGAttachmentManagerComponent::execServer_HideAllAttachments },
			{ "Server_SetAllAttachmentsCollision", &USKGAttachmentManagerComponent::execServer_SetAllAttachmentsCollision },
			{ "UnHideAllAttachments", &USKGAttachmentManagerComponent::execUnHideAllAttachments },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_DisableCollisionAllAttachments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_DisableCollisionAllAttachments_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachmentManagerComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_DisableCollisionAllAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "DisableCollisionAllAttachments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_DisableCollisionAllAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_DisableCollisionAllAttachments_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_DisableCollisionAllAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_DisableCollisionAllAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_EnableCollisionAllAttachments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_EnableCollisionAllAttachments_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachmentManagerComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_EnableCollisionAllAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "EnableCollisionAllAttachments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_EnableCollisionAllAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_EnableCollisionAllAttachments_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_EnableCollisionAllAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_EnableCollisionAllAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics
	{
		struct SKGAttachmentManagerComponent_eventGetAttachmentComponents_Parms
		{
			TArray<FSKGAttachmentComponentItem> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGAttachmentComponentItem, METADATA_PARAMS(0, nullptr) }; // 2254302954
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventGetAttachmentComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::NewProp_ReturnValue_MetaData) }; // 2254302954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachmentManagerComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "GetAttachmentComponents", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::SKGAttachmentManagerComponent_eventGetAttachmentComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::SKGAttachmentManagerComponent_eventGetAttachmentComponents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics
	{
		struct SKGAttachmentManagerComponent_eventGetAttachmentComponentWithAttachment_Parms
		{
			AActor* Attachment;
			USKGAttachmentComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventGetAttachmentComponentWithAttachment_Parms, Attachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventGetAttachmentComponentWithAttachment_Parms, ReturnValue), Z_Construct_UClass_USKGAttachmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::NewProp_Attachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachmentManagerComponent" },
		{ "Comment", "// Will return the attachment component that holds the attachment\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Will return the attachment component that holds the attachment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "GetAttachmentComponentWithAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::SKGAttachmentManagerComponent_eventGetAttachmentComponentWithAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::SKGAttachmentManagerComponent_eventGetAttachmentComponentWithAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics
	{
		struct SKGAttachmentManagerComponent_eventGetAttachments_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventGetAttachments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachmentManagerComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "GetAttachments", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::SKGAttachmentManagerComponent_eventGetAttachments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::SKGAttachmentManagerComponent_eventGetAttachments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics
	{
		struct SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromActor_Parms
		{
			TArray<USKGAttachmentComponent*> Components;
			const AActor* Actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGAttachmentComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromActor_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Components_MetaData), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Components_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Actor_MetaData) };
	void Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromActor_Parms), &Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Components_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachmentManagerComponent" },
		{ "Comment", "// Will return an array of attachment components that are compatible with the Actor\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Will return an array of attachment components that are compatible with the Actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "GetCompatibleAttachmentComponentsFromActor", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics
	{
		struct SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromClass_Parms
		{
			TArray<USKGAttachmentComponent*> Components;
			const UClass* Class;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGAttachmentComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromClass_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Components_MetaData), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Components_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Class_MetaData), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Class_MetaData) };
	void Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromClass_Parms), &Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Components_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachmentManagerComponent" },
		{ "Comment", "// Will return an array of attachment components that are compatible with the class\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Will return an array of attachment components that are compatible with the class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "GetCompatibleAttachmentComponentsFromClass", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::SKGAttachmentManagerComponent_eventGetCompatibleAttachmentComponentsFromClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics
	{
		struct SKGAttachmentManagerComponent_eventGetManagerName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventGetManagerName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "GetManagerName", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::SKGAttachmentManagerComponent_eventGetManagerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::SKGAttachmentManagerComponent_eventGetManagerName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_HideAllAttachments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_HideAllAttachments_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachmentManagerComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_HideAllAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "HideAllAttachments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_HideAllAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_HideAllAttachments_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_HideAllAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_HideAllAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "OnRep_AttachmentComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentComponents_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics
	{
		struct SKGAttachmentManagerComponent_eventOnRep_Attachments_Parms
		{
			TArray<AActor*> OldAttachments;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldAttachments_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OldAttachments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::NewProp_OldAttachments_Inner = { "OldAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::NewProp_OldAttachments = { "OldAttachments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentManagerComponent_eventOnRep_Attachments_Parms, OldAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::NewProp_OldAttachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::NewProp_OldAttachments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "OnRep_Attachments", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::SKGAttachmentManagerComponent_eventOnRep_Attachments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::SKGAttachmentManagerComponent_eventOnRep_Attachments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentsStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentsStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentsStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "OnRep_AttachmentsStates", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentsStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentsStates_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentsStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentsStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics
	{
		static void NewProp_Hide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::NewProp_Hide_SetBit(void* Obj)
	{
		((SKGAttachmentManagerComponent_eventServer_HideAllAttachments_Parms*)Obj)->Hide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::NewProp_Hide = { "Hide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentManagerComponent_eventServer_HideAllAttachments_Parms), &Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::NewProp_Hide_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::NewProp_Hide,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "Server_HideAllAttachments", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::PropPointers), sizeof(SKGAttachmentManagerComponent_eventServer_HideAllAttachments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGAttachmentManagerComponent_eventServer_HideAllAttachments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics
	{
		static void NewProp_EnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::NewProp_EnableCollision_SetBit(void* Obj)
	{
		((SKGAttachmentManagerComponent_eventServer_SetAllAttachmentsCollision_Parms*)Obj)->EnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::NewProp_EnableCollision = { "EnableCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentManagerComponent_eventServer_SetAllAttachmentsCollision_Parms), &Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::NewProp_EnableCollision_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::NewProp_EnableCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "Server_SetAllAttachmentsCollision", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::PropPointers), sizeof(SKGAttachmentManagerComponent_eventServer_SetAllAttachmentsCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGAttachmentManagerComponent_eventServer_SetAllAttachmentsCollision_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentManagerComponent_UnHideAllAttachments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentManagerComponent_UnHideAllAttachments_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachmentManagerComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentManagerComponent_UnHideAllAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentManagerComponent, nullptr, "UnHideAllAttachments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentManagerComponent_UnHideAllAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentManagerComponent_UnHideAllAttachments_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentManagerComponent_UnHideAllAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentManagerComponent_UnHideAllAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGAttachmentManagerComponent);
	UClass* Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister()
	{
		return USKGAttachmentManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGAttachmentManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ManagerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowClientSideModification_MetaData[];
#endif
		static void NewProp_bAllowClientSideModification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowClientSideModification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCallForceNetUpdate_MetaData[];
#endif
		static void NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCallForceNetUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentComponents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attachments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHidden_MetaData[];
#endif
		static void NewProp_bIsHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCollision_MetaData[];
#endif
		static void NewProp_bHasCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttachmentComponentsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachmentComponentsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttachmentComponentAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachmentComponentAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttachmentComponentRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachmentComponentRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttachmentComponentAttachmentAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachmentComponentAttachmentAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttachmentComponentAttachmentRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachmentComponentAttachmentRemoved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_DisableCollisionAllAttachments, "DisableCollisionAllAttachments" }, // 3768124006
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_EnableCollisionAllAttachments, "EnableCollisionAllAttachments" }, // 732386629
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponents, "GetAttachmentComponents" }, // 1257872829
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachmentComponentWithAttachment, "GetAttachmentComponentWithAttachment" }, // 1307008352
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_GetAttachments, "GetAttachments" }, // 2204976268
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromActor, "GetCompatibleAttachmentComponentsFromActor" }, // 2805007877
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_GetCompatibleAttachmentComponentsFromClass, "GetCompatibleAttachmentComponentsFromClass" }, // 247157282
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_GetManagerName, "GetManagerName" }, // 2119636362
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_HideAllAttachments, "HideAllAttachments" }, // 281670267
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentComponents, "OnRep_AttachmentComponents" }, // 1904414360
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_Attachments, "OnRep_Attachments" }, // 2777201160
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_OnRep_AttachmentsStates, "OnRep_AttachmentsStates" }, // 1913812023
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_HideAllAttachments, "Server_HideAllAttachments" }, // 2730515750
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_Server_SetAllAttachmentsCollision, "Server_SetAllAttachmentsCollision" }, // 3486433199
		{ &Z_Construct_UFunction_USKGAttachmentManagerComponent_UnHideAllAttachments, "UnHideAllAttachments" }, // 2355001469
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGAttachmentManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_ManagerName_MetaData[] = {
		{ "BlueprintGetter", "GetManagerName" },
		{ "Category", "SKGAttachmentManager|Initialize" },
		{ "Comment", "// Can be used for whatever. In the example it is used for the save directory of saving/loading presets\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Can be used for whatever. In the example it is used for the save directory of saving/loading presets" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_ManagerName = { "ManagerName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentManagerComponent, ManagerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_ManagerName_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_ManagerName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAllowClientSideModification_MetaData[] = {
		{ "Category", "SKGAttachmentManager|Initialize" },
		{ "Comment", "// If true, clients can trigger a replicated hide/unhide and collision/nocollision to all attachments\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "If true, clients can trigger a replicated hide/unhide and collision/nocollision to all attachments" },
	};
#endif
	void Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAllowClientSideModification_SetBit(void* Obj)
	{
		((USKGAttachmentManagerComponent*)Obj)->bAllowClientSideModification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAllowClientSideModification = { "bAllowClientSideModification", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGAttachmentManagerComponent), &Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAllowClientSideModification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAllowClientSideModification_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAllowClientSideModification_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData[] = {
		{ "Category", "SKGAttachmentManager|Initialize" },
		{ "Comment", "// Useful if your NetUpdateFrequency is set super low\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Useful if your NetUpdateFrequency is set super low" },
	};
#endif
	void Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj)
	{
		((USKGAttachmentManagerComponent*)Obj)->bAutoCallForceNetUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAutoCallForceNetUpdate = { "bAutoCallForceNetUpdate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGAttachmentManagerComponent), &Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGAttachmentManager|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentManagerComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_GameplayTags_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_GameplayTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_AttachmentComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_AttachmentComponents = { "AttachmentComponents", "OnRep_AttachmentComponents", (EPropertyFlags)0x0020088100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentManagerComponent, AttachmentComponents), Z_Construct_UScriptStruct_FSKGAttachmentComponentItems, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_AttachmentComponents_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_AttachmentComponents_MetaData) }; // 911426043
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_Attachments_MetaData[] = {
		{ "Comment", "// Array of all attachments added to the parent\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Array of all attachments added to the parent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_Attachments = { "Attachments", "OnRep_Attachments", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentManagerComponent, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_Attachments_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_Attachments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bIsHidden_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bIsHidden_SetBit(void* Obj)
	{
		((USKGAttachmentManagerComponent*)Obj)->bIsHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bIsHidden = { "bIsHidden", "OnRep_AttachmentsStates", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGAttachmentManagerComponent), &Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bIsHidden_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bIsHidden_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bHasCollision_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bHasCollision_SetBit(void* Obj)
	{
		((USKGAttachmentManagerComponent*)Obj)->bHasCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bHasCollision = { "bHasCollision", "OnRep_AttachmentsStates", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGAttachmentManagerComponent), &Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bHasCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bHasCollision_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bHasCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentsChanged_MetaData[] = {
		{ "Category", "SKGAttachmentManagerComponent|Events" },
		{ "Comment", "// Called when the AttachmentComponents array changes via an add or removed both from client and server\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Called when the AttachmentComponents array changes via an add or removed both from client and server" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentsChanged = { "OnAttachmentComponentsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentManagerComponent, OnAttachmentComponentsChanged), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentsChanged_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentsChanged_MetaData) }; // 86963289
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAdded_MetaData[] = {
		{ "Category", "SKGAttachmentManagerComponent|Events" },
		{ "Comment", "// Called on the server only when an attachment component is added\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Called on the server only when an attachment component is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAdded = { "OnAttachmentComponentAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentManagerComponent, OnAttachmentComponentAdded), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAdded_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAdded_MetaData) }; // 343632786
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentRemoved_MetaData[] = {
		{ "Category", "SKGAttachmentManagerComponent|Events" },
		{ "Comment", "// Called on the server only when an attachment component is added\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Called on the server only when an attachment component is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentRemoved = { "OnAttachmentComponentRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentManagerComponent, OnAttachmentComponentRemoved), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentRemoved_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentRemoved_MetaData) }; // 2109416910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentAdded_MetaData[] = {
		{ "Category", "SKGAttachmentManagerComponent|Events" },
		{ "Comment", "// Called on the server only when an attachment component is added\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Called on the server only when an attachment component is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentAdded = { "OnAttachmentComponentAttachmentAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentManagerComponent, OnAttachmentComponentAttachmentAdded), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentAdded_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentAdded_MetaData) }; // 2933710184
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentRemoved_MetaData[] = {
		{ "Category", "SKGAttachmentManagerComponent|Events" },
		{ "Comment", "// Called on the server only when an attachment component is added\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentManagerComponent.h" },
		{ "ToolTip", "Called on the server only when an attachment component is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentRemoved = { "OnAttachmentComponentAttachmentRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentManagerComponent, OnAttachmentComponentAttachmentRemoved), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentComponentAttachmentRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentRemoved_MetaData), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentRemoved_MetaData) }; // 139497738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_ManagerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAllowClientSideModification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bAutoCallForceNetUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_AttachmentComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_Attachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_Attachments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bIsHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_bHasCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentsChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::NewProp_OnAttachmentComponentAttachmentRemoved,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGAttachmentManagerComponent, IGameplayTagAssetInterface), false },  // 3291755243
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGAttachmentManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::ClassParams = {
		&USKGAttachmentManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGAttachmentManagerComponent()
	{
		if (!Z_Registration_Info_UClass_USKGAttachmentManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGAttachmentManagerComponent.OuterSingleton, Z_Construct_UClass_USKGAttachmentManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGAttachmentManagerComponent.OuterSingleton;
	}
	template<> SKGATTACHMENT_API UClass* StaticClass<USKGAttachmentManagerComponent>()
	{
		return USKGAttachmentManagerComponent::StaticClass();
	}

	void USKGAttachmentManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AttachmentComponents(TEXT("AttachmentComponents"));
		static const FName Name_Attachments(TEXT("Attachments"));
		static const FName Name_bIsHidden(TEXT("bIsHidden"));
		static const FName Name_bHasCollision(TEXT("bHasCollision"));

		const bool bIsValid = true
			&& Name_AttachmentComponents == ClassReps[(int32)ENetFields_Private::AttachmentComponents].Property->GetFName()
			&& Name_Attachments == ClassReps[(int32)ENetFields_Private::Attachments].Property->GetFName()
			&& Name_bIsHidden == ClassReps[(int32)ENetFields_Private::bIsHidden].Property->GetFName()
			&& Name_bHasCollision == ClassReps[(int32)ENetFields_Private::bHasCollision].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USKGAttachmentManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGAttachmentManagerComponent);
	USKGAttachmentManagerComponent::~USKGAttachmentManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGAttachmentManagerComponent, USKGAttachmentManagerComponent::StaticClass, TEXT("USKGAttachmentManagerComponent"), &Z_Registration_Info_UClass_USKGAttachmentManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGAttachmentManagerComponent), 409122653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentManagerComponent_h_3575361592(TEXT("/Script/SKGAttachment"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
