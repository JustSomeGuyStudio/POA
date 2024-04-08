// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGShooterFramework/Public/Components/SKGShooterPawnComponent.h"
#include "GameplayTagContainer.h"
#include "SKGProceduralAnim/Public/DataTypes/SKGProceduralDataTypes.h"
#include "SKGShooterFramework/Public/DataTypes/SKGShooterFrameworkDataTypes.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterPawnComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SKGLIGHTLASER_API UClass* Z_Construct_UClass_USKGLightLaserComponent_NoRegister();
	SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticComponent_NoRegister();
	SKGPROCEDURALANIM_API UClass* Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGCurveSettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings();
	SKGPROCEDURALANIM_API UScriptStruct* Z_Construct_UScriptStruct_FSKGToFromCurveSettings();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGFirearmComponent_NoRegister();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterFrameworkAnimInstance_NoRegister();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterPawnComponent();
	SKGSHOOTERFRAMEWORK_API UClass* Z_Construct_UClass_USKGShooterPawnComponent_NoRegister();
	SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature();
	SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature();
	SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGFreeLookSettings();
	SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData();
	SKGSHOOTERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData();
	UPackage* Z_Construct_UPackage__Script_SKGShooterFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGFreeLookSettings;
class UScriptStruct* FSKGFreeLookSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGFreeLookSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGFreeLookSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGFreeLookSettings, (UObject*)Z_Construct_UPackage__Script_SKGShooterFramework(), TEXT("SKGFreeLookSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGFreeLookSettings.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORK_API UScriptStruct* StaticStruct<FSKGFreeLookSettings>()
{
	return FSKGFreeLookSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetUseControllerRotationYaw_MetaData[];
#endif
		static void NewProp_bAutoSetUseControllerRotationYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetUseControllerRotationYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchDown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxYawLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxYawLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxYawRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxYawRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGFreeLookSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_bAutoSetUseControllerRotationYaw_MetaData[] = {
		{ "Category", "SKGFreeLookSettings" },
		{ "Comment", "// If true, it will auto set bUseControllerRotationYaw to true and false\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "If true, it will auto set bUseControllerRotationYaw to true and false" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_bAutoSetUseControllerRotationYaw_SetBit(void* Obj)
	{
		((FSKGFreeLookSettings*)Obj)->bAutoSetUseControllerRotationYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_bAutoSetUseControllerRotationYaw = { "bAutoSetUseControllerRotationYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGFreeLookSettings), &Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_bAutoSetUseControllerRotationYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_bAutoSetUseControllerRotationYaw_MetaData), Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_bAutoSetUseControllerRotationYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchUp_MetaData[] = {
		{ "Category", "SKGFreeLookSettings" },
		{ "Comment", "// The max you can look up\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The max you can look up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchUp = { "MaxPitchUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFreeLookSettings, MaxPitchUp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchUp_MetaData), Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchDown_MetaData[] = {
		{ "Category", "SKGFreeLookSettings" },
		{ "Comment", "// The max you can look down\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The max you can look down" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchDown = { "MaxPitchDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFreeLookSettings, MaxPitchDown), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchDown_MetaData), Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawLeft_MetaData[] = {
		{ "Category", "SKGFreeLookSettings" },
		{ "Comment", "// The max you can look left\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The max you can look left" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawLeft = { "MaxYawLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFreeLookSettings, MaxYawLeft), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawLeft_MetaData), Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawRight_MetaData[] = {
		{ "Category", "SKGFreeLookSettings" },
		{ "Comment", "// The max you can look right\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The max you can look right" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawRight = { "MaxYawRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGFreeLookSettings, MaxYawRight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawRight_MetaData), Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawRight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_bAutoSetUseControllerRotationYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxPitchDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewProp_MaxYawRight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
		nullptr,
		&NewStructOps,
		"SKGFreeLookSettings",
		Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::PropPointers),
		sizeof(FSKGFreeLookSettings),
		alignof(FSKGFreeLookSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGFreeLookSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGFreeLookSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGFreeLookSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGFreeLookSettings.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics
	{
		struct _Script_SKGShooterFramework_eventOnPoseComplete_Parms
		{
			FSKGProceduralPoseReplicationData CurrentPoseData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPoseData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPoseData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::NewProp_CurrentPoseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::NewProp_CurrentPoseData = { "CurrentPoseData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGShooterFramework_eventOnPoseComplete_Parms, CurrentPoseData), Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::NewProp_CurrentPoseData_MetaData), Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::NewProp_CurrentPoseData_MetaData) }; // 2945867780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::NewProp_CurrentPoseData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGShooterFramework, nullptr, "OnPoseComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::_Script_SKGShooterFramework_eventOnPoseComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::_Script_SKGShooterFramework_eventOnPoseComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPoseComplete_DelegateWrapper(const FMulticastScriptDelegate& OnPoseComplete, FSKGProceduralPoseReplicationData const& CurrentPoseData)
{
	struct _Script_SKGShooterFramework_eventOnPoseComplete_Parms
	{
		FSKGProceduralPoseReplicationData CurrentPoseData;
	};
	_Script_SKGShooterFramework_eventOnPoseComplete_Parms Parms;
	Parms.CurrentPoseData=CurrentPoseData;
	OnPoseComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics
	{
		struct _Script_SKGShooterFramework_eventOnHeldActorSet_Parms
		{
			AActor* NewHeldActor;
			AActor* OldHeldActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHeldActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldHeldActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::NewProp_NewHeldActor = { "NewHeldActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGShooterFramework_eventOnHeldActorSet_Parms, NewHeldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::NewProp_OldHeldActor = { "OldHeldActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGShooterFramework_eventOnHeldActorSet_Parms, OldHeldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::NewProp_NewHeldActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::NewProp_OldHeldActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGShooterFramework, nullptr, "OnHeldActorSet__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::_Script_SKGShooterFramework_eventOnHeldActorSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::_Script_SKGShooterFramework_eventOnHeldActorSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHeldActorSet_DelegateWrapper(const FMulticastScriptDelegate& OnHeldActorSet, AActor* NewHeldActor, AActor* OldHeldActor)
{
	struct _Script_SKGShooterFramework_eventOnHeldActorSet_Parms
	{
		AActor* NewHeldActor;
		AActor* OldHeldActor;
	};
	_Script_SKGShooterFramework_eventOnHeldActorSet_Parms Parms;
	Parms.NewHeldActor=NewHeldActor;
	Parms.OldHeldActor=OldHeldActor;
	OnHeldActorSet.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetProceduralPoseData)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSKGToFromCurveSettings*)Z_Param__Result=P_THIS->GetProceduralPoseData(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetOffHandIKIsLeftHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOffHandIKIsLeftHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetCurrentProceduralPoseReplicationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSKGProceduralPoseReplicationData*)Z_Param__Result=P_THIS->GetCurrentProceduralPoseReplicationData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execSetOffHandIKToRightHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOffHandIKToRightHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execSetOffHandIKToLeftHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOffHandIKToLeftHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execPerformCustomCurve)
	{
		P_GET_STRUCT_REF(FSKGCurveSettings,Z_Param_Out_CurveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformCustomCurve(Z_Param_Out_CurveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execPerformProceduralPose)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_UBOOL(Z_Param_bExitPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformProceduralPose(Z_Param_Out_Tag,Z_Param_bExitPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execDisableInfraredMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInfraredMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execEnableInfraredMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableInfraredMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execPerformProceduralRecoil)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ControlRotationMultiplier);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationMultiplier);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_RotationMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformProceduralRecoil(Z_Param_Out_ControlRotationMultiplier,Z_Param_Out_LocationMultiplier,Z_Param_Out_RotationMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetHeldActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetHeldActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetShooterFrameworkAnimInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGShooterFrameworkAnimInstance**)Z_Param__Result=P_THIS->GetShooterFrameworkAnimInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetOwningPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetPawnMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetPawnMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCameraComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetProceduralShooterPawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSKGProceduralShooterPawnData*)Z_Param__Result=P_THIS->GetProceduralShooterPawnData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetTargetLeanAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTargetLeanAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetCurrentLightLaserComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USKGLightLaserComponent*>*)Z_Param__Result=P_THIS->GetCurrentLightLaserComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetCurrentOpticComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGOpticComponent**)Z_Param__Result=P_THIS->GetCurrentOpticComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetCurrentProceduralAnimComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGProceduralAnimComponent**)Z_Param__Result=P_THIS->GetCurrentProceduralAnimComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetCurrentFirearmComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGFirearmComponent**)Z_Param__Result=P_THIS->GetCurrentFirearmComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execUseFirstPersonProceduralsAsLocal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseFirstPersonProceduralsAsLocal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetUsingCustomSwayMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUsingCustomSwayMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execResetSwayMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSwayMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execSetSwayMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwayMultiplier(Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execSetUseThirdPersonProceduralsAsLocal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseThirdPersonProceduralsAsLocal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execSetUseFirstPersonProceduralsAsLocal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseFirstPersonProceduralsAsLocal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execStopAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execStartAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execStopLeaningRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLeaningRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execStopLeaningLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLeaningLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execLeanRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeanRight(Z_Param_TargetAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execLeanLeft)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeanLeft(Z_Param_TargetAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execClearHeldActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHeldActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execSetHeldActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeldActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetSensitivityMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_XBaseTurnRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_YBaseTurnRate);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NewX);
		P_GET_UBOOL_REF(Z_Param_Out_AddYaw);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NewY);
		P_GET_UBOOL_REF(Z_Param_Out_AddPitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSensitivityMultiplier(Z_Param_X,Z_Param_XBaseTurnRate,Z_Param_Y,Z_Param_YBaseTurnRate,Z_Param_Out_NewX,Z_Param_Out_AddYaw,Z_Param_Out_NewY,Z_Param_Out_AddPitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetMagnificationSensitivityMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMagnificationSensitivityMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execIsFreeLooking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFreeLooking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execStopFreeLook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFreeLook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execStartFreeLook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFreeLook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execGetControlRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetControlRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execSetMouseInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseInput(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execCanAddPitch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddPitch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execCanAddYaw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddYaw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execUnlinkAnimLayerClassByInstance)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkAnimLayerClassByInstance(Z_Param_AnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execUnlinkAnimLayerClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkAnimLayerClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execLinkAnimLayerClassByInstance)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGShooterFrameworkAnimInstance**)Z_Param__Result=P_THIS->LinkAnimLayerClassByInstance(Z_Param_AnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execLinkAnimLayerClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USKGShooterFrameworkAnimInstance**)Z_Param__Result=P_THIS->LinkAnimLayerClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execMulti_PlayCustomCurve)
	{
		P_GET_STRUCT(FSKGFirstAndThirdPersonCurveSettings,Z_Param_CurveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multi_PlayCustomCurve_Validate(Z_Param_CurveData))
		{
			RPC_ValidateFailed(TEXT("Multi_PlayCustomCurve_Validate"));
			return;
		}
		P_THIS->Multi_PlayCustomCurve_Implementation(Z_Param_CurveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execServer_PerformCustomCurve)
	{
		P_GET_STRUCT(FSKGFirstAndThirdPersonCurveSettings,Z_Param_CurveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_PerformCustomCurve_Validate(Z_Param_CurveData))
		{
			RPC_ValidateFailed(TEXT("Server_PerformCustomCurve_Validate"));
			return;
		}
		P_THIS->Server_PerformCustomCurve_Implementation(Z_Param_CurveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execMulti_PlayCustomCurveUnreliable)
	{
		P_GET_STRUCT(FSKGFirstAndThirdPersonCurveSettings,Z_Param_CurveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multi_PlayCustomCurveUnreliable_Validate(Z_Param_CurveData))
		{
			RPC_ValidateFailed(TEXT("Multi_PlayCustomCurveUnreliable_Validate"));
			return;
		}
		P_THIS->Multi_PlayCustomCurveUnreliable_Implementation(Z_Param_CurveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execServer_SetRemoteYaw)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetRemoteYaw_Validate(Z_Param_Yaw))
		{
			RPC_ValidateFailed(TEXT("Server_SetRemoteYaw_Validate"));
			return;
		}
		P_THIS->Server_SetRemoteYaw_Implementation(Z_Param_Yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execServer_PerformCustomCurveUnreliable)
	{
		P_GET_STRUCT(FSKGFirstAndThirdPersonCurveSettings,Z_Param_CurveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_PerformCustomCurveUnreliable_Validate(Z_Param_CurveData))
		{
			RPC_ValidateFailed(TEXT("Server_PerformCustomCurveUnreliable_Validate"));
			return;
		}
		P_THIS->Server_PerformCustomCurveUnreliable_Implementation(Z_Param_CurveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execServer_SetFreeLook)
	{
		P_GET_UBOOL(Z_Param_bFreeLook);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetFreeLook_Validate(Z_Param_bFreeLook))
		{
			RPC_ValidateFailed(TEXT("Server_SetFreeLook_Validate"));
			return;
		}
		P_THIS->Server_SetFreeLook_Implementation(Z_Param_bFreeLook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execServer_SetOffHandIKHand)
	{
		P_GET_UBOOL(Z_Param_bLeftHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetOffHandIKHand_Validate(Z_Param_bLeftHand))
		{
			RPC_ValidateFailed(TEXT("Server_SetOffHandIKHand_Validate"));
			return;
		}
		P_THIS->Server_SetOffHandIKHand_Implementation(Z_Param_bLeftHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execServer_PerformProceduralPose)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_UBOOL(Z_Param_bExitPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_PerformProceduralPose_Validate(Z_Param_Tag,Z_Param_bExitPose))
		{
			RPC_ValidateFailed(TEXT("Server_PerformProceduralPose_Validate"));
			return;
		}
		P_THIS->Server_PerformProceduralPose_Implementation(Z_Param_Tag,Z_Param_bExitPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execServer_Lean)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TargetAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Lean_Validate(Z_Param_TargetAngle))
		{
			RPC_ValidateFailed(TEXT("Server_Lean_Validate"));
			return;
		}
		P_THIS->Server_Lean_Implementation(Z_Param_TargetAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execServer_SetAiming)
	{
		P_GET_UBOOL(Z_Param_bAim);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetAiming_Validate(Z_Param_bAim))
		{
			RPC_ValidateFailed(TEXT("Server_SetAiming_Validate"));
			return;
		}
		P_THIS->Server_SetAiming_Implementation(Z_Param_bAim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execOnRep_CurrentProceduralPoseData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentProceduralPoseData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execOnRep_IsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execOnRep_HeldActor)
	{
		P_GET_OBJECT(AActor,Z_Param_OldActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HeldActor(Z_Param_OldActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execOnRep_InFreeLook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InFreeLook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterPawnComponent::execOnRep_TargetLeanAngleCompressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TargetLeanAngleCompressed();
		P_NATIVE_END;
	}
	struct SKGShooterPawnComponent_eventMulti_PlayCustomCurve_Parms
	{
		FSKGFirstAndThirdPersonCurveSettings CurveData;
	};
	struct SKGShooterPawnComponent_eventMulti_PlayCustomCurveUnreliable_Parms
	{
		FSKGFirstAndThirdPersonCurveSettings CurveData;
	};
	struct SKGShooterPawnComponent_eventServer_Lean_Parms
	{
		uint8 TargetAngle;
	};
	struct SKGShooterPawnComponent_eventServer_PerformCustomCurve_Parms
	{
		FSKGFirstAndThirdPersonCurveSettings CurveData;
	};
	struct SKGShooterPawnComponent_eventServer_PerformCustomCurveUnreliable_Parms
	{
		FSKGFirstAndThirdPersonCurveSettings CurveData;
	};
	struct SKGShooterPawnComponent_eventServer_PerformProceduralPose_Parms
	{
		FGameplayTag Tag;
		bool bExitPose;
	};
	struct SKGShooterPawnComponent_eventServer_SetAiming_Parms
	{
		bool bAim;
	};
	struct SKGShooterPawnComponent_eventServer_SetFreeLook_Parms
	{
		bool bFreeLook;
	};
	struct SKGShooterPawnComponent_eventServer_SetOffHandIKHand_Parms
	{
		bool bLeftHand;
	};
	struct SKGShooterPawnComponent_eventServer_SetRemoteYaw_Parms
	{
		uint8 Yaw;
	};
	static FName NAME_USKGShooterPawnComponent_Multi_PlayCustomCurve = FName(TEXT("Multi_PlayCustomCurve"));
	void USKGShooterPawnComponent::Multi_PlayCustomCurve(FSKGFirstAndThirdPersonCurveSettings const& CurveData)
	{
		SKGShooterPawnComponent_eventMulti_PlayCustomCurve_Parms Parms;
		Parms.CurveData=CurveData;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Multi_PlayCustomCurve),&Parms);
	}
	static FName NAME_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable = FName(TEXT("Multi_PlayCustomCurveUnreliable"));
	void USKGShooterPawnComponent::Multi_PlayCustomCurveUnreliable(FSKGFirstAndThirdPersonCurveSettings const& CurveData)
	{
		SKGShooterPawnComponent_eventMulti_PlayCustomCurveUnreliable_Parms Parms;
		Parms.CurveData=CurveData;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable),&Parms);
	}
	static FName NAME_USKGShooterPawnComponent_Server_Lean = FName(TEXT("Server_Lean"));
	void USKGShooterPawnComponent::Server_Lean(const uint8 TargetAngle)
	{
		SKGShooterPawnComponent_eventServer_Lean_Parms Parms;
		Parms.TargetAngle=TargetAngle;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Server_Lean),&Parms);
	}
	static FName NAME_USKGShooterPawnComponent_Server_PerformCustomCurve = FName(TEXT("Server_PerformCustomCurve"));
	void USKGShooterPawnComponent::Server_PerformCustomCurve(FSKGFirstAndThirdPersonCurveSettings const& CurveData)
	{
		SKGShooterPawnComponent_eventServer_PerformCustomCurve_Parms Parms;
		Parms.CurveData=CurveData;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Server_PerformCustomCurve),&Parms);
	}
	static FName NAME_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable = FName(TEXT("Server_PerformCustomCurveUnreliable"));
	void USKGShooterPawnComponent::Server_PerformCustomCurveUnreliable(FSKGFirstAndThirdPersonCurveSettings const& CurveData)
	{
		SKGShooterPawnComponent_eventServer_PerformCustomCurveUnreliable_Parms Parms;
		Parms.CurveData=CurveData;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable),&Parms);
	}
	static FName NAME_USKGShooterPawnComponent_Server_PerformProceduralPose = FName(TEXT("Server_PerformProceduralPose"));
	void USKGShooterPawnComponent::Server_PerformProceduralPose(FGameplayTag const& Tag, bool bExitPose)
	{
		SKGShooterPawnComponent_eventServer_PerformProceduralPose_Parms Parms;
		Parms.Tag=Tag;
		Parms.bExitPose=bExitPose ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Server_PerformProceduralPose),&Parms);
	}
	static FName NAME_USKGShooterPawnComponent_Server_SetAiming = FName(TEXT("Server_SetAiming"));
	void USKGShooterPawnComponent::Server_SetAiming(bool bAim)
	{
		SKGShooterPawnComponent_eventServer_SetAiming_Parms Parms;
		Parms.bAim=bAim ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Server_SetAiming),&Parms);
	}
	static FName NAME_USKGShooterPawnComponent_Server_SetFreeLook = FName(TEXT("Server_SetFreeLook"));
	void USKGShooterPawnComponent::Server_SetFreeLook(bool bFreeLook)
	{
		SKGShooterPawnComponent_eventServer_SetFreeLook_Parms Parms;
		Parms.bFreeLook=bFreeLook ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Server_SetFreeLook),&Parms);
	}
	static FName NAME_USKGShooterPawnComponent_Server_SetOffHandIKHand = FName(TEXT("Server_SetOffHandIKHand"));
	void USKGShooterPawnComponent::Server_SetOffHandIKHand(bool bLeftHand)
	{
		SKGShooterPawnComponent_eventServer_SetOffHandIKHand_Parms Parms;
		Parms.bLeftHand=bLeftHand ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Server_SetOffHandIKHand),&Parms);
	}
	static FName NAME_USKGShooterPawnComponent_Server_SetRemoteYaw = FName(TEXT("Server_SetRemoteYaw"));
	void USKGShooterPawnComponent::Server_SetRemoteYaw(uint8 Yaw)
	{
		SKGShooterPawnComponent_eventServer_SetRemoteYaw_Parms Parms;
		Parms.Yaw=Yaw;
		ProcessEvent(FindFunctionChecked(NAME_USKGShooterPawnComponent_Server_SetRemoteYaw),&Parms);
	}
	void USKGShooterPawnComponent::StaticRegisterNativesUSKGShooterPawnComponent()
	{
		UClass* Class = USKGShooterPawnComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanAddPitch", &USKGShooterPawnComponent::execCanAddPitch },
			{ "CanAddYaw", &USKGShooterPawnComponent::execCanAddYaw },
			{ "ClearHeldActor", &USKGShooterPawnComponent::execClearHeldActor },
			{ "DisableInfraredMode", &USKGShooterPawnComponent::execDisableInfraredMode },
			{ "EnableInfraredMode", &USKGShooterPawnComponent::execEnableInfraredMode },
			{ "GetCameraComponent", &USKGShooterPawnComponent::execGetCameraComponent },
			{ "GetControlRotation", &USKGShooterPawnComponent::execGetControlRotation },
			{ "GetCurrentFirearmComponent", &USKGShooterPawnComponent::execGetCurrentFirearmComponent },
			{ "GetCurrentLightLaserComponents", &USKGShooterPawnComponent::execGetCurrentLightLaserComponents },
			{ "GetCurrentOpticComponent", &USKGShooterPawnComponent::execGetCurrentOpticComponent },
			{ "GetCurrentProceduralAnimComponent", &USKGShooterPawnComponent::execGetCurrentProceduralAnimComponent },
			{ "GetCurrentProceduralPoseReplicationData", &USKGShooterPawnComponent::execGetCurrentProceduralPoseReplicationData },
			{ "GetHeldActor", &USKGShooterPawnComponent::execGetHeldActor },
			{ "GetMagnificationSensitivityMultiplier", &USKGShooterPawnComponent::execGetMagnificationSensitivityMultiplier },
			{ "GetOffHandIKIsLeftHand", &USKGShooterPawnComponent::execGetOffHandIKIsLeftHand },
			{ "GetOwningPawn", &USKGShooterPawnComponent::execGetOwningPawn },
			{ "GetPawnMesh", &USKGShooterPawnComponent::execGetPawnMesh },
			{ "GetProceduralPoseData", &USKGShooterPawnComponent::execGetProceduralPoseData },
			{ "GetProceduralShooterPawnData", &USKGShooterPawnComponent::execGetProceduralShooterPawnData },
			{ "GetSensitivityMultiplier", &USKGShooterPawnComponent::execGetSensitivityMultiplier },
			{ "GetShooterFrameworkAnimInstance", &USKGShooterPawnComponent::execGetShooterFrameworkAnimInstance },
			{ "GetTargetLeanAngle", &USKGShooterPawnComponent::execGetTargetLeanAngle },
			{ "GetUsingCustomSwayMultiplier", &USKGShooterPawnComponent::execGetUsingCustomSwayMultiplier },
			{ "IsAiming", &USKGShooterPawnComponent::execIsAiming },
			{ "IsFreeLooking", &USKGShooterPawnComponent::execIsFreeLooking },
			{ "IsLocallyControlled", &USKGShooterPawnComponent::execIsLocallyControlled },
			{ "LeanLeft", &USKGShooterPawnComponent::execLeanLeft },
			{ "LeanRight", &USKGShooterPawnComponent::execLeanRight },
			{ "LinkAnimLayerClass", &USKGShooterPawnComponent::execLinkAnimLayerClass },
			{ "LinkAnimLayerClassByInstance", &USKGShooterPawnComponent::execLinkAnimLayerClassByInstance },
			{ "Multi_PlayCustomCurve", &USKGShooterPawnComponent::execMulti_PlayCustomCurve },
			{ "Multi_PlayCustomCurveUnreliable", &USKGShooterPawnComponent::execMulti_PlayCustomCurveUnreliable },
			{ "OnRep_CurrentProceduralPoseData", &USKGShooterPawnComponent::execOnRep_CurrentProceduralPoseData },
			{ "OnRep_HeldActor", &USKGShooterPawnComponent::execOnRep_HeldActor },
			{ "OnRep_InFreeLook", &USKGShooterPawnComponent::execOnRep_InFreeLook },
			{ "OnRep_IsAiming", &USKGShooterPawnComponent::execOnRep_IsAiming },
			{ "OnRep_TargetLeanAngleCompressed", &USKGShooterPawnComponent::execOnRep_TargetLeanAngleCompressed },
			{ "PerformCustomCurve", &USKGShooterPawnComponent::execPerformCustomCurve },
			{ "PerformProceduralPose", &USKGShooterPawnComponent::execPerformProceduralPose },
			{ "PerformProceduralRecoil", &USKGShooterPawnComponent::execPerformProceduralRecoil },
			{ "ResetSwayMultiplier", &USKGShooterPawnComponent::execResetSwayMultiplier },
			{ "Server_Lean", &USKGShooterPawnComponent::execServer_Lean },
			{ "Server_PerformCustomCurve", &USKGShooterPawnComponent::execServer_PerformCustomCurve },
			{ "Server_PerformCustomCurveUnreliable", &USKGShooterPawnComponent::execServer_PerformCustomCurveUnreliable },
			{ "Server_PerformProceduralPose", &USKGShooterPawnComponent::execServer_PerformProceduralPose },
			{ "Server_SetAiming", &USKGShooterPawnComponent::execServer_SetAiming },
			{ "Server_SetFreeLook", &USKGShooterPawnComponent::execServer_SetFreeLook },
			{ "Server_SetOffHandIKHand", &USKGShooterPawnComponent::execServer_SetOffHandIKHand },
			{ "Server_SetRemoteYaw", &USKGShooterPawnComponent::execServer_SetRemoteYaw },
			{ "SetHeldActor", &USKGShooterPawnComponent::execSetHeldActor },
			{ "SetMouseInput", &USKGShooterPawnComponent::execSetMouseInput },
			{ "SetOffHandIKToLeftHand", &USKGShooterPawnComponent::execSetOffHandIKToLeftHand },
			{ "SetOffHandIKToRightHand", &USKGShooterPawnComponent::execSetOffHandIKToRightHand },
			{ "SetSwayMultiplier", &USKGShooterPawnComponent::execSetSwayMultiplier },
			{ "SetUseFirstPersonProceduralsAsLocal", &USKGShooterPawnComponent::execSetUseFirstPersonProceduralsAsLocal },
			{ "SetUseThirdPersonProceduralsAsLocal", &USKGShooterPawnComponent::execSetUseThirdPersonProceduralsAsLocal },
			{ "StartAiming", &USKGShooterPawnComponent::execStartAiming },
			{ "StartFreeLook", &USKGShooterPawnComponent::execStartFreeLook },
			{ "StopAiming", &USKGShooterPawnComponent::execStopAiming },
			{ "StopFreeLook", &USKGShooterPawnComponent::execStopFreeLook },
			{ "StopLeaningLeft", &USKGShooterPawnComponent::execStopLeaningLeft },
			{ "StopLeaningRight", &USKGShooterPawnComponent::execStopLeaningRight },
			{ "UnlinkAnimLayerClass", &USKGShooterPawnComponent::execUnlinkAnimLayerClass },
			{ "UnlinkAnimLayerClassByInstance", &USKGShooterPawnComponent::execUnlinkAnimLayerClassByInstance },
			{ "UseFirstPersonProceduralsAsLocal", &USKGShooterPawnComponent::execUseFirstPersonProceduralsAsLocal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics
	{
		struct SKGShooterPawnComponent_eventCanAddPitch_Parms
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
	void Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventCanAddPitch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventCanAddPitch_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "Comment", "// Used for freelook. If false, it means control rotation goes to far\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "Used for freelook. If false, it means control rotation goes to far" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "CanAddPitch", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::SKGShooterPawnComponent_eventCanAddPitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::SKGShooterPawnComponent_eventCanAddPitch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics
	{
		struct SKGShooterPawnComponent_eventCanAddYaw_Parms
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
	void Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventCanAddYaw_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventCanAddYaw_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "Comment", "// Used for freelook. If false, it means control rotation goes to far\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "Used for freelook. If false, it means control rotation goes to far" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "CanAddYaw", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::SKGShooterPawnComponent_eventCanAddYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::SKGShooterPawnComponent_eventCanAddYaw_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_ClearHeldActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_ClearHeldActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_ClearHeldActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "ClearHeldActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_ClearHeldActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_ClearHeldActor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_ClearHeldActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_ClearHeldActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_DisableInfraredMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_DisableInfraredMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_DisableInfraredMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "DisableInfraredMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_DisableInfraredMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_DisableInfraredMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_DisableInfraredMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_DisableInfraredMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_EnableInfraredMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_EnableInfraredMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_EnableInfraredMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "EnableInfraredMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_EnableInfraredMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_EnableInfraredMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_EnableInfraredMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_EnableInfraredMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics
	{
		struct SKGShooterPawnComponent_eventGetCameraComponent_Parms
		{
			UCameraComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetCameraComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::SKGShooterPawnComponent_eventGetCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::SKGShooterPawnComponent_eventGetCameraComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics
	{
		struct SKGShooterPawnComponent_eventGetControlRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetControlRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "Comment", "/* Returns control rotation if locall controlled, returns replicated\n\x09 * rotator (remote yaw and remote pitch) if remote client\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "Returns control rotation if locall controlled, returns replicated\n       * rotator (remote yaw and remote pitch) if remote client" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetControlRotation", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::SKGShooterPawnComponent_eventGetControlRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::SKGShooterPawnComponent_eventGetControlRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics
	{
		struct SKGShooterPawnComponent_eventGetCurrentFirearmComponent_Parms
		{
			USKGFirearmComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetCurrentFirearmComponent_Parms, ReturnValue), Z_Construct_UClass_USKGFirearmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent|Components" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetCurrentFirearmComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::SKGShooterPawnComponent_eventGetCurrentFirearmComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::SKGShooterPawnComponent_eventGetCurrentFirearmComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics
	{
		struct SKGShooterPawnComponent_eventGetCurrentLightLaserComponents_Parms
		{
			TArray<USKGLightLaserComponent*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USKGLightLaserComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetCurrentLightLaserComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent|Components" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetCurrentLightLaserComponents", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::SKGShooterPawnComponent_eventGetCurrentLightLaserComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::SKGShooterPawnComponent_eventGetCurrentLightLaserComponents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics
	{
		struct SKGShooterPawnComponent_eventGetCurrentOpticComponent_Parms
		{
			USKGOpticComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetCurrentOpticComponent_Parms, ReturnValue), Z_Construct_UClass_USKGOpticComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent|Components" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetCurrentOpticComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::SKGShooterPawnComponent_eventGetCurrentOpticComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::SKGShooterPawnComponent_eventGetCurrentOpticComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics
	{
		struct SKGShooterPawnComponent_eventGetCurrentProceduralAnimComponent_Parms
		{
			USKGProceduralAnimComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetCurrentProceduralAnimComponent_Parms, ReturnValue), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent|Components" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetCurrentProceduralAnimComponent", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::SKGShooterPawnComponent_eventGetCurrentProceduralAnimComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::SKGShooterPawnComponent_eventGetCurrentProceduralAnimComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics
	{
		struct SKGShooterPawnComponent_eventGetCurrentProceduralPoseReplicationData_Parms
		{
			FSKGProceduralPoseReplicationData ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetCurrentProceduralPoseReplicationData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::NewProp_ReturnValue_MetaData) }; // 2945867780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetCurrentProceduralPoseReplicationData", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::SKGShooterPawnComponent_eventGetCurrentProceduralPoseReplicationData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::SKGShooterPawnComponent_eventGetCurrentProceduralPoseReplicationData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics
	{
		struct SKGShooterPawnComponent_eventGetHeldActor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetHeldActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetHeldActor", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::SKGShooterPawnComponent_eventGetHeldActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::SKGShooterPawnComponent_eventGetHeldActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics
	{
		struct SKGShooterPawnComponent_eventGetMagnificationSensitivityMultiplier_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetMagnificationSensitivityMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetMagnificationSensitivityMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::SKGShooterPawnComponent_eventGetMagnificationSensitivityMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::SKGShooterPawnComponent_eventGetMagnificationSensitivityMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics
	{
		struct SKGShooterPawnComponent_eventGetOffHandIKIsLeftHand_Parms
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
	void Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventGetOffHandIKIsLeftHand_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventGetOffHandIKIsLeftHand_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetOffHandIKIsLeftHand", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::SKGShooterPawnComponent_eventGetOffHandIKIsLeftHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::SKGShooterPawnComponent_eventGetOffHandIKIsLeftHand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics
	{
		struct SKGShooterPawnComponent_eventGetOwningPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetOwningPawn", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::SKGShooterPawnComponent_eventGetOwningPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::SKGShooterPawnComponent_eventGetOwningPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics
	{
		struct SKGShooterPawnComponent_eventGetPawnMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetPawnMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "// Returns First Person Mesh if local, Third Person Mesh if remote\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "Returns First Person Mesh if local, Third Person Mesh if remote" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetPawnMesh", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::SKGShooterPawnComponent_eventGetPawnMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::SKGShooterPawnComponent_eventGetPawnMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics
	{
		struct SKGShooterPawnComponent_eventGetProceduralPoseData_Parms
		{
			FGameplayTag Tag;
			FSKGToFromCurveSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetProceduralPoseData_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::NewProp_Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetProceduralPoseData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGToFromCurveSettings, METADATA_PARAMS(0, nullptr) }; // 3335197975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetProceduralPoseData", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::SKGShooterPawnComponent_eventGetProceduralPoseData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::SKGShooterPawnComponent_eventGetProceduralPoseData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics
	{
		struct SKGShooterPawnComponent_eventGetProceduralShooterPawnData_Parms
		{
			FSKGProceduralShooterPawnData ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetProceduralShooterPawnData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::NewProp_ReturnValue_MetaData) }; // 1720020876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetProceduralShooterPawnData", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::SKGShooterPawnComponent_eventGetProceduralShooterPawnData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::SKGShooterPawnComponent_eventGetProceduralShooterPawnData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics
	{
		struct SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms
		{
			float X;
			float XBaseTurnRate;
			float Y;
			float YBaseTurnRate;
			float NewX;
			bool AddYaw;
			float NewY;
			bool AddPitch;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XBaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XBaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YBaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YBaseTurnRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewX;
		static void NewProp_AddYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddYaw;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewY;
		static void NewProp_AddPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_X_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_XBaseTurnRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_XBaseTurnRate = { "XBaseTurnRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms, XBaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_XBaseTurnRate_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_XBaseTurnRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_Y_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_Y_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_YBaseTurnRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_YBaseTurnRate = { "YBaseTurnRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms, YBaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_YBaseTurnRate_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_YBaseTurnRate_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_NewX = { "NewX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms, NewX), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_AddYaw_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms*)Obj)->AddYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_AddYaw = { "AddYaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_AddYaw_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_NewY = { "NewY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms, NewY), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_AddPitch_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms*)Obj)->AddPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_AddPitch = { "AddPitch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_AddPitch_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_XBaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_YBaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_NewX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_AddYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_NewY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::NewProp_AddPitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "Comment", "// Outputs new sensivity based on whether or not free looking, zoomed with magnification, utilizes base turn rate\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "Outputs new sensivity based on whether or not free looking, zoomed with magnification, utilizes base turn rate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetSensitivityMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::SKGShooterPawnComponent_eventGetSensitivityMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics
	{
		struct SKGShooterPawnComponent_eventGetShooterFrameworkAnimInstance_Parms
		{
			USKGShooterFrameworkAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetShooterFrameworkAnimInstance_Parms, ReturnValue), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetShooterFrameworkAnimInstance", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::SKGShooterPawnComponent_eventGetShooterFrameworkAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::SKGShooterPawnComponent_eventGetShooterFrameworkAnimInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics
	{
		struct SKGShooterPawnComponent_eventGetTargetLeanAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventGetTargetLeanAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|Leaning" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetTargetLeanAngle", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::SKGShooterPawnComponent_eventGetTargetLeanAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::SKGShooterPawnComponent_eventGetTargetLeanAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics
	{
		struct SKGShooterPawnComponent_eventGetUsingCustomSwayMultiplier_Parms
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
	void Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventGetUsingCustomSwayMultiplier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventGetUsingCustomSwayMultiplier_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "GetUsingCustomSwayMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::SKGShooterPawnComponent_eventGetUsingCustomSwayMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::SKGShooterPawnComponent_eventGetUsingCustomSwayMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics
	{
		struct SKGShooterPawnComponent_eventIsAiming_Parms
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
	void Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventIsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventIsAiming_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "IsAiming", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::SKGShooterPawnComponent_eventIsAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::SKGShooterPawnComponent_eventIsAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics
	{
		struct SKGShooterPawnComponent_eventIsFreeLooking_Parms
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
	void Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventIsFreeLooking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventIsFreeLooking_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "IsFreeLooking", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::SKGShooterPawnComponent_eventIsFreeLooking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::SKGShooterPawnComponent_eventIsFreeLooking_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics
	{
		struct SKGShooterPawnComponent_eventIsLocallyControlled_Parms
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
	void Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "IsLocallyControlled", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::SKGShooterPawnComponent_eventIsLocallyControlled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::SKGShooterPawnComponent_eventIsLocallyControlled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics
	{
		struct SKGShooterPawnComponent_eventLeanLeft_Parms
		{
			float TargetAngle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::NewProp_TargetAngle = { "TargetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventLeanLeft_Parms, TargetAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::NewProp_TargetAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "LeanLeft", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::SKGShooterPawnComponent_eventLeanLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::SKGShooterPawnComponent_eventLeanLeft_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics
	{
		struct SKGShooterPawnComponent_eventLeanRight_Parms
		{
			float TargetAngle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::NewProp_TargetAngle = { "TargetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventLeanRight_Parms, TargetAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::NewProp_TargetAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "LeanRight", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::SKGShooterPawnComponent_eventLeanRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::SKGShooterPawnComponent_eventLeanRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics
	{
		struct SKGShooterPawnComponent_eventLinkAnimLayerClass_Parms
		{
			USKGShooterFrameworkAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventLinkAnimLayerClass_Parms, ReturnValue), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "LinkAnimLayerClass", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::SKGShooterPawnComponent_eventLinkAnimLayerClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::SKGShooterPawnComponent_eventLinkAnimLayerClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics
	{
		struct SKGShooterPawnComponent_eventLinkAnimLayerClassByInstance_Parms
		{
			UAnimInstance* AnimInstance;
			USKGShooterFrameworkAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventLinkAnimLayerClassByInstance_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventLinkAnimLayerClassByInstance_Parms, ReturnValue), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "LinkAnimLayerClassByInstance", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::SKGShooterPawnComponent_eventLinkAnimLayerClassByInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::SKGShooterPawnComponent_eventLinkAnimLayerClassByInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::NewProp_CurveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventMulti_PlayCustomCurve_Parms, CurveData), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::NewProp_CurveData_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::NewProp_CurveData_MetaData) }; // 2799564674
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::NewProp_CurveData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Multi_PlayCustomCurve", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventMulti_PlayCustomCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventMulti_PlayCustomCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::NewProp_CurveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventMulti_PlayCustomCurveUnreliable_Parms, CurveData), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::NewProp_CurveData_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::NewProp_CurveData_MetaData) }; // 2799564674
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::NewProp_CurveData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Multi_PlayCustomCurveUnreliable", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventMulti_PlayCustomCurveUnreliable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventMulti_PlayCustomCurveUnreliable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_CurrentProceduralPoseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_CurrentProceduralPoseData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_CurrentProceduralPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "OnRep_CurrentProceduralPoseData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_CurrentProceduralPoseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_CurrentProceduralPoseData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_CurrentProceduralPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_CurrentProceduralPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics
	{
		struct SKGShooterPawnComponent_eventOnRep_HeldActor_Parms
		{
			AActor* OldActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::NewProp_OldActor = { "OldActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventOnRep_HeldActor_Parms, OldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::NewProp_OldActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "OnRep_HeldActor", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::SKGShooterPawnComponent_eventOnRep_HeldActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::SKGShooterPawnComponent_eventOnRep_HeldActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_InFreeLook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_InFreeLook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_InFreeLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "OnRep_InFreeLook", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_InFreeLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_InFreeLook_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_InFreeLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_InFreeLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_IsAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_IsAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_IsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "OnRep_IsAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_IsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_IsAiming_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_IsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_IsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_TargetLeanAngleCompressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_TargetLeanAngleCompressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_TargetLeanAngleCompressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "OnRep_TargetLeanAngleCompressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_TargetLeanAngleCompressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_TargetLeanAngleCompressed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_TargetLeanAngleCompressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_TargetLeanAngleCompressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics
	{
		struct SKGShooterPawnComponent_eventPerformCustomCurve_Parms
		{
			FSKGCurveSettings CurveData;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::NewProp_CurveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventPerformCustomCurve_Parms, CurveData), Z_Construct_UScriptStruct_FSKGCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::NewProp_CurveData_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::NewProp_CurveData_MetaData) }; // 3940496294
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::NewProp_CurveData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "PerformCustomCurve", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::SKGShooterPawnComponent_eventPerformCustomCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::SKGShooterPawnComponent_eventPerformCustomCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics
	{
		struct SKGShooterPawnComponent_eventPerformProceduralPose_Parms
		{
			FGameplayTag Tag;
			bool bExitPose;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_bExitPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExitPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventPerformProceduralPose_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::NewProp_Tag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::NewProp_bExitPose_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventPerformProceduralPose_Parms*)Obj)->bExitPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::NewProp_bExitPose = { "bExitPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventPerformProceduralPose_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::NewProp_bExitPose_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::NewProp_bExitPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "Comment", "/**\n\x09 * \n\x09 * @param Tag used to search for the given pose\n\x09 * @param bExitPose whether or not to use the return curve (return to normal) or the to curve (go from normal to pose)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "@param Tag used to search for the given pose\n@param bExitPose whether or not to use the return curve (return to normal) or the to curve (go from normal to pose)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "PerformProceduralPose", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::SKGShooterPawnComponent_eventPerformProceduralPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::SKGShooterPawnComponent_eventPerformProceduralPose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics
	{
		struct SKGShooterPawnComponent_eventPerformProceduralRecoil_Parms
		{
			FRotator ControlRotationMultiplier;
			FVector LocationMultiplier;
			FRotator RotationMultiplier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_ControlRotationMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_ControlRotationMultiplier = { "ControlRotationMultiplier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventPerformProceduralRecoil_Parms, ControlRotationMultiplier), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_ControlRotationMultiplier_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_ControlRotationMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_LocationMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_LocationMultiplier = { "LocationMultiplier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventPerformProceduralRecoil_Parms, LocationMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_LocationMultiplier_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_LocationMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_RotationMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_RotationMultiplier = { "RotationMultiplier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventPerformProceduralRecoil_Parms, RotationMultiplier), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_RotationMultiplier_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_RotationMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_ControlRotationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_LocationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::NewProp_RotationMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "CPP_Default_ControlRotationMultiplier", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_LocationMultiplier", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_RotationMultiplier", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "PerformProceduralRecoil", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::SKGShooterPawnComponent_eventPerformProceduralRecoil_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::SKGShooterPawnComponent_eventPerformProceduralRecoil_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_ResetSwayMultiplier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_ResetSwayMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_ResetSwayMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "ResetSwayMultiplier", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_ResetSwayMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_ResetSwayMultiplier_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_ResetSwayMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_ResetSwayMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAngle_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::NewProp_TargetAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::NewProp_TargetAngle = { "TargetAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventServer_Lean_Parms, TargetAngle), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::NewProp_TargetAngle_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::NewProp_TargetAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::NewProp_TargetAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Server_Lean", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventServer_Lean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventServer_Lean_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::NewProp_CurveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventServer_PerformCustomCurve_Parms, CurveData), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::NewProp_CurveData_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::NewProp_CurveData_MetaData) }; // 2799564674
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::NewProp_CurveData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Server_PerformCustomCurve", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventServer_PerformCustomCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventServer_PerformCustomCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::NewProp_CurveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventServer_PerformCustomCurveUnreliable_Parms, CurveData), Z_Construct_UScriptStruct_FSKGFirstAndThirdPersonCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::NewProp_CurveData_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::NewProp_CurveData_MetaData) }; // 2799564674
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::NewProp_CurveData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Server_PerformCustomCurveUnreliable", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventServer_PerformCustomCurveUnreliable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventServer_PerformCustomCurveUnreliable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_bExitPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExitPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventServer_PerformProceduralPose_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::NewProp_Tag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::NewProp_bExitPose_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventServer_PerformProceduralPose_Parms*)Obj)->bExitPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::NewProp_bExitPose = { "bExitPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventServer_PerformProceduralPose_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::NewProp_bExitPose_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::NewProp_bExitPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Server_PerformProceduralPose", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventServer_PerformProceduralPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventServer_PerformProceduralPose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics
	{
		static void NewProp_bAim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::NewProp_bAim_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventServer_SetAiming_Parms*)Obj)->bAim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::NewProp_bAim = { "bAim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventServer_SetAiming_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::NewProp_bAim_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::NewProp_bAim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Server_SetAiming", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventServer_SetAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventServer_SetAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics
	{
		static void NewProp_bFreeLook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreeLook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::NewProp_bFreeLook_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventServer_SetFreeLook_Parms*)Obj)->bFreeLook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::NewProp_bFreeLook = { "bFreeLook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventServer_SetFreeLook_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::NewProp_bFreeLook_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::NewProp_bFreeLook,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Server_SetFreeLook", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventServer_SetFreeLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventServer_SetFreeLook_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics
	{
		static void NewProp_bLeftHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftHand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::NewProp_bLeftHand_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventServer_SetOffHandIKHand_Parms*)Obj)->bLeftHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::NewProp_bLeftHand = { "bLeftHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventServer_SetOffHandIKHand_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::NewProp_bLeftHand_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::NewProp_bLeftHand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Server_SetOffHandIKHand", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventServer_SetOffHandIKHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventServer_SetOffHandIKHand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Yaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventServer_SetRemoteYaw_Parms, Yaw), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::NewProp_Yaw,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "Server_SetRemoteYaw", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::PropPointers), sizeof(SKGShooterPawnComponent_eventServer_SetRemoteYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGShooterPawnComponent_eventServer_SetRemoteYaw_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics
	{
		struct SKGShooterPawnComponent_eventSetHeldActor_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventSetHeldActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "SetHeldActor", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::SKGShooterPawnComponent_eventSetHeldActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::SKGShooterPawnComponent_eventSetHeldActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics
	{
		struct SKGShooterPawnComponent_eventSetMouseInput_Parms
		{
			float X;
			float Y;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventSetMouseInput_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventSetMouseInput_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "SetMouseInput", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::SKGShooterPawnComponent_eventSetMouseInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::SKGShooterPawnComponent_eventSetMouseInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToLeftHand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToLeftHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToLeftHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "SetOffHandIKToLeftHand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToLeftHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToLeftHand_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToLeftHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToLeftHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToRightHand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToRightHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToRightHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "SetOffHandIKToRightHand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToRightHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToRightHand_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToRightHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToRightHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics
	{
		struct SKGShooterPawnComponent_eventSetSwayMultiplier_Parms
		{
			float Multiplier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::NewProp_Multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventSetSwayMultiplier_Parms, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::NewProp_Multiplier_MetaData), Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::NewProp_Multiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::NewProp_Multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "SetSwayMultiplier", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::SKGShooterPawnComponent_eventSetSwayMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::SKGShooterPawnComponent_eventSetSwayMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_SetUseFirstPersonProceduralsAsLocal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_SetUseFirstPersonProceduralsAsLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_SetUseFirstPersonProceduralsAsLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "SetUseFirstPersonProceduralsAsLocal", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetUseFirstPersonProceduralsAsLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_SetUseFirstPersonProceduralsAsLocal_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_SetUseFirstPersonProceduralsAsLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_SetUseFirstPersonProceduralsAsLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_SetUseThirdPersonProceduralsAsLocal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_SetUseThirdPersonProceduralsAsLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_SetUseThirdPersonProceduralsAsLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "SetUseThirdPersonProceduralsAsLocal", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_SetUseThirdPersonProceduralsAsLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_SetUseThirdPersonProceduralsAsLocal_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_SetUseThirdPersonProceduralsAsLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_SetUseThirdPersonProceduralsAsLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_StartAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_StartAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_StartAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "StartAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_StartAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_StartAiming_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_StartAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_StartAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_StartFreeLook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_StartFreeLook_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_StartFreeLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "StartFreeLook", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_StartFreeLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_StartFreeLook_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_StartFreeLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_StartFreeLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_StopAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_StopAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_StopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "StopAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_StopAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_StopAiming_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_StopAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_StopAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_StopFreeLook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_StopFreeLook_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_StopFreeLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "StopFreeLook", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_StopFreeLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_StopFreeLook_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_StopFreeLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_StopFreeLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "StopLeaningLeft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningLeft_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "StopLeaningRight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningRight_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "UnlinkAnimLayerClass", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClass_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics
	{
		struct SKGShooterPawnComponent_eventUnlinkAnimLayerClassByInstance_Parms
		{
			UAnimInstance* AnimInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterPawnComponent_eventUnlinkAnimLayerClassByInstance_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::NewProp_AnimInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "UnlinkAnimLayerClassByInstance", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::SKGShooterPawnComponent_eventUnlinkAnimLayerClassByInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::SKGShooterPawnComponent_eventUnlinkAnimLayerClassByInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics
	{
		struct SKGShooterPawnComponent_eventUseFirstPersonProceduralsAsLocal_Parms
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
	void Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterPawnComponent_eventUseFirstPersonProceduralsAsLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterPawnComponent_eventUseFirstPersonProceduralsAsLocal_Parms), &Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterPawnComponent, nullptr, "UseFirstPersonProceduralsAsLocal", nullptr, nullptr, Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::SKGShooterPawnComponent_eventUseFirstPersonProceduralsAsLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::SKGShooterPawnComponent_eventUseFirstPersonProceduralsAsLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterPawnComponent);
	UClass* Z_Construct_UClass_USKGShooterPawnComponent_NoRegister()
	{
		return USKGShooterPawnComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGShooterPawnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedAnimLayerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LinkedAnimLayerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetupLinkedAnimLayer_MetaData[];
#endif
		static void NewProp_bAutoSetupLinkedAnimLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetupLinkedAnimLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSingleMesh_MetaData[];
#endif
		static void NewProp_bUseSingleMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSingleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonMeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ThirdPersonMeshComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FirstPersonMeshComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAttachedSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraAttachedSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateRemoteYaw_MetaData[];
#endif
		static void NewProp_bReplicateRemoteYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateRemoteYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteYawReplicationRate_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RemoteYawReplicationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightVisionMaterialParameterCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NightVisionMaterialParameterCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreeLookSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FreeLookSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanLeftRightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeanLeftRightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshFP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshFP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshTP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshTP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShooterFrameworkAnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShooterFrameworkAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralShooterPawnData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralShooterPawnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLeanAngleCompressed_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetLeanAngleCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeldActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeldActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProceduralPoseData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentProceduralPoseData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOffHandIKIsLeftHand_MetaData[];
#endif
		static void NewProp_bOffHandIKIsLeftHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffHandIKIsLeftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInFreeLook_MetaData[];
#endif
		static void NewProp_bInFreeLook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInFreeLook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteViewYaw_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteViewYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFirearmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentFirearmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProceduralAnimComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentProceduralAnimComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPoseComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPoseComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHeldActorSet_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHeldActorSet;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintHit_MetaData[];
#endif
		static void NewProp_bPrintHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTrace_MetaData[];
#endif
		static void NewProp_bDrawDebugTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTrace;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGShooterPawnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGShooterPawnComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_CanAddPitch, "CanAddPitch" }, // 2182927595
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_CanAddYaw, "CanAddYaw" }, // 3076179020
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_ClearHeldActor, "ClearHeldActor" }, // 769136234
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_DisableInfraredMode, "DisableInfraredMode" }, // 4185362776
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_EnableInfraredMode, "EnableInfraredMode" }, // 3838595194
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetCameraComponent, "GetCameraComponent" }, // 2639022141
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetControlRotation, "GetControlRotation" }, // 4161488043
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentFirearmComponent, "GetCurrentFirearmComponent" }, // 2824638201
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentLightLaserComponents, "GetCurrentLightLaserComponents" }, // 1029262750
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentOpticComponent, "GetCurrentOpticComponent" }, // 390051880
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralAnimComponent, "GetCurrentProceduralAnimComponent" }, // 2355587780
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetCurrentProceduralPoseReplicationData, "GetCurrentProceduralPoseReplicationData" }, // 877454444
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetHeldActor, "GetHeldActor" }, // 900029339
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetMagnificationSensitivityMultiplier, "GetMagnificationSensitivityMultiplier" }, // 376262849
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetOffHandIKIsLeftHand, "GetOffHandIKIsLeftHand" }, // 920611565
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetOwningPawn, "GetOwningPawn" }, // 3662727190
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetPawnMesh, "GetPawnMesh" }, // 4014365957
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralPoseData, "GetProceduralPoseData" }, // 3583020234
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetProceduralShooterPawnData, "GetProceduralShooterPawnData" }, // 3606700516
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetSensitivityMultiplier, "GetSensitivityMultiplier" }, // 908519155
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetShooterFrameworkAnimInstance, "GetShooterFrameworkAnimInstance" }, // 3766593040
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetTargetLeanAngle, "GetTargetLeanAngle" }, // 2208522069
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_GetUsingCustomSwayMultiplier, "GetUsingCustomSwayMultiplier" }, // 1559870198
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_IsAiming, "IsAiming" }, // 179783706
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_IsFreeLooking, "IsFreeLooking" }, // 2444683949
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_IsLocallyControlled, "IsLocallyControlled" }, // 3354094876
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_LeanLeft, "LeanLeft" }, // 2778652702
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_LeanRight, "LeanRight" }, // 3056536613
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClass, "LinkAnimLayerClass" }, // 792830390
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_LinkAnimLayerClassByInstance, "LinkAnimLayerClassByInstance" }, // 2471353522
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurve, "Multi_PlayCustomCurve" }, // 2347582201
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Multi_PlayCustomCurveUnreliable, "Multi_PlayCustomCurveUnreliable" }, // 1024354606
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_CurrentProceduralPoseData, "OnRep_CurrentProceduralPoseData" }, // 1810437247
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_HeldActor, "OnRep_HeldActor" }, // 1472705067
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_InFreeLook, "OnRep_InFreeLook" }, // 491764041
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_IsAiming, "OnRep_IsAiming" }, // 3147793661
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_OnRep_TargetLeanAngleCompressed, "OnRep_TargetLeanAngleCompressed" }, // 2917416619
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_PerformCustomCurve, "PerformCustomCurve" }, // 4227702970
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralPose, "PerformProceduralPose" }, // 3832181752
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_PerformProceduralRecoil, "PerformProceduralRecoil" }, // 794927208
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_ResetSwayMultiplier, "ResetSwayMultiplier" }, // 1319029228
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Server_Lean, "Server_Lean" }, // 3731863697
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurve, "Server_PerformCustomCurve" }, // 513555561
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformCustomCurveUnreliable, "Server_PerformCustomCurveUnreliable" }, // 463327107
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Server_PerformProceduralPose, "Server_PerformProceduralPose" }, // 3259501169
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetAiming, "Server_SetAiming" }, // 262544807
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetFreeLook, "Server_SetFreeLook" }, // 2027326970
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetOffHandIKHand, "Server_SetOffHandIKHand" }, // 3264708464
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_Server_SetRemoteYaw, "Server_SetRemoteYaw" }, // 4126879714
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_SetHeldActor, "SetHeldActor" }, // 101712426
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_SetMouseInput, "SetMouseInput" }, // 1528592862
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToLeftHand, "SetOffHandIKToLeftHand" }, // 899662486
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_SetOffHandIKToRightHand, "SetOffHandIKToRightHand" }, // 3862300568
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_SetSwayMultiplier, "SetSwayMultiplier" }, // 3696494802
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_SetUseFirstPersonProceduralsAsLocal, "SetUseFirstPersonProceduralsAsLocal" }, // 2979715983
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_SetUseThirdPersonProceduralsAsLocal, "SetUseThirdPersonProceduralsAsLocal" }, // 2666062314
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_StartAiming, "StartAiming" }, // 968836398
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_StartFreeLook, "StartFreeLook" }, // 3953607639
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_StopAiming, "StopAiming" }, // 3753700183
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_StopFreeLook, "StopFreeLook" }, // 851480427
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningLeft, "StopLeaningLeft" }, // 2329851451
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_StopLeaningRight, "StopLeaningRight" }, // 2989579942
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClass, "UnlinkAnimLayerClass" }, // 2104206513
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_UnlinkAnimLayerClassByInstance, "UnlinkAnimLayerClassByInstance" }, // 3728804397
		{ &Z_Construct_UFunction_USKGShooterPawnComponent_UseFirstPersonProceduralsAsLocal, "UseFirstPersonProceduralsAsLocal" }, // 870324186
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGShooterPawnComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LinkedAnimLayerClass_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "/** The linked anim layer class to be used instead of the actual anim instance of the mesh\n\x09 * so you do not need to reparent your animbp. Refer to example project for usage\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The linked anim layer class to be used instead of the actual anim instance of the mesh\nso you do not need to reparent your animbp. Refer to example project for usage" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LinkedAnimLayerClass = { "LinkedAnimLayerClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, LinkedAnimLayerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USKGShooterFrameworkAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LinkedAnimLayerClass_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LinkedAnimLayerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bAutoSetupLinkedAnimLayer_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "// If true, it will auto link the LinkedAnimLayerClass to your mesh anim instance for the procedurals\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "If true, it will auto link the LinkedAnimLayerClass to your mesh anim instance for the procedurals" },
	};
#endif
	void Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bAutoSetupLinkedAnimLayer_SetBit(void* Obj)
	{
		((USKGShooterPawnComponent*)Obj)->bAutoSetupLinkedAnimLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bAutoSetupLinkedAnimLayer = { "bAutoSetupLinkedAnimLayer", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterPawnComponent), &Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bAutoSetupLinkedAnimLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bAutoSetupLinkedAnimLayer_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bAutoSetupLinkedAnimLayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bUseSingleMesh_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "// If true, it will use the first found match as the first and third person mesh\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "If true, it will use the first found match as the first and third person mesh" },
	};
#endif
	void Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bUseSingleMesh_SetBit(void* Obj)
	{
		((USKGShooterPawnComponent*)Obj)->bUseSingleMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bUseSingleMesh = { "bUseSingleMesh", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterPawnComponent), &Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bUseSingleMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bUseSingleMesh_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bUseSingleMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ThirdPersonMeshComponentName_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "// The name of the Pawns Third Person Mesh Component\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The name of the Pawns Third Person Mesh Component" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ThirdPersonMeshComponentName = { "ThirdPersonMeshComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, ThirdPersonMeshComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ThirdPersonMeshComponentName_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ThirdPersonMeshComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FirstPersonMeshComponentName_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "// The name of the Pawns First Person Mesh Component\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The name of the Pawns First Person Mesh Component" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FirstPersonMeshComponentName = { "FirstPersonMeshComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, FirstPersonMeshComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FirstPersonMeshComponentName_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FirstPersonMeshComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponentName_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "// The name of the Pawns Camera Component\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The name of the Pawns Camera Component" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponentName = { "CameraComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, CameraComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponentName_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraAttachedSocket_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "// The socket the camera is attached to on the pawn's mesh\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The socket the camera is attached to on the pawn's mesh" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraAttachedSocket = { "CameraAttachedSocket", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, CameraAttachedSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraAttachedSocket_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraAttachedSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_GameplayTags_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_GameplayTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bReplicateRemoteYaw_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "// Used for free look, turn in place, etc\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "Used for free look, turn in place, etc" },
	};
#endif
	void Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bReplicateRemoteYaw_SetBit(void* Obj)
	{
		((USKGShooterPawnComponent*)Obj)->bReplicateRemoteYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bReplicateRemoteYaw = { "bReplicateRemoteYaw", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterPawnComponent), &Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bReplicateRemoteYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bReplicateRemoteYaw_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bReplicateRemoteYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteYawReplicationRate_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "// Replication rate for the Yaw. 0 = every frame\n" },
		{ "EditCondition", "bReplicateRemoteYaw" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "Replication rate for the Yaw. 0 = every frame" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteYawReplicationRate = { "RemoteYawReplicationRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, RemoteYawReplicationRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteYawReplicationRate_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteYawReplicationRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_NightVisionMaterialParameterCollection_MetaData[] = {
		{ "Category", "SKGShooterFramework|Initialize" },
		{ "Comment", "// The material parameter collection to be used for handling infrared (when you turn night vision on/off)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "The material parameter collection to be used for handling infrared (when you turn night vision on/off)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_NightVisionMaterialParameterCollection = { "NightVisionMaterialParameterCollection", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, NightVisionMaterialParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_NightVisionMaterialParameterCollection_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_NightVisionMaterialParameterCollection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FreeLookSettings_MetaData[] = {
		{ "Category", "SKGShooterFramework|FreeLook" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FreeLookSettings = { "FreeLookSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, FreeLookSettings), Z_Construct_UScriptStruct_FSKGFreeLookSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FreeLookSettings_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FreeLookSettings_MetaData) }; // 1142580424
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LeanLeftRightSettings_MetaData[] = {
		{ "Category", "SKGShooterFramework|Leaning" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LeanLeftRightSettings = { "LeanLeftRightSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, LeanLeftRightSettings), Z_Construct_UScriptStruct_FSKGLeanLeftRightSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LeanLeftRightSettings_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LeanLeftRightSettings_MetaData) }; // 2183493425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "BlueprintGetter", "GetCameraComponent" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshFP_MetaData[] = {
		{ "BlueprintGetter", "GetPawnMesh" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshFP = { "MeshFP", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, MeshFP), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshFP_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshFP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshTP_MetaData[] = {
		{ "BlueprintGetter", "GetPawnMesh" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshTP = { "MeshTP", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, MeshTP), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshTP_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshTP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ShooterFrameworkAnimInstance_MetaData[] = {
		{ "BlueprintGetter", "GetShooterFrameworkAnimInstance" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ShooterFrameworkAnimInstance = { "ShooterFrameworkAnimInstance", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, ShooterFrameworkAnimInstance), Z_Construct_UClass_USKGShooterFrameworkAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ShooterFrameworkAnimInstance_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ShooterFrameworkAnimInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OwningPawn_MetaData[] = {
		{ "BlueprintGetter", "GetOwningPawn" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OwningPawn_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OwningPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ProceduralShooterPawnData_MetaData[] = {
		{ "BlueprintGetter", "GetProceduralShooterPawnData" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ProceduralShooterPawnData = { "ProceduralShooterPawnData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, ProceduralShooterPawnData), Z_Construct_UScriptStruct_FSKGProceduralShooterPawnData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ProceduralShooterPawnData_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ProceduralShooterPawnData_MetaData) }; // 1720020876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_TargetLeanAngleCompressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_TargetLeanAngleCompressed = { "TargetLeanAngleCompressed", "OnRep_TargetLeanAngleCompressed", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, TargetLeanAngleCompressed), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_TargetLeanAngleCompressed_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_TargetLeanAngleCompressed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_HeldActor_MetaData[] = {
		{ "BlueprintGetter", "GetHeldActor" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_HeldActor = { "HeldActor", "OnRep_HeldActor", (EPropertyFlags)0x0024080100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, HeldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_HeldActor_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_HeldActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "BlueprintGetter", "IsAiming" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((USKGShooterPawnComponent*)Obj)->bIsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bIsAiming = { "bIsAiming", "OnRep_IsAiming", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterPawnComponent), &Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bIsAiming_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bIsAiming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralPoseData_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentProceduralPoseReplicationData" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralPoseData = { "CurrentProceduralPoseData", "OnRep_CurrentProceduralPoseData", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, CurrentProceduralPoseData), Z_Construct_UScriptStruct_FSKGProceduralPoseReplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralPoseData_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralPoseData_MetaData) }; // 2945867780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bOffHandIKIsLeftHand_MetaData[] = {
		{ "BlueprintGetter", "GetOffHandIKIsLeftHand" },
		{ "Category", "SKGShooterFramework|PawnComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bOffHandIKIsLeftHand_SetBit(void* Obj)
	{
		((USKGShooterPawnComponent*)Obj)->bOffHandIKIsLeftHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bOffHandIKIsLeftHand = { "bOffHandIKIsLeftHand", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterPawnComponent), &Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bOffHandIKIsLeftHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bOffHandIKIsLeftHand_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bOffHandIKIsLeftHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bInFreeLook_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bInFreeLook_SetBit(void* Obj)
	{
		((USKGShooterPawnComponent*)Obj)->bInFreeLook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bInFreeLook = { "bInFreeLook", "OnRep_InFreeLook", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterPawnComponent), &Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bInFreeLook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bInFreeLook_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bInFreeLook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteViewYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteViewYaw = { "RemoteViewYaw", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, RemoteViewYaw), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteViewYaw_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteViewYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentFirearmComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentFirearmComponent = { "CurrentFirearmComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, CurrentFirearmComponent), Z_Construct_UClass_USKGFirearmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentFirearmComponent_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentFirearmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralAnimComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralAnimComponent = { "CurrentProceduralAnimComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, CurrentProceduralAnimComponent), Z_Construct_UClass_USKGProceduralAnimComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralAnimComponent_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralAnimComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnPoseComplete_MetaData[] = {
		{ "Category", "SKGShooterFramework|PawnComponent|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnPoseComplete = { "OnPoseComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, OnPoseComplete), Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnPoseComplete_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnPoseComplete_MetaData) }; // 208389885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnHeldActorSet_MetaData[] = {
		{ "Category", "SKGShooterFramework|PawnComponent|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnHeldActorSet = { "OnHeldActorSet", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterPawnComponent, OnHeldActorSet), Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnHeldActorSet_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnHeldActorSet_MetaData) }; // 4027736775
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bPrintHit_MetaData[] = {
		{ "Category", "SKGShooterFramework|Debug" },
		{ "Comment", "// If true, firearm collision will be printed\n" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
		{ "ToolTip", "If true, firearm collision will be printed" },
	};
#endif
	void Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bPrintHit_SetBit(void* Obj)
	{
		((USKGShooterPawnComponent*)Obj)->bPrintHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bPrintHit = { "bPrintHit", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterPawnComponent), &Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bPrintHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bPrintHit_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bPrintHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bDrawDebugTrace_MetaData[] = {
		{ "Category", "SKGShooterFramework|Debug" },
		{ "ModuleRelativePath", "Public/Components/SKGShooterPawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bDrawDebugTrace_SetBit(void* Obj)
	{
		((USKGShooterPawnComponent*)Obj)->bDrawDebugTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bDrawDebugTrace = { "bDrawDebugTrace", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGShooterPawnComponent), &Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bDrawDebugTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bDrawDebugTrace_MetaData), Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bDrawDebugTrace_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGShooterPawnComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LinkedAnimLayerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bAutoSetupLinkedAnimLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bUseSingleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ThirdPersonMeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FirstPersonMeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraAttachedSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bReplicateRemoteYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteYawReplicationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_NightVisionMaterialParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_FreeLookSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_LeanLeftRightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshFP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_MeshTP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ShooterFrameworkAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OwningPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_ProceduralShooterPawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_TargetLeanAngleCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_HeldActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bIsAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralPoseData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bOffHandIKIsLeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bInFreeLook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_RemoteViewYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentFirearmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_CurrentProceduralAnimComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnPoseComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_OnHeldActorSet,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bPrintHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterPawnComponent_Statics::NewProp_bDrawDebugTrace,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGShooterPawnComponent, IGameplayTagAssetInterface), false },  // 3291755243
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGShooterPawnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterPawnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterPawnComponent_Statics::ClassParams = {
		&USKGShooterPawnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGShooterPawnComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterPawnComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterPawnComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGShooterPawnComponent()
	{
		if (!Z_Registration_Info_UClass_USKGShooterPawnComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterPawnComponent.OuterSingleton, Z_Construct_UClass_USKGShooterPawnComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGShooterPawnComponent.OuterSingleton;
	}
	template<> SKGSHOOTERFRAMEWORK_API UClass* StaticClass<USKGShooterPawnComponent>()
	{
		return USKGShooterPawnComponent::StaticClass();
	}

	void USKGShooterPawnComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TargetLeanAngleCompressed(TEXT("TargetLeanAngleCompressed"));
		static const FName Name_HeldActor(TEXT("HeldActor"));
		static const FName Name_bIsAiming(TEXT("bIsAiming"));
		static const FName Name_CurrentProceduralPoseData(TEXT("CurrentProceduralPoseData"));
		static const FName Name_bOffHandIKIsLeftHand(TEXT("bOffHandIKIsLeftHand"));
		static const FName Name_bInFreeLook(TEXT("bInFreeLook"));
		static const FName Name_RemoteViewYaw(TEXT("RemoteViewYaw"));

		const bool bIsValid = true
			&& Name_TargetLeanAngleCompressed == ClassReps[(int32)ENetFields_Private::TargetLeanAngleCompressed].Property->GetFName()
			&& Name_HeldActor == ClassReps[(int32)ENetFields_Private::HeldActor].Property->GetFName()
			&& Name_bIsAiming == ClassReps[(int32)ENetFields_Private::bIsAiming].Property->GetFName()
			&& Name_CurrentProceduralPoseData == ClassReps[(int32)ENetFields_Private::CurrentProceduralPoseData].Property->GetFName()
			&& Name_bOffHandIKIsLeftHand == ClassReps[(int32)ENetFields_Private::bOffHandIKIsLeftHand].Property->GetFName()
			&& Name_bInFreeLook == ClassReps[(int32)ENetFields_Private::bInFreeLook].Property->GetFName()
			&& Name_RemoteViewYaw == ClassReps[(int32)ENetFields_Private::RemoteViewYaw].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USKGShooterPawnComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterPawnComponent);
	USKGShooterPawnComponent::~USKGShooterPawnComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_Statics::ScriptStructInfo[] = {
		{ FSKGFreeLookSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGFreeLookSettings_Statics::NewStructOps, TEXT("SKGFreeLookSettings"), &Z_Registration_Info_UScriptStruct_SKGFreeLookSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGFreeLookSettings), 1142580424U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterPawnComponent, USKGShooterPawnComponent::StaticClass, TEXT("USKGShooterPawnComponent"), &Z_Registration_Info_UClass_USKGShooterPawnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterPawnComponent), 1237295111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_1459772972(TEXT("/Script/SKGShooterFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFramework_Public_Components_SKGShooterPawnComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
