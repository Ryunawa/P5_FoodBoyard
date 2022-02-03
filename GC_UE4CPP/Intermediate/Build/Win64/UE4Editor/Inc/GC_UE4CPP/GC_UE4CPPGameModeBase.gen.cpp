// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/GC_UE4CPPGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_UE4CPPGameModeBase() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AGC_UE4CPPGameModeBase_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AGC_UE4CPPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void AGC_UE4CPPGameModeBase::StaticRegisterNativesAGC_UE4CPPGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGC_UE4CPPGameModeBase_NoRegister()
	{
		return AGC_UE4CPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GC_UE4CPPGameModeBase.h" },
		{ "ModuleRelativePath", "GC_UE4CPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGC_UE4CPPGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics::ClassParams = {
		&AGC_UE4CPPGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGC_UE4CPPGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGC_UE4CPPGameModeBase, 4065124374);
	template<> GC_UE4CPP_API UClass* StaticClass<AGC_UE4CPPGameModeBase>()
	{
		return AGC_UE4CPPGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGC_UE4CPPGameModeBase(Z_Construct_UClass_AGC_UE4CPPGameModeBase, &AGC_UE4CPPGameModeBase::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AGC_UE4CPPGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGC_UE4CPPGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
