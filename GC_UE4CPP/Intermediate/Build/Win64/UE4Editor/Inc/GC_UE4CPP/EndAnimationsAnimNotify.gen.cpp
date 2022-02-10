// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/EndAnimationsAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndAnimationsAnimNotify() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UEndAnimationsAnimNotify_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UEndAnimationsAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void UEndAnimationsAnimNotify::StaticRegisterNativesUEndAnimationsAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UEndAnimationsAnimNotify_NoRegister()
	{
		return UEndAnimationsAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UEndAnimationsAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndAnimationsAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndAnimationsAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "EndAnimationsAnimNotify.h" },
		{ "ModuleRelativePath", "EndAnimationsAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndAnimationsAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndAnimationsAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndAnimationsAnimNotify_Statics::ClassParams = {
		&UEndAnimationsAnimNotify::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndAnimationsAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndAnimationsAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndAnimationsAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndAnimationsAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndAnimationsAnimNotify, 639950449);
	template<> GC_UE4CPP_API UClass* StaticClass<UEndAnimationsAnimNotify>()
	{
		return UEndAnimationsAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndAnimationsAnimNotify(Z_Construct_UClass_UEndAnimationsAnimNotify, &UEndAnimationsAnimNotify::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UEndAnimationsAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndAnimationsAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
