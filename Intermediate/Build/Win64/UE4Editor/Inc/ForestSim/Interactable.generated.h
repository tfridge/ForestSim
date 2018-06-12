// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FORESTSIM_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define FORESTSIM_Interactable_generated_h

#define ForestSim_Source_ForestSim_Database_Interactable_h_12_RPC_WRAPPERS
#define ForestSim_Source_ForestSim_Database_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ForestSim_Source_ForestSim_Database_Interactable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend FORESTSIM_API class UClass* Z_Construct_UClass_AInteractable(); \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForestSim"), NO_API) \
	DECLARE_SERIALIZER(AInteractable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ForestSim_Source_ForestSim_Database_Interactable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend FORESTSIM_API class UClass* Z_Construct_UClass_AInteractable(); \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForestSim"), NO_API) \
	DECLARE_SERIALIZER(AInteractable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ForestSim_Source_ForestSim_Database_Interactable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public:


#define ForestSim_Source_ForestSim_Database_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define ForestSim_Source_ForestSim_Database_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AInteractable, Root); } \
	FORCEINLINE static uint32 __PPO__IntMesh() { return STRUCT_OFFSET(AInteractable, IntMesh); }


#define ForestSim_Source_ForestSim_Database_Interactable_h_9_PROLOG
#define ForestSim_Source_ForestSim_Database_Interactable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForestSim_Source_ForestSim_Database_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	ForestSim_Source_ForestSim_Database_Interactable_h_12_RPC_WRAPPERS \
	ForestSim_Source_ForestSim_Database_Interactable_h_12_INCLASS \
	ForestSim_Source_ForestSim_Database_Interactable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ForestSim_Source_ForestSim_Database_Interactable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForestSim_Source_ForestSim_Database_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	ForestSim_Source_ForestSim_Database_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ForestSim_Source_ForestSim_Database_Interactable_h_12_INCLASS_NO_PURE_DECLS \
	ForestSim_Source_ForestSim_Database_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ForestSim_Source_ForestSim_Database_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
