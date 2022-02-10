// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GC_UE4CPP_UI_generated_h
#error "UI.generated.h already included, missing '#pragma once' in UI.h"
#endif
#define GC_UE4CPP_UI_generated_h

#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_SPARSE_DATA
#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_RPC_WRAPPERS
#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUI(); \
	friend struct Z_Construct_UClass_AUI_Statics; \
public: \
	DECLARE_CLASS(AUI, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AUI)


#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAUI(); \
	friend struct Z_Construct_UClass_AUI_Statics; \
public: \
	DECLARE_CLASS(AUI, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AUI)


#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI(AUI&&); \
	NO_API AUI(const AUI&); \
public:


#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI(AUI&&); \
	NO_API AUI(const AUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUI)


#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FoodBarClass() { return STRUCT_OFFSET(AUI, FoodBarClass); } \
	FORCEINLINE static uint32 __PPO__sceneEditOnly() { return STRUCT_OFFSET(AUI, sceneEditOnly); }


#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_8_PROLOG
#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_RPC_WRAPPERS \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_INCLASS \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_INCLASS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_UI_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class AUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GC_UE4CPP_Source_GC_UE4CPP_UI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
