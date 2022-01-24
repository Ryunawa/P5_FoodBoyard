// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Menu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenu() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UMenu_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMenu::execStartButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartButtonClicked();
		P_NATIVE_END;
	}
	void UMenu::StaticRegisterNativesUMenu()
	{
		UClass* Class = UMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartButtonClicked", &UMenu::execStartButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMenu_StartButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenu_StartButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_StartButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "StartButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenu_StartButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_StartButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenu_StartButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenu_StartButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMenu_NoRegister()
	{
		return UMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenu_StartButtonClicked, "StartButtonClicked" }, // 2029598408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Menu.h" },
		{ "ModuleRelativePath", "Menu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenu_Statics::NewProp_StartGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenu_Statics::NewProp_StartGame = { "StartGame", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenu, StartGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenu_Statics::NewProp_StartGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::NewProp_StartGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_Statics::NewProp_StartGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenu_Statics::ClassParams = {
		&UMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenu, 328832559);
	template<> GC_UE4CPP_API UClass* StaticClass<UMenu>()
	{
		return UMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenu(Z_Construct_UClass_UMenu, &UMenu::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
