// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/FoodBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodBehaviour() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AFoodBehaviour_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AFoodBehaviour();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFoodBehaviour::StaticRegisterNativesAFoodBehaviour()
	{
	}
	UClass* Z_Construct_UClass_AFoodBehaviour_NoRegister()
	{
		return AFoodBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_AFoodBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Foods_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foods_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Foods;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Food_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Food;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoodBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodBehaviour_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoodBehaviour.h" },
		{ "ModuleRelativePath", "FoodBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Foods_Inner = { "Foods", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Foods_MetaData[] = {
		{ "Category", "FoodBehaviour" },
		{ "ModuleRelativePath", "FoodBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Foods = { "Foods", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodBehaviour, Foods), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Foods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Foods_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Food_MetaData[] = {
		{ "Category", "FoodBehaviour" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FoodBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Food = { "Food", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodBehaviour, Food), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Food_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Food_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFoodBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Foods_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Foods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodBehaviour_Statics::NewProp_Food,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoodBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoodBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoodBehaviour_Statics::ClassParams = {
		&AFoodBehaviour::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFoodBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFoodBehaviour_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFoodBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoodBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFoodBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFoodBehaviour, 4291917054);
	template<> GC_UE4CPP_API UClass* StaticClass<AFoodBehaviour>()
	{
		return AFoodBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFoodBehaviour(Z_Construct_UClass_AFoodBehaviour, &AFoodBehaviour::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AFoodBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoodBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
