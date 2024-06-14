// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISuscriptor.h"
#include "PublicadorObs.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API APublicadorObs : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's propertiesB
   APublicadorObs();
private:

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

	 virtual void Suscribir(IISuscriptor* Suscriptor);
     virtual  void Desuscribir(IISuscriptor* Suscriptor);
	 virtual  void Notificar();
	 TArray<IISuscriptor*> Suscriptores;



};

