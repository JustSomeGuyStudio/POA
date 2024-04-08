// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGLightLaser_init() {}
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature();
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature();
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature();
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature();
	SKGLIGHTLASER_API UFunction* Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SKGLightLaser;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SKGLightLaser()
	{
		if (!Z_Registration_Info_UPackage__Script_SKGLightLaser.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGLightLaser_OnInfraredModeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserImpact__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGLightLaser_OnLaserStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGLightLaser_OnLightModeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGLightLaser_OnLightStrobed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SKGLightLaser",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x91C721FB,
				0x8AD5F0B4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SKGLightLaser.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SKGLightLaser.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SKGLightLaser(Z_Construct_UPackage__Script_SKGLightLaser, TEXT("/Script/SKGLightLaser"), Z_Registration_Info_UPackage__Script_SKGLightLaser, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x91C721FB, 0x8AD5F0B4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
