// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FORESTSIM_ObjectField_generated_h
#error "ObjectField.generated.h already included, missing '#pragma once' in ObjectField.h"
#endif
#define FORESTSIM_ObjectField_generated_h

#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_RPC_WRAPPERS
#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObjectField(); \
	friend FORESTSIM_API class UClass* Z_Construct_UClass_AObjectField(); \
public: \
	DECLARE_CLASS(AObjectField, AInteractable, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForestSim"), NO_API) \
	DECLARE_SERIALIZER(AObjectField) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAObjectField(); \
	friend FORESTSIM_API class UClass* Z_Construct_UClass_AObjectField(); \
public: \
	DECLARE_CLASS(AObjectField, AInteractable, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForestSim"), NO_API) \
	DECLARE_SERIALIZER(AObjectField) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObjectField(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjectField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectField(AObjectField&&); \
	NO_API AObjectField(const AObjectField&); \
public:


#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectField(AObjectField&&); \
	NO_API AObjectField(const AObjectField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObjectField)


#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sections() { return STRUCT_OFFSET(AObjectField, Sections); } \
	FORCEINLINE static uint32 __PPO__PointsPerSection() { return STRUCT_OFFSET(AObjectField, PointsPerSection); } \
	FORCEINLINE static uint32 __PPO__ObjectChoices() { return STRUCT_OFFSET(AObjectField, ObjectChoices); } \
	FORCEINLINE static uint32 __PPO__ObjectsRef() { return STRUCT_OFFSET(AObjectField, ObjectsRef); } \
	FORCEINLINE static uint32 __PPO__PointRef() { return STRUCT_OFFSET(AObjectField, PointRef); } \
	FORCEINLINE static uint32 __PPO__TestMesh() { return STRUCT_OFFSET(AObjectField, TestMesh); } \
	FORCEINLINE static uint32 __PPO__Testing() { return STRUCT_OFFSET(AObjectField, Testing); } \
	FORCEINLINE static uint32 __PPO__val() { return STRUCT_OFFSET(AObjectField, val); } \
	FORCEINLINE static uint32 __PPO__RaycastLength() { return STRUCT_OFFSET(AObjectField, RaycastLength); } \
	FORCEINLINE static uint32 __PPO__NerveList() { return STRUCT_OFFSET(AObjectField, NerveList); } \
	FORCEINLINE static uint32 __PPO__Nerve0() { return STRUCT_OFFSET(AObjectField, Nerve0); } \
	FORCEINLINE static uint32 __PPO__Nerve1() { return STRUCT_OFFSET(AObjectField, Nerve1); } \
	FORCEINLINE static uint32 __PPO__Nerve2() { return STRUCT_OFFSET(AObjectField, Nerve2); } \
	FORCEINLINE static uint32 __PPO__Nerve3() { return STRUCT_OFFSET(AObjectField, Nerve3); } \
	FORCEINLINE static uint32 __PPO__Nerve4() { return STRUCT_OFFSET(AObjectField, Nerve4); } \
	FORCEINLINE static uint32 __PPO__Nerve5() { return STRUCT_OFFSET(AObjectField, Nerve5); } \
	FORCEINLINE static uint32 __PPO__Nerve6() { return STRUCT_OFFSET(AObjectField, Nerve6); } \
	FORCEINLINE static uint32 __PPO__Nerve7() { return STRUCT_OFFSET(AObjectField, Nerve7); } \
	FORCEINLINE static uint32 __PPO__Nerve8() { return STRUCT_OFFSET(AObjectField, Nerve8); } \
	FORCEINLINE static uint32 __PPO__Nerve9() { return STRUCT_OFFSET(AObjectField, Nerve9); } \
	FORCEINLINE static uint32 __PPO__Nerve10() { return STRUCT_OFFSET(AObjectField, Nerve10); } \
	FORCEINLINE static uint32 __PPO__Nerve11() { return STRUCT_OFFSET(AObjectField, Nerve11); } \
	FORCEINLINE static uint32 __PPO__Nerve12() { return STRUCT_OFFSET(AObjectField, Nerve12); } \
	FORCEINLINE static uint32 __PPO__Nerve13() { return STRUCT_OFFSET(AObjectField, Nerve13); } \
	FORCEINLINE static uint32 __PPO__Nerve14() { return STRUCT_OFFSET(AObjectField, Nerve14); } \
	FORCEINLINE static uint32 __PPO__Nerve15() { return STRUCT_OFFSET(AObjectField, Nerve15); } \
	FORCEINLINE static uint32 __PPO__Nerve16() { return STRUCT_OFFSET(AObjectField, Nerve16); } \
	FORCEINLINE static uint32 __PPO__Nerve17() { return STRUCT_OFFSET(AObjectField, Nerve17); } \
	FORCEINLINE static uint32 __PPO__Nerve18() { return STRUCT_OFFSET(AObjectField, Nerve18); } \
	FORCEINLINE static uint32 __PPO__Nerve19() { return STRUCT_OFFSET(AObjectField, Nerve19); } \
	FORCEINLINE static uint32 __PPO__Nerve20() { return STRUCT_OFFSET(AObjectField, Nerve20); } \
	FORCEINLINE static uint32 __PPO__Nerve21() { return STRUCT_OFFSET(AObjectField, Nerve21); } \
	FORCEINLINE static uint32 __PPO__Nerve22() { return STRUCT_OFFSET(AObjectField, Nerve22); } \
	FORCEINLINE static uint32 __PPO__Nerve23() { return STRUCT_OFFSET(AObjectField, Nerve23); } \
	FORCEINLINE static uint32 __PPO__Nerve24() { return STRUCT_OFFSET(AObjectField, Nerve24); }


#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_13_PROLOG
#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_PRIVATE_PROPERTY_OFFSET \
	ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_RPC_WRAPPERS \
	ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_INCLASS \
	ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_PRIVATE_PROPERTY_OFFSET \
	ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_INCLASS_NO_PURE_DECLS \
	ForestSim_Source_ForestSim_Interactable_ObjectField_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ForestSim_Source_ForestSim_Interactable_ObjectField_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
