// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveKelly.h"
#include "BuilderNaveNodriza.h"
#include "DirectorDeNaveNodriza.generated.h"
UCLASS()
class GALAGA_USFX_2_0_API ADirectorDeNaveNodriza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorDeNaveNodriza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	ANaveKelly* NaveNodriza(IBuilderNaveNodriza*Nave);
	ANaveKelly* NaveNodrizaMarkarean01(IBuilderNaveNodriza*Nave);
	ANaveKelly*NaveNodrizaSergev(IBuilderNaveNodriza*Nave);

};
