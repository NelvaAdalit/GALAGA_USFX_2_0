// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BatallonInterfaz.h"
#include "BatallonAereo.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API ABatallonAereo : public AActor, public IBatallonInterfaz
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABatallonAereo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void SetPelotonAlfa(FString tipo, FVector ubicacion, int cantidad) override;
	virtual void SetPelotonBeta(FString tipo, FVector ubicacion, int cantidad) override;
	virtual void SetPelotonOmega(FString tipo, FVector ubicacion, int cantidad) override;
	virtual void SetPelotonEnigma(FString tipo, FVector ubicacion, int cantidad) override;
	virtual class ABatallonAereo* getBatallonInterfaz()const ;
	virtual void JuntaPelotones() ;


};
