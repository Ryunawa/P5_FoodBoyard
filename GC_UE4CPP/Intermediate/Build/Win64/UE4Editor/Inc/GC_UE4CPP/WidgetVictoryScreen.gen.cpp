// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/WidgetVictoryScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetVictoryScreen() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UWidgetVictoryScreen_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UWidgetVictoryScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UWidgetVictoryScreen::StaticRegisterNativesUWidgetVictoryScreen()
	{
	}
	UClass* Z_Construct_UClass_UWidgetVictoryScreen_NoRegister()
	{
		return UWidgetVictoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetVictoryScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetVictoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetVictoryScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetVictoryScreen.h" },
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetVictoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetVictoryScreen, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetVictoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetVictoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetVictoryScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetVictoryScreen_Statics::ClassParams = {
		&UWidgetVictoryScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetVictoryScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetVictoryScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetVictoryScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetVictoryScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetVictoryScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetVictoryScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetVictoryScreen, 2230843191);
	template<> GC_UE4CPP_API UClass* StaticClass<UWidgetVictoryScreen>()
	{
		return UWidgetVictoryScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetVictoryScreen(Z_Construct_UClass_UWidgetVictoryScreen, &UWidgetVictoryScreen::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UWidgetVictoryScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetVictoryScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
