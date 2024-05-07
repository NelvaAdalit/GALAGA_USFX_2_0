// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNaveNodriza.h"
#include "CascoNN.h"
#include "EscudoNN.h"
#include "PatrullaEnigmaNN.h"
#include "ArmaNN.h"
#include "MovimientoNN.h"
#include "NaveALFAN1.h"
#include "NaveNodriza.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API ANaveNodriza : public AActor, public IBuilderNaveNodriza
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANaveNodriza();
	//puntero a
	int vida;

	class ANaveALFAN1* NaveFinal;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:


	virtual void Construir_Casco() override;
	void virtual Construir_Escudo() override;
	void virtual Construir_PatrullaEnigmaNN() override;
	void virtual Construir_Arma() override;
	 ANaveALFAN1* devolverNave();

	
private:
protected:
	int velocidad;
	
};