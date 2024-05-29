// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IRENOVACIONESus.h"
#include "ISuscriptor.h"
#include "RadarNave.generated.h"
UCLASS()
class GALAGA_USFX_2_0_API ARadarNave : public AActor, public IIRENOVACIONESus
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARadarNave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:


	virtual void RenovarSuscripcion(IISuscriptor* Suscriptor) override;
	virtual void renovarProyectiles(IISuscriptor* Suscriptor) override;
	void Notificar(const FString& Accion) override;

	

	class AEscudoNN* Escudo;
	class ACanonBala*CanonBala;
	class ANaveKelly* Dron;
	class ANaveEnemigaArea* NaveEnemigaAerea;

private:

	TArray<IISuscriptor*> Suscriptores;

};
