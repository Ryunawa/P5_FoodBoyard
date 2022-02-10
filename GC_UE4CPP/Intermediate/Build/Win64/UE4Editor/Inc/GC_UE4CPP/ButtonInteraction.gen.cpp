// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/ButtonInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonInteraction() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UButtonInteraction_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UButtonInteraction();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void UButtonInteraction::StaticRegisterNativesUButtonInteraction()
	{
	}
	UClass* Z_Construct_UClass_UButtonInteraction_NoRegister()
	{
		return UButtonInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UButtonInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelToOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelToOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ButtonInteraction.h" },
		{ "ModuleRelativePath", "ButtonInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonInteraction_Statics::NewProp_LevelToOpen_MetaData[] = {
		{ "Category", "ButtonInteraction" },
		{ "ModuleRelativePath", "ButtonInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UButtonInteraction_Statics::NewProp_LevelToOpen = { "LevelToOpen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonInteraction, LevelToOpen), METADATA_PARAMS(Z_Construct_UClass_UButtonInteraction_Statics::NewProp_LevelToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonInteraction_Statics::NewProp_LevelToOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonInteraction_Statics::NewProp_LevelToOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UButtonInteraction_Statics::ClassParams = {
		&UButtonInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UButtonInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UButtonInteraction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UButtonInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButtonInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UButtonInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UButtonInteraction, 1657684537);
	template<> GC_UE4CPP_API UClass* StaticClass<UButtonInteraction>()
	{
		return UButtonInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonInteraction(Z_Construct_UClass_UButtonInteraction, &UButtonInteraction::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UButtonInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
