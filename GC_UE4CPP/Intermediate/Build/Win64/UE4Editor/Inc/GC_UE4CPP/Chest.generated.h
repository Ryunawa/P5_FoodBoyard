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
#ifdef GC_UE4CPP_Chest_generated_h
#error "Chest.generated.h already included, missing '#pragma once' in Chest.h"
#endif
#define GC_UE4CPP_Chest_generated_h

#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_SPARSE_DATA
#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChest(); \
	friend struct Z_Construct_UClass_AChest_Statics; \
public: \
	DECLARE_CLASS(AChest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AChest)


#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAChest(); \
	friend struct Z_Construct_UClass_AChest_Statics; \
public: \
	DECLARE_CLASS(AChest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AChest)


#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChest(AChest&&); \
	NO_API AChest(const AChest&); \
public:


#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChest(AChest&&); \
	NO_API AChest(const AChest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChest)


#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_PRIVATE_PROPERTY_OFFSET
#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_9_PROLOG
#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_RPC_WRAPPERS \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_INCLASS \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_INCLASS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_Chest_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class AChest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GC_UE4CPP_Source_GC_UE4CPP_Chest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
