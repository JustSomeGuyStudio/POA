// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../UE_Projects/GitLabRepo/POA/Plugins/SKGShooterFramework/Source/SKGAttachment/Public/DataTypes/SKGAttachmentDataTypes.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSKGAttachmentDataTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
SKGATTACHMENT_API UClass* Z_Construct_UClass_USKGAttachmentComponent_NoRegister();
SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGActorsAttachment();
SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentActor();
SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentComponentItem();
SKGATTACHMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentComponentItems();
UPackage* Z_Construct_UPackage__Script_SKGAttachment();
// End Cross Module References

// Begin ScriptStruct FSKGAttachmentComponentItem
static_assert(std::is_polymorphic<FSKGAttachmentComponentItem>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FSKGAttachmentComponentItem cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItem;
class UScriptStruct* FSKGAttachmentComponentItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGAttachmentComponentItem, (UObject*)Z_Construct_UPackage__Script_SKGAttachment(), TEXT("SKGAttachmentComponentItem"));
	}
	return Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItem.OuterSingleton;
}
template<> SKGATTACHMENT_API UScriptStruct* StaticStruct<FSKGAttachmentComponentItem>()
{
	return FSKGAttachmentComponentItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentComponent_MetaData[] = {
		{ "Category", "SKGAttachmentDataTypes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGAttachmentComponentItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::NewProp_AttachmentComponent = { "AttachmentComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentComponentItem, AttachmentComponent), Z_Construct_UClass_USKGAttachmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentComponent_MetaData), NewProp_AttachmentComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::NewProp_AttachmentComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"SKGAttachmentComponentItem",
	Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::PropPointers),
	sizeof(FSKGAttachmentComponentItem),
	alignof(FSKGAttachmentComponentItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentComponentItem()
{
	if (!Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItem.InnerSingleton, Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItem.InnerSingleton;
}
// End ScriptStruct FSKGAttachmentComponentItem

// Begin ScriptStruct FSKGAttachmentComponentItems
static_assert(std::is_polymorphic<FSKGAttachmentComponentItems>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FSKGAttachmentComponentItems cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItems;
class UScriptStruct* FSKGAttachmentComponentItems::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItems.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItems.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGAttachmentComponentItems, (UObject*)Z_Construct_UPackage__Script_SKGAttachment(), TEXT("SKGAttachmentComponentItems"));
	}
	return Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItems.OuterSingleton;
}
template<> SKGATTACHMENT_API UScriptStruct* StaticStruct<FSKGAttachmentComponentItems>()
{
	return FSKGAttachmentComponentItems::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FSKGAttachmentComponentItems);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FSKGAttachmentComponentItems);
#endif
struct Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGAttachmentComponentItems>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGAttachmentComponentItem, METADATA_PARAMS(0, nullptr) }; // 1526127399
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentComponentItems, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1526127399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"SKGAttachmentComponentItems",
	Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::PropPointers),
	sizeof(FSKGAttachmentComponentItems),
	alignof(FSKGAttachmentComponentItems),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentComponentItems()
{
	if (!Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItems.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItems.InnerSingleton, Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItems.InnerSingleton;
}
// End ScriptStruct FSKGAttachmentComponentItems

// Begin ScriptStruct FSKGActorsAttachment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGActorsAttachment;
class UScriptStruct* FSKGActorsAttachment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGActorsAttachment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGActorsAttachment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGActorsAttachment, (UObject*)Z_Construct_UPackage__Script_SKGAttachment(), TEXT("SKGActorsAttachment"));
	}
	return Z_Registration_Info_UScriptStruct_SKGActorsAttachment.OuterSingleton;
}
template<> SKGATTACHMENT_API UScriptStruct* StaticStruct<FSKGActorsAttachment>()
{
	return FSKGActorsAttachment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Data structure that represents an actors attachment.\n * Used for serializing and deserializing to reconstructing an actor.\n */" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data structure that represents an actors attachment.\n* Used for serializing and deserializing to reconstructing an actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "FSKGAttachment" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentComponentName_MetaData[] = {
		{ "Category", "FSKGAttachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the component the attachment is attached to\n" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the component the attachment is attached to" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachmentComponentName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGActorsAttachment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGActorsAttachment, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::NewProp_AttachmentComponentName = { "AttachmentComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGActorsAttachment, AttachmentComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentComponentName_MetaData), NewProp_AttachmentComponentName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::NewProp_AttachmentComponentName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
	nullptr,
	&NewStructOps,
	"SKGActorsAttachment",
	Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::PropPointers),
	sizeof(FSKGActorsAttachment),
	alignof(FSKGActorsAttachment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGActorsAttachment()
{
	if (!Z_Registration_Info_UScriptStruct_SKGActorsAttachment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGActorsAttachment.InnerSingleton, Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGActorsAttachment.InnerSingleton;
}
// End ScriptStruct FSKGActorsAttachment

// Begin ScriptStruct FSKGAttachmentActor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SKGAttachmentActor;
class UScriptStruct* FSKGAttachmentActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SKGAttachmentActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SKGAttachmentActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSKGAttachmentActor, (UObject*)Z_Construct_UPackage__Script_SKGAttachment(), TEXT("SKGAttachmentActor"));
	}
	return Z_Registration_Info_UScriptStruct_SKGAttachmentActor.OuterSingleton;
}
template<> SKGATTACHMENT_API UScriptStruct* StaticStruct<FSKGAttachmentActor>()
{
	return FSKGAttachmentActor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Data structure that represents an actor with all attachments.\n * Used for serializing and deserializing to reconstructing an actor.\n */" },
#endif
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data structure that represents an actor with all attachments.\n* Used for serializing and deserializing to reconstructing an actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "FSKGAttachmentActor" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[] = {
		{ "Category", "FSKGAttachmentActor" },
		{ "ModuleRelativePath", "Public/DataTypes/SKGAttachmentDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attachments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attachments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSKGAttachmentActor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentActor, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSKGActorsAttachment, METADATA_PARAMS(0, nullptr) }; // 1839355585
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSKGAttachmentActor, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attachments_MetaData), NewProp_Attachments_MetaData) }; // 1839355585
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::NewProp_Attachments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::NewProp_Attachments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SKGAttachment,
	nullptr,
	&NewStructOps,
	"SKGAttachmentActor",
	Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::PropPointers),
	sizeof(FSKGAttachmentActor),
	alignof(FSKGAttachmentActor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSKGAttachmentActor()
{
	if (!Z_Registration_Info_UScriptStruct_SKGAttachmentActor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SKGAttachmentActor.InnerSingleton, Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SKGAttachmentActor.InnerSingleton;
}
// End ScriptStruct FSKGAttachmentActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataTypes_SKGAttachmentDataTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSKGAttachmentComponentItem::StaticStruct, Z_Construct_UScriptStruct_FSKGAttachmentComponentItem_Statics::NewStructOps, TEXT("SKGAttachmentComponentItem"), &Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGAttachmentComponentItem), 1526127399U) },
		{ FSKGAttachmentComponentItems::StaticStruct, Z_Construct_UScriptStruct_FSKGAttachmentComponentItems_Statics::NewStructOps, TEXT("SKGAttachmentComponentItems"), &Z_Registration_Info_UScriptStruct_SKGAttachmentComponentItems, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGAttachmentComponentItems), 3969793121U) },
		{ FSKGActorsAttachment::StaticStruct, Z_Construct_UScriptStruct_FSKGActorsAttachment_Statics::NewStructOps, TEXT("SKGActorsAttachment"), &Z_Registration_Info_UScriptStruct_SKGActorsAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGActorsAttachment), 1839355585U) },
		{ FSKGAttachmentActor::StaticStruct, Z_Construct_UScriptStruct_FSKGAttachmentActor_Statics::NewStructOps, TEXT("SKGAttachmentActor"), &Z_Registration_Info_UScriptStruct_SKGAttachmentActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSKGAttachmentActor), 1155780087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataTypes_SKGAttachmentDataTypes_h_791780158(TEXT("/Script/SKGAttachment"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataTypes_SKGAttachmentDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GitLabRepo_POA_Plugins_SKGShooterFramework_Source_SKGAttachment_Public_DataTypes_SKGAttachmentDataTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
