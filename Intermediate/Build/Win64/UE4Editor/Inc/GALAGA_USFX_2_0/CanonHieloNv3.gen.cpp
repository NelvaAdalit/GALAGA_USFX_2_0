// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/CanonHieloNv3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanonHieloNv3() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ACanonHieloNv3_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ACanonHieloNv3();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ACanonHielo();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void ACanonHieloNv3::StaticRegisterNativesACanonHieloNv3()
	{
	}
	UClass* Z_Construct_UClass_ACanonHieloNv3_NoRegister()
	{
		return ACanonHieloNv3::StaticClass();
	}
	struct Z_Construct_UClass_ACanonHieloNv3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACanonHieloNv3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACanonHielo,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACanonHieloNv3_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CanonHieloNv3.h" },
		{ "ModuleRelativePath", "CanonHieloNv3.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACanonHieloNv3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACanonHieloNv3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACanonHieloNv3_Statics::ClassParams = {
		&ACanonHieloNv3::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACanonHieloNv3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACanonHieloNv3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACanonHieloNv3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACanonHieloNv3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACanonHieloNv3, 1022634681);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ACanonHieloNv3>()
	{
		return ACanonHieloNv3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACanonHieloNv3(Z_Construct_UClass_ACanonHieloNv3, &ACanonHieloNv3::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ACanonHieloNv3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACanonHieloNv3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
