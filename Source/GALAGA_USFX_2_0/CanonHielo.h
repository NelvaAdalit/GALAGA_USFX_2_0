// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "IVISITABLE.h"
#include "IVISITOR.h"
#include "ModeloCanon.h"
#include "CanonHielo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_2_0_API ACanonHielo : public AModeloCanon, public IIVISITABLE
{
	GENERATED_BODY()
	
public:
	ACanonHielo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Accept(IIVISITOR* Visitor) override;
	
	class AVisitorDisparo* VisitorDisparo;


	virtual void Tick(float DeltaTime) override;
	virtual void Disparar() override;
	virtual void ResetFire() override;

};
