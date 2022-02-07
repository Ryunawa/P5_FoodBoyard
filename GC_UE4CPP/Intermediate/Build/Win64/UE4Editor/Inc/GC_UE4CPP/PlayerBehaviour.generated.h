// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GC_UE4CPP_PlayerBehaviour_generated_h
#error "PlayerBehaviour.generated.h already included, missing '#pragma once' in PlayerBehaviour.h"
#endif
#define GC_UE4CPP_PlayerBehaviour_generated_h

#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_SPARSE_DATA
#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_RPC_WRAPPERS
#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerBehaviour(); \
	friend struct Z_Construct_UClass_APlayerBehaviour_Statics; \
public: \
	DECLARE_CLASS(APlayerBehaviour, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(APlayerBehaviour)


#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerBehaviour(); \
	friend struct Z_Construct_UClass_APlayerBehaviour_Statics; \
public: \
	DECLARE_CLASS(APlayerBehaviour, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(APlayerBehaviour)


#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerBehaviour(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerBehaviour) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerBehaviour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerBehaviour); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerBehaviour(APlayerBehaviour&&); \
	NO_API APlayerBehaviour(const APlayerBehaviour&); \
public:


#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerBehaviour(APlayerBehaviour&&); \
	NO_API APlayerBehaviour(const APlayerBehaviour&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerBehaviour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerBehaviour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerBehaviour)


#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayerBehaviour, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APlayerBehaviour, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__SphereDetection() { return STRUCT_OFFSET(APlayerBehaviour, SphereDetection); } \
	FORCEINLINE static uint32 __PPO__PerSource() { return STRUCT_OFFSET(APlayerBehaviour, PerSource); }


#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_13_PROLOG
#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_RPC_WRAPPERS \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_INCLASS \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_INCLASS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class APlayerBehaviour>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GC_UE4CPP_Source_GC_UE4CPP_PlayerBehaviour_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
