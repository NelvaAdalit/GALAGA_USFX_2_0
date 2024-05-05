// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNaveNodriza.h"
#include "CascoNN.h"
#include "EscudoNN.h"
#include "PatrullaEnigmaNN.h"
#include "ArmaNN.h"
#include "NaveKelly.h"
#include "NaveNodrizaMarkarean01.generated.h"


UCLASS()
class GALAGA_USFX_2_0_API ANaveNodrizaMarkarean01 : public AActor, public IBuilderNaveNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveNodrizaMarkarean01();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int vida;
public:

	virtual void Construir_Caso();
	void virtual Construir_Escudo();
	void virtual Construir_PatrullaEnigmaNN();
	void virtual Construir_Arma();
	virtual  ANaveKelly* GetNave();

};
