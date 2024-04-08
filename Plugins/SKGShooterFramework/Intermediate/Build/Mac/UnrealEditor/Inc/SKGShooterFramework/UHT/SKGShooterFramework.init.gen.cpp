// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGShooterFramework_init() {}
	SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature();
	SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature();
	SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature();
	SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature();
	SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature();
	SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature();
	SKGSHOOTERFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SKGShooterFramework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SKGShooterFramework()
	{
		if (!Z_Registration_Info_UPackage__Script_SKGShooterFramework.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGShooterFramework_OnAimingDeviceCycled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGShooterFramework_OnFirearmStatsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeld__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGShooterFramework_OnHeldActorSet__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGShooterFramework_OnMuzzleComponentUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGShooterFramework_OnPoseComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGShooterFramework_OnProceduralAnimComponentsUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SKGShooterFramework",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8416E36B,
				0xE7C8A77E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SKGShooterFramework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SKGShooterFramework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SKGShooterFramework(Z_Construct_UPackage__Script_SKGShooterFramework, TEXT("/Script/SKGShooterFramework"), Z_Registration_Info_UPackage__Script_SKGShooterFramework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8416E36B, 0xE7C8A77E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
