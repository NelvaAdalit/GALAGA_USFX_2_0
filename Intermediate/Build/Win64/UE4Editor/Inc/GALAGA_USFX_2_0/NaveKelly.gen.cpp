// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/NaveKelly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveKelly() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveKelly_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveKelly();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void ANaveKelly::StaticRegisterNativesANaveKelly()
	{
	}
	UClass* Z_Construct_UClass_ANaveKelly_NoRegister()
	{
		return ANaveKelly::StaticClass();
	}
	struct Z_Construct_UClass_ANaveKelly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveKelly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveKelly_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveKelly.h" },
		{ "ModuleRelativePath", "NaveKelly.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveKelly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveKelly>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveKelly_Statics::ClassParams = {
		&ANaveKelly::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveKelly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveKelly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveKelly()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveKelly_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveKelly, 3120061450);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ANaveKelly>()
	{
		return ANaveKelly::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveKelly(Z_Construct_UClass_ANaveKelly, &ANaveKelly::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ANaveKelly"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveKelly);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
