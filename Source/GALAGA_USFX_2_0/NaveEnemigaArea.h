// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "MovimientoNN.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "NaveEnemigaArea.generated.h"
/**
 * 
 */
UCLASS()
class GALAGA_USFX_2_0_API ANaveEnemigaArea : public ANaveEnemiga
{
	GENERATED_BODY()
public:
	ANaveEnemigaArea();
	FString NombreNave;

public:
	
	virtual void Tick(float DeltaTime) override;

	UMovimientoNN* Movimiento;
};
