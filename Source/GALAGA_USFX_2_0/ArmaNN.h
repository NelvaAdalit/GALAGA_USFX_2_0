// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArmaNN.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API AArmaNN : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmaNN();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaProyectil;

	float velocidadDisparo;
	float Disparodano;
	float Colision = 0;
	FORCEINLINE float GetVelocidadDisparo() const { return velocidadDisparo; }
	FORCEINLINE float GetDisparoDano() const { return Disparodano; }
	FORCEINLINE void SetVelocidadDisparo(float _velocidad) { velocidadDisparo = _velocidad; }

	void movimento(float DeltaTime);
	void TiempoDisparo(float Colision);

};
