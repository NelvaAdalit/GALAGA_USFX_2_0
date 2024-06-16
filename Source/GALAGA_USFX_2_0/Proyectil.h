// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectil.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API AProyectil : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProyectil();
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaProyectil;

	float velocidadDisparo;
	float Disparodano;
	float Colision = 0;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void movimento(float DeltaTime);
	void TiempoDisparo(float Colision);

};
