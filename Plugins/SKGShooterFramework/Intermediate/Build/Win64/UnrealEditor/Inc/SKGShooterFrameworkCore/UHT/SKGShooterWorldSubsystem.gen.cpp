// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGShooterFrameworkCore/Public/Subsystems/SKGShooterWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterWorldSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterWorldSubsystem();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterWorldSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References
	DEFINE_FUNCTION(USKGShooterWorldSubsystem::execIsInfraredModeEnabledOnPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInfraredModeEnabledOnPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterWorldSubsystem::execGetInfraredDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetInfraredDevices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterWorldSubsystem::execUnregisterInfraredDevice)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_InfraredDevice);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterInfraredDevice(Z_Param_InfraredDevice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterWorldSubsystem::execRegisterInfraredDevice)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_InfraredDevice);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterInfraredDevice(Z_Param_InfraredDevice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterWorldSubsystem::execDisableInfraredMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInfraredMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterWorldSubsystem::execEnableInfraredMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableInfraredMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGShooterWorldSubsystem::execSetNightVisionColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNightVisionColor(Z_Param_Out_Color);
		P_NATIVE_END;
	}
	void USKGShooterWorldSubsystem::StaticRegisterNativesUSKGShooterWorldSubsystem()
	{
		UClass* Class = USKGShooterWorldSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableInfraredMode", &USKGShooterWorldSubsystem::execDisableInfraredMode },
			{ "EnableInfraredMode", &USKGShooterWorldSubsystem::execEnableInfraredMode },
			{ "GetInfraredDevices", &USKGShooterWorldSubsystem::execGetInfraredDevices },
			{ "IsInfraredModeEnabledOnPlayer", &USKGShooterWorldSubsystem::execIsInfraredModeEnabledOnPlayer },
			{ "RegisterInfraredDevice", &USKGShooterWorldSubsystem::execRegisterInfraredDevice },
			{ "SetNightVisionColor", &USKGShooterWorldSubsystem::execSetNightVisionColor },
			{ "UnregisterInfraredDevice", &USKGShooterWorldSubsystem::execUnregisterInfraredDevice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGShooterWorldSubsystem_DisableInfraredMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_DisableInfraredMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Infrared" },
		{ "Comment", "// If you disable something like night vision, this will turn all off devices that are in infrared mode to off\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
		{ "ToolTip", "If you disable something like night vision, this will turn all off devices that are in infrared mode to off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterWorldSubsystem_DisableInfraredMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterWorldSubsystem, nullptr, "DisableInfraredMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_DisableInfraredMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterWorldSubsystem_DisableInfraredMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterWorldSubsystem_DisableInfraredMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterWorldSubsystem_DisableInfraredMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterWorldSubsystem_EnableInfraredMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_EnableInfraredMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Infrared" },
		{ "Comment", "// If you enable something like night vision, this will turn all on devices that are in infrared mode to on\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
		{ "ToolTip", "If you enable something like night vision, this will turn all on devices that are in infrared mode to on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterWorldSubsystem_EnableInfraredMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterWorldSubsystem, nullptr, "EnableInfraredMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_EnableInfraredMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterWorldSubsystem_EnableInfraredMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGShooterWorldSubsystem_EnableInfraredMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterWorldSubsystem_EnableInfraredMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics
	{
		struct SKGShooterWorldSubsystem_eventGetInfraredDevices_Parms
		{
			TArray<UActorComponent*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterWorldSubsystem_eventGetInfraredDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Infrared" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterWorldSubsystem, nullptr, "GetInfraredDevices", nullptr, nullptr, Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::SKGShooterWorldSubsystem_eventGetInfraredDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::SKGShooterWorldSubsystem_eventGetInfraredDevices_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics
	{
		struct SKGShooterWorldSubsystem_eventIsInfraredModeEnabledOnPlayer_Parms
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
	void Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterWorldSubsystem_eventIsInfraredModeEnabledOnPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterWorldSubsystem_eventIsInfraredModeEnabledOnPlayer_Parms), &Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Infrared" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterWorldSubsystem, nullptr, "IsInfraredModeEnabledOnPlayer", nullptr, nullptr, Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::SKGShooterWorldSubsystem_eventIsInfraredModeEnabledOnPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::SKGShooterWorldSubsystem_eventIsInfraredModeEnabledOnPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics
	{
		struct SKGShooterWorldSubsystem_eventRegisterInfraredDevice_Parms
		{
			UActorComponent* InfraredDevice;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfraredDevice_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InfraredDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::NewProp_InfraredDevice_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::NewProp_InfraredDevice = { "InfraredDevice", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterWorldSubsystem_eventRegisterInfraredDevice_Parms, InfraredDevice), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::NewProp_InfraredDevice_MetaData), Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::NewProp_InfraredDevice_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::NewProp_InfraredDevice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Infrared" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterWorldSubsystem, nullptr, "RegisterInfraredDevice", nullptr, nullptr, Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::SKGShooterWorldSubsystem_eventRegisterInfraredDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::SKGShooterWorldSubsystem_eventRegisterInfraredDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics
	{
		struct SKGShooterWorldSubsystem_eventSetNightVisionColor_Parms
		{
			FLinearColor Color;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterWorldSubsystem_eventSetNightVisionColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::NewProp_Color_MetaData), Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::NewProp_Color_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Infrared" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterWorldSubsystem, nullptr, "SetNightVisionColor", nullptr, nullptr, Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::SKGShooterWorldSubsystem_eventSetNightVisionColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::SKGShooterWorldSubsystem_eventSetNightVisionColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics
	{
		struct SKGShooterWorldSubsystem_eventUnregisterInfraredDevice_Parms
		{
			UActorComponent* InfraredDevice;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfraredDevice_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InfraredDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::NewProp_InfraredDevice_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::NewProp_InfraredDevice = { "InfraredDevice", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterWorldSubsystem_eventUnregisterInfraredDevice_Parms, InfraredDevice), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::NewProp_InfraredDevice_MetaData), Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::NewProp_InfraredDevice_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::NewProp_InfraredDevice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGShooterWorldSubsystem|Infrared" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterWorldSubsystem, nullptr, "UnregisterInfraredDevice", nullptr, nullptr, Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::SKGShooterWorldSubsystem_eventUnregisterInfraredDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::SKGShooterWorldSubsystem_eventUnregisterInfraredDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterWorldSubsystem);
	UClass* Z_Construct_UClass_USKGShooterWorldSubsystem_NoRegister()
	{
		return USKGShooterWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USKGShooterWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InfraredDevices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfraredDevices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InfraredDevices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfraredMPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InfraredMPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGShooterWorldSubsystem_DisableInfraredMode, "DisableInfraredMode" }, // 340125567
		{ &Z_Construct_UFunction_USKGShooterWorldSubsystem_EnableInfraredMode, "EnableInfraredMode" }, // 377070672
		{ &Z_Construct_UFunction_USKGShooterWorldSubsystem_GetInfraredDevices, "GetInfraredDevices" }, // 649710902
		{ &Z_Construct_UFunction_USKGShooterWorldSubsystem_IsInfraredModeEnabledOnPlayer, "IsInfraredModeEnabledOnPlayer" }, // 1148279681
		{ &Z_Construct_UFunction_USKGShooterWorldSubsystem_RegisterInfraredDevice, "RegisterInfraredDevice" }, // 1199293673
		{ &Z_Construct_UFunction_USKGShooterWorldSubsystem_SetNightVisionColor, "SetNightVisionColor" }, // 3812348757
		{ &Z_Construct_UFunction_USKGShooterWorldSubsystem_UnregisterInfraredDevice, "UnregisterInfraredDevice" }, // 1798157686
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/SKGShooterWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredDevices_Inner = { "InfraredDevices", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredDevices_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredDevices = { "InfraredDevices", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterWorldSubsystem, InfraredDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredDevices_MetaData), Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredDevices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredMPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SKGShooterWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredMPC = { "InfraredMPC", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterWorldSubsystem, InfraredMPC), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredMPC_MetaData), Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredMPC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::NewProp_InfraredMPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::ClassParams = {
		&USKGShooterWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGShooterWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_USKGShooterWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterWorldSubsystem.OuterSingleton, Z_Construct_UClass_USKGShooterWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGShooterWorldSubsystem.OuterSingleton;
	}
	template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGShooterWorldSubsystem>()
	{
		return USKGShooterWorldSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterWorldSubsystem);
	USKGShooterWorldSubsystem::~USKGShooterWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterWorldSubsystem, USKGShooterWorldSubsystem::StaticClass, TEXT("USKGShooterWorldSubsystem"), &Z_Registration_Info_UClass_USKGShooterWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterWorldSubsystem), 2466508443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_828059587(TEXT("/Script/SKGShooterFrameworkCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Subsystems_SKGShooterWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
