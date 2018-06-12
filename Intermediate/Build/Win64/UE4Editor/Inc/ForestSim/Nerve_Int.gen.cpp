// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Database/Nerve_Int.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNerve_Int() {}
// Cross Module References
	FORESTSIM_API UClass* Z_Construct_UClass_UNerve_Int_NoRegister();
	FORESTSIM_API UClass* Z_Construct_UClass_UNerve_Int();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ForestSim();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void UNerve_Int::StaticRegisterNativesUNerve_Int()
	{
	}
	UClass* Z_Construct_UClass_UNerve_Int_NoRegister()
	{
		return UNerve_Int::StaticClass();
	}
	UClass* Z_Construct_UClass_UNerve_Int()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_ForestSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "Database/Nerve_Int.h" },
				{ "ModuleRelativePath", "Database/Nerve_Int.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NerveMesh_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Testing" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Database/Nerve_Int.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NerveMesh = { UE4CodeGen_Private::EPropertyClass::Object, "NerveMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UNerve_Int, NerveMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_NerveMesh_MetaData, ARRAY_COUNT(NewProp_NerveMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NerveMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNerve_Int>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNerve_Int::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UNerve_Int, 368424124);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNerve_Int(Z_Construct_UClass_UNerve_Int, &UNerve_Int::StaticClass, TEXT("/Script/ForestSim"), TEXT("UNerve_Int"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNerve_Int);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
