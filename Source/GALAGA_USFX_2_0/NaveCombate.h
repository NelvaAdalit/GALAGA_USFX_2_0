// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveCombate.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_2_0_API ANaveCombate : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveCombate();
	FString NombreNave;
public:

	virtual void Tick(float DeltaTime);
protected:
	virtual void Mover(float DeltaTime);
	
};
