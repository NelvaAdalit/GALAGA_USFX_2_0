// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/FabriNaveArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabriNaveArea() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AFabriNaveArea_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AFabriNaveArea();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AFabriNaves();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void AFabriNaveArea::StaticRegisterNativesAFabriNaveArea()
	{
	}
	UClass* Z_Construct_UClass_AFabriNaveArea_NoRegister()
	{
		return AFabriNaveArea::StaticClass();
	}
	struct Z_Construct_UClass_AFabriNaveArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabriNaveArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabriNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabriNaveArea_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabriNaveArea.h" },
		{ "ModuleRelativePath", "FabriNaveArea.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabriNaveArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabriNaveArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabriNaveArea_Statics::ClassParams = {
		&AFabriNaveArea::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabriNaveArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabriNaveArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabriNaveArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabriNaveArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabriNaveArea, 3117977713);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<AFabriNaveArea>()
	{
		return AFabriNaveArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabriNaveArea(Z_Construct_UClass_AFabriNaveArea, &AFabriNaveArea::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("AFabriNaveArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabriNaveArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
