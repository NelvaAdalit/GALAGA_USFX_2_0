// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModeloCanon.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API AModeloCanon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModeloCanon();
	UStaticMeshComponent* meshCanion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	int dureza;
	int cantidadProyectiles;
	uint32 bCanFire : 1;//entero de 32 bits
	float FireRate;
	int MaxProjectile;
	int NumberFired;
	int direccion = 1;
	float velocidad = 6;
public:
	FORCEINLINE void SetDureza(int _dureza) { dureza = _dureza; }
	FORCEINLINE int GetDureza() const { return dureza; }
	FORCEINLINE void SetCantidadProyectiles(int _cantidadProyectiles) { cantidadProyectiles = _cantidadProyectiles; }
	FORCEINLINE int GetCantidadProyectiles() const { return cantidadProyectiles; }
	virtual void Disparar() PURE_VIRTUAL(AModeloCanon::Disparar, ;)
	virtual void ResetFire() PURE_VIRTUAL(AModeloCanon::ResetFire, ;)
	FTimerHandle TimerHandle_ShotTimerExpired;



};
