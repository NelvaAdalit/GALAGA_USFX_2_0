// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/IVISITABLE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVISITABLE() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UIVISITABLE_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UIVISITABLE();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void UIVISITABLE::StaticRegisterNativesUIVISITABLE()
	{
	}
	UClass* Z_Construct_UClass_UIVISITABLE_NoRegister()
	{
		return UIVISITABLE::StaticClass();
	}
	struct Z_Construct_UClass_UIVISITABLE_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIVISITABLE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVISITABLE_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IVISITABLE.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIVISITABLE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIVISITABLE>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIVISITABLE_Statics::ClassParams = {
		&UIVISITABLE::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIVISITABLE_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIVISITABLE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIVISITABLE()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIVISITABLE_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIVISITABLE, 3398305384);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<UIVISITABLE>()
	{
		return UIVISITABLE::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIVISITABLE(Z_Construct_UClass_UIVISITABLE, &UIVISITABLE::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("UIVISITABLE"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIVISITABLE);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
