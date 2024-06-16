// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/EscudoVisitor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoVisitor() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AEscudoVisitor_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_AEscudoVisitor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEscudoVisitor::StaticRegisterNativesAEscudoVisitor()
	{
	}
	UClass* Z_Construct_UClass_AEscudoVisitor_NoRegister()
	{
		return AEscudoVisitor::StaticClass();
	}
	struct Z_Construct_UClass_AEscudoVisitor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscudoVisitor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscudoVisitor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudoVisitor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoVisitor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscudoVisitor.h" },
		{ "ModuleRelativePath", "EscudoVisitor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoVisitor_Statics::NewProp_EscudoVisitor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EscudoVisitor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscudoVisitor_Statics::NewProp_EscudoVisitor = { "EscudoVisitor", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudoVisitor, EscudoVisitor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscudoVisitor_Statics::NewProp_EscudoVisitor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoVisitor_Statics::NewProp_EscudoVisitor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscudoVisitor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudoVisitor_Statics::NewProp_EscudoVisitor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudoVisitor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudoVisitor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudoVisitor_Statics::ClassParams = {
		&AEscudoVisitor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscudoVisitor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoVisitor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscudoVisitor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoVisitor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudoVisitor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudoVisitor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudoVisitor, 214699128);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<AEscudoVisitor>()
	{
		return AEscudoVisitor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudoVisitor(Z_Construct_UClass_AEscudoVisitor, &AEscudoVisitor::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("AEscudoVisitor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudoVisitor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
