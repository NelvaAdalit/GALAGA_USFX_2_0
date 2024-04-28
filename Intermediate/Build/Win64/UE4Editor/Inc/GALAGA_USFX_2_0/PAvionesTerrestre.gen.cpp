// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/PAvionesTerrestre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePAvionesTerrestre() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_APAvionesTerrestre_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_APAvionesTerrestre();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UBuilderPortaAvionesA_NoRegister();
// End Cross Module References
	void APAvionesTerrestre::StaticRegisterNativesAPAvionesTerrestre()
	{
	}
	UClass* Z_Construct_UClass_APAvionesTerrestre_NoRegister()
	{
		return APAvionesTerrestre::StaticClass();
	}
	struct Z_Construct_UClass_APAvionesTerrestre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APAvionesTerrestre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APAvionesTerrestre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PAvionesTerrestre.h" },
		{ "ModuleRelativePath", "PAvionesTerrestre.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APAvionesTerrestre_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderPortaAvionesA_NoRegister, (int32)VTABLE_OFFSET(APAvionesTerrestre, IBuilderPortaAvionesA), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APAvionesTerrestre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APAvionesTerrestre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APAvionesTerrestre_Statics::ClassParams = {
		&APAvionesTerrestre::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APAvionesTerrestre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APAvionesTerrestre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APAvionesTerrestre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APAvionesTerrestre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APAvionesTerrestre, 1037419493);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<APAvionesTerrestre>()
	{
		return APAvionesTerrestre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APAvionesTerrestre(Z_Construct_UClass_APAvionesTerrestre, &APAvionesTerrestre::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("APAvionesTerrestre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APAvionesTerrestre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
