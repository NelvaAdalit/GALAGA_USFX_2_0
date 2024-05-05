// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GestorNaves.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGestorNaves : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_2_0_API IGestorNaves
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ConstruirPelotonAlfa() = 0;
	virtual void ConstruirPelotonBeta() = 0;
	virtual void ConstruirPelotonOmega() = 0;
	virtual void ConstruirPelotonEnigma() = 0;
	virtual class ABatallonAereo* getBatallonInterfaz()const = 0;
};
