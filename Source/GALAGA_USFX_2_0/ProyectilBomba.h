// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ProyectilBomba.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API AProyectilBomba : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AProyectilBomba();
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaProyectil;

	float velocidadDisparo;
	float Disparodano;
	float Colision = 0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public:
	FORCEINLINE float GetVelocidadDisparo() const { return velocidadDisparo; }
	FORCEINLINE float GetDisparoDano() const { return Disparodano; }
	FORCEINLINE void SetVelocidadDisparo(float _velocidad) { velocidadDisparo = _velocidad; }

	void movimento(float DeltaTime);
	void TiempoDisparo(float Colision);

	//void CreateIceArea(FVector Location);
	//UFUNCTION()
	//void OnIceZoneOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	//void DestroyIceZone();
	//void CreateIceArea(FVector Location);
	//UFUNCTION()
	//void OnIceZoneOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	//void DestroyIceZone();

	//FTimerHandle TimerHandle;
	//USphereComponent* IceZone;
};
