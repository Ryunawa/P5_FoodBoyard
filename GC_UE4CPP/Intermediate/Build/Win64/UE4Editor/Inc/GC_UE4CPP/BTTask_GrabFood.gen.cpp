// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/BTTask_GrabFood.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_GrabFood() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTTask_GrabFood_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTTask_GrabFood();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void UBTTask_GrabFood::StaticRegisterNativesUBTTask_GrabFood()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_GrabFood_NoRegister()
	{
		return UBTTask_GrabFood::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_GrabFood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_GrabFood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_GrabFood_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_GrabFood.h" },
		{ "ModuleRelativePath", "BTTask_GrabFood.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_GrabFood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_GrabFood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_GrabFood_Statics::ClassParams = {
		&UBTTask_GrabFood::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_GrabFood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GrabFood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_GrabFood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_GrabFood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_GrabFood, 3636532470);
	template<> GC_UE4CPP_API UClass* StaticClass<UBTTask_GrabFood>()
	{
		return UBTTask_GrabFood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_GrabFood(Z_Construct_UClass_UBTTask_GrabFood, &UBTTask_GrabFood::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UBTTask_GrabFood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_GrabFood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
