// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FORESTSIM_Protocol_generated_h
#error "Protocol.generated.h already included, missing '#pragma once' in Protocol.h"
#endif
#define FORESTSIM_Protocol_generated_h

#define ForestSim_Source_ForestSim_Database_Protocol_h_13_RPC_WRAPPERS
#define ForestSim_Source_ForestSim_Database_Protocol_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ForestSim_Source_ForestSim_Database_Protocol_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProtocol(); \
	friend FORESTSIM_API class UClass* Z_Construct_UClass_UProtocol(); \
public: \
	DECLARE_CLASS(UProtocol, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForestSim"), NO_API) \
	DECLARE_SERIALIZER(UProtocol) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ForestSim_Source_ForestSim_Database_Protocol_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUProtocol(); \
	friend FORESTSIM_API class UClass* Z_Construct_UClass_UProtocol(); \
public: \
	DECLARE_CLASS(UProtocol, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ForestSim"), NO_API) \
	DECLARE_SERIALIZER(UProtocol) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ForestSim_Source_ForestSim_Database_Protocol_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProtocol(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProtocol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProtocol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProtocol(UProtocol&&); \
	NO_API UProtocol(const UProtocol&); \
public:


#define ForestSim_Source_ForestSim_Database_Protocol_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProtocol(UProtocol&&); \
	NO_API UProtocol(const UProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProtocol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProtocol)


#define ForestSim_Source_ForestSim_Database_Protocol_h_13_PRIVATE_PROPERTY_OFFSET
#define ForestSim_Source_ForestSim_Database_Protocol_h_10_PROLOG
#define ForestSim_Source_ForestSim_Database_Protocol_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForestSim_Source_ForestSim_Database_Protocol_h_13_PRIVATE_PROPERTY_OFFSET \
	ForestSim_Source_ForestSim_Database_Protocol_h_13_RPC_WRAPPERS \
	ForestSim_Source_ForestSim_Database_Protocol_h_13_INCLASS \
	ForestSim_Source_ForestSim_Database_Protocol_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ForestSim_Source_ForestSim_Database_Protocol_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForestSim_Source_ForestSim_Database_Protocol_h_13_PRIVATE_PROPERTY_OFFSET \
	ForestSim_Source_ForestSim_Database_Protocol_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ForestSim_Source_ForestSim_Database_Protocol_h_13_INCLASS_NO_PURE_DECLS \
	ForestSim_Source_ForestSim_Database_Protocol_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ForestSim_Source_ForestSim_Database_Protocol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
