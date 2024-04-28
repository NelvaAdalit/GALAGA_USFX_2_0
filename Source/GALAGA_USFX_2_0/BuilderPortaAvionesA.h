// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuilderPortaAvionesA.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderPortaAvionesA : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_2_0_API IBuilderPortaAvionesA
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void buildArsenal() = 0;	
	virtual void buildCombustible() = 0;	
	virtual void buildRestauracion() = 0;	
	virtual void buildPista() =0 ;
	virtual void buildInstalaciones() = 0;
	virtual void buildModelo() = 0;	
	virtual class APortaAviones* getPortaAviones() = 0;	



};
