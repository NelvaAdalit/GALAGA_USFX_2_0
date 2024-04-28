// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/MovimientoMotorPAA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoMotorPAA() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AMovimientoMotorPAA_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AMovimientoMotorPAA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void AMovimientoMotorPAA::StaticRegisterNativesAMovimientoMotorPAA()
	{
	}
	UClass* Z_Construct_UClass_AMovimientoMotorPAA_NoRegister()
	{
		return AMovimientoMotorPAA::StaticClass();
	}
	struct Z_Construct_UClass_AMovimientoMotorPAA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovimientoMotorPAA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovimientoMotorPAA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovimientoMotorPAA.h" },
		{ "ModuleRelativePath", "MovimientoMotorPAA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovimientoMotorPAA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovimientoMotorPAA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovimientoMotorPAA_Statics::ClassParams = {
		&AMovimientoMotorPAA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMovimientoMotorPAA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovimientoMotorPAA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovimientoMotorPAA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovimientoMotorPAA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovimientoMotorPAA, 3808909790);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<AMovimientoMotorPAA>()
	{
		return AMovimientoMotorPAA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovimientoMotorPAA(Z_Construct_UClass_AMovimientoMotorPAA, &AMovimientoMotorPAA::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("AMovimientoMotorPAA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovimientoMotorPAA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
