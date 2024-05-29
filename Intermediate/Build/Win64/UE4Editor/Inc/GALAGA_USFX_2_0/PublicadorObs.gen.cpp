// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/PublicadorObs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicadorObs() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_APublicadorObs_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_APublicadorObs();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void APublicadorObs::StaticRegisterNativesAPublicadorObs()
	{
	}
	UClass* Z_Construct_UClass_APublicadorObs_NoRegister()
	{
		return APublicadorObs::StaticClass();
	}
	struct Z_Construct_UClass_APublicadorObs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APublicadorObs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicadorObs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PublicadorObs.h" },
		{ "ModuleRelativePath", "PublicadorObs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APublicadorObs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APublicadorObs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APublicadorObs_Statics::ClassParams = {
		&APublicadorObs::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APublicadorObs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APublicadorObs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APublicadorObs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APublicadorObs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APublicadorObs, 1394405009);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<APublicadorObs>()
	{
		return APublicadorObs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APublicadorObs(Z_Construct_UClass_APublicadorObs, &APublicadorObs::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("APublicadorObs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APublicadorObs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
