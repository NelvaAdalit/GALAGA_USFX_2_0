// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */

UCLASS()
class GALAGA_USFX_2_0_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveEnemigaEspia();
	FString NombreNave;
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
protected:

	virtual void Disparar();

	float TiempoEntreProyectil;
	float TiempoPrimerProyectil;
	float VelocidadProyectil;

	UMovimientoNN* MovementComponent;
};
