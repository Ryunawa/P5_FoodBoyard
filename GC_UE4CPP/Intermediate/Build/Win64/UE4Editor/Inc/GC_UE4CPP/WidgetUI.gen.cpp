// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/WidgetUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetUI() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UWidgetUI_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UWidgetUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UWidgetUI::StaticRegisterNativesUWidgetUI()
	{
	}
	UClass* Z_Construct_UClass_UWidgetUI_NoRegister()
	{
		return UWidgetUI::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarreDeNourriture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarreDeNourriture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetUI.h" },
		{ "ModuleRelativePath", "WidgetUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetUI_Statics::NewProp_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetUI_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetUI, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetUI_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetUI_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetUI_Statics::NewProp_BarreDeNourriture_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "/*\n\x09UPROPERTY(meta = (BindWidget))\n\x09\x09""class UButton* StartGame;\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetUI.h" },
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))\n        class UButton* StartGame;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetUI_Statics::NewProp_BarreDeNourriture = { "BarreDeNourriture", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetUI, BarreDeNourriture), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetUI_Statics::NewProp_BarreDeNourriture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetUI_Statics::NewProp_BarreDeNourriture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetUI_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetUI_Statics::NewProp_BarreDeNourriture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetUI_Statics::ClassParams = {
		&UWidgetUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetUI, 2623770627);
	template<> GC_UE4CPP_API UClass* StaticClass<UWidgetUI>()
	{
		return UWidgetUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetUI(Z_Construct_UClass_UWidgetUI, &UWidgetUI::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UWidgetUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
