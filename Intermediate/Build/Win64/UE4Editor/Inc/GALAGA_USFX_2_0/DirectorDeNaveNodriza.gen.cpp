// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/DirectorDeNaveNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorDeNaveNodriza() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ADirectorDeNaveNodriza_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ADirectorDeNaveNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void ADirectorDeNaveNodriza::StaticRegisterNativesADirectorDeNaveNodriza()
	{
	}
	UClass* Z_Construct_UClass_ADirectorDeNaveNodriza_NoRegister()
	{
		return ADirectorDeNaveNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorDeNaveNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorDeNaveNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorDeNaveNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorDeNaveNodriza.h" },
		{ "ModuleRelativePath", "DirectorDeNaveNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorDeNaveNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorDeNaveNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirectorDeNaveNodriza_Statics::ClassParams = {
		&ADirectorDeNaveNodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADirectorDeNaveNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorDeNaveNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectorDeNaveNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirectorDeNaveNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirectorDeNaveNodriza, 564032909);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ADirectorDeNaveNodriza>()
	{
		return ADirectorDeNaveNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirectorDeNaveNodriza(Z_Construct_UClass_ADirectorDeNaveNodriza, &ADirectorDeNaveNodriza::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ADirectorDeNaveNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorDeNaveNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
