// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/BuilderPorAvAcu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderPorAvAcu() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UBuilderPorAvAcu_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UBuilderPorAvAcu();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void UBuilderPorAvAcu::StaticRegisterNativesUBuilderPorAvAcu()
	{
	}
	UClass* Z_Construct_UClass_UBuilderPorAvAcu_NoRegister()
	{
		return UBuilderPorAvAcu::StaticClass();
	}
	struct Z_Construct_UClass_UBuilderPorAvAcu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuilderPorAvAcu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuilderPorAvAcu_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuilderPorAvAcu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuilderPorAvAcu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilderPorAvAcu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuilderPorAvAcu_Statics::ClassParams = {
		&UBuilderPorAvAcu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBuilderPorAvAcu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuilderPorAvAcu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuilderPorAvAcu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuilderPorAvAcu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuilderPorAvAcu, 1046727415);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<UBuilderPorAvAcu>()
	{
		return UBuilderPorAvAcu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuilderPorAvAcu(Z_Construct_UClass_UBuilderPorAvAcu, &UBuilderPorAvAcu::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("UBuilderPorAvAcu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilderPorAvAcu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
