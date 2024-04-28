// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_generated_h
#error "GALAGA_USFX_2_0Projectile.generated.h already included, missing '#pragma once' in GALAGA_USFX_2_0Projectile.h"
#endif
#define GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_generated_h

#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_SPARSE_DATA
#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGALAGA_USFX_2_0Projectile(); \
	friend struct Z_Construct_UClass_AGALAGA_USFX_2_0Projectile_Statics; \
public: \
	DECLARE_CLASS(AGALAGA_USFX_2_0Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_USFX_2_0"), NO_API) \
	DECLARE_SERIALIZER(AGALAGA_USFX_2_0Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGALAGA_USFX_2_0Projectile(); \
	friend struct Z_Construct_UClass_AGALAGA_USFX_2_0Projectile_Statics; \
public: \
	DECLARE_CLASS(AGALAGA_USFX_2_0Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_USFX_2_0"), NO_API) \
	DECLARE_SERIALIZER(AGALAGA_USFX_2_0Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGALAGA_USFX_2_0Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGALAGA_USFX_2_0Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGA_USFX_2_0Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGA_USFX_2_0Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGA_USFX_2_0Projectile(AGALAGA_USFX_2_0Projectile&&); \
	NO_API AGALAGA_USFX_2_0Projectile(const AGALAGA_USFX_2_0Projectile&); \
public:


#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGA_USFX_2_0Projectile(AGALAGA_USFX_2_0Projectile&&); \
	NO_API AGALAGA_USFX_2_0Projectile(const AGALAGA_USFX_2_0Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGA_USFX_2_0Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGA_USFX_2_0Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGALAGA_USFX_2_0Projectile)


#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGALAGA_USFX_2_0Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGALAGA_USFX_2_0Projectile, ProjectileMovement); }


#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_12_PROLOG
#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_SPARSE_DATA \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_RPC_WRAPPERS \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_INCLASS \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_SPARSE_DATA \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_INCLASS_NO_PURE_DECLS \
	GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_2_0_API UClass* StaticClass<class AGALAGA_USFX_2_0Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_USFX_2_0_Source_GALAGA_USFX_2_0_GALAGA_USFX_2_0Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
