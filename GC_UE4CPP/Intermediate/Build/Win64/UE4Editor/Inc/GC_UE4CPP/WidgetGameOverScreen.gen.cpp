// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/WidgetGameOverScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetGameOverScreen() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UWidgetGameOverScreen_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UWidgetGameOverScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetGameOverScreen::execLoadPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetGameOverScreen::execQuitPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitPressed();
		P_NATIVE_END;
	}
	void UWidgetGameOverScreen::StaticRegisterNativesUWidgetGameOverScreen()
	{
		UClass* Class = UWidgetGameOverScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadPressed", &UWidgetGameOverScreen::execLoadPressed },
			{ "QuitPressed", &UWidgetGameOverScreen::execQuitPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetGameOverScreen_LoadPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetGameOverScreen_LoadPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WidgetGameOverScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetGameOverScreen_LoadPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetGameOverScreen, nullptr, "LoadPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetGameOverScreen_LoadPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetGameOverScreen_LoadPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetGameOverScreen_LoadPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetGameOverScreen_LoadPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetGameOverScreen_QuitPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetGameOverScreen_QuitPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WidgetGameOverScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetGameOverScreen_QuitPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetGameOverScreen, nullptr, "QuitPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetGameOverScreen_QuitPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetGameOverScreen_QuitPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetGameOverScreen_QuitPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetGameOverScreen_QuitPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetGameOverScreen_NoRegister()
	{
		return UWidgetGameOverScreen::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetGameOverScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetryButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRetry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRetry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelToOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelToOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitGameButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextQuitGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextQuitGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetGameOverScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetGameOverScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetGameOverScreen_LoadPressed, "LoadPressed" }, // 1608479538
		{ &Z_Construct_UFunction_UWidgetGameOverScreen_QuitPressed, "QuitPressed" }, // 2486501852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGameOverScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetGameOverScreen.h" },
		{ "ModuleRelativePath", "WidgetGameOverScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetGameOverScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetGameOverScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetGameOverScreen, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_RetryButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetGameOverScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_RetryButton = { "RetryButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetGameOverScreen, RetryButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_RetryButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_RetryButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextRetry_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetGameOverScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetGameOverScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextRetry = { "TextRetry", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetGameOverScreen, TextRetry), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextRetry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextRetry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_LevelToOpen_MetaData[] = {
		{ "Category", "WidgetGameOverScreen" },
		{ "ModuleRelativePath", "WidgetGameOverScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_LevelToOpen = { "LevelToOpen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetGameOverScreen, LevelToOpen), METADATA_PARAMS(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_LevelToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_LevelToOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_QuitGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetGameOverScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_QuitGameButton = { "QuitGameButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetGameOverScreen, QuitGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_QuitGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_QuitGameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextQuitGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetGameOverScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetGameOverScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextQuitGame = { "TextQuitGame", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetGameOverScreen, TextQuitGame), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextQuitGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextQuitGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetGameOverScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_RetryButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextRetry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_LevelToOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_QuitGameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetGameOverScreen_Statics::NewProp_TextQuitGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetGameOverScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetGameOverScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetGameOverScreen_Statics::ClassParams = {
		&UWidgetGameOverScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetGameOverScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGameOverScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetGameOverScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGameOverScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetGameOverScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetGameOverScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetGameOverScreen, 2885899484);
	template<> GC_UE4CPP_API UClass* StaticClass<UWidgetGameOverScreen>()
	{
		return UWidgetGameOverScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetGameOverScreen(Z_Construct_UClass_UWidgetGameOverScreen, &UWidgetGameOverScreen::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UWidgetGameOverScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetGameOverScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
