// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaArea.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_2_0_API ANaveEnemigaArea : public ANaveEnemiga
{
	GENERATED_BODY()
public:
	ANaveEnemigaArea();
	FString NombreNave;

public:
	
	virtual void Tick(float DeltaTime) override;
public:
	float velocidadDisparo;
	float Disparodano;
	float Colision = 0;
	FORCEINLINE float GetVelocidadDisparo() const { return velocidadDisparo; }
	FORCEINLINE float GetDisparoDano() const { return Disparodano; }
	FORCEINLINE void SetVelocidadDisparo(float _velocidad) { velocidadDisparo = _velocidad; }

	void movimento(float DeltaTime);

};
