// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/NaveEnemigaArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaArea() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveEnemigaArea_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveEnemigaArea();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void ANaveEnemigaArea::StaticRegisterNativesANaveEnemigaArea()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaArea_NoRegister()
	{
		return ANaveEnemigaArea::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaArea_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaArea.h" },
		{ "ModuleRelativePath", "NaveEnemigaArea.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaArea_Statics::ClassParams = {
		&ANaveEnemigaArea::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaArea, 2279675333);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ANaveEnemigaArea>()
	{
		return ANaveEnemigaArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaArea(Z_Construct_UClass_ANaveEnemigaArea, &ANaveEnemigaArea::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ANaveEnemigaArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
