// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/EscudoNN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoNN() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AEscudoNN_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AEscudoNN();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEscudoNN::StaticRegisterNativesAEscudoNN()
	{
	}
	UClass* Z_Construct_UClass_AEscudoNN_NoRegister()
	{
		return AEscudoNN::StaticClass();
	}
	struct Z_Construct_UClass_AEscudoNN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escudo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escudo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudoNN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoNN_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscudoNN.h" },
		{ "ModuleRelativePath", "EscudoNN.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoNN_Statics::NewProp_Escudo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EscudoNN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscudoNN_Statics::NewProp_Escudo = { "Escudo", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudoNN, Escudo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscudoNN_Statics::NewProp_Escudo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoNN_Statics::NewProp_Escudo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscudoNN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudoNN_Statics::NewProp_Escudo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudoNN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudoNN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudoNN_Statics::ClassParams = {
		&AEscudoNN::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscudoNN_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoNN_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscudoNN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoNN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudoNN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudoNN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudoNN, 165509492);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<AEscudoNN>()
	{
		return AEscudoNN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudoNN(Z_Construct_UClass_AEscudoNN, &AEscudoNN::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("AEscudoNN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudoNN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
