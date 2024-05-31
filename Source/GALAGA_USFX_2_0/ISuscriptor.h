// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ISuscriptor.generated.h"
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UISuscriptor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_2_0_API IISuscriptor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void RENOVAR (FString _accion) = 0;
	//que me va aservir para enviar acciones a mis suscriptores

};
