// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GC_UE4CPP_Goblin_Controller_generated_h
#error "Goblin_Controller.generated.h already included, missing '#pragma once' in Goblin_Controller.h"
#endif
#define GC_UE4CPP_Goblin_Controller_generated_h

#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_SPARSE_DATA
#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSpawnPoint); \
	DECLARE_FUNCTION(execSeePlayer); \
	DECLARE_FUNCTION(execForgetPlayer);


#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSpawnPoint); \
	DECLARE_FUNCTION(execSeePlayer); \
	DECLARE_FUNCTION(execForgetPlayer);


#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoblin_Controller(); \
	friend struct Z_Construct_UClass_AGoblin_Controller_Statics; \
public: \
	DECLARE_CLASS(AGoblin_Controller, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AGoblin_Controller)


#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGoblin_Controller(); \
	friend struct Z_Construct_UClass_AGoblin_Controller_Statics; \
public: \
	DECLARE_CLASS(AGoblin_Controller, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AGoblin_Controller)


#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoblin_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoblin_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoblin_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoblin_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoblin_Controller(AGoblin_Controller&&); \
	NO_API AGoblin_Controller(const AGoblin_Controller&); \
public:


#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoblin_Controller(AGoblin_Controller&&); \
	NO_API AGoblin_Controller(const AGoblin_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoblin_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoblin_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoblin_Controller)


#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultBehaviorTree() { return STRUCT_OFFSET(AGoblin_Controller, DefaultBehaviorTree); } \
	FORCEINLINE static uint32 __PPO__PatrolBehaviorTree() { return STRUCT_OFFSET(AGoblin_Controller, PatrolBehaviorTree); } \
	FORCEINLINE static uint32 __PPO__SightConfig() { return STRUCT_OFFSET(AGoblin_Controller, SightConfig); } \
	FORCEINLINE static uint32 __PPO__FoodToSpawn() { return STRUCT_OFFSET(AGoblin_Controller, FoodToSpawn); }


#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_14_PROLOG
#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_RPC_WRAPPERS \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_INCLASS \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_INCLASS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class AGoblin_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GC_UE4CPP_Source_GC_UE4CPP_Goblin_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
