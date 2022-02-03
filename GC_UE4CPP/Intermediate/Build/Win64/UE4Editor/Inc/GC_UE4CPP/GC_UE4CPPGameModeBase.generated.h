// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GC_UE4CPP_GC_UE4CPPGameModeBase_generated_h
#error "GC_UE4CPPGameModeBase.generated.h already included, missing '#pragma once' in GC_UE4CPPGameModeBase.h"
#endif
#define GC_UE4CPP_GC_UE4CPPGameModeBase_generated_h

#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_SPARSE_DATA
#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGC_UE4CPPGameModeBase(); \
	friend struct Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGC_UE4CPPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AGC_UE4CPPGameModeBase)


#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAGC_UE4CPPGameModeBase(); \
	friend struct Z_Construct_UClass_AGC_UE4CPPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGC_UE4CPPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AGC_UE4CPPGameModeBase)


#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGC_UE4CPPGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGC_UE4CPPGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGC_UE4CPPGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGC_UE4CPPGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGC_UE4CPPGameModeBase(AGC_UE4CPPGameModeBase&&); \
	NO_API AGC_UE4CPPGameModeBase(const AGC_UE4CPPGameModeBase&); \
public:


#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGC_UE4CPPGameModeBase(AGC_UE4CPPGameModeBase&&); \
	NO_API AGC_UE4CPPGameModeBase(const AGC_UE4CPPGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGC_UE4CPPGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGC_UE4CPPGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGC_UE4CPPGameModeBase)


#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_PRIVATE_PROPERTY_OFFSET
#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_7_PROLOG
#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_RPC_WRAPPERS \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_INCLASS \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class AGC_UE4CPPGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GC_UE4CPP_Source_GC_UE4CPP_GC_UE4CPPGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
