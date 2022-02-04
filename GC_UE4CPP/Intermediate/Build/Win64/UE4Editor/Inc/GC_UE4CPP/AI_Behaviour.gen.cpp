// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/AI_Behaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Behaviour() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AAI_Behaviour_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AAI_Behaviour();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AAI_Behaviour::execSeePlayer)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SeePlayer(Z_Param_Out_UpdatedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_Behaviour::execForgetPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetPlayer();
		P_NATIVE_END;
	}
	void AAI_Behaviour::StaticRegisterNativesAAI_Behaviour()
	{
		UClass* Class = AAI_Behaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForgetPlayer", &AAI_Behaviour::execForgetPlayer },
			{ "SeePlayer", &AAI_Behaviour::execSeePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_Behaviour_ForgetPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Behaviour_ForgetPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI_Behaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Behaviour_ForgetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Behaviour, nullptr, "ForgetPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Behaviour_ForgetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Behaviour_ForgetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Behaviour_ForgetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Behaviour_ForgetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics
	{
		struct AI_Behaviour_eventSeePlayer_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Behaviour_eventSeePlayer_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::NewProp_UpdatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::NewProp_UpdatedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::NewProp_UpdatedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI_Behaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Behaviour, nullptr, "SeePlayer", nullptr, nullptr, sizeof(AI_Behaviour_eventSeePlayer_Parms), Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Behaviour_SeePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Behaviour_SeePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_Behaviour_NoRegister()
	{
		return AAI_Behaviour::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Behaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
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
	UObject* (*const Z_Construct_UClass_AAI_Behaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_Behaviour_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_Behaviour_ForgetPlayer, "ForgetPlayer" }, // 3429796512
		{ &Z_Construct_UFunction_AAI_Behaviour_SeePlayer, "SeePlayer" }, // 131705935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Behaviour_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_Behaviour.h" },
		{ "ModuleRelativePath", "AI_Behaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI_Behaviour" },
		{ "ModuleRelativePath", "AI_Behaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Behaviour, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI_Behaviour" },
		{ "ModuleRelativePath", "AI_Behaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Behaviour, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_SightConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodToSpawn_MetaData[] = {
		{ "Category", "AI_Behaviour" },
		{ "ModuleRelativePath", "AI_Behaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodToSpawn = { "FoodToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Behaviour, FoodToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_Behaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_SightConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Behaviour_Statics::NewProp_FoodToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Behaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Behaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Behaviour_Statics::ClassParams = {
		&AAI_Behaviour::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_Behaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Behaviour_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Behaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Behaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_Behaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Behaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Behaviour, 1288978232);
	template<> GC_UE4CPP_API UClass* StaticClass<AAI_Behaviour>()
	{
		return AAI_Behaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Behaviour(Z_Construct_UClass_AAI_Behaviour, &AAI_Behaviour::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AAI_Behaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Behaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
