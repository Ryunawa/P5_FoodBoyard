// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/AI_Behaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Behaviour() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AAI_Behaviour_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AAI_Behaviour();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAI_Behaviour::StaticRegisterNativesAAI_Behaviour()
	{
	}
	UClass* Z_Construct_UClass_AAI_Behaviour_NoRegister()
	{
		return AAI_Behaviour::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Behaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoodMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Behaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Behaviour_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_Behaviour.h" },
		{ "ModuleRelativePath", "AI_Behaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodMesh_MetaData[] = {
		{ "Category", "AI_Behaviour" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI_Behaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodMesh = { "FoodMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Behaviour, FoodMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_Behaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Behaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Behaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Behaviour_Statics::ClassParams = {
		&AAI_Behaviour::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_Behaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Behaviour_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Behaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Behaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_Behaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Behaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Behaviour, 456452577);
	template<> GC_UE4CPP_API UClass* StaticClass<AAI_Behaviour>()
	{
		return AAI_Behaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Behaviour(Z_Construct_UClass_AAI_Behaviour, &AAI_Behaviour::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AAI_Behaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Behaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
