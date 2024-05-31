// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "CapsulaBomba.generated.h"
class UStaticMeshComponent;
UCLASS()
class GALAGA_USFX_2_0_API ACapsulaBomba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsulaBomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//|| COMPONENTES DE RENDERIZADO ||

//Componente raiz que controlara los demas componentes
	UPROPERTY(EditAnywhere)
	class USceneComponent* DefaulSceneRoot;

	//Componente de Malla para el proyectil
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Projectile")
	class UStaticMeshComponent* Projectil_Mesh;

	//Componente de Movimiento para el proyectil
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
	class UProjectileMovementComponent* Projectil_Movement; // movimiento

	//Componente de colision para el proyectil
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class UCapsuleComponent* Projectil_Collision; // para colisiones 

	//CREAR UN COMPONENTE DE COLISION Y SONIDO 

	//Componente de sonido para el proyectil
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class USoundBase* Projectil_Sound; // para sonido

	UPROPERTY(EditAnywhere, Category = "Projectile")
	class UParticleSystem* Explosion_Particles; // para explosión


public:



	float DanioProvocado;

	void Set_Danio(float Danio);

	virtual void NotifyActorBeginOverlap(AActor* OtherActor);

	virtual void DestroyPROYECTIL();
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
