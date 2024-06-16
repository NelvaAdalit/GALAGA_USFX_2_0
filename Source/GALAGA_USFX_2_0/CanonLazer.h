// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "IVISITABLE.h"
#include "CoreMinimal.h"
#include "ModeloCanon.h"
#include "CanonLazer.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_2_0_API ACanonLazer : public AModeloCanon, public IIVISITABLE
{
	GENERATED_BODY()
public:
	ACanonLazer();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void Accept(IIVISITOR* Visitor) override;

	class AVisitorDisparo* VisitorDisparo;
	class AVisitorMovimientos* VisitorMovimientos;
	class AVisitorGenerarEscudo* VisitorEscudo;



	void AplicarVisitor();


	void Disparar() override {};

};
