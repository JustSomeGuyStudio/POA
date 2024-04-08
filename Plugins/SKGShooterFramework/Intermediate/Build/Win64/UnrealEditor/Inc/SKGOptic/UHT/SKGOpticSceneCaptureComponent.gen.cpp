// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGOptic/Public/Components/SKGOpticSceneCaptureComponent.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGOptic/Public/DataTypes/SKGOpticCoreDataTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGOpticSceneCaptureComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticSceneCaptureComponent();
SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticSceneCaptureComponent_NoRegister();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticReticle();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings();
SKGOPTIC_API UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings();
UPackage* Z_Construct_UPackage__Script_SKGOptic();
// End Cross Module References

// Begin ScriptStruct FSKGOpticSceneCaptureComponentRenderTargetSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentRenderTargetSettings;
class UScriptStruct* FSKGOpticSceneCaptureComponentRenderTargetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentRenderTargetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentRenderTargetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("SKGOpticSceneCaptureComponentRenderTargetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentRenderTargetSettings.OuterSingleton;
}
template<> SKGOPTIC_API UScriptStruct* StaticStruct<FSKGOpticSceneCaptureComponentRenderTargetSettings>()
{
	return FSKGOpticSceneCaptureComponentRenderTargetSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The rate at which the scene capture updates\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rate at which the scene capture updates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The resolution of the render target to be created for this scene capture\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The resolution of the render target to be created for this scene capture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The resolution of the render target to be created for this scene capture\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The resolution of the render target to be created for this scene capture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureRenderTargetFormat_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureRenderTargetFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticSceneCaptureComponentRenderTargetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticSceneCaptureComponentRenderTargetSettings, TickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickInterval_MetaData), NewProp_TickInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticSceneCaptureComponentRenderTargetSettings, ResolutionX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionX_MetaData), NewProp_ResolutionX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticSceneCaptureComponentRenderTargetSettings, ResolutionY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionY_MetaData), NewProp_ResolutionY_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::NewProp_TextureRenderTargetFormat = { "TextureRenderTargetFormat", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticSceneCaptureComponentRenderTargetSettings, TextureRenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureRenderTargetFormat_MetaData), NewProp_TextureRenderTargetFormat_MetaData) }; // 338846453
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::NewProp_TickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::NewProp_ResolutionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::NewProp_ResolutionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::NewProp_TextureRenderTargetFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	&NewStructOps,
	"SKGOpticSceneCaptureComponentRenderTargetSettings",
	Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::PropPointers),
	sizeof(FSKGOpticSceneCaptureComponentRenderTargetSettings),
	alignof(FSKGOpticSceneCaptureComponentRenderTargetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentRenderTargetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentRenderTargetSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentRenderTargetSettings.InnerSingleton;
}
// End ScriptStruct FSKGOpticSceneCaptureComponentRenderTargetSettings

// Begin ScriptStruct FSKGOpticSceneCaptureComponentMaterialSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentMaterialSettings;
class UScriptStruct* FSKGOpticSceneCaptureComponentMaterialSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentMaterialSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentMaterialSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("SKGOpticSceneCaptureComponentMaterialSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentMaterialSettings.OuterSingleton;
}
template<> SKGOPTIC_API UScriptStruct* StaticStruct<FSKGOpticSceneCaptureComponentMaterialSettings>()
{
	return FSKGOpticSceneCaptureComponentMaterialSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureTargetParameterName_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is the material parameter used with the TextureTarget/RenderTarget from the scene capture\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the material parameter used with the TextureTarget/RenderTarget from the scene capture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleSizeParameterName_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is the material parameter used with the Reticle Size \n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the material parameter used with the Reticle Size" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeboxSensitivityParameterName_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is the material parameter used with the EyeboxRange (simulating the eyebox)\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the material parameter used with the EyeboxRange (simulating the eyebox)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureTargetParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReticleSizeParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EyeboxSensitivityParameterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticSceneCaptureComponentMaterialSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::NewProp_TextureTargetParameterName = { "TextureTargetParameterName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticSceneCaptureComponentMaterialSettings, TextureTargetParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureTargetParameterName_MetaData), NewProp_TextureTargetParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::NewProp_ReticleSizeParameterName = { "ReticleSizeParameterName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticSceneCaptureComponentMaterialSettings, ReticleSizeParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleSizeParameterName_MetaData), NewProp_ReticleSizeParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::NewProp_EyeboxSensitivityParameterName = { "EyeboxSensitivityParameterName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticSceneCaptureComponentMaterialSettings, EyeboxSensitivityParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeboxSensitivityParameterName_MetaData), NewProp_EyeboxSensitivityParameterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::NewProp_TextureTargetParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::NewProp_ReticleSizeParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::NewProp_EyeboxSensitivityParameterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	&NewStructOps,
	"SKGOpticSceneCaptureComponentMaterialSettings",
	Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::PropPointers),
	sizeof(FSKGOpticSceneCaptureComponentMaterialSettings),
	alignof(FSKGOpticSceneCaptureComponentMaterialSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentMaterialSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentMaterialSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentMaterialSettings.InnerSingleton;
}
// End ScriptStruct FSKGOpticSceneCaptureComponentMaterialSettings

// Begin ScriptStruct FSKGOpticSceneCaptureComponentSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentSettings;
class UScriptStruct* FSKGOpticSceneCaptureComponentSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings, (UObject*)Z_Construct_UPackage__Script_SKGOptic(), TEXT("SKGOpticSceneCaptureComponentSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentSettings.OuterSingleton;
}
template<> SKGOPTIC_API UScriptStruct* StaticStruct<FSKGOpticSceneCaptureComponentSettings>()
{
	return FSKGOpticSceneCaptureComponentSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetSettings_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGOpticSceneCaptureComponentSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::NewProp_RenderTargetSettings = { "RenderTargetSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticSceneCaptureComponentSettings, RenderTargetSettings), Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetSettings_MetaData), NewProp_RenderTargetSettings_MetaData) }; // 1144167457
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGOpticSceneCaptureComponentSettings, MaterialSettings), Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSettings_MetaData), NewProp_MaterialSettings_MetaData) }; // 4012980394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::NewProp_RenderTargetSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::NewProp_MaterialSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
	nullptr,
	&NewStructOps,
	"SKGOpticSceneCaptureComponentSettings",
	Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::PropPointers),
	sizeof(FSKGOpticSceneCaptureComponentSettings),
	alignof(FSKGOpticSceneCaptureComponentSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentSettings.InnerSingleton, Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentSettings.InnerSingleton;
}
// End ScriptStruct FSKGOpticSceneCaptureComponentSettings

// Begin Class USKGOpticSceneCaptureComponent Function ApplyLookAtRotationZero
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics
{
	struct SKGOpticSceneCaptureComponent_eventApplyLookAtRotationZero_Parms
	{
		FRotator LookAtRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOptic|SceneCapture|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::NewProp_LookAtRotation = { "LookAtRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticSceneCaptureComponent_eventApplyLookAtRotationZero_Parms, LookAtRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::NewProp_LookAtRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "ApplyLookAtRotationZero", nullptr, nullptr, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::SKGOpticSceneCaptureComponent_eventApplyLookAtRotationZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::SKGOpticSceneCaptureComponent_eventApplyLookAtRotationZero_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execApplyLookAtRotationZero)
{
	P_GET_STRUCT(FRotator,Z_Param_LookAtRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyLookAtRotationZero(Z_Param_LookAtRotation);
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function ApplyLookAtRotationZero

// Begin Class USKGOpticSceneCaptureComponent Function PointOfImpactDown
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics
{
	struct SKGOpticSceneCaptureComponent_eventPointOfImpactDown_Parms
	{
		double RotationAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RotationAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticSceneCaptureComponent_eventPointOfImpactDown_Parms, RotationAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAmount_MetaData), NewProp_RotationAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::NewProp_RotationAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "PointOfImpactDown", nullptr, nullptr, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::SKGOpticSceneCaptureComponent_eventPointOfImpactDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::SKGOpticSceneCaptureComponent_eventPointOfImpactDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execPointOfImpactDown)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_RotationAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactDown(Z_Param_RotationAmount);
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function PointOfImpactDown

// Begin Class USKGOpticSceneCaptureComponent Function PointOfImpactLeft
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics
{
	struct SKGOpticSceneCaptureComponent_eventPointOfImpactLeft_Parms
	{
		double RotationAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RotationAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticSceneCaptureComponent_eventPointOfImpactLeft_Parms, RotationAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAmount_MetaData), NewProp_RotationAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::NewProp_RotationAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "PointOfImpactLeft", nullptr, nullptr, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::SKGOpticSceneCaptureComponent_eventPointOfImpactLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::SKGOpticSceneCaptureComponent_eventPointOfImpactLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execPointOfImpactLeft)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_RotationAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactLeft(Z_Param_RotationAmount);
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function PointOfImpactLeft

// Begin Class USKGOpticSceneCaptureComponent Function PointOfImpactLeftRightDefault
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeftRightDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeftRightDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "PointOfImpactLeftRightDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeftRightDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeftRightDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeftRightDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeftRightDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execPointOfImpactLeftRightDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactLeftRightDefault();
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function PointOfImpactLeftRightDefault

// Begin Class USKGOpticSceneCaptureComponent Function PointOfImpactRight
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics
{
	struct SKGOpticSceneCaptureComponent_eventPointOfImpactRight_Parms
	{
		double RotationAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RotationAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticSceneCaptureComponent_eventPointOfImpactRight_Parms, RotationAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAmount_MetaData), NewProp_RotationAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::NewProp_RotationAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "PointOfImpactRight", nullptr, nullptr, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::SKGOpticSceneCaptureComponent_eventPointOfImpactRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::SKGOpticSceneCaptureComponent_eventPointOfImpactRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execPointOfImpactRight)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_RotationAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactRight(Z_Param_RotationAmount);
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function PointOfImpactRight

// Begin Class USKGOpticSceneCaptureComponent Function PointOfImpactUp
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics
{
	struct SKGOpticSceneCaptureComponent_eventPointOfImpactUp_Parms
	{
		double RotationAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RotationAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticSceneCaptureComponent_eventPointOfImpactUp_Parms, RotationAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAmount_MetaData), NewProp_RotationAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::NewProp_RotationAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "PointOfImpactUp", nullptr, nullptr, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::SKGOpticSceneCaptureComponent_eventPointOfImpactUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::SKGOpticSceneCaptureComponent_eventPointOfImpactUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execPointOfImpactUp)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_RotationAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactUp(Z_Param_RotationAmount);
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function PointOfImpactUp

// Begin Class USKGOpticSceneCaptureComponent Function PointOfImpactUpDownDefault
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUpDownDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Zero" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUpDownDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "PointOfImpactUpDownDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUpDownDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUpDownDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUpDownDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUpDownDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execPointOfImpactUpDownDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointOfImpactUpDownDefault();
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function PointOfImpactUpDownDefault

// Begin Class USKGOpticSceneCaptureComponent Function StartCapture
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StartCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Tick" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "StartCapture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StartCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StartCapture_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StartCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StartCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execStartCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCapture();
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function StartCapture

// Begin Class USKGOpticSceneCaptureComponent Function StopCapture
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StopCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Tick" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StopCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "StopCapture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StopCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StopCapture_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StopCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StopCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execStopCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCapture();
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function StopCapture

// Begin Class USKGOpticSceneCaptureComponent Function Zoom
struct Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics
{
	struct SKGOpticSceneCaptureComponent_eventZoom_Parms
	{
		FSKGOpticReticle ReticleMaterial;
		float TargetMagnification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Zoom" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMagnification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReticleMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMagnification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::NewProp_ReticleMaterial = { "ReticleMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticSceneCaptureComponent_eventZoom_Parms, ReticleMaterial), Z_Construct_UScriptStruct_FSKGOpticReticle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleMaterial_MetaData), NewProp_ReticleMaterial_MetaData) }; // 3356468478
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::NewProp_TargetMagnification = { "TargetMagnification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticSceneCaptureComponent_eventZoom_Parms, TargetMagnification), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMagnification_MetaData), NewProp_TargetMagnification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::NewProp_ReticleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::NewProp_TargetMagnification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSceneCaptureComponent, nullptr, "Zoom", nullptr, nullptr, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::SKGOpticSceneCaptureComponent_eventZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::SKGOpticSceneCaptureComponent_eventZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USKGOpticSceneCaptureComponent::execZoom)
{
	P_GET_STRUCT_REF(FSKGOpticReticle,Z_Param_Out_ReticleMaterial);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetMagnification);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Zoom(Z_Param_Out_ReticleMaterial,Z_Param_TargetMagnification);
	P_NATIVE_END;
}
// End Class USKGOpticSceneCaptureComponent Function Zoom

// Begin Class USKGOpticSceneCaptureComponent
void USKGOpticSceneCaptureComponent::StaticRegisterNativesUSKGOpticSceneCaptureComponent()
{
	UClass* Class = USKGOpticSceneCaptureComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyLookAtRotationZero", &USKGOpticSceneCaptureComponent::execApplyLookAtRotationZero },
		{ "PointOfImpactDown", &USKGOpticSceneCaptureComponent::execPointOfImpactDown },
		{ "PointOfImpactLeft", &USKGOpticSceneCaptureComponent::execPointOfImpactLeft },
		{ "PointOfImpactLeftRightDefault", &USKGOpticSceneCaptureComponent::execPointOfImpactLeftRightDefault },
		{ "PointOfImpactRight", &USKGOpticSceneCaptureComponent::execPointOfImpactRight },
		{ "PointOfImpactUp", &USKGOpticSceneCaptureComponent::execPointOfImpactUp },
		{ "PointOfImpactUpDownDefault", &USKGOpticSceneCaptureComponent::execPointOfImpactUpDownDefault },
		{ "StartCapture", &USKGOpticSceneCaptureComponent::execStartCapture },
		{ "StopCapture", &USKGOpticSceneCaptureComponent::execStopCapture },
		{ "Zoom", &USKGOpticSceneCaptureComponent::execZoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGOpticSceneCaptureComponent);
UClass* Z_Construct_UClass_USKGOpticSceneCaptureComponent_NoRegister()
{
	return USKGOpticSceneCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SKGOpticSceneCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Initialize" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpticSceneCaptureComponentSettings_MetaData[] = {
		{ "Category", "SKGOpticSceneCaptureComponent|Settings" },
		{ "ModuleRelativePath", "Public/Components/SKGOpticSceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpticSceneCaptureComponentSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_ApplyLookAtRotationZero, "ApplyLookAtRotationZero" }, // 1086648213
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactDown, "PointOfImpactDown" }, // 3215653747
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeft, "PointOfImpactLeft" }, // 3144440008
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactLeftRightDefault, "PointOfImpactLeftRightDefault" }, // 1940115320
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactRight, "PointOfImpactRight" }, // 3028321308
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUp, "PointOfImpactUp" }, // 1816971284
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_PointOfImpactUpDownDefault, "PointOfImpactUpDownDefault" }, // 3597730132
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StartCapture, "StartCapture" }, // 3621230968
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_StopCapture, "StopCapture" }, // 2411204715
		{ &Z_Construct_UFunction_USKGOpticSceneCaptureComponent_Zoom, "Zoom" }, // 2424871265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGOpticSceneCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticSceneCaptureComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::NewProp_OpticSceneCaptureComponentSettings = { "OpticSceneCaptureComponentSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticSceneCaptureComponent, OpticSceneCaptureComponentSettings), Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpticSceneCaptureComponentSettings_MetaData), NewProp_OpticSceneCaptureComponentSettings_MetaData) }; // 3284053914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::NewProp_OpticSceneCaptureComponentSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USKGOpticSceneCaptureComponent, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::ClassParams = {
	&USKGOpticSceneCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGOpticSceneCaptureComponent()
{
	if (!Z_Registration_Info_UClass_USKGOpticSceneCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGOpticSceneCaptureComponent.OuterSingleton, Z_Construct_UClass_USKGOpticSceneCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGOpticSceneCaptureComponent.OuterSingleton;
}
template<> SKGOPTIC_API UClass* StaticClass<USKGOpticSceneCaptureComponent>()
{
	return USKGOpticSceneCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGOpticSceneCaptureComponent);
USKGOpticSceneCaptureComponent::~USKGOpticSceneCaptureComponent() {}
// End Class USKGOpticSceneCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticSceneCaptureComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGOpticSceneCaptureComponentRenderTargetSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentRenderTargetSettings_Statics::NewStructOps, TEXT("SKGOpticSceneCaptureComponentRenderTargetSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentRenderTargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticSceneCaptureComponentRenderTargetSettings), 1144167457U) },
		{ FSKGOpticSceneCaptureComponentMaterialSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentMaterialSettings_Statics::NewStructOps, TEXT("SKGOpticSceneCaptureComponentMaterialSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentMaterialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticSceneCaptureComponentMaterialSettings), 4012980394U) },
		{ FSKGOpticSceneCaptureComponentSettings::StaticStruct, Z_Construct_UScriptStruct_FSKGOpticSceneCaptureComponentSettings_Statics::NewStructOps, TEXT("SKGOpticSceneCaptureComponentSettings"), &Z_Registration_Info_UScriptStruct_SKGOpticSceneCaptureComponentSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGOpticSceneCaptureComponentSettings), 3284053914U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGOpticSceneCaptureComponent, USKGOpticSceneCaptureComponent::StaticClass, TEXT("USKGOpticSceneCaptureComponent"), &Z_Registration_Info_UClass_USKGOpticSceneCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGOpticSceneCaptureComponent), 1322527639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticSceneCaptureComponent_h_2417537820(TEXT("/Script/SKGOptic"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticSceneCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticSceneCaptureComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticSceneCaptureComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Components_SKGOpticSceneCaptureComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
