// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabriNaves.h"
#include "FabriNaveArea.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_2_0_API AFabriNaveArea : public AFabriNaves
{
	GENERATED_BODY()
public:
	virtual ANaveEnemiga* CrearNaveEnemiga(FString NaveEnemigaSKU) override;

	
};
