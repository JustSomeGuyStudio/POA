// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGShooterFrameworkCore/Public/Interfaces/SKGInfraredInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGInfraredInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGInfraredInterface();
SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGInfraredInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References

// Begin Interface USKGInfraredInterface
void USKGInfraredInterface::StaticRegisterNativesUSKGInfraredInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGInfraredInterface);
UClass* Z_Construct_UClass_USKGInfraredInterface_NoRegister()
{
	return USKGInfraredInterface::StaticClass();
}
struct Z_Construct_UClass_USKGInfraredInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/SKGInfraredInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISKGInfraredInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USKGInfraredInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGInfraredInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGInfraredInterface_Statics::ClassParams = {
	&USKGInfraredInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGInfraredInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGInfraredInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USKGInfraredInterface()
{
	if (!Z_Registration_Info_UClass_USKGInfraredInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGInfraredInterface.OuterSingleton, Z_Construct_UClass_USKGInfraredInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USKGInfraredInterface.OuterSingleton;
}
template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGInfraredInterface>()
{
	return USKGInfraredInterface::StaticClass();
}
USKGInfraredInterface::USKGInfraredInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USKGInfraredInterface);
USKGInfraredInterface::~USKGInfraredInterface() {}
// End Interface USKGInfraredInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Interfaces_SKGInfraredInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USKGInfraredInterface, USKGInfraredInterface::StaticClass, TEXT("USKGInfraredInterface"), &Z_Registration_Info_UClass_USKGInfraredInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGInfraredInterface), 3554513880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Interfaces_SKGInfraredInterface_h_3353984861(TEXT("/Script/SKGShooterFrameworkCore"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Interfaces_SKGInfraredInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Interfaces_SKGInfraredInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
