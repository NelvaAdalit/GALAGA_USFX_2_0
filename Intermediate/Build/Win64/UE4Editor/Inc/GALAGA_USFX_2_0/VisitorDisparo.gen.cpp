// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/VisitorDisparo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisitorDisparo() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AVisitorDisparo_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AVisitorDisparo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UIVISITOR_NoRegister();
// End Cross Module References
	void AVisitorDisparo::StaticRegisterNativesAVisitorDisparo()
	{
	}
	UClass* Z_Construct_UClass_AVisitorDisparo_NoRegister()
	{
		return AVisitorDisparo::StaticClass();
	}
	struct Z_Construct_UClass_AVisitorDisparo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVisitorDisparo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisitorDisparo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VisitorDisparo.h" },
		{ "ModuleRelativePath", "VisitorDisparo.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVisitorDisparo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIVISITOR_NoRegister, (int32)VTABLE_OFFSET(AVisitorDisparo, IIVISITOR), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVisitorDisparo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisitorDisparo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVisitorDisparo_Statics::ClassParams = {
		&AVisitorDisparo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVisitorDisparo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVisitorDisparo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVisitorDisparo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVisitorDisparo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVisitorDisparo, 3109133121);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<AVisitorDisparo>()
	{
		return AVisitorDisparo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVisitorDisparo(Z_Construct_UClass_AVisitorDisparo, &AVisitorDisparo::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("AVisitorDisparo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisitorDisparo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
