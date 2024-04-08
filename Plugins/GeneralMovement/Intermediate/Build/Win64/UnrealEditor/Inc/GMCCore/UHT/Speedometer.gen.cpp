// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Speedometer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedometer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	GMCCORE_API UClass* Z_Construct_UClass_UGMC_Speedometer();
	GMCCORE_API UClass* Z_Construct_UClass_UGMC_Speedometer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References
	DEFINE_FUNCTION(UGMC_Speedometer::execGetLocalPawnMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPawnMovementComponent**)Z_Param__Result=P_THIS->GetLocalPawnMovementComponent();
		P_NATIVE_END;
	}
	void UGMC_Speedometer::StaticRegisterNativesUGMC_Speedometer()
	{
		UClass* Class = UGMC_Speedometer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalPawnMovementComponent", &UGMC_Speedometer::execGetLocalPawnMovementComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics
	{
		struct GMC_Speedometer_eventGetLocalPawnMovementComponent_Parms
		{
			UPawnMovementComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Speedometer_eventGetLocalPawnMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_Speedometer, nullptr, "GetLocalPawnMovementComponent", nullptr, nullptr, Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::GMC_Speedometer_eventGetLocalPawnMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::GMC_Speedometer_eventGetLocalPawnMovementComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_Speedometer);
	UClass* Z_Construct_UClass_UGMC_Speedometer_NoRegister()
	{
		return UGMC_Speedometer::StaticClass();
	}
	struct Z_Construct_UClass_UGMC_Speedometer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_Speedometer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Text_Speedometer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_Speedometer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Speedometer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeVelocityZ_MetaData[];
#endif
		static void NewProp_bIncludeVelocityZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeVelocityZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMC_Speedometer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGMC_Speedometer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent, "GetLocalPawnMovementComponent" }, // 1557248782
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_Speedometer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// Provides the bindings for a widget Blueprint which displays the current speed of the pawn.\n" },
		{ "IncludePath", "Widgets/Speedometer.h" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
		{ "ToolTip", "Provides the bindings for a widget Blueprint which displays the current speed of the pawn." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Text_Speedometer_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Text_Speedometer = { "Text_Speedometer", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_Speedometer, Text_Speedometer), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Text_Speedometer_MetaData), Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Text_Speedometer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Value_Speedometer_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Value_Speedometer = { "Value_Speedometer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_Speedometer, Value_Speedometer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Value_Speedometer_MetaData), Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Value_Speedometer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
	};
#endif
	void Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ_SetBit(void* Obj)
	{
		((UGMC_Speedometer*)Obj)->bIncludeVelocityZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ = { "bIncludeVelocityZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_Speedometer), &Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ_MetaData), Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMC_Speedometer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Text_Speedometer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Value_Speedometer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMC_Speedometer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_Speedometer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_Speedometer_Statics::ClassParams = {
		&UGMC_Speedometer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGMC_Speedometer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_Speedometer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGMC_Speedometer()
	{
		if (!Z_Registration_Info_UClass_UGMC_Speedometer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_Speedometer.OuterSingleton, Z_Construct_UClass_UGMC_Speedometer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGMC_Speedometer.OuterSingleton;
	}
	template<> GMCCORE_API UClass* StaticClass<UGMC_Speedometer>()
	{
		return UGMC_Speedometer::StaticClass();
	}
	UGMC_Speedometer::UGMC_Speedometer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_Speedometer);
	UGMC_Speedometer::~UGMC_Speedometer() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGMC_Speedometer, UGMC_Speedometer::StaticClass, TEXT("UGMC_Speedometer"), &Z_Registration_Info_UClass_UGMC_Speedometer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_Speedometer), 3198988356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_2078115734(TEXT("/Script/GMCCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
