// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_2_0/CapsulaBomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaBomba() {}
// Cross Module References
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ACapsulaBomba_NoRegister();
	GALAGA_USFX_2_0_API UClass* Z_Construct_UClass_ACapsulaBomba();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_2_0();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void ACapsulaBomba::StaticRegisterNativesACapsulaBomba()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaBomba_NoRegister()
	{
		return ACapsulaBomba::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaBomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaulSceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaulSceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectil_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Projectil_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectil_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Projectil_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectil_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Projectil_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectil_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Projectil_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Explosion_Particles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Explosion_Particles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_kelly_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_kelly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaBomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_2_0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaBomba_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapsulaBomba.h" },
		{ "ModuleRelativePath", "CapsulaBomba.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_DefaulSceneRoot_MetaData[] = {
		{ "Category", "CapsulaBomba" },
		{ "Comment", "//Componente raiz que controlara los demas componentes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CapsulaBomba.h" },
		{ "ToolTip", "Componente raiz que controlara los demas componentes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_DefaulSceneRoot = { "DefaulSceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulaBomba, DefaulSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_DefaulSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_DefaulSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Mesh_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//Componente de Malla para el proyectil\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CapsulaBomba.h" },
		{ "ToolTip", "Componente de Malla para el proyectil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Mesh = { "Projectil_Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulaBomba, Projectil_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Movement_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//Componente de Movimiento para el proyectil\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CapsulaBomba.h" },
		{ "ToolTip", "Componente de Movimiento para el proyectil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Movement = { "Projectil_Movement", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulaBomba, Projectil_Movement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Collision_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//Componente de colision para el proyectil\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CapsulaBomba.h" },
		{ "ToolTip", "Componente de colision para el proyectil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Collision = { "Projectil_Collision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulaBomba, Projectil_Collision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Sound_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//Componente de sonido para el proyectil\n" },
		{ "ModuleRelativePath", "CapsulaBomba.h" },
		{ "ToolTip", "Componente de sonido para el proyectil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Sound = { "Projectil_Sound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulaBomba, Projectil_Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Explosion_Particles_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "// para sonido\n" },
		{ "ModuleRelativePath", "CapsulaBomba.h" },
		{ "ToolTip", "para sonido" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Explosion_Particles = { "Explosion_Particles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulaBomba, Explosion_Particles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Explosion_Particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Explosion_Particles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_kelly_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CapsulaBomba.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_kelly = { "kelly", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulaBomba, kelly), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_kelly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_kelly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapsulaBomba_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_DefaulSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Projectil_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_Explosion_Particles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulaBomba_Statics::NewProp_kelly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaBomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaBomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaBomba_Statics::ClassParams = {
		&ACapsulaBomba::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACapsulaBomba_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaBomba_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaBomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaBomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaBomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaBomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaBomba, 2325531058);
	template<> GALAGA_USFX_2_0_API UClass* StaticClass<ACapsulaBomba>()
	{
		return ACapsulaBomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaBomba(Z_Construct_UClass_ACapsulaBomba, &ACapsulaBomba::StaticClass, TEXT("/Script/GALAGA_USFX_2_0"), TEXT("ACapsulaBomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaBomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
