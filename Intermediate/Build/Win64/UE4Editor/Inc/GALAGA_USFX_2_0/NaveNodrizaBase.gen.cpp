// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/NaveNodrizaBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveNodrizaBase() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveNodrizaBase_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ANaveNodrizaBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveNodrizaBase::StaticRegisterNativesANaveNodrizaBase()
	{
	}
	UClass* Z_Construct_UClass_ANaveNodrizaBase_NoRegister()
	{
		return ANaveNodrizaBase::StaticClass();
	}
	struct Z_Construct_UClass_ANaveNodrizaBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNaveNodrizaBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNaveNodrizaBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveNodrizaBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveNodrizaBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveNodrizaBase.h" },
		{ "ModuleRelativePath", "NaveNodrizaBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveNodrizaBase_Statics::NewProp_MeshNaveNodrizaBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveNodrizaBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveNodrizaBase_Statics::NewProp_MeshNaveNodrizaBase = { "MeshNaveNodrizaBase", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveNodrizaBase, MeshNaveNodrizaBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveNodrizaBase_Statics::NewProp_MeshNaveNodrizaBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodrizaBase_Statics::NewProp_MeshNaveNodrizaBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveNodrizaBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveNodrizaBase_Statics::NewProp_MeshNaveNodrizaBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveNodrizaBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveNodrizaBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveNodrizaBase_Statics::ClassParams = {
		&ANaveNodrizaBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveNodrizaBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodrizaBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveNodrizaBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodrizaBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveNodrizaBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveNodrizaBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveNodrizaBase, 419666351);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ANaveNodrizaBase>()
	{
		return ANaveNodrizaBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveNodrizaBase(Z_Construct_UClass_ANaveNodrizaBase, &ANaveNodrizaBase::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ANaveNodrizaBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveNodrizaBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
