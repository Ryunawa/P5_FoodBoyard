// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/ItemDropped.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDropped() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UItemDropped_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UItemDropped();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void UItemDropped::StaticRegisterNativesUItemDropped()
	{
	}
	UClass* Z_Construct_UClass_UItemDropped_NoRegister()
	{
		return UItemDropped::StaticClass();
	}
	struct Z_Construct_UClass_UItemDropped_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemDropped_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDropped_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemDropped.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemDropped.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemDropped_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDropped>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemDropped_Statics::ClassParams = {
		&UItemDropped::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemDropped_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDropped_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemDropped()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemDropped_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemDropped, 2913324051);
	template<> GC_UE4CPP_API UClass* StaticClass<UItemDropped>()
	{
		return UItemDropped::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemDropped(Z_Construct_UClass_UItemDropped, &UItemDropped::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UItemDropped"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDropped);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
