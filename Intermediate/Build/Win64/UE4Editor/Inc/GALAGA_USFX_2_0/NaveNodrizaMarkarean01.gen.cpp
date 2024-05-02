// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/NaveNodrizaMarkarean01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveNodrizaMarkarean01() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveNodrizaMarkarean01_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveNodrizaMarkarean01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UBuilderNaveNodriza_NoRegister();
// End Cross Module References
	void ANaveNodrizaMarkarean01::StaticRegisterNativesANaveNodrizaMarkarean01()
	{
	}
	UClass* Z_Construct_UClass_ANaveNodrizaMarkarean01_NoRegister()
	{
		return ANaveNodrizaMarkarean01::StaticClass();
	}
	struct Z_Construct_UClass_ANaveNodrizaMarkarean01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveNodrizaMarkarean01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveNodrizaMarkarean01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveNodrizaMarkarean01.h" },
		{ "ModuleRelativePath", "NaveNodrizaMarkarean01.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveNodrizaMarkarean01_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderNaveNodriza_NoRegister, (int32)VTABLE_OFFSET(ANaveNodrizaMarkarean01, IBuilderNaveNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveNodrizaMarkarean01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveNodrizaMarkarean01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveNodrizaMarkarean01_Statics::ClassParams = {
		&ANaveNodrizaMarkarean01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveNodrizaMarkarean01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodrizaMarkarean01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveNodrizaMarkarean01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveNodrizaMarkarean01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveNodrizaMarkarean01, 186963846);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ANaveNodrizaMarkarean01>()
	{
		return ANaveNodrizaMarkarean01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveNodrizaMarkarean01(Z_Construct_UClass_ANaveNodrizaMarkarean01, &ANaveNodrizaMarkarean01::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ANaveNodrizaMarkarean01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveNodrizaMarkarean01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
