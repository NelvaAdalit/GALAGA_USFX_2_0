// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "proyectilLazer.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API AproyectilLazer : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaProyectil;

	float velocidadDisparo;
	float Disparodano;
	float Colision = 0;

public:	
	// Sets default values for this actor's properties
	AproyectilLazer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE float GetVelocidadDisparo() const { return velocidadDisparo; }
	FORCEINLINE float GetDisparoDano() const { return Disparodano; }
	FORCEINLINE void SetVelocidadDisparo(float _velocidad) { velocidadDisparo = _velocidad; }

	void movimento(float DeltaTime);
	void TiempoDisparo(float Colision);

};
