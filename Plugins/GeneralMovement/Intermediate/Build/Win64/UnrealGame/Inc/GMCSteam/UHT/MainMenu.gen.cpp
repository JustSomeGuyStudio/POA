// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/MainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}
// Cross Module References
	GMCSTEAM_API UClass* Z_Construct_UClass_UMainMenu();
	GMCSTEAM_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GMCSteam();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenu::execOnJoin_RefreshButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoin_RefreshButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnJoin_CancelButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoin_CancelButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnJoin_JoinButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoin_JoinButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnHost_UserDesiredSessionNameTextCommitted)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHost_UserDesiredSessionNameTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnHost_MultiplayerButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHost_MultiplayerButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnHost_SinglePlayerButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHost_SinglePlayerButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnHost_CancelButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHost_CancelButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnHost_HostButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHost_HostButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnMain_ExitButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMain_ExitButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnMain_JoinButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMain_JoinButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnMain_HostButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMain_HostButtonClicked();
		P_NATIVE_END;
	}
	void UMainMenu::StaticRegisterNativesUMainMenu()
	{
		UClass* Class = UMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHost_CancelButtonClicked", &UMainMenu::execOnHost_CancelButtonClicked },
			{ "OnHost_HostButtonClicked", &UMainMenu::execOnHost_HostButtonClicked },
			{ "OnHost_MultiplayerButtonClicked", &UMainMenu::execOnHost_MultiplayerButtonClicked },
			{ "OnHost_SinglePlayerButtonClicked", &UMainMenu::execOnHost_SinglePlayerButtonClicked },
			{ "OnHost_UserDesiredSessionNameTextCommitted", &UMainMenu::execOnHost_UserDesiredSessionNameTextCommitted },
			{ "OnJoin_CancelButtonClicked", &UMainMenu::execOnJoin_CancelButtonClicked },
			{ "OnJoin_JoinButtonClicked", &UMainMenu::execOnJoin_JoinButtonClicked },
			{ "OnJoin_RefreshButtonClicked", &UMainMenu::execOnJoin_RefreshButtonClicked },
			{ "OnMain_ExitButtonClicked", &UMainMenu::execOnMain_ExitButtonClicked },
			{ "OnMain_HostButtonClicked", &UMainMenu::execOnMain_HostButtonClicked },
			{ "OnMain_JoinButtonClicked", &UMainMenu::execOnMain_JoinButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenu_OnHost_CancelButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnHost_CancelButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnHost_CancelButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnHost_CancelButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnHost_CancelButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnHost_CancelButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnHost_CancelButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnHost_CancelButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnHost_HostButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnHost_HostButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnHost_HostButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnHost_HostButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnHost_HostButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnHost_HostButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnHost_HostButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnHost_HostButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnHost_MultiplayerButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnHost_MultiplayerButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnHost_MultiplayerButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnHost_MultiplayerButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnHost_MultiplayerButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnHost_MultiplayerButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnHost_MultiplayerButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnHost_MultiplayerButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnHost_SinglePlayerButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnHost_SinglePlayerButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnHost_SinglePlayerButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnHost_SinglePlayerButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnHost_SinglePlayerButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnHost_SinglePlayerButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnHost_SinglePlayerButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnHost_SinglePlayerButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics
	{
		struct MainMenu_eventOnHost_UserDesiredSessionNameTextCommitted_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventOnHost_UserDesiredSessionNameTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::NewProp_Text_MetaData), Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventOnHost_UserDesiredSessionNameTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 3724737095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnHost_UserDesiredSessionNameTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::MainMenu_eventOnHost_UserDesiredSessionNameTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::MainMenu_eventOnHost_UserDesiredSessionNameTextCommitted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnJoin_CancelButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnJoin_CancelButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnJoin_CancelButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnJoin_CancelButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnJoin_CancelButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnJoin_CancelButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnJoin_CancelButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnJoin_CancelButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnJoin_JoinButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnJoin_JoinButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnJoin_JoinButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnJoin_JoinButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnJoin_JoinButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnJoin_JoinButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnJoin_JoinButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnJoin_JoinButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnJoin_RefreshButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnJoin_RefreshButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnJoin_RefreshButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnJoin_RefreshButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnJoin_RefreshButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnJoin_RefreshButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnJoin_RefreshButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnJoin_RefreshButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnMain_ExitButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnMain_ExitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnMain_ExitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnMain_ExitButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnMain_ExitButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnMain_ExitButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnMain_ExitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnMain_ExitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnMain_HostButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnMain_HostButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnMain_HostButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnMain_HostButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnMain_HostButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnMain_HostButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnMain_HostButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnMain_HostButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnMain_JoinButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnMain_JoinButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnMain_JoinButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnMain_JoinButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnMain_JoinButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnMain_JoinButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnMain_JoinButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnMain_JoinButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenu);
	UClass* Z_Construct_UClass_UMainMenu_NoRegister()
	{
		return UMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Main;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_HostButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Main_HostButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_JoinButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Main_JoinButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_HostText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Main_HostText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_ExitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Main_ExitButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_MenuSwitcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Main_MenuSwitcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_HostButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Host_HostButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_HostText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Host_HostText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_CancelButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Host_CancelButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_SinglePlayerButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Host_SinglePlayerButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MultiplayerButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Host_MultiplayerButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_UserDesiredSessionNameTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Host_UserDesiredSessionNameTextBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Join_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Join;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Join_JoinButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Join_JoinButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Join_JoinText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Join_JoinText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Join_CancelButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Join_CancelButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Join_ServerListScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Join_ServerListScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Join_RefreshButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Join_RefreshButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Join_RefreshText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Join_RefreshText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GMCSteam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenu_OnHost_CancelButtonClicked, "OnHost_CancelButtonClicked" }, // 2981079846
		{ &Z_Construct_UFunction_UMainMenu_OnHost_HostButtonClicked, "OnHost_HostButtonClicked" }, // 3799585063
		{ &Z_Construct_UFunction_UMainMenu_OnHost_MultiplayerButtonClicked, "OnHost_MultiplayerButtonClicked" }, // 3009682137
		{ &Z_Construct_UFunction_UMainMenu_OnHost_SinglePlayerButtonClicked, "OnHost_SinglePlayerButtonClicked" }, // 558074494
		{ &Z_Construct_UFunction_UMainMenu_OnHost_UserDesiredSessionNameTextCommitted, "OnHost_UserDesiredSessionNameTextCommitted" }, // 2834480371
		{ &Z_Construct_UFunction_UMainMenu_OnJoin_CancelButtonClicked, "OnJoin_CancelButtonClicked" }, // 705947144
		{ &Z_Construct_UFunction_UMainMenu_OnJoin_JoinButtonClicked, "OnJoin_JoinButtonClicked" }, // 811840998
		{ &Z_Construct_UFunction_UMainMenu_OnJoin_RefreshButtonClicked, "OnJoin_RefreshButtonClicked" }, // 1895161855
		{ &Z_Construct_UFunction_UMainMenu_OnMain_ExitButtonClicked, "OnMain_ExitButtonClicked" }, // 2479801376
		{ &Z_Construct_UFunction_UMainMenu_OnMain_HostButtonClicked, "OnMain_HostButtonClicked" }, // 1408137133
		{ &Z_Construct_UFunction_UMainMenu_OnMain_JoinButtonClicked, "OnMain_JoinButtonClicked" }, // 2021910994
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// Provides the bindings for a widget Blueprint which can expose the functionality of USteamGameInstance as UI.\n" },
		{ "IncludePath", "Widgets/MainMenu.h" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
		{ "ToolTip", "Provides the bindings for a widget Blueprint which can expose the functionality of USteamGameInstance as UI." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Menu top-level.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
		{ "ToolTip", "Menu top-level." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Main = { "Main", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Main), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostButton = { "Main_HostButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Main_HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_JoinButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_JoinButton = { "Main_JoinButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Main_JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_JoinButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_JoinButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostText = { "Main_HostText", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Main_HostText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostText_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_ExitButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_ExitButton = { "Main_ExitButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Main_ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_ExitButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_ExitButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_MenuSwitcher_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_MenuSwitcher = { "Main_MenuSwitcher", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Main_MenuSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_MenuSwitcher_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_MenuSwitcher_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Host submenu.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
		{ "ToolTip", "Host submenu." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Host), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostButton = { "Host_HostButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Host_HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostText = { "Host_HostText", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Host_HostText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostText_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_CancelButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_CancelButton = { "Host_CancelButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Host_CancelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_CancelButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_CancelButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_SinglePlayerButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_SinglePlayerButton = { "Host_SinglePlayerButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Host_SinglePlayerButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_SinglePlayerButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_SinglePlayerButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MultiplayerButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MultiplayerButton = { "Host_MultiplayerButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Host_MultiplayerButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MultiplayerButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MultiplayerButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_UserDesiredSessionNameTextBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_UserDesiredSessionNameTextBox = { "Host_UserDesiredSessionNameTextBox", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Host_UserDesiredSessionNameTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_UserDesiredSessionNameTextBox_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_UserDesiredSessionNameTextBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Join submenu.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
		{ "ToolTip", "Join submenu." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Join = { "Join", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Join), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinButton = { "Join_JoinButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Join_JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinText = { "Join_JoinText", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Join_JoinText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinText_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_CancelButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_CancelButton = { "Join_CancelButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Join_CancelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_CancelButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_CancelButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_ServerListScrollBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_ServerListScrollBox = { "Join_ServerListScrollBox", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Join_ServerListScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_ServerListScrollBox_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_ServerListScrollBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshButton = { "Join_RefreshButton", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Join_RefreshButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshButton_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshText = { "Join_RefreshText", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Join_RefreshText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshText_MetaData), Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Main,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_JoinButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_HostText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_ExitButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Main_MenuSwitcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_HostText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_CancelButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_SinglePlayerButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MultiplayerButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_UserDesiredSessionNameTextBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Join,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_JoinText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_CancelButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_ServerListScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_RefreshText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
		&UMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMainMenu()
	{
		if (!Z_Registration_Info_UClass_UMainMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenu.OuterSingleton, Z_Construct_UClass_UMainMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainMenu.OuterSingleton;
	}
	template<> GMCSTEAM_API UClass* StaticClass<UMainMenu>()
	{
		return UMainMenu::StaticClass();
	}
	UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
	UMainMenu::~UMainMenu() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_MainMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_MainMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenu, UMainMenu::StaticClass, TEXT("UMainMenu"), &Z_Registration_Info_UClass_UMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenu), 1911166344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_MainMenu_h_3680041955(TEXT("/Script/GMCSteam"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_MainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_MainMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
