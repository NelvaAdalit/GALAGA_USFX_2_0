// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/ChasisPAA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChasisPAA() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AChasisPAA_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AChasisPAA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void AChasisPAA::StaticRegisterNativesAChasisPAA()
	{
	}
	UClass* Z_Construct_UClass_AChasisPAA_NoRegister()
	{
		return AChasisPAA::StaticClass();
	}
	struct Z_Construct_UClass_AChasisPAA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChasisPAA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasisPAA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChasisPAA.h" },
		{ "ModuleRelativePath", "ChasisPAA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChasisPAA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChasisPAA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChasisPAA_Statics::ClassParams = {
		&AChasisPAA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChasisPAA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChasisPAA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChasisPAA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChasisPAA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChasisPAA, 233690650);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<AChasisPAA>()
	{
		return AChasisPAA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChasisPAA(Z_Construct_UClass_AChasisPAA, &AChasisPAA::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("AChasisPAA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChasisPAA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
