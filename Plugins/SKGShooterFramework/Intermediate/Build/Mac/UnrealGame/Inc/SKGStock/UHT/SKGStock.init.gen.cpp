// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGStock_init() {}
	SKGSTOCK_API UFunction* Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature();
	SKGSTOCK_API UFunction* Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SKGStock;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SKGStock()
	{
		if (!Z_Registration_Info_UPackage__Script_SKGStock.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGStock_OnFolded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SKGStock_OnLengthOfPullChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SKGStock",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x00AD10C2,
				0xB86B0502,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SKGStock.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SKGStock.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SKGStock(Z_Construct_UPackage__Script_SKGStock, TEXT("/Script/SKGStock"), Z_Registration_Info_UPackage__Script_SKGStock, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x00AD10C2, 0xB86B0502));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
