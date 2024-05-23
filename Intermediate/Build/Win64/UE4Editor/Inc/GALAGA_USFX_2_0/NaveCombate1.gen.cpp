// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/NaveCombate1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveCombate1() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveCombate1_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveCombate1();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveCombate();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void ANaveCombate1::StaticRegisterNativesANaveCombate1()
	{
	}
	UClass* Z_Construct_UClass_ANaveCombate1_NoRegister()
	{
		return ANaveCombate1::StaticClass();
	}
	struct Z_Construct_UClass_ANaveCombate1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveCombate1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveCombate,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCombate1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveCombate1.h" },
		{ "ModuleRelativePath", "NaveCombate1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveCombate1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveCombate1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveCombate1_Statics::ClassParams = {
		&ANaveCombate1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveCombate1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCombate1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveCombate1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveCombate1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveCombate1, 1088750803);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ANaveCombate1>()
	{
		return ANaveCombate1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveCombate1(Z_Construct_UClass_ANaveCombate1, &ANaveCombate1::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ANaveCombate1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveCombate1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
