// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/CascoNN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCascoNN() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ACascoNN_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ACascoNN();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACascoNN::StaticRegisterNativesACascoNN()
	{
	}
	UClass* Z_Construct_UClass_ACascoNN_NoRegister()
	{
		return ACascoNN::StaticClass();
	}
	struct Z_Construct_UClass_ACascoNN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNaveNodrizaBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNaveNodrizaBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACascoNN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACascoNN_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CascoNN.h" },
		{ "ModuleRelativePath", "CascoNN.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACascoNN_Statics::NewProp_MeshNaveNodrizaBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CascoNN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACascoNN_Statics::NewProp_MeshNaveNodrizaBase = { "MeshNaveNodrizaBase", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACascoNN, MeshNaveNodrizaBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACascoNN_Statics::NewProp_MeshNaveNodrizaBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACascoNN_Statics::NewProp_MeshNaveNodrizaBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACascoNN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACascoNN_Statics::NewProp_MeshNaveNodrizaBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACascoNN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACascoNN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACascoNN_Statics::ClassParams = {
		&ACascoNN::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACascoNN_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACascoNN_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACascoNN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACascoNN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACascoNN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACascoNN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACascoNN, 3814626671);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ACascoNN>()
	{
		return ACascoNN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACascoNN(Z_Construct_UClass_ACascoNN, &ACascoNN::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ACascoNN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACascoNN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
