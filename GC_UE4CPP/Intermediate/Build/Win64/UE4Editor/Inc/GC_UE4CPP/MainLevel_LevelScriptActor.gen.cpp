// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/MainLevel_LevelScriptActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainLevel_LevelScriptActor() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AMainLevel_LevelScriptActor_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AMainLevel_LevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AMainLevel_LevelScriptActor::execSpawnEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemy();
		P_NATIVE_END;
	}
	void AMainLevel_LevelScriptActor::StaticRegisterNativesAMainLevel_LevelScriptActor()
	{
		UClass* Class = AMainLevel_LevelScriptActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnEnemy", &AMainLevel_LevelScriptActor::execSpawnEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainLevel_LevelScriptActor_SpawnEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainLevel_LevelScriptActor_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainLevel_LevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainLevel_LevelScriptActor_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainLevel_LevelScriptActor, nullptr, "SpawnEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainLevel_LevelScriptActor_SpawnEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainLevel_LevelScriptActor_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainLevel_LevelScriptActor_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainLevel_LevelScriptActor_SpawnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainLevel_LevelScriptActor_NoRegister()
	{
		return AMainLevel_LevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemySpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemySpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainLevel_LevelScriptActor_SpawnEnemy, "SpawnEnemy" }, // 1988258818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainLevel_LevelScriptActor.h" },
		{ "ModuleRelativePath", "MainLevel_LevelScriptActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_EnemySpawn_MetaData[] = {
		{ "Category", "MainLevel_LevelScriptActor" },
		{ "ModuleRelativePath", "MainLevel_LevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_EnemySpawn = { "EnemySpawn", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainLevel_LevelScriptActor, EnemySpawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_EnemySpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_EnemySpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "MainLevel_LevelScriptActor" },
		{ "ModuleRelativePath", "MainLevel_LevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainLevel_LevelScriptActor, Enemy), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_Enemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_EnemySpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::NewProp_Enemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainLevel_LevelScriptActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::ClassParams = {
		&AMainLevel_LevelScriptActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainLevel_LevelScriptActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainLevel_LevelScriptActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainLevel_LevelScriptActor, 837837088);
	template<> GC_UE4CPP_API UClass* StaticClass<AMainLevel_LevelScriptActor>()
	{
		return AMainLevel_LevelScriptActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainLevel_LevelScriptActor(Z_Construct_UClass_AMainLevel_LevelScriptActor, &AMainLevel_LevelScriptActor::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AMainLevel_LevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainLevel_LevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
