// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/PlanoParaConstruir.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanoParaConstruir() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UPlanoParaConstruir_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UPlanoParaConstruir();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void UPlanoParaConstruir::StaticRegisterNativesUPlanoParaConstruir()
	{
	}
	UClass* Z_Construct_UClass_UPlanoParaConstruir_NoRegister()
	{
		return UPlanoParaConstruir::StaticClass();
	}
	struct Z_Construct_UClass_UPlanoParaConstruir_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanoParaConstruir_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanoParaConstruir_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlanoParaConstruir.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanoParaConstruir_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlanoParaConstruir>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanoParaConstruir_Statics::ClassParams = {
		&UPlanoParaConstruir::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlanoParaConstruir_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanoParaConstruir_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanoParaConstruir()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanoParaConstruir_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanoParaConstruir, 8377655);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<UPlanoParaConstruir>()
	{
		return UPlanoParaConstruir::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanoParaConstruir(Z_Construct_UClass_UPlanoParaConstruir, &UPlanoParaConstruir::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("UPlanoParaConstruir"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanoParaConstruir);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
