// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/WidgetTitle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetTitle() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UWidgetTitle_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UWidgetTitle();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetTitle::execLoadButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetTitle::execExitPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitPressed();
		P_NATIVE_END;
	}
	void UWidgetTitle::StaticRegisterNativesUWidgetTitle()
	{
		UClass* Class = UWidgetTitle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitPressed", &UWidgetTitle::execExitPressed },
			{ "LoadButton", &UWidgetTitle::execLoadButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetTitle_ExitPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetTitle_ExitPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetTitle_ExitPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetTitle, nullptr, "ExitPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetTitle_ExitPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetTitle_ExitPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetTitle_ExitPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetTitle_ExitPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetTitle_LoadButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetTitle_LoadButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetTitle_LoadButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetTitle, nullptr, "LoadButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetTitle_LoadButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetTitle_LoadButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetTitle_LoadButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetTitle_LoadButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetTitle_NoRegister()
	{
		return UWidgetTitle::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetTitle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelToOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelToOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextQuit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextQuit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetTitle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetTitle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetTitle_ExitPressed, "ExitPressed" }, // 1349800613
		{ &Z_Construct_UFunction_UWidgetTitle_LoadButton, "LoadButton" }, // 96185483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTitle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetTitle.h" },
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetTitle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetTitle, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetTitle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetTitle, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTitle_Statics::NewProp_StartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetTitle_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetTitle, StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_StartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_StartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextStart_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetTitle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextStart = { "TextStart", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetTitle, TextStart), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTitle_Statics::NewProp_LevelToOpen_MetaData[] = {
		{ "Category", "WidgetTitle" },
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetTitle_Statics::NewProp_LevelToOpen = { "LevelToOpen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetTitle, LevelToOpen), METADATA_PARAMS(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_LevelToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_LevelToOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTitle_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetTitle_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetTitle, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextQuit_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetTitle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetTitle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextQuit = { "TextQuit", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetTitle, TextQuit), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextQuit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextQuit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTitle_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTitle_Statics::NewProp_StartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTitle_Statics::NewProp_LevelToOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTitle_Statics::NewProp_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTitle_Statics::NewProp_TextQuit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetTitle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetTitle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetTitle_Statics::ClassParams = {
		&UWidgetTitle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetTitle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTitle_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetTitle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTitle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetTitle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetTitle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetTitle, 405474749);
	template<> GC_UE4CPP_API UClass* StaticClass<UWidgetTitle>()
	{
		return UWidgetTitle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetTitle(Z_Construct_UClass_UWidgetTitle, &UWidgetTitle::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UWidgetTitle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetTitle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
