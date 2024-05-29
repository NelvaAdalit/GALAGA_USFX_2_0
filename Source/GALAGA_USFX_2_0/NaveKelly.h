// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveKelly.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API ANaveKelly : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveKelly();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* kelly;
	FVector PosicionInicial;
	int  VelocidadMovimiento;

	float Limiteinferior = -580;
	float LimiteSuperior = 300;
	float LimiteIzquierdo = -710;
	float LimiteDerecho = 400;

};
