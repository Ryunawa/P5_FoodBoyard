// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GC_UE4CPP_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define GC_UE4CPP_MyPlayerController_generated_h

#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_SPARSE_DATA
#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_RPC_WRAPPERS
#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController)


#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExampleUIClass() { return STRUCT_OFFSET(AMyPlayerController, ExampleUIClass); } \
	FORCEINLINE static uint32 __PPO__sceneEditOnly() { return STRUCT_OFFSET(AMyPlayerController, sceneEditOnly); }


#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_14_PROLOG
#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_RPC_WRAPPERS \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_INCLASS \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_SPARSE_DATA \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GC_UE4CPP_Source_GC_UE4CPP_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
