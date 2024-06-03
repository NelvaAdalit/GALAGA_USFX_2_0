// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "ISuscriptor.h"
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

	
	virtual void AyudaCanonBala() ;
	virtual void AyudaEscudo() ;
	virtual void AyudaCapsulaBombaExtra() ;

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
	class ACanonBala* CanonBala;
	UPROPERTY()
	class AEscudoNN* EscudoNaveSuscripcionS;
	UPROPERTY()
	class ACapsulaBomba* CapsulaBomba;
private:
	UPROPERTY(VisibleAnywhere, Category = "Suscriptor")
	class ARadarNave* _Radar;

	


   



};
