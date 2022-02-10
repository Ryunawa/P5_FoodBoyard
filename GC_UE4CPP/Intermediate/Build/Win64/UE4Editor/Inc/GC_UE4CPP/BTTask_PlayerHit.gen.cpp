// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/BTTask_PlayerHit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlayerHit() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTTask_PlayerHit_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTTask_PlayerHit();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void UBTTask_PlayerHit::StaticRegisterNativesUBTTask_PlayerHit()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PlayerHit_NoRegister()
	{
		return UBTTask_PlayerHit::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PlayerHit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PlayerHit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayerHit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_PlayerHit.h" },
		{ "ModuleRelativePath", "BTTask_PlayerHit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PlayerHit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlayerHit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlayerHit_Statics::ClassParams = {
		&UBTTask_PlayerHit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayerHit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayerHit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PlayerHit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_PlayerHit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PlayerHit, 3677970168);
	template<> GC_UE4CPP_API UClass* StaticClass<UBTTask_PlayerHit>()
	{
		return UBTTask_PlayerHit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PlayerHit(Z_Construct_UClass_UBTTask_PlayerHit, &UBTTask_PlayerHit::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UBTTask_PlayerHit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlayerHit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
