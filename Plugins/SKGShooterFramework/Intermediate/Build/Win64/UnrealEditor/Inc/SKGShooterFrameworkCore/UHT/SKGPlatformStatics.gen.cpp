// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SKGShooterFrameworkCore/Public/Statics/SKGPlatformStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGPlatformStatics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGPlatformStatics();
	SKGSHOOTERFRAMEWORKCORE_API UClass* Z_Construct_UClass_USKGPlatformStatics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SKGShooterFrameworkCore();
// End Cross Module References
	DEFINE_FUNCTION(USKGPlatformStatics::execIsClipboardEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USKGPlatformStatics::IsClipboardEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGPlatformStatics::execClipboardPasteText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=USKGPlatformStatics::ClipboardPasteText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGPlatformStatics::execClipboardPasteName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=USKGPlatformStatics::ClipboardPasteName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGPlatformStatics::execClipboardPaste)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USKGPlatformStatics::ClipboardPaste();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGPlatformStatics::execClipboardCopyText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		USKGPlatformStatics::ClipboardCopyText(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGPlatformStatics::execClipboardCopyName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		USKGPlatformStatics::ClipboardCopyName(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USKGPlatformStatics::execClipboardCopy)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		USKGPlatformStatics::ClipboardCopy(Z_Param_Text);
		P_NATIVE_END;
	}
	void USKGPlatformStatics::StaticRegisterNativesUSKGPlatformStatics()
	{
		UClass* Class = USKGPlatformStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClipboardCopy", &USKGPlatformStatics::execClipboardCopy },
			{ "ClipboardCopyName", &USKGPlatformStatics::execClipboardCopyName },
			{ "ClipboardCopyText", &USKGPlatformStatics::execClipboardCopyText },
			{ "ClipboardPaste", &USKGPlatformStatics::execClipboardPaste },
			{ "ClipboardPasteName", &USKGPlatformStatics::execClipboardPasteName },
			{ "ClipboardPasteText", &USKGPlatformStatics::execClipboardPasteText },
			{ "IsClipboardEmpty", &USKGPlatformStatics::execIsClipboardEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics
	{
		struct SKGPlatformStatics_eventClipboardCopy_Parms
		{
			FString Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPlatformStatics_eventClipboardCopy_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::NewProp_Text_MetaData), Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGPlatformStatics|Clipboard" },
		{ "Comment", "// Copies the given FString to your platforms clipboard\n" },
		{ "ModuleRelativePath", "Public/Statics/SKGPlatformStatics.h" },
		{ "ToolTip", "Copies the given FString to your platforms clipboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPlatformStatics, nullptr, "ClipboardCopy", nullptr, nullptr, Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::SKGPlatformStatics_eventClipboardCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::SKGPlatformStatics_eventClipboardCopy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics
	{
		struct SKGPlatformStatics_eventClipboardCopyName_Parms
		{
			FName Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPlatformStatics_eventClipboardCopyName_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::NewProp_Text_MetaData), Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGPlatformStatics|Clipboard" },
		{ "Comment", "// Copies the given FName to your platforms clipboard\n" },
		{ "ModuleRelativePath", "Public/Statics/SKGPlatformStatics.h" },
		{ "ToolTip", "Copies the given FName to your platforms clipboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPlatformStatics, nullptr, "ClipboardCopyName", nullptr, nullptr, Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::SKGPlatformStatics_eventClipboardCopyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::SKGPlatformStatics_eventClipboardCopyName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics
	{
		struct SKGPlatformStatics_eventClipboardCopyText_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPlatformStatics_eventClipboardCopyText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::NewProp_Text_MetaData), Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGPlatformStatics|Clipboard" },
		{ "Comment", "// Copies the given FText to your platforms clipboard\n" },
		{ "ModuleRelativePath", "Public/Statics/SKGPlatformStatics.h" },
		{ "ToolTip", "Copies the given FText to your platforms clipboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPlatformStatics, nullptr, "ClipboardCopyText", nullptr, nullptr, Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::SKGPlatformStatics_eventClipboardCopyText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::SKGPlatformStatics_eventClipboardCopyText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics
	{
		struct SKGPlatformStatics_eventClipboardPaste_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPlatformStatics_eventClipboardPaste_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGPlatformStatics|Clipboard" },
		{ "Comment", "// Returns the text from your platforms clipboard as type FString\n" },
		{ "ModuleRelativePath", "Public/Statics/SKGPlatformStatics.h" },
		{ "ToolTip", "Returns the text from your platforms clipboard as type FString" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPlatformStatics, nullptr, "ClipboardPaste", nullptr, nullptr, Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::SKGPlatformStatics_eventClipboardPaste_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::SKGPlatformStatics_eventClipboardPaste_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics
	{
		struct SKGPlatformStatics_eventClipboardPasteName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPlatformStatics_eventClipboardPasteName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGPlatformStatics|Clipboard" },
		{ "Comment", "// Returns the text from your platforms clipboard as type FName\n" },
		{ "ModuleRelativePath", "Public/Statics/SKGPlatformStatics.h" },
		{ "ToolTip", "Returns the text from your platforms clipboard as type FName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPlatformStatics, nullptr, "ClipboardPasteName", nullptr, nullptr, Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::SKGPlatformStatics_eventClipboardPasteName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::SKGPlatformStatics_eventClipboardPasteName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics
	{
		struct SKGPlatformStatics_eventClipboardPasteText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SKGPlatformStatics_eventClipboardPasteText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGPlatformStatics|Clipboard" },
		{ "Comment", "// Returns the text from your platforms clipboard as type FText\n" },
		{ "ModuleRelativePath", "Public/Statics/SKGPlatformStatics.h" },
		{ "ToolTip", "Returns the text from your platforms clipboard as type FText" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPlatformStatics, nullptr, "ClipboardPasteText", nullptr, nullptr, Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::SKGPlatformStatics_eventClipboardPasteText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::SKGPlatformStatics_eventClipboardPasteText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics
	{
		struct SKGPlatformStatics_eventIsClipboardEmpty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SKGPlatformStatics_eventIsClipboardEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SKGPlatformStatics_eventIsClipboardEmpty_Parms), &Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "SKGPlatformStatics|Clipboard" },
		{ "Comment", "// Returns true if you have nothing copied to the clipboard\n" },
		{ "ModuleRelativePath", "Public/Statics/SKGPlatformStatics.h" },
		{ "ToolTip", "Returns true if you have nothing copied to the clipboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USKGPlatformStatics, nullptr, "IsClipboardEmpty", nullptr, nullptr, Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::SKGPlatformStatics_eventIsClipboardEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::SKGPlatformStatics_eventIsClipboardEmpty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USKGPlatformStatics);
	UClass* Z_Construct_UClass_USKGPlatformStatics_NoRegister()
	{
		return USKGPlatformStatics::StaticClass();
	}
	struct Z_Construct_UClass_USKGPlatformStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USKGPlatformStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SKGShooterFrameworkCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPlatformStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USKGPlatformStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopy, "ClipboardCopy" }, // 3967842829
		{ &Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyName, "ClipboardCopyName" }, // 1790864202
		{ &Z_Construct_UFunction_USKGPlatformStatics_ClipboardCopyText, "ClipboardCopyText" }, // 1810868955
		{ &Z_Construct_UFunction_USKGPlatformStatics_ClipboardPaste, "ClipboardPaste" }, // 1498920708
		{ &Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteName, "ClipboardPasteName" }, // 1124520845
		{ &Z_Construct_UFunction_USKGPlatformStatics_ClipboardPasteText, "ClipboardPasteText" }, // 2561794240
		{ &Z_Construct_UFunction_USKGPlatformStatics_IsClipboardEmpty, "IsClipboardEmpty" }, // 2742005323
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPlatformStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USKGPlatformStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Statics/SKGPlatformStatics.h" },
		{ "ModuleRelativePath", "Public/Statics/SKGPlatformStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USKGPlatformStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USKGPlatformStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USKGPlatformStatics_Statics::ClassParams = {
		&USKGPlatformStatics::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USKGPlatformStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_USKGPlatformStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USKGPlatformStatics()
	{
		if (!Z_Registration_Info_UClass_USKGPlatformStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USKGPlatformStatics.OuterSingleton, Z_Construct_UClass_USKGPlatformStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USKGPlatformStatics.OuterSingleton;
	}
	template<> SKGSHOOTERFRAMEWORKCORE_API UClass* StaticClass<USKGPlatformStatics>()
	{
		return USKGPlatformStatics::StaticClass();
	}
	USKGPlatformStatics::USKGPlatformStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USKGPlatformStatics);
	USKGPlatformStatics::~USKGPlatformStatics() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGPlatformStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGPlatformStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USKGPlatformStatics, USKGPlatformStatics::StaticClass, TEXT("USKGPlatformStatics"), &Z_Registration_Info_UClass_USKGPlatformStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USKGPlatformStatics), 2549520369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGPlatformStatics_h_4165918167(TEXT("/Script/SKGShooterFrameworkCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGPlatformStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SKGShooterFramework_Source_SKGShooterFrameworkCore_Public_Statics_SKGPlatformStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
