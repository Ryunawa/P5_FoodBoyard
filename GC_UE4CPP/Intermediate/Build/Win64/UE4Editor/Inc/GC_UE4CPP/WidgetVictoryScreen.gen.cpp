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
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetVictoryScreen::execLoadButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetVictoryScreen::execExitPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitPressed();
		P_NATIVE_END;
	}
	void UWidgetVictoryScreen::StaticRegisterNativesUWidgetVictoryScreen()
	{
		UClass* Class = UWidgetVictoryScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitPressed", &UWidgetVictoryScreen::execExitPressed },
			{ "LoadButton", &UWidgetVictoryScreen::execLoadButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetVictoryScreen_ExitPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetVictoryScreen_ExitPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetVictoryScreen_ExitPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetVictoryScreen, nullptr, "ExitPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetVictoryScreen_ExitPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetVictoryScreen_ExitPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetVictoryScreen_ExitPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetVictoryScreen_ExitPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetVictoryScreen_LoadButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetVictoryScreen_LoadButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetVictoryScreen_LoadButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetVictoryScreen, nullptr, "LoadButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetVictoryScreen_LoadButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetVictoryScreen_LoadButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetVictoryScreen_LoadButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetVictoryScreen_LoadButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetVictoryScreen_NoRegister()
	{
		return UWidgetVictoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetVictoryScreen_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRestart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRestart;
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
	UObject* (*const Z_Construct_UClass_UWidgetVictoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetVictoryScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetVictoryScreen_ExitPressed, "ExitPressed" }, // 1625796319
		{ &Z_Construct_UFunction_UWidgetVictoryScreen_LoadButton, "LoadButton" }, // 2791505035
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetVictoryScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetVictoryScreen.h" },
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetVictoryScreen, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_RestartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_RestartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextRestart_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetVictoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextRestart = { "TextRestart", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetVictoryScreen, TextRestart), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextRestart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextRestart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_LevelToOpen_MetaData[] = {
		{ "Category", "WidgetVictoryScreen" },
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_LevelToOpen = { "LevelToOpen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetVictoryScreen, LevelToOpen), METADATA_PARAMS(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_LevelToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_LevelToOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetVictoryScreen, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextQuit_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetVictoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetVictoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextQuit = { "TextQuit", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetVictoryScreen, TextQuit), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextQuit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextQuit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetVictoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_RestartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextRestart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_LevelToOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetVictoryScreen_Statics::NewProp_TextQuit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetVictoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetVictoryScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetVictoryScreen_Statics::ClassParams = {
		&UWidgetVictoryScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetVictoryScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UWidgetVictoryScreen, 4185148741);
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
