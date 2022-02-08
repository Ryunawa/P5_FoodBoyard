// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/ItemHolder_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemHolder_Character() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AItemHolder_Character_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AItemHolder_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void AItemHolder_Character::StaticRegisterNativesAItemHolder_Character()
	{
	}
	UClass* Z_Construct_UClass_AItemHolder_Character_NoRegister()
	{
		return AItemHolder_Character::StaticClass();
	}
	struct Z_Construct_UClass_AItemHolder_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemHolder_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemHolder_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ItemHolder_Character.h" },
		{ "ModuleRelativePath", "ItemHolder_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemHolder_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemHolder_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemHolder_Character_Statics::ClassParams = {
		&AItemHolder_Character::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AItemHolder_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemHolder_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemHolder_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemHolder_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemHolder_Character, 3635035292);
	template<> GC_UE4CPP_API UClass* StaticClass<AItemHolder_Character>()
	{
		return AItemHolder_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemHolder_Character(Z_Construct_UClass_AItemHolder_Character, &AItemHolder_Character::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AItemHolder_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemHolder_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
