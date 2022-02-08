// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/PlayerAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnim() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UPlayerAnim_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UPlayerAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void UPlayerAnim::StaticRegisterNativesUPlayerAnim()
	{
	}
	UClass* Z_Construct_UClass_UPlayerAnim_NoRegister()
	{
		return UPlayerAnim::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCarrying_MetaData[];
#endif
		static void NewProp_bIsCarrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCarrying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPickingDropping_MetaData[];
#endif
		static void NewProp_bIsPickingDropping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPickingDropping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerAnim.h" },
		{ "ModuleRelativePath", "PlayerAnim.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnim, Speed), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsCarrying_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsCarrying_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->bIsCarrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsCarrying = { "bIsCarrying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsCarrying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsCarrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsCarrying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsPickingDropping_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsPickingDropping_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->bIsPickingDropping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsPickingDropping = { "bIsPickingDropping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsPickingDropping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsPickingDropping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsPickingDropping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsCarrying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsPickingDropping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnim_Statics::ClassParams = {
		&UPlayerAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAnim, 47486054);
	template<> GC_UE4CPP_API UClass* StaticClass<UPlayerAnim>()
	{
		return UPlayerAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAnim(Z_Construct_UClass_UPlayerAnim, &UPlayerAnim::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UPlayerAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
