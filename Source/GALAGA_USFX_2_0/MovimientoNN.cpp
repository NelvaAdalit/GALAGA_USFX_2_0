// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoNN.h"

// Sets default values for this component's properties
UMovimientoNN::UMovimientoNN()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
	MovimientoSig = 2;
	bMovimientoDerecha = true;
	bMovimientoArriba = true;


}
// Called when the game starts
void UMovimientoNN::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoNN::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* Parent = GetOwner();
	if (Parent) {
		auto NuevaPosicion = Parent->GetActorLocation() + FVector(bMovimientoDerecha ? MovimientoSig : -MovimientoSig,
			bMovimientoArriba ? MovimientoSig : -MovimientoSig, 0.0f);
		Parent->SetActorLocation(NuevaPosicion);

		if (bMovimientoDerecha && GetOwner()->GetActorLocation().X >= 900.0f)
		{
			bMovimientoDerecha = false;
		}
		else if (!bMovimientoDerecha && GetOwner()->GetActorLocation().X <= 0.0f)
		{
			bMovimientoDerecha = true;
		}


		if (bMovimientoArriba && GetOwner()->GetActorLocation().Y >= 1900.0f)
		{
			bMovimientoArriba = false;
		}
		else if (!bMovimientoArriba && GetOwner()->GetActorLocation().Y <= 0.0f)
		{
			bMovimientoArriba = true;
		}
	
	
	
	}
}

