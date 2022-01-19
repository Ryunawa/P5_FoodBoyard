// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/PlayerBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBehaviour() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_APlayerBehaviour_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_APlayerBehaviour();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void APlayerBehaviour::StaticRegisterNativesAPlayerBehaviour()
	{
	}
	UClass* Z_Construct_UClass_APlayerBehaviour_NoRegister()
	{
		return APlayerBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_APlayerBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerBehaviour.h" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerBehaviour_Statics::ClassParams = {
		&APlayerBehaviour::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerBehaviour, 460872651);
	template<> GC_UE4CPP_API UClass* StaticClass<APlayerBehaviour>()
	{
		return APlayerBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerBehaviour(Z_Construct_UClass_APlayerBehaviour, &APlayerBehaviour::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("APlayerBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
