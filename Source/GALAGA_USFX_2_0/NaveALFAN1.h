// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveALFAN1.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API ANaveALFAN1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveALFAN1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	/*float TiempodeDisparo;
	float TiempodeDisparoGenerar;
	FVector DistanciadeDisparo;*/

	float Tiempo_Disparo;
	float Tiempo_Disparo_Generar;
	FVector Distancia_Disparo;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaAlfa;

};
