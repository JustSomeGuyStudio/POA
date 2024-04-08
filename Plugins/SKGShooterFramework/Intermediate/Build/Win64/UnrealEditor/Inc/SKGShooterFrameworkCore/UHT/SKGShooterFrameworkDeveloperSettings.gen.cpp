// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFrameworkCore/Public/DeveloperSettings/SKGShooterFrameworkDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkDeveloperSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References

// Begin Class USKGShooterFrameworkDeveloperSettings
void USKGShooterFrameworkDeveloperSettings::StaticRegisterNativesUSKGShooterFrameworkDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterFrameworkDeveloperSettings);
UClass* Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_NoRegister()
{
	return USKGShooterFrameworkDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "SKG Shooter Framework Developer Settings" },
		{ "IncludePath", "DeveloperSettings/SKGShooterFrameworkDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/DeveloperSettings/SKGShooterFrameworkDeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmCollisionChannel_MetaData[] = {
		{ "Category", "FirearmCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The collision channel to be used for firearm collision\n" },
#endif
		{ "ModuleRelativePath", "Public/DeveloperSettings/SKGShooterFrameworkDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The collision channel to be used for firearm collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserCollisionChannel_MetaData[] = {
		{ "Category", "LightLaser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The collision channel for the laser to use to detect blocking hits\n" },
#endif
		{ "ModuleRelativePath", "Public/DeveloperSettings/SKGShooterFrameworkDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The collision channel for the laser to use to detect blocking hits" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeFinderCollisionChannel_MetaData[] = {
		{ "Category", "RangeFinder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The collision channel for the \"laser\" of the range finder to use to detect blocking hits\n" },
#endif
		{ "ModuleRelativePath", "Public/DeveloperSettings/SKGShooterFrameworkDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The collision channel for the \"laser\" of the range finder to use to detect blocking hits" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FirearmCollisionChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LaserCollisionChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeFinderCollisionChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterFrameworkDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::NewProp_FirearmCollisionChannel = { "FirearmCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkDeveloperSettings, FirearmCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmCollisionChannel_MetaData), NewProp_FirearmCollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::NewProp_LaserCollisionChannel = { "LaserCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkDeveloperSettings, LaserCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserCollisionChannel_MetaData), NewProp_LaserCollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::NewProp_RangeFinderCollisionChannel = { "RangeFinderCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGShooterFrameworkDeveloperSettings, RangeFinderCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeFinderCollisionChannel_MetaData), NewProp_RangeFinderCollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::NewProp_FirearmCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::NewProp_LaserCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::NewProp_RangeFinderCollisionChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::ClassParams = {
	&USKGShooterFrameworkDeveloperSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_USKGShooterFrameworkDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterFrameworkDeveloperSettings.OuterSingleton, Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGShooterFrameworkDeveloperSettings.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGShooterFrameworkDeveloperSettings>()
{
	return USKGShooterFrameworkDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterFrameworkDeveloperSettings);
USKGShooterFrameworkDeveloperSettings::~USKGShooterFrameworkDeveloperSettings() {}
// End Class USKGShooterFrameworkDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_DeveloperSettings_SKGShooterFrameworkDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterFrameworkDeveloperSettings, USKGShooterFrameworkDeveloperSettings::StaticClass, TEXT("USKGShooterFrameworkDeveloperSettings"), &Z_Registration_Info_UClass_USKGShooterFrameworkDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterFrameworkDeveloperSettings), 3635222349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_DeveloperSettings_SKGShooterFrameworkDeveloperSettings_h_2741535090(TEXT("/Script/SKGShooterFrameworkCore"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_DeveloperSettings_SKGShooterFrameworkDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_DeveloperSettings_SKGShooterFrameworkDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
