// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS(ABSTRACT)
class GALAGA_USFX_2_0_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

protected:
	ANaveEnemiga();
	FString NombreNaveEnemiga;
	FString VelocidadNaveEnemiga;
	FVector Posicion;
	FString DanoProducido;
	TArray<FString> ArmasNaveEnemiga;
	float velocidad;
	float limiteInferior;
	FString NombreNave;



public:


	//FString GetNombreNaveEnemiga();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShipMeshComponent;

public:

	float Tiempo_Disparo;
	float Tiempo_Disparo_Generar;
	FVector Distancia_Disparo;

;

};
