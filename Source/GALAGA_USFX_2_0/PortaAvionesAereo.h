// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanoParaConstruir.h"
#include "MovimientoMotorPAA.h"
#include "PortaAvionesAereo.generated.h"

class ChasisPAA;
class MovimientoMotorPAA;



UCLASS()
class GALAGA_USFX_2_0_API APortaAvionesAereo : public AActor, public IPlanoParaConstruir
{
	GENERATED_BODY()



public:	
	// Sets default values for this actor's propertieaua
	APortaAvionesAereo();
	
private:

	/*FString arsenal;
	FString combustible;	
	FString restauracion;	
	FString cobertizo;	*/
	ChasisPAA* chasisPAA;
	MovimientoMotorPAA* movimietoMotor;
	



public:
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void setArsenal(FString arsenal);
	virtual void setCombustibe(FString combustible);
	virtual void setRestauracion(FString restauracion);
	virtual void setCobertizo(FString cobertizo);
	virtual void setMovimientoMotorPAA(AMovimientoMotorPAA* MovimientoMotorPAA);
	virtual void setChasisPAA(AChasisPAA* ChasisPAA);


};
