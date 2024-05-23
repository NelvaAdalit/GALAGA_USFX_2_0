// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/ArmaNN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaNN() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AArmaNN_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AArmaNN();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AArmaNN::StaticRegisterNativesAArmaNN()
	{
	}
	UClass* Z_Construct_UClass_AArmaNN_NoRegister()
	{
		return AArmaNN::StaticClass();
	}
	struct Z_Construct_UClass_AArmaNN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaProyectil_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaProyectil;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaNN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaNN_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmaNN.h" },
		{ "ModuleRelativePath", "ArmaNN.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaNN_Statics::NewProp_mallaProyectil_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ArmaNN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmaNN_Statics::NewProp_mallaProyectil = { "mallaProyectil", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmaNN, mallaProyectil), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmaNN_Statics::NewProp_mallaProyectil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaNN_Statics::NewProp_mallaProyectil_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmaNN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmaNN_Statics::NewProp_mallaProyectil,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaNN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaNN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaNN_Statics::ClassParams = {
		&AArmaNN::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmaNN_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmaNN_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmaNN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaNN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaNN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaNN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaNN, 3910426836);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<AArmaNN>()
	{
		return AArmaNN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaNN(Z_Construct_UClass_AArmaNN, &AArmaNN::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("AArmaNN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaNN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
