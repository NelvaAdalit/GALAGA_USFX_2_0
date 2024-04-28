// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPortaAvionesA.h"
#include "PAvionesTerrestre.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API APAvionesTerrestre : public AActor, public IBuilderPortaAvionesA	
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APAvionesTerrestre();
protected:
		// Called when the game starts or when spawned
	virtual void BeginPlay() override;	

protected:
	// Called when the game starts or when spawned
	virtual void buildArsenal() override ;
	virtual void buildCombustible() override;
	virtual void buildRestauracion() override ;
	virtual void buildPista() override;
	virtual void buildInstalaciones() override;
	virtual void buildModelo() override;
	
	virtual class APortaAviones* getPortaAviones() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:


	


};
