// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/NaveCombate2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveCombate2() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveCombate2_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveCombate2();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveCombate();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void ANaveCombate2::StaticRegisterNativesANaveCombate2()
	{
	}
	UClass* Z_Construct_UClass_ANaveCombate2_NoRegister()
	{
		return ANaveCombate2::StaticClass();
	}
	struct Z_Construct_UClass_ANaveCombate2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveCombate2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveCombate,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCombate2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveCombate2.h" },
		{ "ModuleRelativePath", "NaveCombate2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveCombate2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveCombate2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveCombate2_Statics::ClassParams = {
		&ANaveCombate2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveCombate2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCombate2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveCombate2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveCombate2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveCombate2, 3899353141);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ANaveCombate2>()
	{
		return ANaveCombate2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveCombate2(Z_Construct_UClass_ANaveCombate2, &ANaveCombate2::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ANaveCombate2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveCombate2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
