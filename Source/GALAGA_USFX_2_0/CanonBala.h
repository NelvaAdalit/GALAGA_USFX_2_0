// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModeloCanon.h"
#include "CanonBala.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_2_0_API ACanonBala : public AModeloCanon
{
	GENERATED_BODY()
public:
	ACanonBala();
	virtual void Tick(float DeltaTime) override;
	virtual void Disparar() override;
	virtual void ResetFire() override;
	
};
