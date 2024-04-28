// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MovimientoMotorPAA.h"
#include "ChasisPAA.h"	
#include "PlanoParaConstruir.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlanoParaConstruir : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_2_0_API IPlanoParaConstruir
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:


	virtual void setArsenal(FString arsenal) = 0;
	virtual void setCombustibe(FString combustible) = 0;
	virtual void setRestauracion(FString restauracion) = 0;	
	virtual void setCobertizo(FString cobertizo) = 0;	
	virtual void setMovimientoMotorPAA(AMovimientoMotorPAA* MovimientoMotorPAA) = 0;	
	virtual void setChasisPAA(AChasisPAA* ChasisPAA) = 0;
		



	 

	
};
