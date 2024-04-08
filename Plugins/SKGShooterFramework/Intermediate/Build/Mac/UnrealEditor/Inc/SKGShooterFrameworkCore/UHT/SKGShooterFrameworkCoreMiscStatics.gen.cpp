// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGShooterFrameworkCore/Public/Statics/SKGShooterFrameworkCoreMiscStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFrameworkCoreMiscStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References
	DEFINE_FUNCTION(USKGShooterFrameworkCoreMiscStatics::execIsWorldTearingDown)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USKGShooterFrameworkCoreMiscStatics::IsWorldTearingDown(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USKGShooterFrameworkCoreMiscStatics::StaticRegisterNativesUSKGShooterFrameworkCoreMiscStatics()
	{
		UClass* Class = USKGShooterFrameworkCoreMiscStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsWorldTearingDown", &USKGShooterFrameworkCoreMiscStatics::execIsWorldTearingDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics
	{
		struct SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms), &Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "USKGShooterFrameworkCoreMiscStatics" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreMiscStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics, nullptr, "IsWorldTearingDown", nullptr, nullptr, Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::SKGShooterFrameworkCoreMiscStatics_eventIsWorldTearingDown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGShooterFrameworkCoreMiscStatics);
	UClass* Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_NoRegister()
	{
		return USKGShooterFrameworkCoreMiscStatics::StaticClass();
	}
	struct Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGShooterFrameworkCoreMiscStatics_IsWorldTearingDown, "IsWorldTearingDown" }, // 2716897450
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Statics/SKGShooterFrameworkCoreMiscStatics.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGShooterFrameworkCoreMiscStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGShooterFrameworkCoreMiscStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::ClassParams = {
		&USKGShooterFrameworkCoreMiscStatics::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics()
	{
		if (!Z_Registration_Info_UClass_USKGShooterFrameworkCoreMiscStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGShooterFrameworkCoreMiscStatics.OuterSingleton, Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGShooterFrameworkCoreMiscStatics.OuterSingleton;
	}
	template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGShooterFrameworkCoreMiscStatics>()
	{
		return USKGShooterFrameworkCoreMiscStatics::StaticClass();
	}
	USKGShooterFrameworkCoreMiscStatics::USKGShooterFrameworkCoreMiscStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGShooterFrameworkCoreMiscStatics);
	USKGShooterFrameworkCoreMiscStatics::~USKGShooterFrameworkCoreMiscStatics() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreMiscStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreMiscStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGShooterFrameworkCoreMiscStatics, USKGShooterFrameworkCoreMiscStatics::StaticClass, TEXT("USKGShooterFrameworkCoreMiscStatics"), &Z_Registration_Info_UClass_USKGShooterFrameworkCoreMiscStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGShooterFrameworkCoreMiscStatics), 3092495635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreMiscStatics_h_1281691958(TEXT("/Script/SKGShooterFrameworkCore"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreMiscStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGShooterFrameworkCoreMiscStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
