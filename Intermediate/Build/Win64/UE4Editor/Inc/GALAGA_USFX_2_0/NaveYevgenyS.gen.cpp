// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/NaveYevgenyS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveYevgenyS() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveYevgenyS_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveYevgenyS();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void ANaveYevgenyS::StaticRegisterNativesANaveYevgenyS()
	{
	}
	UClass* Z_Construct_UClass_ANaveYevgenyS_NoRegister()
	{
		return ANaveYevgenyS::StaticClass();
	}
	struct Z_Construct_UClass_ANaveYevgenyS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveYevgenyS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveYevgenyS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveYevgenyS.h" },
		{ "ModuleRelativePath", "NaveYevgenyS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveYevgenyS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveYevgenyS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveYevgenyS_Statics::ClassParams = {
		&ANaveYevgenyS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveYevgenyS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveYevgenyS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveYevgenyS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveYevgenyS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveYevgenyS, 2440072179);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ANaveYevgenyS>()
	{
		return ANaveYevgenyS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveYevgenyS(Z_Construct_UClass_ANaveYevgenyS, &ANaveYevgenyS::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ANaveYevgenyS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveYevgenyS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
