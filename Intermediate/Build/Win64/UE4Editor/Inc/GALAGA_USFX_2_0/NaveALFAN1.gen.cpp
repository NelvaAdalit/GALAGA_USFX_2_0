// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/NaveALFAN1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveALFAN1() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveALFAN1_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveALFAN1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UNaveNodrizaInterfaz_NoRegister();
// End Cross Module References
	void ANaveALFAN1::StaticRegisterNativesANaveALFAN1()
	{
	}
	UClass* Z_Construct_UClass_ANaveALFAN1_NoRegister()
	{
		return ANaveALFAN1::StaticClass();
	}
	struct Z_Construct_UClass_ANaveALFAN1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaAlfa_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaAlfa;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveALFAN1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveALFAN1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveALFAN1.h" },
		{ "ModuleRelativePath", "NaveALFAN1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveALFAN1_Statics::NewProp_MallaAlfa_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveALFAN1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveALFAN1_Statics::NewProp_MallaAlfa = { "MallaAlfa", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveALFAN1, MallaAlfa), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveALFAN1_Statics::NewProp_MallaAlfa_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveALFAN1_Statics::NewProp_MallaAlfa_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveALFAN1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveALFAN1_Statics::NewProp_MallaAlfa,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveALFAN1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNaveNodrizaInterfaz_NoRegister, (int32)VTABLE_OFFSET(ANaveALFAN1, INaveNodrizaInterfaz), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveALFAN1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveALFAN1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveALFAN1_Statics::ClassParams = {
		&ANaveALFAN1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveALFAN1_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveALFAN1_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveALFAN1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveALFAN1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveALFAN1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveALFAN1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveALFAN1, 3538639890);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ANaveALFAN1>()
	{
		return ANaveALFAN1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveALFAN1(Z_Construct_UClass_ANaveALFAN1, &ANaveALFAN1::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ANaveALFAN1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveALFAN1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
