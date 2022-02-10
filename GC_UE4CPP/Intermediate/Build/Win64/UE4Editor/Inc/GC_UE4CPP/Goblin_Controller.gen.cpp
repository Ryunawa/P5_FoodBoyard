// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Goblin_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoblin_Controller() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AGoblin_Controller_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AGoblin_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AGoblin_Controller::execSetSpawnPoint)
	{
		P_GET_OBJECT(AActor,Z_Param_spawnpoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawnPoint(Z_Param_spawnpoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGoblin_Controller::execSeePlayer)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SeePlayer(Z_Param_Out_UpdatedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGoblin_Controller::execForgetPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetPlayer();
		P_NATIVE_END;
	}
	void AGoblin_Controller::StaticRegisterNativesAGoblin_Controller()
	{
		UClass* Class = AGoblin_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForgetPlayer", &AGoblin_Controller::execForgetPlayer },
			{ "SeePlayer", &AGoblin_Controller::execSeePlayer },
			{ "SetSpawnPoint", &AGoblin_Controller::execSetSpawnPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGoblin_Controller_ForgetPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoblin_Controller_ForgetPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goblin_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoblin_Controller_ForgetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoblin_Controller, nullptr, "ForgetPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoblin_Controller_ForgetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoblin_Controller_ForgetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoblin_Controller_ForgetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoblin_Controller_ForgetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics
	{
		struct Goblin_Controller_eventSeePlayer_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Goblin_Controller_eventSeePlayer_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::NewProp_UpdatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::NewProp_UpdatedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::NewProp_UpdatedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goblin_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoblin_Controller, nullptr, "SeePlayer", nullptr, nullptr, sizeof(Goblin_Controller_eventSeePlayer_Parms), Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoblin_Controller_SeePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoblin_Controller_SeePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics
	{
		struct Goblin_Controller_eventSetSpawnPoint_Parms
		{
			AActor* spawnpoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawnpoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::NewProp_spawnpoint = { "spawnpoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Goblin_Controller_eventSetSpawnPoint_Parms, spawnpoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::NewProp_spawnpoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goblin_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoblin_Controller, nullptr, "SetSpawnPoint", nullptr, nullptr, sizeof(Goblin_Controller_eventSetSpawnPoint_Parms), Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGoblin_Controller_NoRegister()
	{
		return AGoblin_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AGoblin_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolBehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolBehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FoodToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoblin_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGoblin_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoblin_Controller_ForgetPlayer, "ForgetPlayer" }, // 3214873601
		{ &Z_Construct_UFunction_AGoblin_Controller_SeePlayer, "SeePlayer" }, // 1058169420
		{ &Z_Construct_UFunction_AGoblin_Controller_SetSpawnPoint, "SetSpawnPoint" }, // 1141341120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoblin_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Goblin_Controller.h" },
		{ "ModuleRelativePath", "Goblin_Controller.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_DefaultBehaviorTree_MetaData[] = {
		{ "Category", "Goblin_Controller" },
		{ "ModuleRelativePath", "Goblin_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_DefaultBehaviorTree = { "DefaultBehaviorTree", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoblin_Controller, DefaultBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_DefaultBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_DefaultBehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_PatrolBehaviorTree_MetaData[] = {
		{ "Category", "Goblin_Controller" },
		{ "ModuleRelativePath", "Goblin_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_PatrolBehaviorTree = { "PatrolBehaviorTree", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoblin_Controller, PatrolBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_PatrolBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_PatrolBehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "Goblin_Controller" },
		{ "ModuleRelativePath", "Goblin_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoblin_Controller, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_SightConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_FoodToSpawn_MetaData[] = {
		{ "Category", "Goblin_Controller" },
		{ "ModuleRelativePath", "Goblin_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_FoodToSpawn = { "FoodToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoblin_Controller, FoodToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_FoodToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_FoodToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoblin_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_DefaultBehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_PatrolBehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_SightConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoblin_Controller_Statics::NewProp_FoodToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoblin_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoblin_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoblin_Controller_Statics::ClassParams = {
		&AGoblin_Controller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGoblin_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGoblin_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGoblin_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoblin_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoblin_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoblin_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoblin_Controller, 2994204378);
	template<> GC_UE4CPP_API UClass* StaticClass<AGoblin_Controller>()
	{
		return AGoblin_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoblin_Controller(Z_Construct_UClass_AGoblin_Controller, &AGoblin_Controller::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AGoblin_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoblin_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
