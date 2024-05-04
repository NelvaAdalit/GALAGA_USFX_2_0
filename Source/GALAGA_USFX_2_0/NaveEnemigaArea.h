// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "ProyectilNaveEnemiga.h"
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
	virtual void Mover(float DeltaTime);
	virtual void Tick(float DeltaTime) override;

	float RunningTime;
	float Tiempo_Disparo;
	float Tiempo_Disparo_Generar;
	FVector Distancia_Disparo;
	float SpeedScale;

protected:

	//virtual void DisparoNave();
	//float TiempoEntreProyectil;
	//float TiempoPrimerProyectil;
	//float VelocidadProyectil;

};
