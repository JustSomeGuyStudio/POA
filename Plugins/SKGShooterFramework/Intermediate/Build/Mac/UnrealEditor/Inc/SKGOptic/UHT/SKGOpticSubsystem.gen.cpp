// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGOptic/Public/Subsystems/SKGOpticSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGOpticSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticSubsystem();
	SKGOPTIC_API UClass* Z_Construct_UClass_USKGOpticSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGOptic();
// End Cross Module References
	DEFINE_FUNCTION(USKGOpticSubsystem::execSetTickTest)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_Mesh);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_MPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickTest(Z_Param_Mesh,Z_Param_MPC);
		P_NATIVE_END;
	}
	void USKGOpticSubsystem::StaticRegisterNativesUSKGOpticSubsystem()
	{
		UClass* Class = USKGOpticSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTickTest", &USKGOpticSubsystem::execSetTickTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics
	{
		struct SKGOpticSubsystem_eventSetTickTest_Parms
		{
			UMeshComponent* Mesh;
			UMaterialParameterCollection* MPC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticSubsystem_eventSetTickTest_Parms, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::NewProp_Mesh_MetaData), Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::NewProp_MPC = { "MPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGOpticSubsystem_eventSetTickTest_Parms, MPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::NewProp_MPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "TEST" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGOpticSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGOpticSubsystem, nullptr, "SetTickTest", nullptr, nullptr, Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::SKGOpticSubsystem_eventSetTickTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::SKGOpticSubsystem_eventSetTickTest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGOpticSubsystem);
	UClass* Z_Construct_UClass_USKGOpticSubsystem_NoRegister()
	{
		return USKGOpticSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USKGOpticSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPCTest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MPCTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshTest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGOpticSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGOptic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGOpticSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGOpticSubsystem_SetTickTest, "SetTickTest" }, // 814504702
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/SKGOpticSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGOpticSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MPCTest_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SKGOpticSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MPCTest = { "MPCTest", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticSubsystem, MPCTest), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MPCTest_MetaData), Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MPCTest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MeshTest_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/SKGOpticSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MeshTest = { "MeshTest", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USKGOpticSubsystem, MeshTest), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MeshTest_MetaData), Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MeshTest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USKGOpticSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MPCTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USKGOpticSubsystem_Statics::NewProp_MeshTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGOpticSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGOpticSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGOpticSubsystem_Statics::ClassParams = {
		&USKGOpticSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USKGOpticSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGOpticSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGOpticSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USKGOpticSubsystem()
	{
		if (!Z_Registration_Info_UClass_USKGOpticSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGOpticSubsystem.OuterSingleton, Z_Construct_UClass_USKGOpticSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGOpticSubsystem.OuterSingleton;
	}
	template<> SKGOPTIC_API UClass* StaticClass<USKGOpticSubsystem>()
	{
		return USKGOpticSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGOpticSubsystem);
	USKGOpticSubsystem::~USKGOpticSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Subsystems_SKGOpticSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Subsystems_SKGOpticSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGOpticSubsystem, USKGOpticSubsystem::StaticClass, TEXT("USKGOpticSubsystem"), &Z_Registration_Info_UClass_USKGOpticSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGOpticSubsystem), 4140651739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Subsystems_SKGOpticSubsystem_h_2772178277(TEXT("/Script/SKGOptic"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Subsystems_SKGOpticSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGOptic_Public_Subsystems_SKGOpticSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
