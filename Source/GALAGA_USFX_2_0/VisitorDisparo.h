// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IVISITOR.h"
#include "VisitorDisparo.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API AVisitorDisparo : public AActor, public IIVISITOR
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVisitorDisparo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Visit(class ANaveEnemigaEspia* NaveEspia) override;
	void Visit(class ACanonHielo* CanonHielo) override;

	void AtaqueCirular();
	void AtaqueParabola();
	void AtaqueLineal();
	void AtaqueLinealInverso();
	void AtaqueRebote();
protected:
	int dureza;
	int cantidadProyectiles;
	uint32 bCanFire : 1;//entero de 32 bits
	float FireRate;
	int MaxProjectile;
	int NumberFired;
	//int direccion = 1;
	float velocidad = 6;
	void ResetFire();
	class AProyectil* Proyectil;	
};
