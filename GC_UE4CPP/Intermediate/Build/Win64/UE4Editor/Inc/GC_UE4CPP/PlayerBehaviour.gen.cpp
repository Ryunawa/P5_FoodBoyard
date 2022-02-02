// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/PlayerBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBehaviour() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_APlayerBehaviour_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_APlayerBehaviour();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AFoodBehaviour_NoRegister();
// End Cross Module References
	void APlayerBehaviour::StaticRegisterNativesAPlayerBehaviour()
	{
	}
	UClass* Z_Construct_UClass_APlayerBehaviour_NoRegister()
	{
		return APlayerBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_APlayerBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPickingDroppingFood_MetaData[];
#endif
		static void NewProp_bIsPickingDroppingFood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPickingDroppingFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCarryingFood_MetaData[];
#endif
		static void NewProp_bIsCarryingFood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCarryingFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerBehaviour.h" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBehaviour, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBehaviour, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_SphereDetection_MetaData[] = {
		{ "Category", "PlayerBehaviour" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_SphereDetection = { "SphereDetection", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBehaviour, SphereDetection), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_SphereDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_SphereDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_TurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBehaviour, TurnRate), METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_TurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_TurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_LookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_LookUpRate = { "LookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBehaviour, LookUpRate), METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_LookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_LookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "PlayerBehaviour" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBehaviour, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "PlayerBehaviour" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBehaviour, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsPickingDroppingFood_MetaData[] = {
		{ "Category", "PlayerBehaviour" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	void Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsPickingDroppingFood_SetBit(void* Obj)
	{
		((APlayerBehaviour*)Obj)->bIsPickingDroppingFood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsPickingDroppingFood = { "bIsPickingDroppingFood", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerBehaviour), &Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsPickingDroppingFood_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsPickingDroppingFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsPickingDroppingFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsCarryingFood_MetaData[] = {
		{ "Category", "PlayerBehaviour" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	void Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsCarryingFood_SetBit(void* Obj)
	{
		((APlayerBehaviour*)Obj)->bIsCarryingFood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsCarryingFood = { "bIsCarryingFood", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerBehaviour), &Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsCarryingFood_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsCarryingFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsCarryingFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "PlayerBehaviour" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBehaviour, Result), Z_Construct_UClass_AFoodBehaviour_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_SphereDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_TurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_LookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_ZoomSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsPickingDroppingFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_bIsCarryingFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBehaviour_Statics::NewProp_Result,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerBehaviour_Statics::ClassParams = {
		&APlayerBehaviour::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerBehaviour, 2119642746);
	template<> GC_UE4CPP_API UClass* StaticClass<APlayerBehaviour>()
	{
		return APlayerBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerBehaviour(Z_Construct_UClass_APlayerBehaviour, &APlayerBehaviour::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("APlayerBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
