// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/MyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AMyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExampleUIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExampleUIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneEditOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sceneEditOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyPlayerController.h" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ExampleUIClass_MetaData[] = {
		{ "Category", "MyPlayerController" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ExampleUIClass = { "ExampleUIClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, ExampleUIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ExampleUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ExampleUIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_sceneEditOnly_MetaData[] = {
		{ "Category", "MyPlayerController" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_sceneEditOnly = { "sceneEditOnly", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, sceneEditOnly), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_sceneEditOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_sceneEditOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ExampleUIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_sceneEditOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerController, 1695810697);
	template<> GC_UE4CPP_API UClass* StaticClass<AMyPlayerController>()
	{
		return AMyPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerController(Z_Construct_UClass_AMyPlayerController, &AMyPlayerController::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AMyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
