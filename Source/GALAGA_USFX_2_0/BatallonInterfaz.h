// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BatallonInterfaz.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBatallonInterfaz : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_2_0_API IBatallonInterfaz
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void SetPelotonAlfa(FString tipo,FVector ubicacion,int cantidad) = 0;
	virtual void SetPelotonBeta(FString tipo, FVector ubicacion, int cantidad) = 0;
	virtual void SetPelotonOmega(FString tipo, FVector ubicacion, int cantidad) = 0;
	virtual void SetPelotonEnigma(FString tipo, FVector ubicacion, int cantidad) = 0;
	virtual class ABatallonAereo* getBatallonInterfaz()const = 0;
};
