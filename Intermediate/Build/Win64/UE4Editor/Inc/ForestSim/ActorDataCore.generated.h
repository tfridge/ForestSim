// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FORESTSIM_ActorDataCore_generated_h
#error "ActorDataCore.generated.h already included, missing '#pragma once' in ActorDataCore.h"
#endif
#define FORESTSIM_ActorDataCore_generated_h

#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_RPC_WRAPPERS
#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorDataCore(); \
	friend FORESTSIM_API class UClass* Z_Construct_UClass_AActorDataCore(); \
public: \
	DECLARE_CLASS(AActorDataCore, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForestSim"), NO_API) \
	DECLARE_SERIALIZER(AActorDataCore) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAActorDataCore(); \
	friend FORESTSIM_API class UClass* Z_Construct_UClass_AActorDataCore(); \
public: \
	DECLARE_CLASS(AActorDataCore, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForestSim"), NO_API) \
	DECLARE_SERIALIZER(AActorDataCore) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActorDataCore(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActorDataCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorDataCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorDataCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorDataCore(AActorDataCore&&); \
	NO_API AActorDataCore(const AActorDataCore&); \
public:


#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorDataCore(AActorDataCore&&); \
	NO_API AActorDataCore(const AActorDataCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorDataCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorDataCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorDataCore)


#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Interactables() { return STRUCT_OFFSET(AActorDataCore, Interactables); } \
	FORCEINLINE static uint32 __PPO__Protocols() { return STRUCT_OFFSET(AActorDataCore, Protocols); } \
	FORCEINLINE static uint32 __PPO__Nerves() { return STRUCT_OFFSET(AActorDataCore, Nerves); } \
	FORCEINLINE static uint32 __PPO__TargetWorldSpace() { return STRUCT_OFFSET(AActorDataCore, TargetWorldSpace); } \
	FORCEINLINE static uint32 __PPO__TargetCharacter() { return STRUCT_OFFSET(AActorDataCore, TargetCharacter); }


#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_9_PROLOG
#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_PRIVATE_PROPERTY_OFFSET \
	ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_RPC_WRAPPERS \
	ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_INCLASS \
	ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_PRIVATE_PROPERTY_OFFSET \
	ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_INCLASS_NO_PURE_DECLS \
	ForestSim_Source_ForestSim_Database_ActorDataCore_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ForestSim_Source_ForestSim_Database_ActorDataCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
