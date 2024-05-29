// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "ISuscriptor.h"
#include "IRENOVACIONESus.h"
#include "NaveEnemigaArea.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_2_0_API ANaveEnemigaArea : public ANaveEnemiga, public IISuscriptor
{
	GENERATED_BODY()
public:
	ANaveEnemigaArea();

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
public:
	void Mover(float DeltaTime);
	virtual void Disparar() override;
	virtual void ResetFire() override;


public:

	class AEscudoNN* EscudoNave;

	void RENOVAR(FString _accion) override;

	
	virtual void AyudaPropulsores() ;
	virtual void AyudaEscudo() ;
	virtual void AyudaDronExtra() ;


	//int  VidaNave = 3;
	/*int GetVidaNave() const {
		return VidaNave;
	}*/

	float EnergiaNave = 200;
	float GetEnergiaNave() const {
		return EnergiaNave;
	}
	int ProyectilNave;

	FVector PosicionNave;
	FVector PosicionNaveSuscripcion;
	int VelocidadNave;
	int VelocidadNaveSuscripcion;
	UPROPERTY()
	class AProyectil* ProyectilNaveHielo;
	UPROPERTY()
	class ACanonBala* PropulsoresNaveSuscripcionS;
	UPROPERTY()
	class AEscudoNN* EscudoNaveSuscripcionS;
	UPROPERTY()
	class ANaveKelly* Dron;
private:
	UPROPERTY(VisibleAnywhere, Category = "Suscriptor")
	class ARadarNave* _Radar;

	


   



};
