// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGLightLaser/Public/Components/SKGLightLaserComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGLightLaserComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SKGLIGHTLASER_API UClass* Z_Construct_UClass_USKGLightLaserComponent();
	SKGLIGHTLASER_API UClass* Z_Construct_UClass_USKGLightLaserComponent_NoRegister();
	SKGLIGHTLASER_API UEnum* Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode();
	SKGLIGHTLASER_API UEnum* Z_Construct_UEnum_SKGLightLaser_ESKGLightMode();
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature();
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature();
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature();
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature();
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature();
	SKGLIGHTLASER_API UScriptStruct* Z_Construct_UScriptStruct_FSKGLaserMaterial();
	SKGLIGHTLASER_API UScriptStruct* Z_Construct_UScriptStruct_FSKGLaserSettings();
	SKGLIGHTLASER_API UScriptStruct* Z_Construct_UScriptStruct_FSKGLaserState();
	SKGLIGHTLASER_API UScriptStruct* Z_Construct_UScriptStruct_FSKGLightLaserCycleMode();
	SKGLIGHTLASER_API UScriptStruct* Z_Construct_UScriptStruct_FSKGLightLaserCycleModes();
	SKGLIGHTLASER_API UScriptStruct* Z_Construct_UScriptStruct_FSKGLightSettings();
	SKGLIGHTLASER_API UScriptStruct* Z_Construct_UScriptStruct_FSKGLightState();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGInfraredInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGLightLaser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESKGLaserMode;
	static UEnum* ESKGLaserMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESKGLaserMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESKGLaserMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode, (UObject*)Z_Construct_UPackage__Script_SKGLightLaser(), TEXT("ESKGLaserMode"));
		}
		return Z_Registration_Info_UEnum_ESKGLaserMode.OuterSingleton;
	}
	template<> SKGLIGHTLASER_API UEnum* StaticEnum<ESKGLaserMode>()
	{
		return ESKGLaserMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode_Statics::Enumerators[] = {
		{ "ESKGLaserMode::Off", (int64)ESKGLaserMode::Off },
		{ "ESKGLaserMode::On", (int64)ESKGLaserMode::On },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "ESKGLaserMode::Off" },
		{ "On.DisplayName", "On" },
		{ "On.Name", "ESKGLaserMode::On" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SKGLightLaser,
		nullptr,
		"ESKGLaserMode",
		"ESKGLaserMode",
		Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode()
	{
		if (!Z_Registration_Info_UEnum_ESKGLaserMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESKGLaserMode.InnerSingleton, Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESKGLaserMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESKGLightMode;
	static UEnum* ESKGLightMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESKGLightMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESKGLightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SKGLightLaser_ESKGLightMode, (UObject*)Z_Construct_UPackage__Script_SKGLightLaser(), TEXT("ESKGLightMode"));
		}
		return Z_Registration_Info_UEnum_ESKGLightMode.OuterSingleton;
	}
	template<> SKGLIGHTLASER_API UEnum* StaticEnum<ESKGLightMode>()
	{
		return ESKGLightMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SKGLightLaser_ESKGLightMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SKGLightLaser_ESKGLightMode_Statics::Enumerators[] = {
		{ "ESKGLightMode::Off", (int64)ESKGLightMode::Off },
		{ "ESKGLightMode::On", (int64)ESKGLightMode::On },
		{ "ESKGLightMode::Strobe", (int64)ESKGLightMode::Strobe },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SKGLightLaser_ESKGLightMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "ESKGLightMode::Off" },
		{ "On.DisplayName", "On" },
		{ "On.Name", "ESKGLightMode::On" },
		{ "Strobe.DisplayName", "Strobe" },
		{ "Strobe.Name", "ESKGLightMode::Strobe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SKGLightLaser_ESKGLightMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SKGLightLaser,
		nullptr,
		"ESKGLightMode",
		"ESKGLightMode",
		Z_Construct_UEnum_SKGLightLaser_ESKGLightMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SKGLightLaser_ESKGLightMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SKGLightLaser_ESKGLightMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SKGLightLaser_ESKGLightMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SKGLightLaser_ESKGLightMode()
	{
		if (!Z_Registration_Info_UEnum_ESKGLightMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESKGLightMode.InnerSingleton, Z_Construct_UEnum_SKGLightLaser_ESKGLightMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESKGLightMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGLaserMaterial;
class UScriptStruct* FSKGLaserMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGLaserMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGLaserMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGLaserMaterial, (UObject*)Z_Construct_UPackage__Script_SKGLightLaser(), TEXT("SKGLaserMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_SKGLaserMaterial.OuterSingleton;
}
template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<FSKGLaserMaterial>()
{
	return FSKGLaserMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Laser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Laser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserDot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserDot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGLaserMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_Laser_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Material to be used for the laser mesh\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Material to be used for the laser mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_Laser = { "Laser", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserMaterial, Laser), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_Laser_MetaData), Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_Laser_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_LaserDot_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Material to be used for the laser dot\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Material to be used for the laser dot" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_LaserDot = { "LaserDot", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserMaterial, LaserDot), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_LaserDot_MetaData), Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_LaserDot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_Laser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewProp_LaserDot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGLightLaser,
		nullptr,
		&NewStructOps,
		"SKGLaserMaterial",
		Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::PropPointers),
		sizeof(FSKGLaserMaterial),
		alignof(FSKGLaserMaterial),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGLaserMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGLaserMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGLaserMaterial.InnerSingleton, Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGLaserMaterial.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGLaserState;
class UScriptStruct* FSKGLaserState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGLaserState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGLaserState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGLaserState, (UObject*)Z_Construct_UPackage__Script_SKGLightLaser(), TEXT("SKGLaserState"));
	}
	return Z_Registration_Info_UScriptStruct_SKGLaserState.OuterSingleton;
}
template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<FSKGLaserState>()
{
	return FSKGLaserState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGLaserState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LaserMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LaserMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGLaserState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGLaserState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGLaserState_Statics::NewProp_LaserMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserState_Statics::NewProp_LaserMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGLaserState_Statics::NewProp_LaserMode = { "LaserMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserState, LaserMode), Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserState_Statics::NewProp_LaserMode_MetaData), Z_Construct_UScriptStruct_FSKGLaserState_Statics::NewProp_LaserMode_MetaData) }; // 2227908217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGLaserState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserState_Statics::NewProp_LaserMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserState_Statics::NewProp_LaserMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGLaserState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGLightLaser,
		nullptr,
		&NewStructOps,
		"SKGLaserState",
		Z_Construct_UScriptStruct_FSKGLaserState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserState_Statics::PropPointers),
		sizeof(FSKGLaserState),
		alignof(FSKGLaserState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGLaserState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGLaserState()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGLaserState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGLaserState.InnerSingleton, Z_Construct_UScriptStruct_FSKGLaserState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGLaserState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGLaserSettings;
class UScriptStruct* FSKGLaserSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGLaserSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGLaserSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGLaserSettings, (UObject*)Z_Construct_UPackage__Script_SKGLightLaser(), TEXT("SKGLaserSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGLaserSettings.OuterSingleton;
}
template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<FSKGLaserSettings>()
{
	return FSKGLaserSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGLaserSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLaserDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLaserDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaserScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserDecalScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaserDecalScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLaserDecalSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLaserDecalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLaserDecalSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLaserDecalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfraredLaserMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InfraredLaserMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLaserMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLaserMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGLaserSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDistance_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Max distance the laser will go\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Max distance the laser will go" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDistance = { "MaxLaserDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserSettings, MaxLaserDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDistance_MetaData), Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserScaleFactor_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Based on length of your laser mesh, the provided example is 2000 units long so the scale factor is 20\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Based on length of your laser mesh, the provided example is 2000 units long so the scale factor is 20" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserScaleFactor = { "LaserScaleFactor", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserSettings, LaserScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserScaleFactor_MetaData), Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserScaleFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserDecalScaleFactor_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Scale factor for the laser dot to control how it scales up/down based on distance away\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Scale factor for the laser dot to control how it scales up/down based on distance away" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserDecalScaleFactor = { "LaserDecalScaleFactor", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserSettings, LaserDecalScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserDecalScaleFactor_MetaData), Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserDecalScaleFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MinLaserDecalSize_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Minimum size of the laser dot decal\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Minimum size of the laser dot decal" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MinLaserDecalSize = { "MinLaserDecalSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserSettings, MinLaserDecalSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MinLaserDecalSize_MetaData), Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MinLaserDecalSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDecalSize_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Maximum size of the laser decal\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Maximum size of the laser decal" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDecalSize = { "MaxLaserDecalSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserSettings, MaxLaserDecalSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDecalSize_MetaData), Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDecalSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_InfraredLaserMaterial_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_InfraredLaserMaterial = { "InfraredLaserMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserSettings, InfraredLaserMaterial), Z_Construct_UScriptStruct_FSKGLaserMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_InfraredLaserMaterial_MetaData), Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_InfraredLaserMaterial_MetaData) }; // 2982958277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_DefaultLaserMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_DefaultLaserMaterial = { "DefaultLaserMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLaserSettings, DefaultLaserMaterial), Z_Construct_UScriptStruct_FSKGLaserMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_DefaultLaserMaterial_MetaData), Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_DefaultLaserMaterial_MetaData) }; // 2982958277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_LaserDecalScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MinLaserDecalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_MaxLaserDecalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_InfraredLaserMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewProp_DefaultLaserMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGLightLaser,
		nullptr,
		&NewStructOps,
		"SKGLaserSettings",
		Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::PropPointers),
		sizeof(FSKGLaserSettings),
		alignof(FSKGLaserSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGLaserSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGLaserSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGLaserSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGLaserSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGLightState;
class UScriptStruct* FSKGLightState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGLightState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGLightState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGLightState, (UObject*)Z_Construct_UPackage__Script_SKGLightLaser(), TEXT("SKGLightState"));
	}
	return Z_Registration_Info_UScriptStruct_SKGLightState.OuterSingleton;
}
template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<FSKGLightState>()
{
	return FSKGLightState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGLightState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightIntensityIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_LightIntensityIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGLightState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGLightState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightMode = { "LightMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLightState, LightMode), Z_Construct_UEnum_SKGLightLaser_ESKGLightMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightMode_MetaData), Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightMode_MetaData) }; // 2474966326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightIntensityIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightIntensityIndex = { "LightIntensityIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLightState, LightIntensityIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightIntensityIndex_MetaData), Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightIntensityIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGLightState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightState_Statics::NewProp_LightIntensityIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGLightState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGLightLaser,
		nullptr,
		&NewStructOps,
		"SKGLightState",
		Z_Construct_UScriptStruct_FSKGLightState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightState_Statics::PropPointers),
		sizeof(FSKGLightState),
		alignof(FSKGLightState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGLightState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGLightState()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGLightState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGLightState.InnerSingleton, Z_Construct_UScriptStruct_FSKGLightState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGLightState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGLightSettings;
class UScriptStruct* FSKGLightSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGLightSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGLightSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGLightSettings, (UObject*)Z_Construct_UPackage__Script_SKGLightLaser(), TEXT("SKGLightSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGLightSettings.OuterSingleton;
}
template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<FSKGLightSettings>()
{
	return FSKGLightSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGLightSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightStrobeInterval_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LightStrobeInterval;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightIntensities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightIntensities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LightIntensities;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightIntensitiesInfrared_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightIntensitiesInfrared_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LightIntensitiesInfrared;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGLightSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightStrobeInterval_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Time between the light turning on/off for the strobing\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Time between the light turning on/off for the strobing" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightStrobeInterval = { "LightStrobeInterval", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLightSettings, LightStrobeInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightStrobeInterval_MetaData), Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightStrobeInterval_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensities_Inner = { "LightIntensities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensities_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Light brightness settings\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Light brightness settings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensities = { "LightIntensities", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLightSettings, LightIntensities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensities_MetaData), Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensities_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensitiesInfrared_Inner = { "LightIntensitiesInfrared", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensitiesInfrared_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "Comment", "// Infrared (night vision) brightness settings\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Infrared (night vision) brightness settings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensitiesInfrared = { "LightIntensitiesInfrared", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLightSettings, LightIntensitiesInfrared), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensitiesInfrared_MetaData), Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensitiesInfrared_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGLightSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightStrobeInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensitiesInfrared_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewProp_LightIntensitiesInfrared,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGLightSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGLightLaser,
		nullptr,
		&NewStructOps,
		"SKGLightSettings",
		Z_Construct_UScriptStruct_FSKGLightSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightSettings_Statics::PropPointers),
		sizeof(FSKGLightSettings),
		alignof(FSKGLightSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGLightSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGLightSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGLightSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGLightSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGLightSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGLightSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGLightLaserCycleMode;
class UScriptStruct* FSKGLightLaserCycleMode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGLightLaserCycleMode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGLightLaserCycleMode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGLightLaserCycleMode, (UObject*)Z_Construct_UPackage__Script_SKGLightLaser(), TEXT("SKGLightLaserCycleMode"));
	}
	return Z_Registration_Info_UScriptStruct_SKGLightLaserCycleMode.OuterSingleton;
}
template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<FSKGLightLaserCycleMode>()
{
	return FSKGLightLaserCycleMode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LaserMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LaserMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInfrared_MetaData[];
#endif
		static void NewProp_bInfrared_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfrared;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGLightLaserCycleMode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LaserMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LaserMode_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LaserMode = { "LaserMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLightLaserCycleMode, LaserMode), Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LaserMode_MetaData), Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LaserMode_MetaData) }; // 2227908217
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LightMode_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LightMode = { "LightMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLightLaserCycleMode, LightMode), Z_Construct_UEnum_SKGLightLaser_ESKGLightMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LightMode_MetaData), Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LightMode_MetaData) }; // 2474966326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_bInfrared_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_bInfrared_SetBit(void* Obj)
	{
		((FSKGLightLaserCycleMode*)Obj)->bInfrared = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_bInfrared = { "bInfrared", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSKGLightLaserCycleMode), &Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_bInfrared_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_bInfrared_MetaData), Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_bInfrared_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LaserMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LaserMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LightMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_LightMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewProp_bInfrared,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGLightLaser,
		nullptr,
		&NewStructOps,
		"SKGLightLaserCycleMode",
		Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::PropPointers),
		sizeof(FSKGLightLaserCycleMode),
		alignof(FSKGLightLaserCycleMode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGLightLaserCycleMode()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGLightLaserCycleMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGLightLaserCycleMode.InnerSingleton, Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGLightLaserCycleMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGLightLaserCycleModes;
class UScriptStruct* FSKGLightLaserCycleModes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGLightLaserCycleModes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGLightLaserCycleModes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGLightLaserCycleModes, (UObject*)Z_Construct_UPackage__Script_SKGLightLaser(), TEXT("SKGLightLaserCycleModes"));
	}
	return Z_Registration_Info_UScriptStruct_SKGLightLaserCycleModes.OuterSingleton;
}
template<> SKGLIGHTLASER_API UScriptStruct* StaticStruct<FSKGLightLaserCycleModes>()
{
	return FSKGLightLaserCycleModes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightLaserModes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightLaserModes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LightLaserModes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGLightLaserCycleModes>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::NewProp_LightLaserModes_Inner = { "LightLaserModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGLightLaserCycleMode, METADATA_PARAMS(0, nullptr) }; // 3255628516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::NewProp_LightLaserModes_MetaData[] = {
		{ "Category", "SKGLightLaser" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::NewProp_LightLaserModes = { "LightLaserModes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGLightLaserCycleModes, LightLaserModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::NewProp_LightLaserModes_MetaData), Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::NewProp_LightLaserModes_MetaData) }; // 3255628516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::NewProp_LightLaserModes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::NewProp_LightLaserModes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SKGLightLaser,
		nullptr,
		&NewStructOps,
		"SKGLightLaserCycleModes",
		Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::PropPointers),
		sizeof(FSKGLightLaserCycleModes),
		alignof(FSKGLightLaserCycleModes),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSKGLightLaserCycleModes()
	{
		if (!Z_Registration_Info_UScriptStruct_SKGLightLaserCycleModes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGLightLaserCycleModes.InnerSingleton, Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SKGLightLaserCycleModes.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics
	{
		struct _Script_SKGLightLaser_eventOnLaserStateChanged_Parms
		{
			ESKGLaserMode LaserMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LaserMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LaserMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::NewProp_LaserMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::NewProp_LaserMode = { "LaserMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGLightLaser_eventOnLaserStateChanged_Parms, LaserMode), Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode, METADATA_PARAMS(0, nullptr) }; // 2227908217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::NewProp_LaserMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::NewProp_LaserMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGLightLaser, nullptr, "OnLaserStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnLaserStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnLaserStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLaserStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLaserStateChanged, ESKGLaserMode LaserMode)
{
	struct _Script_SKGLightLaser_eventOnLaserStateChanged_Parms
	{
		ESKGLaserMode LaserMode;
	};
	_Script_SKGLightLaser_eventOnLaserStateChanged_Parms Parms;
	Parms.LaserMode=LaserMode;
	OnLaserStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics
	{
		struct _Script_SKGLightLaser_eventOnLightModeChanged_Parms
		{
			ESKGLightMode LightMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::NewProp_LightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::NewProp_LightMode = { "LightMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGLightLaser_eventOnLightModeChanged_Parms, LightMode), Z_Construct_UEnum_SKGLightLaser_ESKGLightMode, METADATA_PARAMS(0, nullptr) }; // 2474966326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::NewProp_LightMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::NewProp_LightMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGLightLaser, nullptr, "OnLightModeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnLightModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnLightModeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLightModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLightModeChanged, ESKGLightMode LightMode)
{
	struct _Script_SKGLightLaser_eventOnLightModeChanged_Parms
	{
		ESKGLightMode LightMode;
	};
	_Script_SKGLightLaser_eventOnLightModeChanged_Parms Parms;
	Parms.LightMode=LightMode;
	OnLightModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics
	{
		struct _Script_SKGLightLaser_eventOnInfraredModeChanged_Parms
		{
			bool bInInfraredMode;
		};
		static void NewProp_bInInfraredMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInfraredMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::NewProp_bInInfraredMode_SetBit(void* Obj)
	{
		((_Script_SKGLightLaser_eventOnInfraredModeChanged_Parms*)Obj)->bInInfraredMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::NewProp_bInInfraredMode = { "bInInfraredMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SKGLightLaser_eventOnInfraredModeChanged_Parms), &Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::NewProp_bInInfraredMode_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::NewProp_bInInfraredMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGLightLaser, nullptr, "OnInfraredModeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnInfraredModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnInfraredModeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInfraredModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInfraredModeChanged, bool bInInfraredMode)
{
	struct _Script_SKGLightLaser_eventOnInfraredModeChanged_Parms
	{
		bool bInInfraredMode;
	};
	_Script_SKGLightLaser_eventOnInfraredModeChanged_Parms Parms;
	Parms.bInInfraredMode=bInInfraredMode ? true : false;
	OnInfraredModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics
	{
		struct _Script_SKGLightLaser_eventOnLightStrobed_Parms
		{
			bool bOn;
		};
		static void NewProp_bOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::NewProp_bOn_SetBit(void* Obj)
	{
		((_Script_SKGLightLaser_eventOnLightStrobed_Parms*)Obj)->bOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::NewProp_bOn = { "bOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SKGLightLaser_eventOnLightStrobed_Parms), &Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::NewProp_bOn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::NewProp_bOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGLightLaser, nullptr, "OnLightStrobed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnLightStrobed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnLightStrobed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLightStrobed_DelegateWrapper(const FMulticastScriptDelegate& OnLightStrobed, bool bOn)
{
	struct _Script_SKGLightLaser_eventOnLightStrobed_Parms
	{
		bool bOn;
	};
	_Script_SKGLightLaser_eventOnLightStrobed_Parms Parms;
	Parms.bOn=bOn ? true : false;
	OnLightStrobed.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics
	{
		struct _Script_SKGLightLaser_eventOnLaserImpact_Parms
		{
			FHitResult HitResult;
			bool bHit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SKGLightLaser_eventOnLaserImpact_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::NewProp_HitResult_MetaData), Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::NewProp_HitResult_MetaData) }; // 1891709922
	void Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((_Script_SKGLightLaser_eventOnLaserImpact_Parms*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SKGLightLaser_eventOnLaserImpact_Parms), &Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::NewProp_bHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SKGLightLaser, nullptr, "OnLaserImpact__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnLaserImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::_Script_SKGLightLaser_eventOnLaserImpact_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLaserImpact_DelegateWrapper(const FMulticastScriptDelegate& OnLaserImpact, FHitResult const& HitResult, bool bHit)
{
	struct _Script_SKGLightLaser_eventOnLaserImpact_Parms
	{
		FHitResult HitResult;
		bool bHit;
	};
	_Script_SKGLightLaser_eventOnLaserImpact_Parms Parms;
	Parms.HitResult=HitResult;
	Parms.bHit=bHit ? true : false;
	OnLaserImpact.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USKGLightLaserComponent::execIsInInfraredMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInInfraredMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execGetLaserDot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetLaserDot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execGetLaserMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetLaserMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execGetLightSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULightComponent**)Z_Param__Result=P_THIS->GetLightSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execCycleLightLaserMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleLightLaserMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execCycleLightIntensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleLightIntensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execSetLightIntensityIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightIntensityIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execIsLightOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLightOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execGetLightMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESKGLightMode*)Z_Param__Result=P_THIS->GetLightMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execSetLightMode)
	{
		P_GET_ENUM(ESKGLightMode,Z_Param_LightMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightMode(ESKGLightMode(Z_Param_LightMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execIsLaserOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLaserOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execGetLaserMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESKGLaserMode*)Z_Param__Result=P_THIS->GetLaserMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execSetLaserMode)
	{
		P_GET_ENUM(ESKGLaserMode,Z_Param_LaserMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLaserMode(ESKGLaserMode(Z_Param_LaserMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execSetInfraredMode)
	{
		P_GET_UBOOL(Z_Param_InfraredModeOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfraredMode(Z_Param_InfraredModeOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execServer_SetLightLaserMode)
	{
		P_GET_STRUCT(FSKGLightLaserCycleMode,Z_Param_LightLaserMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetLightLaserMode_Validate(Z_Param_LightLaserMode))
		{
			RPC_ValidateFailed(TEXT("Server_SetLightLaserMode_Validate"));
			return;
		}
		P_THIS->Server_SetLightLaserMode_Implementation(Z_Param_LightLaserMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execServer_SetLightIntensityIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetLightIntensityIndex_Validate(Z_Param_Index))
		{
			RPC_ValidateFailed(TEXT("Server_SetLightIntensityIndex_Validate"));
			return;
		}
		P_THIS->Server_SetLightIntensityIndex_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execServer_SetLightMode)
	{
		P_GET_ENUM(ESKGLightMode,Z_Param_LightMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetLightMode_Validate(ESKGLightMode(Z_Param_LightMode)))
		{
			RPC_ValidateFailed(TEXT("Server_SetLightMode_Validate"));
			return;
		}
		P_THIS->Server_SetLightMode_Implementation(ESKGLightMode(Z_Param_LightMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execServer_SetLaserMode)
	{
		P_GET_ENUM(ESKGLaserMode,Z_Param_LaserMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetLaserMode_Validate(ESKGLaserMode(Z_Param_LaserMode)))
		{
			RPC_ValidateFailed(TEXT("Server_SetLaserMode_Validate"));
			return;
		}
		P_THIS->Server_SetLaserMode_Implementation(ESKGLaserMode(Z_Param_LaserMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execServer_SetInfraredMode)
	{
		P_GET_UBOOL(Z_Param_bInfraredOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetInfraredMode_Validate(Z_Param_bInfraredOn))
		{
			RPC_ValidateFailed(TEXT("Server_SetInfraredMode_Validate"));
			return;
		}
		P_THIS->Server_SetInfraredMode_Implementation(Z_Param_bInfraredOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execOnRep_LightState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LightState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execOnRep_LaserState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LaserState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGLightLaserComponent::execOnRep_DeviceInfraredOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DeviceInfraredOn();
		P_NATIVE_END;
	}
	struct SKGLightLaserComponent_eventServer_SetInfraredMode_Parms
	{
		bool bInfraredOn;
	};
	struct SKGLightLaserComponent_eventServer_SetLaserMode_Parms
	{
		ESKGLaserMode LaserMode;
	};
	struct SKGLightLaserComponent_eventServer_SetLightIntensityIndex_Parms
	{
		int32 Index;
	};
	struct SKGLightLaserComponent_eventServer_SetLightLaserMode_Parms
	{
		FSKGLightLaserCycleMode LightLaserMode;
	};
	struct SKGLightLaserComponent_eventServer_SetLightMode_Parms
	{
		ESKGLightMode LightMode;
	};
	static FName NAME_USKGLightLaserComponent_Server_SetInfraredMode = FName(TEXT("Server_SetInfraredMode"));
	void USKGLightLaserComponent::Server_SetInfraredMode(bool bInfraredOn)
	{
		SKGLightLaserComponent_eventServer_SetInfraredMode_Parms Parms;
		Parms.bInfraredOn=bInfraredOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USKGLightLaserComponent_Server_SetInfraredMode),&Parms);
	}
	static FName NAME_USKGLightLaserComponent_Server_SetLaserMode = FName(TEXT("Server_SetLaserMode"));
	void USKGLightLaserComponent::Server_SetLaserMode(ESKGLaserMode LaserMode)
	{
		SKGLightLaserComponent_eventServer_SetLaserMode_Parms Parms;
		Parms.LaserMode=LaserMode;
		ProcessEvent(FindFunctionChecked(NAME_USKGLightLaserComponent_Server_SetLaserMode),&Parms);
	}
	static FName NAME_USKGLightLaserComponent_Server_SetLightIntensityIndex = FName(TEXT("Server_SetLightIntensityIndex"));
	void USKGLightLaserComponent::Server_SetLightIntensityIndex(int32 Index)
	{
		SKGLightLaserComponent_eventServer_SetLightIntensityIndex_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_USKGLightLaserComponent_Server_SetLightIntensityIndex),&Parms);
	}
	static FName NAME_USKGLightLaserComponent_Server_SetLightLaserMode = FName(TEXT("Server_SetLightLaserMode"));
	void USKGLightLaserComponent::Server_SetLightLaserMode(FSKGLightLaserCycleMode const& LightLaserMode)
	{
		SKGLightLaserComponent_eventServer_SetLightLaserMode_Parms Parms;
		Parms.LightLaserMode=LightLaserMode;
		ProcessEvent(FindFunctionChecked(NAME_USKGLightLaserComponent_Server_SetLightLaserMode),&Parms);
	}
	static FName NAME_USKGLightLaserComponent_Server_SetLightMode = FName(TEXT("Server_SetLightMode"));
	void USKGLightLaserComponent::Server_SetLightMode(ESKGLightMode LightMode)
	{
		SKGLightLaserComponent_eventServer_SetLightMode_Parms Parms;
		Parms.LightMode=LightMode;
		ProcessEvent(FindFunctionChecked(NAME_USKGLightLaserComponent_Server_SetLightMode),&Parms);
	}
	void USKGLightLaserComponent::StaticRegisterNativesUSKGLightLaserComponent()
	{
		UClass* Class = USKGLightLaserComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CycleLightIntensity", &USKGLightLaserComponent::execCycleLightIntensity },
			{ "CycleLightLaserMode", &USKGLightLaserComponent::execCycleLightLaserMode },
			{ "GetLaserDot", &USKGLightLaserComponent::execGetLaserDot },
			{ "GetLaserMesh", &USKGLightLaserComponent::execGetLaserMesh },
			{ "GetLaserMode", &USKGLightLaserComponent::execGetLaserMode },
			{ "GetLightMode", &USKGLightLaserComponent::execGetLightMode },
			{ "GetLightSource", &USKGLightLaserComponent::execGetLightSource },
			{ "IsInInfraredMode", &USKGLightLaserComponent::execIsInInfraredMode },
			{ "IsLaserOn", &USKGLightLaserComponent::execIsLaserOn },
			{ "IsLightOn", &USKGLightLaserComponent::execIsLightOn },
			{ "OnRep_DeviceInfraredOn", &USKGLightLaserComponent::execOnRep_DeviceInfraredOn },
			{ "OnRep_LaserState", &USKGLightLaserComponent::execOnRep_LaserState },
			{ "OnRep_LightState", &USKGLightLaserComponent::execOnRep_LightState },
			{ "Server_SetInfraredMode", &USKGLightLaserComponent::execServer_SetInfraredMode },
			{ "Server_SetLaserMode", &USKGLightLaserComponent::execServer_SetLaserMode },
			{ "Server_SetLightIntensityIndex", &USKGLightLaserComponent::execServer_SetLightIntensityIndex },
			{ "Server_SetLightLaserMode", &USKGLightLaserComponent::execServer_SetLightLaserMode },
			{ "Server_SetLightMode", &USKGLightLaserComponent::execServer_SetLightMode },
			{ "SetInfraredMode", &USKGLightLaserComponent::execSetInfraredMode },
			{ "SetLaserMode", &USKGLightLaserComponent::execSetLaserMode },
			{ "SetLightIntensityIndex", &USKGLightLaserComponent::execSetLightIntensityIndex },
			{ "SetLightMode", &USKGLightLaserComponent::execSetLightMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_CycleLightIntensity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_CycleLightIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Light" },
		{ "Comment", "// Cycles through the light intensities set in the settings (uses infrared settings if in infrared mode)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Cycles through the light intensities set in the settings (uses infrared settings if in infrared mode)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_CycleLightIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "CycleLightIntensity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_CycleLightIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_CycleLightIntensity_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_CycleLightIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_CycleLightIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_CycleLightLaserMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_CycleLightLaserMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Laser" },
		{ "Comment", "// Cycles through the defined lightlaser modes in LightLaserCycleModes (similar to tarkov setup)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Cycles through the defined lightlaser modes in LightLaserCycleModes (similar to tarkov setup)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_CycleLightLaserMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "CycleLightLaserMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_CycleLightLaserMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_CycleLightLaserMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_CycleLightLaserMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_CycleLightLaserMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics
	{
		struct SKGLightLaserComponent_eventGetLaserDot_Parms
		{
			UStaticMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventGetLaserDot_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "GetLaserDot", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::SKGLightLaserComponent_eventGetLaserDot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::SKGLightLaserComponent_eventGetLaserDot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics
	{
		struct SKGLightLaserComponent_eventGetLaserMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventGetLaserMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "GetLaserMesh", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::SKGLightLaserComponent_eventGetLaserMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::SKGLightLaserComponent_eventGetLaserMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics
	{
		struct SKGLightLaserComponent_eventGetLaserMode_Parms
		{
			ESKGLaserMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventGetLaserMode_Parms, ReturnValue), Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode, METADATA_PARAMS(0, nullptr) }; // 2227908217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Laser" },
		{ "Comment", "// Gets whether or not the laser is in the On or Off state\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Gets whether or not the laser is in the On or Off state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "GetLaserMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::SKGLightLaserComponent_eventGetLaserMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::SKGLightLaserComponent_eventGetLaserMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics
	{
		struct SKGLightLaserComponent_eventGetLightMode_Parms
		{
			ESKGLightMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventGetLightMode_Parms, ReturnValue), Z_Construct_UEnum_SKGLightLaser_ESKGLightMode, METADATA_PARAMS(0, nullptr) }; // 2474966326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Light" },
		{ "Comment", "// Gets the current state of the light mode such as On/Off/Strobe\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Gets the current state of the light mode such as On/Off/Strobe" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "GetLightMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::SKGLightLaserComponent_eventGetLightMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::SKGLightLaserComponent_eventGetLightMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics
	{
		struct SKGLightLaserComponent_eventGetLightSource_Parms
		{
			ULightComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventGetLightSource_Parms, ReturnValue), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "GetLightSource", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::SKGLightLaserComponent_eventGetLightSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::SKGLightLaserComponent_eventGetLightSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics
	{
		struct SKGLightLaserComponent_eventIsInInfraredMode_Parms
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
	void Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGLightLaserComponent_eventIsInInfraredMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGLightLaserComponent_eventIsInInfraredMode_Parms), &Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "IsInInfraredMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::SKGLightLaserComponent_eventIsInInfraredMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::SKGLightLaserComponent_eventIsInInfraredMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics
	{
		struct SKGLightLaserComponent_eventIsLaserOn_Parms
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
	void Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGLightLaserComponent_eventIsLaserOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGLightLaserComponent_eventIsLaserOn_Parms), &Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Laser" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "IsLaserOn", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::SKGLightLaserComponent_eventIsLaserOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::SKGLightLaserComponent_eventIsLaserOn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics
	{
		struct SKGLightLaserComponent_eventIsLightOn_Parms
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
	void Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGLightLaserComponent_eventIsLightOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGLightLaserComponent_eventIsLightOn_Parms), &Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Light" },
		{ "Comment", "// Gets whether the light is in On/Strobe (true) or Off (false)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Gets whether the light is in On/Strobe (true) or Off (false)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "IsLightOn", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::SKGLightLaserComponent_eventIsLightOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::SKGLightLaserComponent_eventIsLightOn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_OnRep_DeviceInfraredOn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_OnRep_DeviceInfraredOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_OnRep_DeviceInfraredOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "OnRep_DeviceInfraredOn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_OnRep_DeviceInfraredOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_OnRep_DeviceInfraredOn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_OnRep_DeviceInfraredOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_OnRep_DeviceInfraredOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LaserState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LaserState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LaserState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "OnRep_LaserState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LaserState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LaserState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LaserState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LaserState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LightState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LightState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LightState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "OnRep_LightState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LightState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LightState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LightState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LightState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics
	{
		static void NewProp_bInfraredOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfraredOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::NewProp_bInfraredOn_SetBit(void* Obj)
	{
		((SKGLightLaserComponent_eventServer_SetInfraredMode_Parms*)Obj)->bInfraredOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::NewProp_bInfraredOn = { "bInfraredOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGLightLaserComponent_eventServer_SetInfraredMode_Parms), &Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::NewProp_bInfraredOn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::NewProp_bInfraredOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "Server_SetInfraredMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::PropPointers), sizeof(SKGLightLaserComponent_eventServer_SetInfraredMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGLightLaserComponent_eventServer_SetInfraredMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_LaserMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LaserMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::NewProp_LaserMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::NewProp_LaserMode = { "LaserMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventServer_SetLaserMode_Parms, LaserMode), Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode, METADATA_PARAMS(0, nullptr) }; // 2227908217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::NewProp_LaserMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::NewProp_LaserMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "Server_SetLaserMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::PropPointers), sizeof(SKGLightLaserComponent_eventServer_SetLaserMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGLightLaserComponent_eventServer_SetLaserMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventServer_SetLightIntensityIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "Server_SetLightIntensityIndex", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::PropPointers), sizeof(SKGLightLaserComponent_eventServer_SetLightIntensityIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGLightLaserComponent_eventServer_SetLightIntensityIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightLaserMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightLaserMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::NewProp_LightLaserMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::NewProp_LightLaserMode = { "LightLaserMode", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventServer_SetLightLaserMode_Parms, LightLaserMode), Z_Construct_UScriptStruct_FSKGLightLaserCycleMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::NewProp_LightLaserMode_MetaData), Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::NewProp_LightLaserMode_MetaData) }; // 3255628516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::NewProp_LightLaserMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "Server_SetLightLaserMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::PropPointers), sizeof(SKGLightLaserComponent_eventServer_SetLightLaserMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGLightLaserComponent_eventServer_SetLightLaserMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::NewProp_LightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::NewProp_LightMode = { "LightMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventServer_SetLightMode_Parms, LightMode), Z_Construct_UEnum_SKGLightLaser_ESKGLightMode, METADATA_PARAMS(0, nullptr) }; // 2474966326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::NewProp_LightMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::NewProp_LightMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "Server_SetLightMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::PropPointers), sizeof(SKGLightLaserComponent_eventServer_SetLightMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(SKGLightLaserComponent_eventServer_SetLightMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics
	{
		struct SKGLightLaserComponent_eventSetInfraredMode_Parms
		{
			bool InfraredModeOn;
		};
		static void NewProp_InfraredModeOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InfraredModeOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::NewProp_InfraredModeOn_SetBit(void* Obj)
	{
		((SKGLightLaserComponent_eventSetInfraredMode_Parms*)Obj)->InfraredModeOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::NewProp_InfraredModeOn = { "InfraredModeOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGLightLaserComponent_eventSetInfraredMode_Parms), &Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::NewProp_InfraredModeOn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::NewProp_InfraredModeOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Laser" },
		{ "Comment", "// Sets whether the device should be in infrared mode (for night vision use)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Sets whether the device should be in infrared mode (for night vision use)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "SetInfraredMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::SKGLightLaserComponent_eventSetInfraredMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::SKGLightLaserComponent_eventSetInfraredMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics
	{
		struct SKGLightLaserComponent_eventSetLaserMode_Parms
		{
			ESKGLaserMode LaserMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LaserMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LaserMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::NewProp_LaserMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::NewProp_LaserMode = { "LaserMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventSetLaserMode_Parms, LaserMode), Z_Construct_UEnum_SKGLightLaser_ESKGLaserMode, METADATA_PARAMS(0, nullptr) }; // 2227908217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::NewProp_LaserMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::NewProp_LaserMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Laser" },
		{ "Comment", "// Sets the laser to be off/on\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Sets the laser to be off/on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "SetLaserMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::SKGLightLaserComponent_eventSetLaserMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::SKGLightLaserComponent_eventSetLaserMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics
	{
		struct SKGLightLaserComponent_eventSetLightIntensityIndex_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventSetLightIntensityIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Light" },
		{ "Comment", "// Manually set the light intensity to a specific index in the in use array (normal/infrared)\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Manually set the light intensity to a specific index in the in use array (normal/infrared)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "SetLightIntensityIndex", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::SKGLightLaserComponent_eventSetLightIntensityIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::SKGLightLaserComponent_eventSetLightIntensityIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics
	{
		struct SKGLightLaserComponent_eventSetLightMode_Parms
		{
			ESKGLightMode LightMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::NewProp_LightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::NewProp_LightMode = { "LightMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGLightLaserComponent_eventSetLightMode_Parms, LightMode), Z_Construct_UEnum_SKGLightLaser_ESKGLightMode, METADATA_PARAMS(0, nullptr) }; // 2474966326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::NewProp_LightMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::NewProp_LightMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGLightLaser|Light" },
		{ "Comment", "// Sets the light to be Off/On/Strobe\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Sets the light to be Off/On/Strobe" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGLightLaserComponent, nullptr, "SetLightMode", nullptr, nullptr, Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::SKGLightLaserComponent_eventSetLightMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::SKGLightLaserComponent_eventSetLightMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGLightLaserComponent);
	UClass* Z_Construct_UClass_USKGLightLaserComponent_NoRegister()
	{
		return USKGLightLaserComponent::StaticClass();
	}
	struct Z_Construct_UClass_USKGLightLaserComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LightComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserMeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LaserMeshComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserDotComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LaserDotComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCallForceNetUpdate_MetaData[];
#endif
		static void NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCallForceNetUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasInfraredMode_MetaData[];
#endif
		static void NewProp_bHasInfraredMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInfraredMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaserSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightLaserCycleModes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightLaserCycleModes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserDot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserDot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeviceInfraredOn_MetaData[];
#endif
		static void NewProp_bDeviceInfraredOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeviceInfraredOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaserState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLaserStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLaserStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLightModeChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLightModeChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInfraredModeChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInfraredModeChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLightStrobed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLightStrobed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLaserImpact_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLaserImpact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGLightLaserComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGLightLaser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGLightLaserComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGLightLaserComponent_CycleLightIntensity, "CycleLightIntensity" }, // 774951463
		{ &Z_Construct_UFunction_USKGLightLaserComponent_CycleLightLaserMode, "CycleLightLaserMode" }, // 2781803053
		{ &Z_Construct_UFunction_USKGLightLaserComponent_GetLaserDot, "GetLaserDot" }, // 407874799
		{ &Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMesh, "GetLaserMesh" }, // 2739525036
		{ &Z_Construct_UFunction_USKGLightLaserComponent_GetLaserMode, "GetLaserMode" }, // 3932919627
		{ &Z_Construct_UFunction_USKGLightLaserComponent_GetLightMode, "GetLightMode" }, // 1934197977
		{ &Z_Construct_UFunction_USKGLightLaserComponent_GetLightSource, "GetLightSource" }, // 3846701811
		{ &Z_Construct_UFunction_USKGLightLaserComponent_IsInInfraredMode, "IsInInfraredMode" }, // 125790914
		{ &Z_Construct_UFunction_USKGLightLaserComponent_IsLaserOn, "IsLaserOn" }, // 137821554
		{ &Z_Construct_UFunction_USKGLightLaserComponent_IsLightOn, "IsLightOn" }, // 2620803027
		{ &Z_Construct_UFunction_USKGLightLaserComponent_OnRep_DeviceInfraredOn, "OnRep_DeviceInfraredOn" }, // 2094266872
		{ &Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LaserState, "OnRep_LaserState" }, // 169017204
		{ &Z_Construct_UFunction_USKGLightLaserComponent_OnRep_LightState, "OnRep_LightState" }, // 1907509900
		{ &Z_Construct_UFunction_USKGLightLaserComponent_Server_SetInfraredMode, "Server_SetInfraredMode" }, // 2978874542
		{ &Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLaserMode, "Server_SetLaserMode" }, // 2727719091
		{ &Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightIntensityIndex, "Server_SetLightIntensityIndex" }, // 1344116353
		{ &Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightLaserMode, "Server_SetLightLaserMode" }, // 1425032246
		{ &Z_Construct_UFunction_USKGLightLaserComponent_Server_SetLightMode, "Server_SetLightMode" }, // 3556837564
		{ &Z_Construct_UFunction_USKGLightLaserComponent_SetInfraredMode, "SetInfraredMode" }, // 321671785
		{ &Z_Construct_UFunction_USKGLightLaserComponent_SetLaserMode, "SetLaserMode" }, // 3608865690
		{ &Z_Construct_UFunction_USKGLightLaserComponent_SetLightIntensityIndex, "SetLightIntensityIndex" }, // 2607620332
		{ &Z_Construct_UFunction_USKGLightLaserComponent_SetLightMode, "SetLightMode" }, // 3254856581
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SKGLightLaserComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightComponentName_MetaData[] = {
		{ "Category", "SKGLightLaser|Initialize" },
		{ "Comment", "// Optional name of the Light Component (Such as SpotLight) to be used\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Optional name of the Light Component (Such as SpotLight) to be used" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightComponentName = { "LightComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LightComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightComponentName_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMeshComponentName_MetaData[] = {
		{ "Category", "SKGLightLaser|Initialize" },
		{ "Comment", "// Optional name of the laser mesh component to be used\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Optional name of the laser mesh component to be used" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMeshComponentName = { "LaserMeshComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LaserMeshComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMeshComponentName_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMeshComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDotComponentName_MetaData[] = {
		{ "Category", "SKGLightLaser|Initialize" },
		{ "Comment", "// Optional name of the laser dot mesh component to be used\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Optional name of the laser dot mesh component to be used" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDotComponentName = { "LaserDotComponentName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LaserDotComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDotComponentName_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDotComponentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData[] = {
		{ "Category", "SKGLightLaser|Initialize" },
		{ "Comment", "// Useful if your NetUpdateFrequency is set super low\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Useful if your NetUpdateFrequency is set super low" },
	};
#endif
	void Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit(void* Obj)
	{
		((USKGLightLaserComponent*)Obj)->bAutoCallForceNetUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bAutoCallForceNetUpdate = { "bAutoCallForceNetUpdate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGLightLaserComponent), &Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bAutoCallForceNetUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bAutoCallForceNetUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bHasInfraredMode_MetaData[] = {
		{ "Category", "SKGLightLaser|Initialize" },
		{ "Comment", "// Whether or not this device supports infrared mode\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Whether or not this device supports infrared mode" },
	};
#endif
	void Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bHasInfraredMode_SetBit(void* Obj)
	{
		((USKGLightLaserComponent*)Obj)->bHasInfraredMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bHasInfraredMode = { "bHasInfraredMode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGLightLaserComponent), &Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bHasInfraredMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bHasInfraredMode_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bHasInfraredMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGLightLaser|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_GameplayTags_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_GameplayTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserSettings_MetaData[] = {
		{ "Category", "SKGLightLaser|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserSettings = { "LaserSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LaserSettings), Z_Construct_UScriptStruct_FSKGLaserSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserSettings_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserSettings_MetaData) }; // 3535754753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSettings_MetaData[] = {
		{ "Category", "SKGLightLaser|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSettings = { "LightSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LightSettings), Z_Construct_UScriptStruct_FSKGLightSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSettings_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSettings_MetaData) }; // 2870134492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightLaserCycleModes_MetaData[] = {
		{ "Category", "SKGLightLaser|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightLaserCycleModes = { "LightLaserCycleModes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LightLaserCycleModes), Z_Construct_UScriptStruct_FSKGLightLaserCycleModes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightLaserCycleModes_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightLaserCycleModes_MetaData) }; // 896523537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSource_MetaData[] = {
		{ "BlueprintGetter", "GetLightSource" },
		{ "Category", "SKGLightLaser|Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSource = { "LightSource", nullptr, (EPropertyFlags)0x004400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LightSource), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSource_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMesh_MetaData[] = {
		{ "BlueprintGetter", "GetLaserMesh" },
		{ "Category", "SKGLightLaser|Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMesh = { "LaserMesh", nullptr, (EPropertyFlags)0x004400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LaserMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMesh_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDot_MetaData[] = {
		{ "BlueprintGetter", "GetLaserDot" },
		{ "Category", "SKGLightLaser|Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDot = { "LaserDot", nullptr, (EPropertyFlags)0x004400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LaserDot), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDot_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LocalPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LocalPlayerController = { "LocalPlayerController", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LocalPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LocalPlayerController_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LocalPlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bDeviceInfraredOn_MetaData[] = {
		{ "BlueprintGetter", "IsInInfraredMode" },
		{ "Category", "SKGLightLaser|Data" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	void Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bDeviceInfraredOn_SetBit(void* Obj)
	{
		((USKGLightLaserComponent*)Obj)->bDeviceInfraredOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bDeviceInfraredOn = { "bDeviceInfraredOn", "OnRep_DeviceInfraredOn", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USKGLightLaserComponent), &Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bDeviceInfraredOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bDeviceInfraredOn_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bDeviceInfraredOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserState = { "LaserState", "OnRep_LaserState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LaserState), Z_Construct_UScriptStruct_FSKGLaserState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserState_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserState_MetaData) }; // 338542633
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightState = { "LightState", "OnRep_LightState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, LightState), Z_Construct_UScriptStruct_FSKGLightState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightState_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightState_MetaData) }; // 3713568830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserStateChanged_MetaData[] = {
		{ "Category", "SKGLightLaser|Events" },
		{ "Comment", "// Events\n" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserStateChanged = { "OnLaserStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, OnLaserStateChanged), Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserStateChanged_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserStateChanged_MetaData) }; // 261647098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightModeChanged_MetaData[] = {
		{ "Category", "SKGLightLaser|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightModeChanged = { "OnLightModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, OnLightModeChanged), Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightModeChanged_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightModeChanged_MetaData) }; // 3795928292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnInfraredModeChanged_MetaData[] = {
		{ "Category", "SKGLightLaser|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnInfraredModeChanged = { "OnInfraredModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, OnInfraredModeChanged), Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnInfraredModeChanged_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnInfraredModeChanged_MetaData) }; // 1220184479
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightStrobed_MetaData[] = {
		{ "Category", "SKGLightLaser|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightStrobed = { "OnLightStrobed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, OnLightStrobed), Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightStrobed_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightStrobed_MetaData) }; // 3415569216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserImpact_MetaData[] = {
		{ "Category", "SKGLightLaser|Events" },
		{ "ModuleRelativePath", "Public/Components/SKGLightLaserComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserImpact = { "OnLaserImpact", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGLightLaserComponent, OnLaserImpact), Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserImpact_MetaData), Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserImpact_MetaData) }; // 2021341240
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGLightLaserComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDotComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bAutoCallForceNetUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bHasInfraredMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightLaserCycleModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserDot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LocalPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_bDeviceInfraredOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LaserState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_LightState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightModeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnInfraredModeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLightStrobed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGLightLaserComponent_Statics::NewProp_OnLaserImpact,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGLightLaserComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGLightLaserComponent, IGameplayTagAssetInterface), false },  // 3291755243
			{ Z_Construct_UClass_USKGInfraredInterface_NoRegister, (int32)VTABLE_OFFSET(USKGLightLaserComponent, ISKGInfraredInterface), false },  // 2504433039
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGLightLaserComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGLightLaserComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGLightLaserComponent_Statics::ClassParams = {
		&USKGLightLaserComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGLightLaserComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGLightLaserComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGLightLaserComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGLightLaserComponent()
	{
		if (!Z_Registration_Info_UClass_USKGLightLaserComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGLightLaserComponent.OuterSingleton, Z_Construct_UClass_USKGLightLaserComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGLightLaserComponent.OuterSingleton;
	}
	template<> SKGLIGHTLASER_API UClass* StaticClass<USKGLightLaserComponent>()
	{
		return USKGLightLaserComponent::StaticClass();
	}

	void USKGLightLaserComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bDeviceInfraredOn(TEXT("bDeviceInfraredOn"));
		static const FName Name_LaserState(TEXT("LaserState"));
		static const FName Name_LightState(TEXT("LightState"));

		const bool bIsValid = true
			&& Name_bDeviceInfraredOn == ClassReps[(int32)ENetFields_Private::bDeviceInfraredOn].Property->GetFName()
			&& Name_LaserState == ClassReps[(int32)ENetFields_Private::LaserState].Property->GetFName()
			&& Name_LightState == ClassReps[(int32)ENetFields_Private::LightState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USKGLightLaserComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGLightLaserComponent);
	USKGLightLaserComponent::~USKGLightLaserComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics::EnumInfo[] = {
		{ ESKGLaserMode_StaticEnum, TEXT("ESKGLaserMode"), &Z_Registration_Info_UEnum_ESKGLaserMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2227908217U) },
		{ ESKGLightMode_StaticEnum, TEXT("ESKGLightMode"), &Z_Registration_Info_UEnum_ESKGLightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2474966326U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics::ScriptStructInfo[] = {
		{ FSKGLaserMaterial::StaticStruct, Z_Construct_UScriptStruct_FSKGLaserMaterial_Statics::NewStructOps, TEXT("SKGLaserMaterial"), &Z_Registration_Info_UScriptStruct_SKGLaserMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGLaserMaterial), 2982958277U) },
		{ FSKGLaserState::StaticStruct, Z_Construct_UScriptStruct_FSKGLaserState_Statics::NewStructOps, TEXT("SKGLaserState"), &Z_Registration_Info_UScriptStruct_SKGLaserState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGLaserState), 338542633U) },
		{ FSKGLaserSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGLaserSettings_Statics::NewStructOps, TEXT("SKGLaserSettings"), &Z_Registration_Info_UScriptStruct_SKGLaserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGLaserSettings), 3535754753U) },
		{ FSKGLightState::StaticStruct, Z_Construct_UScriptStruct_FSKGLightState_Statics::NewStructOps, TEXT("SKGLightState"), &Z_Registration_Info_UScriptStruct_SKGLightState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGLightState), 3713568830U) },
		{ FSKGLightSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGLightSettings_Statics::NewStructOps, TEXT("SKGLightSettings"), &Z_Registration_Info_UScriptStruct_SKGLightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGLightSettings), 2870134492U) },
		{ FSKGLightLaserCycleMode::StaticStruct, Z_Construct_UScriptStruct_FSKGLightLaserCycleMode_Statics::NewStructOps, TEXT("SKGLightLaserCycleMode"), &Z_Registration_Info_UScriptStruct_SKGLightLaserCycleMode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGLightLaserCycleMode), 3255628516U) },
		{ FSKGLightLaserCycleModes::StaticStruct, Z_Construct_UScriptStruct_FSKGLightLaserCycleModes_Statics::NewStructOps, TEXT("SKGLightLaserCycleModes"), &Z_Registration_Info_UScriptStruct_SKGLightLaserCycleModes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGLightLaserCycleModes), 896523537U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGLightLaserComponent, USKGLightLaserComponent::StaticClass, TEXT("USKGLightLaserComponent"), &Z_Registration_Info_UClass_USKGLightLaserComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGLightLaserComponent), 4124951511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_2178485813(TEXT("/Script/SKGLightLaser"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGLightLaser_Public_Components_SKGLightLaserComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
