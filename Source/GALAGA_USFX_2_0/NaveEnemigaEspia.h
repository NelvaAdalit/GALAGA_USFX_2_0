// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */

UCLASS()
class GALAGA_USFX_2_0_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveEnemigaEspia();

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
public:
	void Mover(float DeltaTime);
	virtual void Disparar() override;
	virtual void ResetFire() override;
};
