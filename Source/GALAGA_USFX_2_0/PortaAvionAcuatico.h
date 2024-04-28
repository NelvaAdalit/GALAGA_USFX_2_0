// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPorAvAcu.h"
#include "PortaAvionAcuatico.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API APortaAvionAcuatico : public AActor, public IBuilderPorAvAcu
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortaAvionAcuatico();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	virtual void buildArsenal() override;
	virtual void buildCombustible() override;
	virtual void buildRestauracion() override;
	virtual void buildPista() override;
	virtual void buildInstalaciones() override;
	virtual void buildModelo() override;

	virtual class APortaAviones* getPortaAviones() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
