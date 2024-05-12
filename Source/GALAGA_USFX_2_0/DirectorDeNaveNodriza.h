// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveALFAN1.h"
#include "BuilderNaveNodriza.h"
#include "DirectorDeNaveNodriza.generated.h"
UCLASS()
class GALAGA_USFX_2_0_API ADirectorDeNaveNodriza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorDeNaveNodriza();

	IBuilderNaveNodriza* BuilderNaveNN;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

	void ConstruirNAVENODRIZA(AActor*_naveNODRIZA);
	void establecerNavenodriza();
    class ANaveALFAN1* devolverNave() ;


};
