// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/MovimientoNN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoNN() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UMovimientoNN_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UMovimientoNN();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void UMovimientoNN::StaticRegisterNativesUMovimientoNN()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoNN_NoRegister()
	{
		return UMovimientoNN::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoNN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoNN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoNN_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovimientoNN.h" },
		{ "ModuleRelativePath", "MovimientoNN.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoNN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoNN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoNN_Statics::ClassParams = {
		&UMovimientoNN::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoNN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoNN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoNN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoNN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoNN, 1163304010);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<UMovimientoNN>()
	{
		return UMovimientoNN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoNN(Z_Construct_UClass_UMovimientoNN, &UMovimientoNN::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("UMovimientoNN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoNN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
