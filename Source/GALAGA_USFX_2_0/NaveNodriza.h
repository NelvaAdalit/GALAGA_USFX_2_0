// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNaveNodriza.h"
#include "CascoNN.h"
#include "EscudoNN.h"
#include "PropulsoresNN.h"
#include "ArmaNN.h"
#include "MovimientoNN.h"
#include "NaveKelly.h"
#include "NaveNodriza.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API ANaveNodriza : public AActor, public IBuilderNaveNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveNodriza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:


	virtual void Construir_Caso() override ;
	void virtual Construir_Escudo() override;
	void virtual Construir_Propulsores() override;
	void virtual Construir_Arma() override;
	void virtual Construir_Movimiento() override;
	virtual  ANaveKelly* GetNave() override;
	

};