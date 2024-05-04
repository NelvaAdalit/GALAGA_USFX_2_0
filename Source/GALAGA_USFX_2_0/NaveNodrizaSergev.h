// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNaveNodriza.h"
#include "NaveKelly.h"
#include "CascoNN.h"
#include "EscudoNN.h"
#include "PropulsoresNN.h"
#include "ArmaNN.h"
#include "NaveNodrizaBase.h"
#include "NaveNodrizaSergev.generated.h"
UCLASS()
class GALAGA_USFX_2_0_API ANaveNodrizaSergev : public AActor, public IBuilderNaveNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveNodrizaSergev();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void Construir_Caso();
	void virtual Construir_Escudo();
	void virtual Construir_Propulsores();
	void virtual Construir_Arma();
	void virtual Construir_Movimiento() override;
	virtual  ANaveKelly* GetNave();

};
