// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GALAGA_USFX_2_0Projectile.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS(config=Game)
class AGALAGA_USFX_2_0Projectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;
private:
	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

public:
	AGALAGA_USFX_2_0Projectile();

	/** Function to handle the projectile hitting something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	// Devuelve el mesh del proyectil
	FORCEINLINE UStaticMeshComponent* GetProjectileMesh() const { return ProjectileMesh; }
	// Devuelve el componente de movimiento del proyectil
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

public:

	void SetProjectileVelocity(const FVector& NewVelocity);
	void SetProjectileScale(const FVector& NewScale);

};

