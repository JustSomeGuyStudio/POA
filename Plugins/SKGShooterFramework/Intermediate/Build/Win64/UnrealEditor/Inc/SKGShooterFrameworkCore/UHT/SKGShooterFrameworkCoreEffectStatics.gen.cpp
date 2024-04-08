// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFrameworkCore/Public/Statics/SKGShooterFrameworkCoreEffectStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkCoreEffectStatics() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References

// Begin Class USKGShooterFrameworkCoreEffectStatics
void USKGShooterFrameworkCoreEffectStatics::StaticRegisterNativesUSKGShooterFrameworkCoreEffectStatics()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterFrameworkCoreEffectStatics);
UClass* Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics_NoRegister()
{
	return USKGShooterFrameworkCoreEffectStatics::StaticClass();
}
struct Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Statics/SKGShooterFrameworkCoreEffectStatics.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreEffectStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterFrameworkCoreEffectStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics_Statics::ClassParams = {
	&USKGShooterFrameworkCoreEffectStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics()
{
	if (!Z_Registration_Info_UClass_USKGShooterFrameworkCoreEffectStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterFrameworkCoreEffectStatics.OuterSingleton, Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGShooterFrameworkCoreEffectStatics.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGShooterFrameworkCoreEffectStatics>()
{
	return USKGShooterFrameworkCoreEffectStatics::StaticClass();
}
USKGShooterFrameworkCoreEffectStatics::USKGShooterFrameworkCoreEffectStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterFrameworkCoreEffectStatics);
USKGShooterFrameworkCoreEffectStatics::~USKGShooterFrameworkCoreEffectStatics() {}
// End Class USKGShooterFrameworkCoreEffectStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreEffectStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterFrameworkCoreEffectStatics, USKGShooterFrameworkCoreEffectStatics::StaticClass, TEXT("USKGShooterFrameworkCoreEffectStatics"), &Z_Registration_Info_UClass_USKGShooterFrameworkCoreEffectStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterFrameworkCoreEffectStatics), 2748088053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreEffectStatics_h_511216860(TEXT("/Script/SKGShooterFrameworkCore"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreEffectStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreEffectStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
