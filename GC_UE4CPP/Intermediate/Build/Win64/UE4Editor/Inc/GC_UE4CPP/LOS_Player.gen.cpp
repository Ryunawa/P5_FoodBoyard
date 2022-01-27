// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/LOS_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLOS_Player() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_ULOS_Player_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_ULOS_Player();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void ULOS_Player::StaticRegisterNativesULOS_Player()
	{
	}
	UClass* Z_Construct_UClass_ULOS_Player_NoRegister()
	{
		return ULOS_Player::StaticClass();
	}
	struct Z_Construct_UClass_ULOS_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULOS_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOS_Player_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LOS_Player.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LOS_Player.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULOS_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULOS_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULOS_Player_Statics::ClassParams = {
		&ULOS_Player::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULOS_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULOS_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULOS_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULOS_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULOS_Player, 2029005038);
	template<> GC_UE4CPP_API UClass* StaticClass<ULOS_Player>()
	{
		return ULOS_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULOS_Player(Z_Construct_UClass_ULOS_Player, &ULOS_Player::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("ULOS_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULOS_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
