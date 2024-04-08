// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGPhysicalMaterialModule/Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAnimNotify_SKGPlayFootstepSound() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SKGPHYSICALMATERIALMODULE_API UClass* Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound();
SKGPHYSICALMATERIALMODULE_API UClass* Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_NoRegister();
UPackage* Z_Construct_UPackage__Script_SKGPhysicalMaterialModule();
// End Cross Module References

// Begin Class UUAnimNotify_SKGPlayFootstepSound
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify specific for playing footstep sounds\n" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
		{ "ModuleRelativePath", "Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify specific for playing footstep sounds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootBoneName_MetaData[] = {
		{ "Category", "SKG|AnimNotify|FootstepSound" },
		{ "ModuleRelativePath", "Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialEffectTag_MetaData[] = {
		{ "Category", "SKG|AnimNotify|FootstepSound" },
		{ "ModuleRelativePath", "Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "SKG|AnimNotify|FootstepSound" },
		{ "ModuleRelativePath", "Public/AnimationNotifies/UAnimNotify_SKGPlayFootstepSound.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootBoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalMaterialEffectTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUAnimNotify_SKGPlayFootstepSound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_FootBoneName = { "FootBoneName", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUAnimNotify_SKGPlayFootstepSound, FootBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootBoneName_MetaData), NewProp_FootBoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_PhysicalMaterialEffectTag = { "PhysicalMaterialEffectTag", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUAnimNotify_SKGPlayFootstepSound, PhysicalMaterialEffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialEffectTag_MetaData), NewProp_PhysicalMaterialEffectTag_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUAnimNotify_SKGPlayFootstepSound, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_FootBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_PhysicalMaterialEffectTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::NewProp_TraceChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SKGPhysicalMaterialModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound_Statics::DependentSingletons) < 16);
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
// End Class UUAnimNotify_SKGPlayFootstepSound

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_AnimationNotifies_UAnimNotify_SKGPlayFootstepSound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUAnimNotify_SKGPlayFootstepSound, UUAnimNotify_SKGPlayFootstepSound::StaticClass, TEXT("UUAnimNotify_SKGPlayFootstepSound"), &Z_Registration_Info_UClass_UUAnimNotify_SKGPlayFootstepSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUAnimNotify_SKGPlayFootstepSound), 2707779105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_AnimationNotifies_UAnimNotify_SKGPlayFootstepSound_h_679861444(TEXT("/Script/SKGPhysicalMaterialModule"),
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_AnimationNotifies_UAnimNotify_SKGPlayFootstepSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGPhysicalMaterialModule_Public_AnimationNotifies_UAnimNotify_SKGPlayFootstepSound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
