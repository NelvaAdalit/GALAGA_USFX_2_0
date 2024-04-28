// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/PortaAvionAcuatico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortaAvionAcuatico() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_APortaAvionAcuatico_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_APortaAvionAcuatico();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UBuilderPorAvAcu_NoRegister();
// End Cross Module References
	void APortaAvionAcuatico::StaticRegisterNativesAPortaAvionAcuatico()
	{
	}
	UClass* Z_Construct_UClass_APortaAvionAcuatico_NoRegister()
	{
		return APortaAvionAcuatico::StaticClass();
	}
	struct Z_Construct_UClass_APortaAvionAcuatico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortaAvionAcuatico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortaAvionAcuatico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PortaAvionAcuatico.h" },
		{ "ModuleRelativePath", "PortaAvionAcuatico.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APortaAvionAcuatico_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderPorAvAcu_NoRegister, (int32)VTABLE_OFFSET(APortaAvionAcuatico, IBuilderPorAvAcu), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortaAvionAcuatico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortaAvionAcuatico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortaAvionAcuatico_Statics::ClassParams = {
		&APortaAvionAcuatico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APortaAvionAcuatico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortaAvionAcuatico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortaAvionAcuatico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortaAvionAcuatico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortaAvionAcuatico, 3212991779);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<APortaAvionAcuatico>()
	{
		return APortaAvionAcuatico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortaAvionAcuatico(Z_Construct_UClass_APortaAvionAcuatico, &APortaAvionAcuatico::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("APortaAvionAcuatico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortaAvionAcuatico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
