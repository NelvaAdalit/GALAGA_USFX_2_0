// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/FabriNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabriNaves() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AFabriNaves_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AFabriNaves();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFabriNaves::StaticRegisterNativesAFabriNaves()
	{
	}
	UClass* Z_Construct_UClass_AFabriNaves_NoRegister()
	{
		return AFabriNaves::StaticClass();
	}
	struct Z_Construct_UClass_AFabriNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaNaveEnemiga_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaNaveEnemiga;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabriNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabriNaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabriNaves.h" },
		{ "ModuleRelativePath", "FabriNaves.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabriNaves_Statics::NewProp_mallaNaveEnemiga_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FabriNaves.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFabriNaves_Statics::NewProp_mallaNaveEnemiga = { "mallaNaveEnemiga", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFabriNaves, mallaNaveEnemiga), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFabriNaves_Statics::NewProp_mallaNaveEnemiga_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFabriNaves_Statics::NewProp_mallaNaveEnemiga_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFabriNaves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFabriNaves_Statics::NewProp_mallaNaveEnemiga,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabriNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabriNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabriNaves_Statics::ClassParams = {
		&AFabriNaves::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFabriNaves_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFabriNaves_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabriNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabriNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabriNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabriNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabriNaves, 772264687);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<AFabriNaves>()
	{
		return AFabriNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabriNaves(Z_Construct_UClass_AFabriNaves, &AFabriNaves::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("AFabriNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabriNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
