// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGPhysicalMaterialModule/Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAnimNotify_SKGPlayFootstepSound() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SKGPHYSICALMATERIALMODULE_API UClass* Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound();
	SKGPHYSICALMATERIALMODULE_API UClass* Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGPhysicalMaterialModule();
// End Cross Module References
	void UUAnimNotify_SKGPlayFootstepSound::StaticRegisterNativesUUAnimNotify_SKGPlayFootstepSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUAnimNotify_SKGPlayFootstepSound);
	UClass* Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_NoRegister()
	{
		return UUAnimNotify_SKGPlayFootstepSound::StaticClass();
	}
	struct Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FootBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialEffectTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalMaterialEffectTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGPhysicalMaterialModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Notify specific for playing footstep sounds\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
		{ "ModuleRelativePath", "Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
		{ "ToolTip", "Notify specific for playing footstep sounds" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_FootBoneName_MetaData[] = {
		{ "Category", "SKG|AnimNotify|FootstepSound" },
		{ "ModuleRelativePath", "Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_FootBoneName = { "FootBoneName", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUAnimNotify_SKGPlayFootstepSound, FootBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_FootBoneName_MetaData), Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_FootBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_PhysicalMaterialEffectTag_MetaData[] = {
		{ "Category", "SKG|AnimNotify|FootstepSound" },
		{ "ModuleRelativePath", "Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_PhysicalMaterialEffectTag = { "PhysicalMaterialEffectTag", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUAnimNotify_SKGPlayFootstepSound, PhysicalMaterialEffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_PhysicalMaterialEffectTag_MetaData), Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_PhysicalMaterialEffectTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "SKG|AnimNotify|FootstepSound" },
		{ "ModuleRelativePath", "Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUAnimNotify_SKGPlayFootstepSound, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_TraceChannel_MetaData), Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_TraceChannel_MetaData) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_FootBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_PhysicalMaterialEffectTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_TraceChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUAnimNotify_SKGPlayFootstepSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::ClassParams = {
		&UUAnimNotify_SKGPlayFootstepSound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::Class_MetaDataParams), Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound()
	{
		if (!Z_Registration_Info_UClass_UUAnimNotify_SKGPlayFootstepSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUAnimNotify_SKGPlayFootstepSound.OuterSingleton, Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUAnimNotify_SKGPlayFootstepSound.OuterSingleton;
	}
	template<> SKGPHYSICALMATERIALMODULE_API UClass* StaticClass<UUAnimNotify_SKGPlayFootstepSound>()
	{
		return UUAnimNotify_SKGPlayFootstepSound::StaticClass();
	}
	UUAnimNotify_SKGPlayFootstepSound::UUAnimNotify_SKGPlayFootstepSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUAnimNotify_SKGPlayFootstepSound);
	UUAnimNotify_SKGPlayFootstepSound::~UUAnimNotify_SKGPlayFootstepSound() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_AnimationNotifies_UAnimNotify_SKGPlayFootstepSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_AnimationNotifies_UAnimNotify_SKGPlayFootstepSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound, UUAnimNotify_SKGPlayFootstepSound::StaticClass, TEXT("UUAnimNotify_SKGPlayFootstepSound"), &Z_Registration_Info_UClass_UUAnimNotify_SKGPlayFootstepSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUAnimNotify_SKGPlayFootstepSound), 2823434413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_AnimationNotifies_UAnimNotify_SKGPlayFootstepSound_h_743313602(TEXT("/Script/SKGPhysicalMaterialModule"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_AnimationNotifies_UAnimNotify_SKGPlayFootstepSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_AnimationNotifies_UAnimNotify_SKGPlayFootstepSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
