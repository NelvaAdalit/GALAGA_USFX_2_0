// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/ISuscriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISuscriptor() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UISuscriptor_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_UISuscriptor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
// End Cross Module References
	void UISuscriptor::StaticRegisterNativesUISuscriptor()
	{
	}
	UClass* Z_Construct_UClass_UISuscriptor_NoRegister()
	{
		return UISuscriptor::StaticClass();
	}
	struct Z_Construct_UClass_UISuscriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISuscriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISuscriptor_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ISuscriptor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISuscriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISuscriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UISuscriptor_Statics::ClassParams = {
		&UISuscriptor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UISuscriptor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISuscriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISuscriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UISuscriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UISuscriptor, 3772428922);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<UISuscriptor>()
	{
		return UISuscriptor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UISuscriptor(Z_Construct_UClass_UISuscriptor, &UISuscriptor::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("UISuscriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISuscriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
