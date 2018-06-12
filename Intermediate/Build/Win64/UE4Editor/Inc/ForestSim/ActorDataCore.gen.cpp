// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Database/ActorDataCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorDataCore() {}
// Cross Module References
	FORESTSIM_API UClass* Z_Construct_UClass_AActorDataCore_NoRegister();
	FORESTSIM_API UClass* Z_Construct_UClass_AActorDataCore();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ForestSim();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FORESTSIM_API UClass* Z_Construct_UClass_UCharacterData_NoRegister();
	FORESTSIM_API UClass* Z_Construct_UClass_UWorldSpace_NoRegister();
	FORESTSIM_API UClass* Z_Construct_UClass_UNerve_NoRegister();
	FORESTSIM_API UClass* Z_Construct_UClass_UProtocol_NoRegister();
	FORESTSIM_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
// End Cross Module References
	void AActorDataCore::StaticRegisterNativesAActorDataCore()
	{
	}
	UClass* Z_Construct_UClass_AActorDataCore_NoRegister()
	{
		return AActorDataCore::StaticClass();
	}
	UClass* Z_Construct_UClass_AActorDataCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_ForestSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Database/ActorDataCore.h" },
				{ "ModuleRelativePath", "Database/ActorDataCore.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Database_Generation" },
				{ "ModuleRelativePath", "Database/ActorDataCore.h" },
				{ "ToolTip", "An array of character data bases this data core relates to." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetCharacter = { UE4CodeGen_Private::EPropertyClass::Array, "TargetCharacter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000005, 1, nullptr, STRUCT_OFFSET(AActorDataCore, TargetCharacter), METADATA_PARAMS(NewProp_TargetCharacter_MetaData, ARRAY_COUNT(NewProp_TargetCharacter_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetCharacter_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "TargetCharacter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UCharacterData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetWorldSpace_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Database_Generation" },
				{ "ModuleRelativePath", "Database/ActorDataCore.h" },
				{ "ToolTip", "An array of world spaces this data core relates to." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetWorldSpace = { UE4CodeGen_Private::EPropertyClass::Array, "TargetWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000005, 1, nullptr, STRUCT_OFFSET(AActorDataCore, TargetWorldSpace), METADATA_PARAMS(NewProp_TargetWorldSpace_MetaData, ARRAY_COUNT(NewProp_TargetWorldSpace_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetWorldSpace_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "TargetWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UWorldSpace_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nerves_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Database_Generation" },
				{ "ModuleRelativePath", "Database/ActorDataCore.h" },
				{ "ToolTip", "An array of nerves attatched to the interactables for accessing protocols." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nerves = { UE4CodeGen_Private::EPropertyClass::Array, "Nerves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000005, 1, nullptr, STRUCT_OFFSET(AActorDataCore, Nerves), METADATA_PARAMS(NewProp_Nerves_MetaData, ARRAY_COUNT(NewProp_Nerves_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Nerves_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Nerves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UNerve_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocols_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Database_Generation" },
				{ "ModuleRelativePath", "Database/ActorDataCore.h" },
				{ "ToolTip", "An array of protocols this data core can be exposed to." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Protocols = { UE4CodeGen_Private::EPropertyClass::Array, "Protocols", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000005, 1, nullptr, STRUCT_OFFSET(AActorDataCore, Protocols), METADATA_PARAMS(NewProp_Protocols_MetaData, ARRAY_COUNT(NewProp_Protocols_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Protocols_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Protocols", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UProtocol_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactables_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Database_Generation" },
				{ "ModuleRelativePath", "Database/ActorDataCore.h" },
				{ "ToolTip", "An array of interactables capable of representing this data core." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Interactables = { UE4CodeGen_Private::EPropertyClass::Array, "Interactables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000005, 1, nullptr, STRUCT_OFFSET(AActorDataCore, Interactables), METADATA_PARAMS(NewProp_Interactables_MetaData, ARRAY_COUNT(NewProp_Interactables_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Interactables_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Interactables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AInteractable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetCharacter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetCharacter_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetWorldSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetWorldSpace_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nerves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nerves_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Protocols,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Protocols_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Interactables,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Interactables_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AActorDataCore>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AActorDataCore::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorDataCore, 560622061);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorDataCore(Z_Construct_UClass_AActorDataCore, &AActorDataCore::StaticClass, TEXT("/Script/ForestSim"), TEXT("AActorDataCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorDataCore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
