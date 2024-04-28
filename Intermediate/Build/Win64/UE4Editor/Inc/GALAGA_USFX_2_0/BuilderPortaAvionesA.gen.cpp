// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/BuilderPortaAvionesA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderPortaAvionesA() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UBuilderPortaAvionesA_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UBuilderPortaAvionesA();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void UBuilderPortaAvionesA::StaticRegisterNativesUBuilderPortaAvionesA()
	{
	}
	UClass* Z_Construct_UClass_UBuilderPortaAvionesA_NoRegister()
	{
		return UBuilderPortaAvionesA::StaticClass();
	}
	struct Z_Construct_UClass_UBuilderPortaAvionesA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuilderPortaAvionesA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuilderPortaAvionesA_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuilderPortaAvionesA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuilderPortaAvionesA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilderPortaAvionesA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuilderPortaAvionesA_Statics::ClassParams = {
		&UBuilderPortaAvionesA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuilderPortaAvionesA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuilderPortaAvionesA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuilderPortaAvionesA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuilderPortaAvionesA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuilderPortaAvionesA, 3244015779);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<UBuilderPortaAvionesA>()
	{
		return UBuilderPortaAvionesA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuilderPortaAvionesA(Z_Construct_UClass_UBuilderPortaAvionesA, &UBuilderPortaAvionesA::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("UBuilderPortaAvionesA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilderPortaAvionesA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
