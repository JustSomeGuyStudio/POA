// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGAttachment/Public/Components/SKGAttachmentComponent.h"
#include "GameplayTagContainer.h"
#include "SKGAttachment/Public/DataAssets/SKGPDAAttachmentCompatibility.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGAttachmentComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentComponent();
	SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentComponent_NoRegister();
	SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister();
	SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGPDAAttachmentCompatibility_NoRegister();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentChanged__DelegateSignature();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature();
	SKGATTACHMENT_API UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature();
	SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentAttachRules();
	SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings();
	SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGDAAttachment();
	UPackage* Z_Construct_UPackage__Script_SKGAttachment();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGAttachmentOffsetSettings;
class UScriptStruct* FSKGAttachmentOffsetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGAttachmentOffsetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGAttachmentOffsetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings, (UObject*)Z_Construct_UPackage__Script_SKGAttachment(), TEXT("SKGAttachmentOffsetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGAttachmentOffsetSettings.OuterSingleton;
}
template<> SKGATTACHMENT_API UScriptStruct* StaticStruct<FSKGAttachmentOffsetSettings>()
{
	return FSKGAttachmentOffsetSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateOffsetEachChange_MetaData[];
#endif
		static void NewProp_bReplicateOffsetEachChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateOffsetEachChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetSnapDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetSnapDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumOffsetAllowed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumOffsetAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumOffsetAllowed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumOffsetAllowed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGAttachmentOffsetSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_bReplicateOffsetEachChange_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "Comment", "// If false, FinalizeAttachmentOffset will need to be called in order to replicate from the client\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "If false, FinalizeAttachmentOffset will need to be called in order to replicate from the client" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_bReplicateOffsetEachChange_SetBit(void* Obj)
	{
		((FSKGAttachmentOffsetSettings*)Obj)->bReplicateOffsetEachChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_bReplicateOffsetEachChange = { "bReplicateOffsetEachChange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGAttachmentOffsetSettings), &Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_bReplicateOffsetEachChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_bReplicateOffsetEachChange_MetaData), Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_bReplicateOffsetEachChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetAxis_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetAxis = { "OffsetAxis", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentOffsetSettings, OffsetAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetAxis_MetaData), Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetAxis_MetaData) }; // 1662690994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetSnapDistance_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "Comment", "// 1.046 = picatinny, 4.0 = M-Lok, 2.0 = Keymod\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "1.046 = picatinny, 4.0 = M-Lok, 2.0 = Keymod" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetSnapDistance = { "OffsetSnapDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentOffsetSettings, OffsetSnapDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetSnapDistance_MetaData), Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetSnapDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MinimumOffsetAllowed_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MinimumOffsetAllowed = { "MinimumOffsetAllowed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentOffsetSettings, MinimumOffsetAllowed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MinimumOffsetAllowed_MetaData), Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MinimumOffsetAllowed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MaximumOffsetAllowed_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MaximumOffsetAllowed = { "MaximumOffsetAllowed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentOffsetSettings, MaximumOffsetAllowed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MaximumOffsetAllowed_MetaData), Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MaximumOffsetAllowed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_bReplicateOffsetEachChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_OffsetSnapDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MinimumOffsetAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewProp_MaximumOffsetAllowed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
		nullptr,
		&NewStructOps,
		"SKGAttachmentOffsetSettings",
		Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::PropPointers),
		sizeof(FSKGAttachmentOffsetSettings),
		alignof(FSKGAttachmentOffsetSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGAttachmentOffsetSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGAttachmentOffsetSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGAttachmentOffsetSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGAttachmentAttachRules;
class UScriptStruct* FSKGAttachmentAttachRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGAttachmentAttachRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGAttachmentAttachRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGAttachmentAttachRules, (UObject*)Z_Construct_UPackage__Script_SKGAttachment(), TEXT("SKGAttachmentAttachRules"));
	}
	return Z_Registration_Info_UScriptStruct_SKGAttachmentAttachRules.OuterSingleton;
}
template<> SKGATTACHMENT_API UScriptStruct* StaticStruct<FSKGAttachmentAttachRules>()
{
	return FSKGAttachmentAttachRules::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachLocationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachLocationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachLocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachRotationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachRotationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachRotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachScaleRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachScaleRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachScaleRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeldSimulatedBodies_MetaData[];
#endif
		static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGAttachmentAttachRules>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachLocationRule_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachLocationRule = { "AttachLocationRule", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentAttachRules, AttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachLocationRule_MetaData), Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachLocationRule_MetaData) }; // 3672154405
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachRotationRule_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachRotationRule = { "AttachRotationRule", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentAttachRules, AttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachRotationRule_MetaData), Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachRotationRule_MetaData) }; // 3672154405
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachScaleRule_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachScaleRule = { "AttachScaleRule", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentAttachRules, AttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachScaleRule_MetaData), Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachScaleRule_MetaData) }; // 3672154405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_bWeldSimulatedBodies_MetaData[] = {
		{ "Category", "SKGAttachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
	{
		((FSKGAttachmentAttachRules*)Obj)->bWeldSimulatedBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGAttachmentAttachRules), &Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_bWeldSimulatedBodies_MetaData), Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_bWeldSimulatedBodies_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachLocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachLocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachRotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachRotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_AttachScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewProp_bWeldSimulatedBodies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
		nullptr,
		&NewStructOps,
		"SKGAttachmentAttachRules",
		Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::PropPointers),
		sizeof(FSKGAttachmentAttachRules),
		alignof(FSKGAttachmentAttachRules),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentAttachRules()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGAttachmentAttachRules.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGAttachmentAttachRules.InnerSingleton, Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGAttachmentAttachRules.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnAttachmentChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentChanged)
{
	OnAttachmentChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics
	{
		struct _Script_SKGAttachment_eventOnAttachmentAdded_Parms
		{
			AActor* NewAttachment;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAttachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::NewProp_NewAttachment = { "NewAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGAttachment_eventOnAttachmentAdded_Parms, NewAttachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::NewProp_NewAttachment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnAttachmentAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentAdded_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentAdded, AActor* NewAttachment)
{
	struct _Script_SKGAttachment_eventOnAttachmentAdded_Parms
	{
		AActor* NewAttachment;
	};
	_Script_SKGAttachment_eventOnAttachmentAdded_Parms Parms;
	Parms.NewAttachment=NewAttachment;
	OnAttachmentAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics
	{
		struct _Script_SKGAttachment_eventOnAttachmentRemoved_Parms
		{
			AActor* OldAttachment;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldAttachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::NewProp_OldAttachment = { "OldAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGAttachment_eventOnAttachmentRemoved_Parms, OldAttachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::NewProp_OldAttachment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnAttachmentRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentRemoved, AActor* OldAttachment)
{
	struct _Script_SKGAttachment_eventOnAttachmentRemoved_Parms
	{
		AActor* OldAttachment;
	};
	_Script_SKGAttachment_eventOnAttachmentRemoved_Parms Parms;
	Parms.OldAttachment=OldAttachment;
	OnAttachmentRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics
	{
		struct _Script_SKGAttachment_eventOnAttachmentDestroyed_Parms
		{
			AActor* OldAttachment;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldAttachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::NewProp_OldAttachment = { "OldAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGAttachment_eventOnAttachmentDestroyed_Parms, OldAttachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::NewProp_OldAttachment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnAttachmentDestroyed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::_Script_SKGAttachment_eventOnAttachmentDestroyed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentDestroyed, AActor* OldAttachment)
{
	struct _Script_SKGAttachment_eventOnAttachmentDestroyed_Parms
	{
		AActor* OldAttachment;
	};
	_Script_SKGAttachment_eventOnAttachmentDestroyed_Parms Parms;
	Parms.OldAttachment=OldAttachment;
	OnAttachmentDestroyed.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics
	{
		struct _Script_SKGAttachment_eventOnOffsetChanged_Parms
		{
			float Offset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGAttachment_eventOnOffsetChanged_Parms, Offset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGAttachment, nullptr, "OnOffsetChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::_Script_SKGAttachment_eventOnOffsetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::_Script_SKGAttachment_eventOnOffsetChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnOffsetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOffsetChanged, float Offset)
{
	struct _Script_SKGAttachment_eventOnOffsetChanged_Parms
	{
		float Offset;
	};
	_Script_SKGAttachment_eventOnOffsetChanged_Parms Parms;
	Parms.Offset=Offset;
	OnOffsetChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetIsRequiredToFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsRequiredToFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetAttachmentOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttachmentOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetAttachToMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetAttachToMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetDefaultAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftClassPtr<AActor> *)Z_Param__Result=P_THIS->GetDefaultAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetComponentImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetComponentImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetComponentName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetComponentName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetAttachToSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetAttachToSocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetAttachSnapPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetAttachSnapPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetAttachEndTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetAttachEndTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetAttachStartTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetAttachStartTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetAttachTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetAttachTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetAttachOffsetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetAttachOffsetTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execDestroyPreviewAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyPreviewAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execSetPreviewAttachment)
	{
		P_GET_OBJECT(UClass,Z_Param_AttachmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewAttachment(Z_Param_AttachmentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execHasAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execIsAttachmentCompatible)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttachmentCompatible(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execIsAttachmentClassCompatible)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttachmentClassCompatible(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetCompatibleAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSKGDAAttachment>*)Z_Param__Result=P_THIS->GetCompatibleAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execDestroyAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execRemoveAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->RemoveAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execTrySetupExistingAttachmentNoAttach)
	{
		P_GET_OBJECT(AActor,Z_Param_AttachmentToSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrySetupExistingAttachmentNoAttach(Z_Param_AttachmentToSetup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execTrySetupExistingAttachment)
	{
		P_GET_OBJECT(AActor,Z_Param_AttachmentToSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrySetupExistingAttachment(Z_Param_AttachmentToSetup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execTrySetupAttachment)
	{
		P_GET_OBJECT(UClass,Z_Param_AttachmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrySetupAttachment(Z_Param_AttachmentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execTryLoadSetupAttachment)
	{
		P_GET_SOFTCLASS_REF(TSoftClassPtr<AActor> ,Z_Param_Out_AttachmentToLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryLoadSetupAttachment(Z_Param_Out_AttachmentToLoad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execGetOffsetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSKGAttachmentOffsetSettings*)Z_Param__Result=P_THIS->GetOffsetSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execCanAttachmentBeOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAttachmentBeOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execDecrementOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execIncrementOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execSetAttachmentOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachmentOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execFinalizeAttachmentOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizeAttachmentOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execServer_SetAttachmentOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetAttachmentOffset_Validate(Z_Param_Offset))
		{
			RPC_ValidateFailed(TEXT("Server_SetAttachmentOffset_Validate"));
			return;
		}
		P_THIS->Server_SetAttachmentOffset_Implementation(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execServer_DestroyAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_DestroyAttachment_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_DestroyAttachment_Validate"));
			return;
		}
		P_THIS->Server_DestroyAttachment_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execServer_RemoveAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RemoveAttachment_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_RemoveAttachment_Validate"));
			return;
		}
		P_THIS->Server_RemoveAttachment_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execServer_TrySetupExistingAttachmentNoAttach)
	{
		P_GET_OBJECT(AActor,Z_Param_AttachmentToSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_TrySetupExistingAttachmentNoAttach_Validate(Z_Param_AttachmentToSetup))
		{
			RPC_ValidateFailed(TEXT("Server_TrySetupExistingAttachmentNoAttach_Validate"));
			return;
		}
		P_THIS->Server_TrySetupExistingAttachmentNoAttach_Implementation(Z_Param_AttachmentToSetup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execServer_TrySetupExistingAttachment)
	{
		P_GET_OBJECT(AActor,Z_Param_AttachmentToSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_TrySetupExistingAttachment_Validate(Z_Param_AttachmentToSetup))
		{
			RPC_ValidateFailed(TEXT("Server_TrySetupExistingAttachment_Validate"));
			return;
		}
		P_THIS->Server_TrySetupExistingAttachment_Implementation(Z_Param_AttachmentToSetup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execServer_TrySetupAttachment)
	{
		P_GET_OBJECT(UClass,Z_Param_AttachmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_TrySetupAttachment_Validate(Z_Param_AttachmentClass))
		{
			RPC_ValidateFailed(TEXT("Server_TrySetupAttachment_Validate"));
			return;
		}
		P_THIS->Server_TrySetupAttachment_Implementation(Z_Param_AttachmentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execOnRep_AttachmentOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachmentOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGAttachmentComponent::execOnRep_Attachment)
	{
		P_GET_OBJECT(AActor,Z_Param_OldAttachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Attachment(Z_Param_OldAttachment);
		P_NATIVE_END;
	}
	struct SKGAttachmentComponent_eventServer_SetAttachmentOffset_Parms
	{
		float Offset;
	};
	struct SKGAttachmentComponent_eventServer_TrySetupAttachment_Parms
	{
		UClass* AttachmentClass;
	};
	struct SKGAttachmentComponent_eventServer_TrySetupExistingAttachment_Parms
	{
		AActor* AttachmentToSetup;
	};
	struct SKGAttachmentComponent_eventServer_TrySetupExistingAttachmentNoAttach_Parms
	{
		AActor* AttachmentToSetup;
	};
	static FName NAME_USKGAttachmentComponent_Server_DestroyAttachment = FName(TEXT("Server_DestroyAttachment"));
	void USKGAttachmentComponent::Server_DestroyAttachment()
	{
		ProcessEvent(FindFunctionChecked(NAME_USKGAttachmentComponent_Server_DestroyAttachment),NULL);
	}
	static FName NAME_USKGAttachmentComponent_Server_RemoveAttachment = FName(TEXT("Server_RemoveAttachment"));
	void USKGAttachmentComponent::Server_RemoveAttachment()
	{
		ProcessEvent(FindFunctionChecked(NAME_USKGAttachmentComponent_Server_RemoveAttachment),NULL);
	}
	static FName NAME_USKGAttachmentComponent_Server_SetAttachmentOffset = FName(TEXT("Server_SetAttachmentOffset"));
	void USKGAttachmentComponent::Server_SetAttachmentOffset(const float Offset)
	{
		SKGAttachmentComponent_eventServer_SetAttachmentOffset_Parms Parms;
		Parms.Offset=Offset;
		ProcessEvent(FindFunctionChecked(NAME_USKGAttachmentComponent_Server_SetAttachmentOffset),&Parms);
	}
	static FName NAME_USKGAttachmentComponent_Server_TrySetupAttachment = FName(TEXT("Server_TrySetupAttachment"));
	void USKGAttachmentComponent::Server_TrySetupAttachment(UClass* AttachmentClass)
	{
		SKGAttachmentComponent_eventServer_TrySetupAttachment_Parms Parms;
		Parms.AttachmentClass=AttachmentClass;
		ProcessEvent(FindFunctionChecked(NAME_USKGAttachmentComponent_Server_TrySetupAttachment),&Parms);
	}
	static FName NAME_USKGAttachmentComponent_Server_TrySetupExistingAttachment = FName(TEXT("Server_TrySetupExistingAttachment"));
	void USKGAttachmentComponent::Server_TrySetupExistingAttachment(AActor* AttachmentToSetup)
	{
		SKGAttachmentComponent_eventServer_TrySetupExistingAttachment_Parms Parms;
		Parms.AttachmentToSetup=AttachmentToSetup;
		ProcessEvent(FindFunctionChecked(NAME_USKGAttachmentComponent_Server_TrySetupExistingAttachment),&Parms);
	}
	static FName NAME_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach = FName(TEXT("Server_TrySetupExistingAttachmentNoAttach"));
	void USKGAttachmentComponent::Server_TrySetupExistingAttachmentNoAttach(AActor* AttachmentToSetup)
	{
		SKGAttachmentComponent_eventServer_TrySetupExistingAttachmentNoAttach_Parms Parms;
		Parms.AttachmentToSetup=AttachmentToSetup;
		ProcessEvent(FindFunctionChecked(NAME_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach),&Parms);
	}
	void USKGAttachmentComponent::StaticRegisterNativesUSKGAttachmentComponent()
	{
		UClass* Class = USKGAttachmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanAttachmentBeOffset", &USKGAttachmentComponent::execCanAttachmentBeOffset },
			{ "DecrementOffset", &USKGAttachmentComponent::execDecrementOffset },
			{ "DestroyAttachment", &USKGAttachmentComponent::execDestroyAttachment },
			{ "DestroyPreviewAttachment", &USKGAttachmentComponent::execDestroyPreviewAttachment },
			{ "FinalizeAttachmentOffset", &USKGAttachmentComponent::execFinalizeAttachmentOffset },
			{ "GetAttachEndTransform", &USKGAttachmentComponent::execGetAttachEndTransform },
			{ "GetAttachment", &USKGAttachmentComponent::execGetAttachment },
			{ "GetAttachmentOffset", &USKGAttachmentComponent::execGetAttachmentOffset },
			{ "GetAttachOffsetTransform", &USKGAttachmentComponent::execGetAttachOffsetTransform },
			{ "GetAttachSnapPoints", &USKGAttachmentComponent::execGetAttachSnapPoints },
			{ "GetAttachStartTransform", &USKGAttachmentComponent::execGetAttachStartTransform },
			{ "GetAttachToMesh", &USKGAttachmentComponent::execGetAttachToMesh },
			{ "GetAttachToSocket", &USKGAttachmentComponent::execGetAttachToSocket },
			{ "GetAttachTransform", &USKGAttachmentComponent::execGetAttachTransform },
			{ "GetCompatibleAttachments", &USKGAttachmentComponent::execGetCompatibleAttachments },
			{ "GetComponentImage", &USKGAttachmentComponent::execGetComponentImage },
			{ "GetComponentName", &USKGAttachmentComponent::execGetComponentName },
			{ "GetDefaultAttachment", &USKGAttachmentComponent::execGetDefaultAttachment },
			{ "GetIsRequiredToFunction", &USKGAttachmentComponent::execGetIsRequiredToFunction },
			{ "GetOffsetSettings", &USKGAttachmentComponent::execGetOffsetSettings },
			{ "HasAttachment", &USKGAttachmentComponent::execHasAttachment },
			{ "IncrementOffset", &USKGAttachmentComponent::execIncrementOffset },
			{ "IsAttachmentClassCompatible", &USKGAttachmentComponent::execIsAttachmentClassCompatible },
			{ "IsAttachmentCompatible", &USKGAttachmentComponent::execIsAttachmentCompatible },
			{ "OnRep_Attachment", &USKGAttachmentComponent::execOnRep_Attachment },
			{ "OnRep_AttachmentOffset", &USKGAttachmentComponent::execOnRep_AttachmentOffset },
			{ "RemoveAttachment", &USKGAttachmentComponent::execRemoveAttachment },
			{ "Server_DestroyAttachment", &USKGAttachmentComponent::execServer_DestroyAttachment },
			{ "Server_RemoveAttachment", &USKGAttachmentComponent::execServer_RemoveAttachment },
			{ "Server_SetAttachmentOffset", &USKGAttachmentComponent::execServer_SetAttachmentOffset },
			{ "Server_TrySetupAttachment", &USKGAttachmentComponent::execServer_TrySetupAttachment },
			{ "Server_TrySetupExistingAttachment", &USKGAttachmentComponent::execServer_TrySetupExistingAttachment },
			{ "Server_TrySetupExistingAttachmentNoAttach", &USKGAttachmentComponent::execServer_TrySetupExistingAttachmentNoAttach },
			{ "SetAttachmentOffset", &USKGAttachmentComponent::execSetAttachmentOffset },
			{ "SetPreviewAttachment", &USKGAttachmentComponent::execSetPreviewAttachment },
			{ "TryLoadSetupAttachment", &USKGAttachmentComponent::execTryLoadSetupAttachment },
			{ "TrySetupAttachment", &USKGAttachmentComponent::execTrySetupAttachment },
			{ "TrySetupExistingAttachment", &USKGAttachmentComponent::execTrySetupExistingAttachment },
			{ "TrySetupExistingAttachmentNoAttach", &USKGAttachmentComponent::execTrySetupExistingAttachmentNoAttach },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics
	{
		struct SKGAttachmentComponent_eventCanAttachmentBeOffset_Parms
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
	void Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGAttachmentComponent_eventCanAttachmentBeOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentComponent_eventCanAttachmentBeOffset_Parms), &Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment|Settings|Offset" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "CanAttachmentBeOffset", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::SKGAttachmentComponent_eventCanAttachmentBeOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::SKGAttachmentComponent_eventCanAttachmentBeOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_DecrementOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_DecrementOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// This will move the attachment backwards by 1 OffsetIncrementalAmount\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This will move the attachment backwards by 1 OffsetIncrementalAmount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_DecrementOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "DecrementOffset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_DecrementOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_DecrementOffset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_DecrementOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_DecrementOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_DestroyAttachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_DestroyAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// Will remove the current attachment from this component and destroy it\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "Will remove the current attachment from this component and destroy it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_DestroyAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "DestroyAttachment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_DestroyAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_DestroyAttachment_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_DestroyAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_DestroyAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_DestroyPreviewAttachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_DestroyPreviewAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment|Preview" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_DestroyPreviewAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "DestroyPreviewAttachment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_DestroyPreviewAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_DestroyPreviewAttachment_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_DestroyPreviewAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_DestroyPreviewAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_FinalizeAttachmentOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_FinalizeAttachmentOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_FinalizeAttachmentOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "FinalizeAttachmentOffset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_FinalizeAttachmentOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_FinalizeAttachmentOffset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_FinalizeAttachmentOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_FinalizeAttachmentOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics
	{
		struct SKGAttachmentComponent_eventGetAttachEndTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetAttachEndTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment|Offset" },
		{ "Comment", "// This will return the Maximum Offset transform\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This will return the Maximum Offset transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetAttachEndTransform", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::SKGAttachmentComponent_eventGetAttachEndTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::SKGAttachmentComponent_eventGetAttachEndTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics
	{
		struct SKGAttachmentComponent_eventGetAttachment_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetAttachment_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::SKGAttachmentComponent_eventGetAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::SKGAttachmentComponent_eventGetAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics
	{
		struct SKGAttachmentComponent_eventGetAttachmentOffset_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetAttachmentOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetAttachmentOffset", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::SKGAttachmentComponent_eventGetAttachmentOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::SKGAttachmentComponent_eventGetAttachmentOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics
	{
		struct SKGAttachmentComponent_eventGetAttachOffsetTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetAttachOffsetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment|Offset" },
		{ "Comment", "// This will return the position of the current attachment offset\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This will return the position of the current attachment offset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetAttachOffsetTransform", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::SKGAttachmentComponent_eventGetAttachOffsetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::SKGAttachmentComponent_eventGetAttachOffsetTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics
	{
		struct SKGAttachmentComponent_eventGetAttachSnapPoints_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetAttachSnapPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment|Offset" },
		{ "Comment", "/**\n\x09 * This will return the snap points between the Minimum and Maximum offset at the defined OffsetSnapDistance.\n\x09 * If the OffsetSnapDistance is 0, it will return the Minimum and Maximum only.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This will return the snap points between the Minimum and Maximum offset at the defined OffsetSnapDistance.\nIf the OffsetSnapDistance is 0, it will return the Minimum and Maximum only." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetAttachSnapPoints", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::SKGAttachmentComponent_eventGetAttachSnapPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::SKGAttachmentComponent_eventGetAttachSnapPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics
	{
		struct SKGAttachmentComponent_eventGetAttachStartTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetAttachStartTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment|Offset" },
		{ "Comment", "// This will return the Minimum Offset transform\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This will return the Minimum Offset transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetAttachStartTransform", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::SKGAttachmentComponent_eventGetAttachStartTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::SKGAttachmentComponent_eventGetAttachStartTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics
	{
		struct SKGAttachmentComponent_eventGetAttachToMesh_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetAttachToMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetAttachToMesh", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::SKGAttachmentComponent_eventGetAttachToMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::SKGAttachmentComponent_eventGetAttachToMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics
	{
		struct SKGAttachmentComponent_eventGetAttachToSocket_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetAttachToSocket_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetAttachToSocket", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::SKGAttachmentComponent_eventGetAttachToSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::SKGAttachmentComponent_eventGetAttachToSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics
	{
		struct SKGAttachmentComponent_eventGetAttachTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetAttachTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment|Offset" },
		{ "Comment", "// This will return the AttachToSocket transform\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This will return the AttachToSocket transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetAttachTransform", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::SKGAttachmentComponent_eventGetAttachTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::SKGAttachmentComponent_eventGetAttachTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics
	{
		struct SKGAttachmentComponent_eventGetCompatibleAttachments_Parms
		{
			TArray<FSKGDAAttachment> ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGDAAttachment, METADATA_PARAMS(0, nullptr) }; // 1795441745
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetCompatibleAttachments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::NewProp_ReturnValue_MetaData) }; // 1795441745
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetCompatibleAttachments", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::SKGAttachmentComponent_eventGetCompatibleAttachments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::SKGAttachmentComponent_eventGetCompatibleAttachments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics
	{
		struct SKGAttachmentComponent_eventGetComponentImage_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetComponentImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetComponentImage", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::SKGAttachmentComponent_eventGetComponentImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::SKGAttachmentComponent_eventGetComponentImage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics
	{
		struct SKGAttachmentComponent_eventGetComponentName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetComponentName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetComponentName", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::SKGAttachmentComponent_eventGetComponentName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::SKGAttachmentComponent_eventGetComponentName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics
	{
		struct SKGAttachmentComponent_eventGetDefaultAttachment_Parms
		{
			TSoftClassPtr<AActor>  ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetDefaultAttachment_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetDefaultAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::SKGAttachmentComponent_eventGetDefaultAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::SKGAttachmentComponent_eventGetDefaultAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics
	{
		struct SKGAttachmentComponent_eventGetIsRequiredToFunction_Parms
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
	void Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGAttachmentComponent_eventGetIsRequiredToFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentComponent_eventGetIsRequiredToFunction_Parms), &Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetIsRequiredToFunction", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::SKGAttachmentComponent_eventGetIsRequiredToFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::SKGAttachmentComponent_eventGetIsRequiredToFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics
	{
		struct SKGAttachmentComponent_eventGetOffsetSettings_Parms
		{
			FSKGAttachmentOffsetSettings ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventGetOffsetSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::NewProp_ReturnValue_MetaData) }; // 1775379949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "GetOffsetSettings", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::SKGAttachmentComponent_eventGetOffsetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::SKGAttachmentComponent_eventGetOffsetSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics
	{
		struct SKGAttachmentComponent_eventHasAttachment_Parms
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
	void Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGAttachmentComponent_eventHasAttachment_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentComponent_eventHasAttachment_Parms), &Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "HasAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::SKGAttachmentComponent_eventHasAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::SKGAttachmentComponent_eventHasAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_IncrementOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_IncrementOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// This will move the attachment forward by 1 OffsetIncrementalAmount\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This will move the attachment forward by 1 OffsetIncrementalAmount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_IncrementOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "IncrementOffset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_IncrementOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_IncrementOffset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_IncrementOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_IncrementOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics
	{
		struct SKGAttachmentComponent_eventIsAttachmentClassCompatible_Parms
		{
			const UClass* Class;
			bool ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventIsAttachmentClassCompatible_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::NewProp_Class_MetaData), Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::NewProp_Class_MetaData) };
	void Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGAttachmentComponent_eventIsAttachmentClassCompatible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentComponent_eventIsAttachmentClassCompatible_Parms), &Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "IsAttachmentClassCompatible", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::SKGAttachmentComponent_eventIsAttachmentClassCompatible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::SKGAttachmentComponent_eventIsAttachmentClassCompatible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics
	{
		struct SKGAttachmentComponent_eventIsAttachmentCompatible_Parms
		{
			const AActor* Actor;
			bool ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventIsAttachmentCompatible_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::NewProp_Actor_MetaData) };
	void Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGAttachmentComponent_eventIsAttachmentCompatible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGAttachmentComponent_eventIsAttachmentCompatible_Parms), &Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "IsAttachmentCompatible", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::SKGAttachmentComponent_eventIsAttachmentCompatible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::SKGAttachmentComponent_eventIsAttachmentCompatible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics
	{
		struct SKGAttachmentComponent_eventOnRep_Attachment_Parms
		{
			AActor* OldAttachment;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldAttachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::NewProp_OldAttachment = { "OldAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventOnRep_Attachment_Parms, OldAttachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::NewProp_OldAttachment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "OnRep_Attachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::SKGAttachmentComponent_eventOnRep_Attachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::SKGAttachmentComponent_eventOnRep_Attachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_OnRep_AttachmentOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_OnRep_AttachmentOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_OnRep_AttachmentOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "OnRep_AttachmentOffset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_OnRep_AttachmentOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_OnRep_AttachmentOffset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_OnRep_AttachmentOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_OnRep_AttachmentOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics
	{
		struct SKGAttachmentComponent_eventRemoveAttachment_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventRemoveAttachment_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// Will remove the current attachment from this component. Will not destroy\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "Will remove the current attachment from this component. Will not destroy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "RemoveAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::SKGAttachmentComponent_eventRemoveAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::SKGAttachmentComponent_eventRemoveAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_Server_DestroyAttachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_Server_DestroyAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_Server_DestroyAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "Server_DestroyAttachment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_DestroyAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_Server_DestroyAttachment_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_Server_DestroyAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_Server_DestroyAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_Server_RemoveAttachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_Server_RemoveAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_Server_RemoveAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "Server_RemoveAttachment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_RemoveAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_Server_RemoveAttachment_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_Server_RemoveAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_Server_RemoveAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventServer_SetAttachmentOffset_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::NewProp_Offset_MetaData), Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::NewProp_Offset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "Server_SetAttachmentOffset", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::PropPointers), sizeof(SKGAttachmentComponent_eventServer_SetAttachmentOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGAttachmentComponent_eventServer_SetAttachmentOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventServer_TrySetupAttachment_Parms, AttachmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::NewProp_AttachmentClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "Server_TrySetupAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::PropPointers), sizeof(SKGAttachmentComponent_eventServer_TrySetupAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGAttachmentComponent_eventServer_TrySetupAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentToSetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::NewProp_AttachmentToSetup = { "AttachmentToSetup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventServer_TrySetupExistingAttachment_Parms, AttachmentToSetup), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::NewProp_AttachmentToSetup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "Server_TrySetupExistingAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::PropPointers), sizeof(SKGAttachmentComponent_eventServer_TrySetupExistingAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGAttachmentComponent_eventServer_TrySetupExistingAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentToSetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::NewProp_AttachmentToSetup = { "AttachmentToSetup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventServer_TrySetupExistingAttachmentNoAttach_Parms, AttachmentToSetup), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::NewProp_AttachmentToSetup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "Server_TrySetupExistingAttachmentNoAttach", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::PropPointers), sizeof(SKGAttachmentComponent_eventServer_TrySetupExistingAttachmentNoAttach_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGAttachmentComponent_eventServer_TrySetupExistingAttachmentNoAttach_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics
	{
		struct SKGAttachmentComponent_eventSetAttachmentOffset_Parms
		{
			float Offset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventSetAttachmentOffset_Parms, Offset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "SetAttachmentOffset", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::SKGAttachmentComponent_eventSetAttachmentOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::SKGAttachmentComponent_eventSetAttachmentOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics
	{
		struct SKGAttachmentComponent_eventSetPreviewAttachment_Parms
		{
			UClass* AttachmentClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventSetPreviewAttachment_Parms, AttachmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::NewProp_AttachmentClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment|Preview" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "SetPreviewAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::SKGAttachmentComponent_eventSetPreviewAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::SKGAttachmentComponent_eventSetPreviewAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics
	{
		struct SKGAttachmentComponent_eventTryLoadSetupAttachment_Parms
		{
			TSoftClassPtr<AActor>  AttachmentToLoad;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AttachmentToLoad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::NewProp_AttachmentToLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::NewProp_AttachmentToLoad = { "AttachmentToLoad", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventTryLoadSetupAttachment_Parms, AttachmentToLoad), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::NewProp_AttachmentToLoad_MetaData), Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::NewProp_AttachmentToLoad_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::NewProp_AttachmentToLoad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// If AttachmentToLoad is not loaded it will load and be constructed as an attachment. RemoveAttachment should be called first if theres an existing attachment\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "If AttachmentToLoad is not loaded it will load and be constructed as an attachment. RemoveAttachment should be called first if theres an existing attachment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "TryLoadSetupAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::SKGAttachmentComponent_eventTryLoadSetupAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::SKGAttachmentComponent_eventTryLoadSetupAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics
	{
		struct SKGAttachmentComponent_eventTrySetupAttachment_Parms
		{
			UClass* AttachmentClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventTrySetupAttachment_Parms, AttachmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::NewProp_AttachmentClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// The provided class will be spawned and constructed as an attachment. RemoveAttachment should be called first if theres an existing attachment\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "The provided class will be spawned and constructed as an attachment. RemoveAttachment should be called first if theres an existing attachment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "TrySetupAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::SKGAttachmentComponent_eventTrySetupAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::SKGAttachmentComponent_eventTrySetupAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics
	{
		struct SKGAttachmentComponent_eventTrySetupExistingAttachment_Parms
		{
			AActor* AttachmentToSetup;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentToSetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::NewProp_AttachmentToSetup = { "AttachmentToSetup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventTrySetupExistingAttachment_Parms, AttachmentToSetup), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::NewProp_AttachmentToSetup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// The provided actor will be setup as the new attachment. RemoveAttachment should be called first if theres an existing attachment\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "The provided actor will be setup as the new attachment. RemoveAttachment should be called first if theres an existing attachment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "TrySetupExistingAttachment", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::SKGAttachmentComponent_eventTrySetupExistingAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::SKGAttachmentComponent_eventTrySetupExistingAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics
	{
		struct SKGAttachmentComponent_eventTrySetupExistingAttachmentNoAttach_Parms
		{
			AActor* AttachmentToSetup;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentToSetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::NewProp_AttachmentToSetup = { "AttachmentToSetup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAttachmentComponent_eventTrySetupExistingAttachmentNoAttach_Parms, AttachmentToSetup), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::NewProp_AttachmentToSetup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "/**\n\x09 * This function is intended to be used if you already have an attachment system (such as an inventory) that attaches the actor for you.\n\x09 * The provided actor will be setup as the new attachment.\n\x09 * RemoveAttachment should be called first if theres an existing attachment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This function is intended to be used if you already have an attachment system (such as an inventory) that attaches the actor for you.\nThe provided actor will be setup as the new attachment.\nRemoveAttachment should be called first if theres an existing attachment." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAttachmentComponent, nullptr, "TrySetupExistingAttachmentNoAttach", nullptr, nullptr, Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::SKGAttachmentComponent_eventTrySetupExistingAttachmentNoAttach_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::SKGAttachmentComponent_eventTrySetupExistingAttachmentNoAttach_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGAttachmentComponent);
	UClass* Z_Construct_UClass_USKGAttachmentComponent_NoRegister()
	{
		return USKGAttachmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGAttachmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachToMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachToSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRequiredToFuntion_MetaData[];
#endif
		static void NewProp_bIsRequiredToFuntion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRequiredToFuntion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetLeaderPoseComponent_MetaData[];
#endif
		static void NewProp_bAutoSetLeaderPoseComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetLeaderPoseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachmentMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomDefaultAttachment_MetaData[];
#endif
		static void NewProp_bRandomDefaultAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomDefaultAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultAttachment;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompatibleAttachments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleAttachments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleAttachments;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachToMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Attachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttachmentOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAttachmentManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedAttachmentManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttachmentAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachmentAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttachmentRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachmentRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttachmentDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachmentDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttachmentChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachmentChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOffsetChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOffsetChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGAttachmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGAttachmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGAttachmentComponent_CanAttachmentBeOffset, "CanAttachmentBeOffset" }, // 1247931552
		{ &Z_Construct_UFunction_USKGAttachmentComponent_DecrementOffset, "DecrementOffset" }, // 4263782296
		{ &Z_Construct_UFunction_USKGAttachmentComponent_DestroyAttachment, "DestroyAttachment" }, // 1548939147
		{ &Z_Construct_UFunction_USKGAttachmentComponent_DestroyPreviewAttachment, "DestroyPreviewAttachment" }, // 3160836154
		{ &Z_Construct_UFunction_USKGAttachmentComponent_FinalizeAttachmentOffset, "FinalizeAttachmentOffset" }, // 3436122462
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetAttachEndTransform, "GetAttachEndTransform" }, // 839973388
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetAttachment, "GetAttachment" }, // 1567582281
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetAttachmentOffset, "GetAttachmentOffset" }, // 1513766734
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetAttachOffsetTransform, "GetAttachOffsetTransform" }, // 2123235327
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetAttachSnapPoints, "GetAttachSnapPoints" }, // 642043142
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetAttachStartTransform, "GetAttachStartTransform" }, // 3816892932
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToMesh, "GetAttachToMesh" }, // 1515791836
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetAttachToSocket, "GetAttachToSocket" }, // 318988165
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetAttachTransform, "GetAttachTransform" }, // 1236125174
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetCompatibleAttachments, "GetCompatibleAttachments" }, // 519116905
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetComponentImage, "GetComponentImage" }, // 4077591428
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetComponentName, "GetComponentName" }, // 3530056092
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetDefaultAttachment, "GetDefaultAttachment" }, // 3263288130
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetIsRequiredToFunction, "GetIsRequiredToFunction" }, // 883210264
		{ &Z_Construct_UFunction_USKGAttachmentComponent_GetOffsetSettings, "GetOffsetSettings" }, // 2312386845
		{ &Z_Construct_UFunction_USKGAttachmentComponent_HasAttachment, "HasAttachment" }, // 1776900716
		{ &Z_Construct_UFunction_USKGAttachmentComponent_IncrementOffset, "IncrementOffset" }, // 3880369607
		{ &Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentClassCompatible, "IsAttachmentClassCompatible" }, // 1604877389
		{ &Z_Construct_UFunction_USKGAttachmentComponent_IsAttachmentCompatible, "IsAttachmentCompatible" }, // 4174042136
		{ &Z_Construct_UFunction_USKGAttachmentComponent_OnRep_Attachment, "OnRep_Attachment" }, // 1491807315
		{ &Z_Construct_UFunction_USKGAttachmentComponent_OnRep_AttachmentOffset, "OnRep_AttachmentOffset" }, // 3832009410
		{ &Z_Construct_UFunction_USKGAttachmentComponent_RemoveAttachment, "RemoveAttachment" }, // 343674247
		{ &Z_Construct_UFunction_USKGAttachmentComponent_Server_DestroyAttachment, "Server_DestroyAttachment" }, // 1940140302
		{ &Z_Construct_UFunction_USKGAttachmentComponent_Server_RemoveAttachment, "Server_RemoveAttachment" }, // 4003572906
		{ &Z_Construct_UFunction_USKGAttachmentComponent_Server_SetAttachmentOffset, "Server_SetAttachmentOffset" }, // 1374343646
		{ &Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupAttachment, "Server_TrySetupAttachment" }, // 481023683
		{ &Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachment, "Server_TrySetupExistingAttachment" }, // 2997950306
		{ &Z_Construct_UFunction_USKGAttachmentComponent_Server_TrySetupExistingAttachmentNoAttach, "Server_TrySetupExistingAttachmentNoAttach" }, // 1821139978
		{ &Z_Construct_UFunction_USKGAttachmentComponent_SetAttachmentOffset, "SetAttachmentOffset" }, // 937719952
		{ &Z_Construct_UFunction_USKGAttachmentComponent_SetPreviewAttachment, "SetPreviewAttachment" }, // 4103905729
		{ &Z_Construct_UFunction_USKGAttachmentComponent_TryLoadSetupAttachment, "TryLoadSetupAttachment" }, // 3778434132
		{ &Z_Construct_UFunction_USKGAttachmentComponent_TrySetupAttachment, "TrySetupAttachment" }, // 4140855593
		{ &Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachment, "TrySetupExistingAttachment" }, // 2745167928
		{ &Z_Construct_UFunction_USKGAttachmentComponent_TrySetupExistingAttachmentNoAttach, "TrySetupExistingAttachmentNoAttach" }, // 969581252
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGAttachmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMeshName_MetaData[] = {
		{ "Category", "SKGAttachment|Initialize" },
		{ "Comment", "// The name of the mesh for the spawned attachment to attach to\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "The name of the mesh for the spawned attachment to attach to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMeshName = { "AttachToMeshName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, AttachToMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMeshName_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMeshName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToSocket_MetaData[] = {
		{ "BlueprintGetter", "GetAttachToSocket" },
		{ "Category", "SKGAttachment|Initialize" },
		{ "Comment", "// The name of the socket on the AttachToMeshName mesh for the spawned attachment to attach to\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "The name of the socket on the AttachToMeshName mesh for the spawned attachment to attach to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToSocket = { "AttachToSocket", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, AttachToSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToSocket_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentName_MetaData[] = {
		{ "BlueprintGetter", "GetComponentName" },
		{ "Category", "SKGAttachment|Initialize" },
		{ "Comment", "// This is a general variable, useful for customization UI\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This is a general variable, useful for customization UI" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentName_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentImage_MetaData[] = {
		{ "BlueprintGetter", "GetComponentImage" },
		{ "Category", "SKGAttachment|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentImage = { "ComponentImage", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, ComponentImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentImage_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGAttachment|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_GameplayTags_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_GameplayTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bIsRequiredToFuntion_MetaData[] = {
		{ "BlueprintGetter", "GetIsRequiredToFunction" },
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bIsRequiredToFuntion_SetBit(void* Obj)
	{
		((USKGAttachmentComponent*)Obj)->bIsRequiredToFuntion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bIsRequiredToFuntion = { "bIsRequiredToFuntion", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGAttachmentComponent), &Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bIsRequiredToFuntion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bIsRequiredToFuntion_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bIsRequiredToFuntion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoSetLeaderPoseComponent_MetaData[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoSetLeaderPoseComponent_SetBit(void* Obj)
	{
		((USKGAttachmentComponent*)Obj)->bAutoSetLeaderPoseComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoSetLeaderPoseComponent = { "bAutoSetLeaderPoseComponent", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGAttachmentComponent), &Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoSetLeaderPoseComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoSetLeaderPoseComponent_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoSetLeaderPoseComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentMeshName_MetaData[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "/**\n\x09 *The name of the mesh of the child attachment to be attached, such as a \"BackpackMesh\" on a character, BackpackMesh would be the name\n\x09 * and attach to the character mesh\n\x09 */" },
		{ "EditCondition", "bAutoSetLeaderPoseComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "The name of the mesh of the child attachment to be attached, such as a \"BackpackMesh\" on a character, BackpackMesh would be the name\nand attach to the character mesh" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentMeshName = { "AttachmentMeshName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, AttachmentMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentMeshName_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentMeshName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bRandomDefaultAttachment_MetaData[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// If true, a random attachment from CompatibleAttachments will be used for the default attachment\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "If true, a random attachment from CompatibleAttachments will be used for the default attachment" },
	};
#endif
	void Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bRandomDefaultAttachment_SetBit(void* Obj)
	{
		((USKGAttachmentComponent*)Obj)->bRandomDefaultAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bRandomDefaultAttachment = { "bRandomDefaultAttachment", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGAttachmentComponent), &Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bRandomDefaultAttachment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bRandomDefaultAttachment_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bRandomDefaultAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_DefaultAttachment_MetaData[] = {
		{ "BlueprintGetter", "GetDefaultAttachment" },
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// If set, the class here will be spawned upon construction of this component and spawned\n" },
		{ "EditCondition", "!bRandomDefaultAttachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "If set, the class here will be spawned upon construction of this component and spawned" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_DefaultAttachment = { "DefaultAttachment", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, DefaultAttachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_DefaultAttachment_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_DefaultAttachment_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CompatibleAttachments_Inner = { "CompatibleAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGPDAAttachmentCompatibility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CompatibleAttachments_MetaData[] = {
		{ "Category", "SKGAttachment|Attachment" },
		{ "Comment", "// If empty, any attachment can be spawned and attached. If set, only attachments listed here can be attached\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "If empty, any attachment can be spawned and attached. If set, only attachments listed here can be attached" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CompatibleAttachments = { "CompatibleAttachments", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, CompatibleAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CompatibleAttachments_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CompatibleAttachments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAllowClientSideModification_MetaData[] = {
		{ "Category", "SKGAttachment|Attachment|Settings" },
		{ "Comment", "// If true, clients can remove, destroy, and add attachments as long as they are the owner of the parent of this component\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "If true, clients can remove, destroy, and add attachments as long as they are the owner of the parent of this component" },
	};
#endif
	void Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAllowClientSideModification_SetBit(void* Obj)
	{
		((USKGAttachmentComponent*)Obj)->bAllowClientSideModification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAllowClientSideModification = { "bAllowClientSideModification", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGAttachmentComponent), &Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAllowClientSideModification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAllowClientSideModification_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAllowClientSideModification_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData[] = {
		{ "Category", "SKGAttachment|Attachment|Settings" },
		{ "Comment", "// Useful if your NetUpdateFrequency is set super low\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "Useful if your NetUpdateFrequency is set super low" },
	};
#endif
	void Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj)
	{
		((USKGAttachmentComponent*)Obj)->bAutoCallForceNetUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoCallForceNetUpdate = { "bAutoCallForceNetUpdate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGAttachmentComponent), &Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OffsetSettings_MetaData[] = {
		{ "BlueprintGetter", "GetOffsetSettings" },
		{ "Category", "SKGAttachment|Attachment|Settings" },
		{ "Comment", "// If false, FinalizeAttachmentOffset will need to be called in order to replicate from the client\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "If false, FinalizeAttachmentOffset will need to be called in order to replicate from the client" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OffsetSettings = { "OffsetSettings", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, OffsetSettings), Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OffsetSettings_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OffsetSettings_MetaData) }; // 1775379949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentRules_MetaData[] = {
		{ "Category", "SKGAttachment|Attachment|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentRules = { "AttachmentRules", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, AttachmentRules), Z_Construct_UScriptStruct_FSKGAttachmentAttachRules, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentRules_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentRules_MetaData) }; // 3003327721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMesh_MetaData[] = {
		{ "BlueprintGetter", "GetAttachToMesh" },
		{ "Category", "SKGAttachment|Attachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMesh = { "AttachToMesh", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, AttachToMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMesh_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_Attachment_MetaData[] = {
		{ "BlueprintGetter", "GetAttachment" },
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_Attachment = { "Attachment", "OnRep_Attachment", (EPropertyFlags)0x0024080100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, Attachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_Attachment_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_Attachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentOffset_MetaData[] = {
		{ "BlueprintGetter", "GetAttachmentOffset" },
		{ "Category", "SKGAttachment|Attachment" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentOffset = { "AttachmentOffset", "OnRep_AttachmentOffset", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, AttachmentOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentOffset_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CachedAttachmentManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CachedAttachmentManager = { "CachedAttachmentManager", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, CachedAttachmentManager), Z_Construct_UClass_USKGAttachmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CachedAttachmentManager_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CachedAttachmentManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_PreviewAttachment_MetaData[] = {
		{ "Comment", "// This should never change so lets cache it\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "This should never change so lets cache it" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_PreviewAttachment = { "PreviewAttachment", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, PreviewAttachment), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_PreviewAttachment_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_PreviewAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentAdded_MetaData[] = {
		{ "Category", "SKGAttachment|Events" },
		{ "Comment", "// Runs client and server side on replication\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "Runs client and server side on replication" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentAdded = { "OnAttachmentAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, OnAttachmentAdded), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentAdded_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentAdded_MetaData) }; // 3812078059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentRemoved_MetaData[] = {
		{ "Category", "SKGAttachment|Events" },
		{ "Comment", "// Runs client and server side on replication\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "Runs client and server side on replication" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentRemoved = { "OnAttachmentRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, OnAttachmentRemoved), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentRemoved_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentRemoved_MetaData) }; // 4147823618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentDestroyed_MetaData[] = {
		{ "Category", "SKGAttachment|Events" },
		{ "Comment", "// Runs server side only right before the attachment is marked for destroy\n" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
		{ "ToolTip", "Runs server side only right before the attachment is marked for destroy" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentDestroyed = { "OnAttachmentDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, OnAttachmentDestroyed), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentDestroyed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentDestroyed_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentDestroyed_MetaData) }; // 2344610741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentChanged_MetaData[] = {
		{ "Category", "SKGAttachment|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentChanged = { "OnAttachmentChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, OnAttachmentChanged), Z_Construct_UDelegateFunction_SKGAttachment_OnAttachmentChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentChanged_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentChanged_MetaData) }; // 1690928945
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnOffsetChanged_MetaData[] = {
		{ "Category", "SKGAttachment|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnOffsetChanged = { "OnOffsetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGAttachmentComponent, OnOffsetChanged), Z_Construct_UDelegateFunction_SKGAttachment_OnOffsetChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnOffsetChanged_MetaData), Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnOffsetChanged_MetaData) }; // 192266107
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGAttachmentComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_ComponentImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bIsRequiredToFuntion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoSetLeaderPoseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bRandomDefaultAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_DefaultAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CompatibleAttachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CompatibleAttachments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAllowClientSideModification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_bAutoCallForceNetUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OffsetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachToMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_Attachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_AttachmentOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_CachedAttachmentManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_PreviewAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnAttachmentChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGAttachmentComponent_Statics::NewProp_OnOffsetChanged,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGAttachmentComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGAttachmentComponent, IGameplayTagAssetInterface), false },  // 3291755243
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGAttachmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGAttachmentComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGAttachmentComponent_Statics::ClassParams = {
		&USKGAttachmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGAttachmentComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGAttachmentComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAttachmentComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGAttachmentComponent()
	{
		if (!Z_Registration_Info_UClass_USKGAttachmentComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGAttachmentComponent.OuterSingleton, Z_Construct_UClass_USKGAttachmentComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGAttachmentComponent.OuterSingleton;
	}
	template<> SKGATTACHMENT_API UClass* StaticClass<USKGAttachmentComponent>()
	{
		return USKGAttachmentComponent::StaticClass();
	}

	void USKGAttachmentComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Attachment(TEXT("Attachment"));
		static const FName Name_AttachmentOffset(TEXT("AttachmentOffset"));

		const bool bIsValid = true
			&& Name_Attachment == ClassReps[(int32)ENetFields_Private::Attachment].Property->GetFName()
			&& Name_AttachmentOffset == ClassReps[(int32)ENetFields_Private::AttachmentOffset].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USKGAttachmentComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGAttachmentComponent);
	USKGAttachmentComponent::~USKGAttachmentComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_Statics::ScriptStructInfo[] = {
		{ FSKGAttachmentOffsetSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGAttachmentOffsetSettings_Statics::NewStructOps, TEXT("SKGAttachmentOffsetSettings"), &Z_Registration_Info_UScriptStruct_SKGAttachmentOffsetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGAttachmentOffsetSettings), 1775379949U) },
		{ FSKGAttachmentAttachRules::StaticStruct, Z_Construct_UScriptStruct_FSKGAttachmentAttachRules_Statics::NewStructOps, TEXT("SKGAttachmentAttachRules"), &Z_Registration_Info_UScriptStruct_SKGAttachmentAttachRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGAttachmentAttachRules), 3003327721U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGAttachmentComponent, USKGAttachmentComponent::StaticClass, TEXT("USKGAttachmentComponent"), &Z_Registration_Info_UClass_USKGAttachmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGAttachmentComponent), 3160400699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_147218781(TEXT("/Script/SKGAttachment"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_Components_SKGAttachmentComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
