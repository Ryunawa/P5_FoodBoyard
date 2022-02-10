// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/SeePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeePlayer() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_USeePlayer_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_USeePlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void USeePlayer::StaticRegisterNativesUSeePlayer()
	{
	}
	UClass* Z_Construct_UClass_USeePlayer_NoRegister()
	{
		return USeePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USeePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeePlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SeePlayer.h" },
		{ "ModuleRelativePath", "SeePlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USeePlayer_Statics::ClassParams = {
		&USeePlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USeePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USeePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USeePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USeePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USeePlayer, 4210095981);
	template<> GC_UE4CPP_API UClass* StaticClass<USeePlayer>()
	{
		return USeePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USeePlayer(Z_Construct_UClass_USeePlayer, &USeePlayer::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("USeePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
