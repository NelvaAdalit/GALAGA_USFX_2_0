// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ProyectilNaveEnemiga.generated.h"
UCLASS()
class GALAGA_USFX_2_0_API AProyectilNaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ProyectilBase, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProyectilBase;

	UProjectileMovementComponent* ProjectileMovement;
public:	
	// Sets default values for this actor's properties
	AProyectilNaveEnemiga();

	void FireInDirection(FVector& ShootDirection);

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	float ProjectileSpeed;
	float Dano;

};
