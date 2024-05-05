// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/PatrullaEnigmaNN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrullaEnigmaNN() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_APatrullaEnigmaNN_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_APatrullaEnigmaNN();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APatrullaEnigmaNN::StaticRegisterNativesAPatrullaEnigmaNN()
	{
	}
	UClass* Z_Construct_UClass_APatrullaEnigmaNN_NoRegister()
	{
		return APatrullaEnigmaNN::StaticClass();
	}
	struct Z_Construct_UClass_APatrullaEnigmaNN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Propulsores_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Propulsores;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatrullaEnigmaNN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrullaEnigmaNN_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PatrullaEnigmaNN.h" },
		{ "ModuleRelativePath", "PatrullaEnigmaNN.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrullaEnigmaNN_Statics::NewProp_Propulsores_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PatrullaEnigmaNN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatrullaEnigmaNN_Statics::NewProp_Propulsores = { "Propulsores", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrullaEnigmaNN, Propulsores), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APatrullaEnigmaNN_Statics::NewProp_Propulsores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatrullaEnigmaNN_Statics::NewProp_Propulsores_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatrullaEnigmaNN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrullaEnigmaNN_Statics::NewProp_Propulsores,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatrullaEnigmaNN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrullaEnigmaNN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatrullaEnigmaNN_Statics::ClassParams = {
		&APatrullaEnigmaNN::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APatrullaEnigmaNN_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APatrullaEnigmaNN_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APatrullaEnigmaNN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatrullaEnigmaNN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatrullaEnigmaNN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatrullaEnigmaNN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatrullaEnigmaNN, 1486550884);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<APatrullaEnigmaNN>()
	{
		return APatrullaEnigmaNN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatrullaEnigmaNN(Z_Construct_UClass_APatrullaEnigmaNN, &APatrullaEnigmaNN::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("APatrullaEnigmaNN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatrullaEnigmaNN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
