// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/BatallonAereo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatallonAereo() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ABatallonAereo_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ABatallonAereo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UBatallonInterfaz_NoRegister();
// End Cross Module References
	void ABatallonAereo::StaticRegisterNativesABatallonAereo()
	{
	}
	UClass* Z_Construct_UClass_ABatallonAereo_NoRegister()
	{
		return ABatallonAereo::StaticClass();
	}
	struct Z_Construct_UClass_ABatallonAereo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatallonAereo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatallonAereo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BatallonAereo.h" },
		{ "ModuleRelativePath", "BatallonAereo.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABatallonAereo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBatallonInterfaz_NoRegister, (int32)VTABLE_OFFSET(ABatallonAereo, IBatallonInterfaz), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatallonAereo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatallonAereo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatallonAereo_Statics::ClassParams = {
		&ABatallonAereo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABatallonAereo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatallonAereo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatallonAereo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatallonAereo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatallonAereo, 1275413080);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ABatallonAereo>()
	{
		return ABatallonAereo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatallonAereo(Z_Construct_UClass_ABatallonAereo, &ABatallonAereo::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ABatallonAereo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatallonAereo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
