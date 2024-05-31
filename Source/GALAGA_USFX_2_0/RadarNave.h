// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PublicadorObs.h"
#include "ISuscriptor.h"
#include "RadarNave.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API ARadarNave:  public APublicadorObs
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

	  virtual void Suscribir(IISuscriptor* Suscriptor) override;
      virtual  void Desuscribir(IISuscriptor* Suscriptor) override;
	  virtual void Notificar(const FString& Accion)override;
	  TArray<IISuscriptor*> Suscriptores;

//yo estoy haciendo que estas clases ayuden a mis naves enemivgas aereas  las tomo por referencia 
	class AEscudoNN* Escudo;
	class ACanonBala*CanonBala;
	class ACapsulaBomba*Bomba;
	class ANaveEnemigaArea* NaveEnemigaAerea;

	

};
