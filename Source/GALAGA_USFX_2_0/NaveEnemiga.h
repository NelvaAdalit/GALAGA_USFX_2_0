// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
protected:
	ANaveEnemiga();
	FString NombreNaveEnemiga;
	FString VelocidadNaveEnemiga;
	FString DanoProducido;
	TArray<FString> ArmasNaveEnemiga;
public:
	void mover();
	void disparo();
	void Escudo();
	FString GetNombreNaveEnemiga();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShipMeshComponent;

;

};
