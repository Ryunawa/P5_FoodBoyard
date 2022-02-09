// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/BTTask_DestroySelf.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_DestroySelf() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTTask_DestroySelf_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTTask_DestroySelf();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void UBTTask_DestroySelf::StaticRegisterNativesUBTTask_DestroySelf()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_DestroySelf_NoRegister()
	{
		return UBTTask_DestroySelf::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_DestroySelf_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_DestroySelf_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DestroySelf_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_DestroySelf.h" },
		{ "ModuleRelativePath", "BTTask_DestroySelf.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_DestroySelf_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_DestroySelf>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_DestroySelf_Statics::ClassParams = {
		&UBTTask_DestroySelf::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_DestroySelf_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DestroySelf_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_DestroySelf()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_DestroySelf_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_DestroySelf, 485155995);
	template<> GC_UE4CPP_API UClass* StaticClass<UBTTask_DestroySelf>()
	{
		return UBTTask_DestroySelf::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_DestroySelf(Z_Construct_UClass_UBTTask_DestroySelf, &UBTTask_DestroySelf::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UBTTask_DestroySelf"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_DestroySelf);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
