// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/NaveCombate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveCombate() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveCombate_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveCombate();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void ANaveCombate::StaticRegisterNativesANaveCombate()
	{
	}
	UClass* Z_Construct_UClass_ANaveCombate_NoRegister()
	{
		return ANaveCombate::StaticClass();
	}
	struct Z_Construct_UClass_ANaveCombate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveCombate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCombate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveCombate.h" },
		{ "ModuleRelativePath", "NaveCombate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveCombate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveCombate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveCombate_Statics::ClassParams = {
		&ANaveCombate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveCombate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCombate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveCombate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveCombate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveCombate, 1279802306);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ANaveCombate>()
	{
		return ANaveCombate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveCombate(Z_Construct_UClass_ANaveCombate, &ANaveCombate::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ANaveCombate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveCombate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
