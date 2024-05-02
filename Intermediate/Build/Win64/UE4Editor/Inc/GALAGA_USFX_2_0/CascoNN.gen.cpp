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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACascoNN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACascoNN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACascoNN_Statics::ClassParams = {
		&ACascoNN::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ACascoNN, 1330798237);
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
