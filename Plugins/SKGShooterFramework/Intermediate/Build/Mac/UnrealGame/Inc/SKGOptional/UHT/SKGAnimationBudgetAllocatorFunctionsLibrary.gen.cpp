// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGOptional/Public/Statics/SKGAnimationBudgetAllocatorFunctionsLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGAnimationBudgetAllocatorFunctionsLibrary() {}
// Cross Module References
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SKGOPTIONAL_API UClass* Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary();
	SKGOPTIONAL_API UClass* Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGOptional();
// End Cross Module References
	DEFINE_FUNCTION(USKGAnimationBudgetAllocatorFunctionsLibrary::execRegisterSkeletalMeshComponentBudgeted)
	{
		P_GET_OBJECT(USkeletalMeshComponentBudgeted,Z_Param_SkeletalMeshBudgeted);
		P_FINISH;
		P_NATIVE_BEGIN;
		USKGAnimationBudgetAllocatorFunctionsLibrary::RegisterSkeletalMeshComponentBudgeted(Z_Param_SkeletalMeshBudgeted);
		P_NATIVE_END;
	}
	void USKGAnimationBudgetAllocatorFunctionsLibrary::StaticRegisterNativesUSKGAnimationBudgetAllocatorFunctionsLibrary()
	{
		UClass* Class = USKGAnimationBudgetAllocatorFunctionsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterSkeletalMeshComponentBudgeted", &USKGAnimationBudgetAllocatorFunctionsLibrary::execRegisterSkeletalMeshComponentBudgeted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics
	{
		struct SKGAnimationBudgetAllocatorFunctionsLibrary_eventRegisterSkeletalMeshComponentBudgeted_Parms
		{
			USkeletalMeshComponentBudgeted* SkeletalMeshBudgeted;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshBudgeted_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshBudgeted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::NewProp_SkeletalMeshBudgeted_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::NewProp_SkeletalMeshBudgeted = { "SkeletalMeshBudgeted", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGAnimationBudgetAllocatorFunctionsLibrary_eventRegisterSkeletalMeshComponentBudgeted_Parms, SkeletalMeshBudgeted), Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::NewProp_SkeletalMeshBudgeted_MetaData), Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::NewProp_SkeletalMeshBudgeted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::NewProp_SkeletalMeshBudgeted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGAnimationBudgetAllocator" },
		{ "ModuleRelativePath", "Public/Statics/SKGAnimationBudgetAllocatorFunctionsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary, nullptr, "RegisterSkeletalMeshComponentBudgeted", nullptr, nullptr, Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::SKGAnimationBudgetAllocatorFunctionsLibrary_eventRegisterSkeletalMeshComponentBudgeted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::SKGAnimationBudgetAllocatorFunctionsLibrary_eventRegisterSkeletalMeshComponentBudgeted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGAnimationBudgetAllocatorFunctionsLibrary);
	UClass* Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_NoRegister()
	{
		return USKGAnimationBudgetAllocatorFunctionsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGOptional,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGAnimationBudgetAllocatorFunctionsLibrary_RegisterSkeletalMeshComponentBudgeted, "RegisterSkeletalMeshComponentBudgeted" }, // 1062822696
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Statics/SKGAnimationBudgetAllocatorFunctionsLibrary.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGAnimationBudgetAllocatorFunctionsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGAnimationBudgetAllocatorFunctionsLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::ClassParams = {
		&USKGAnimationBudgetAllocatorFunctionsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary()
	{
		if (!Z_Registration_Info_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary.OuterSingleton, Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary.OuterSingleton;
	}
	template<> SKGOPTIONAL_API UClass* StaticClass<USKGAnimationBudgetAllocatorFunctionsLibrary>()
	{
		return USKGAnimationBudgetAllocatorFunctionsLibrary::StaticClass();
	}
	USKGAnimationBudgetAllocatorFunctionsLibrary::USKGAnimationBudgetAllocatorFunctionsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGAnimationBudgetAllocatorFunctionsLibrary);
	USKGAnimationBudgetAllocatorFunctionsLibrary::~USKGAnimationBudgetAllocatorFunctionsLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Statics_SKGAnimationBudgetAllocatorFunctionsLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Statics_SKGAnimationBudgetAllocatorFunctionsLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary, USKGAnimationBudgetAllocatorFunctionsLibrary::StaticClass, TEXT("USKGAnimationBudgetAllocatorFunctionsLibrary"), &Z_Registration_Info_UClass_USKGAnimationBudgetAllocatorFunctionsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGAnimationBudgetAllocatorFunctionsLibrary), 2460515361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Statics_SKGAnimationBudgetAllocatorFunctionsLibrary_h_1713154369(TEXT("/Script/SKGOptional"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Statics_SKGAnimationBudgetAllocatorFunctionsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptional_Public_Statics_SKGAnimationBudgetAllocatorFunctionsLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
