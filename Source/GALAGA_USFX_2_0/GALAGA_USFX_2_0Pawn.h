// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IBounceBall.h"
#include "GALAGA_USFX_2_0Pawn.generated.h"

UCLASS(Blueprintable)
class AGALAGA_USFX_2_0Pawn : public APawn, public IIBounceBall
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	AGALAGA_USFX_2_0Pawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;
	
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	UPROPERTY(EditAnywhere, Category = "Particula de Explosion")
	class UParticleSystem* ShipExplosion;
	UPROPERTY(EditAnywhere, Category = "Audio_Explosion")
	class USoundBase* ExplosionSoundShip;
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
protected:
	int ContImpacto;
public:
	void recibirImpacto();
	void CheckDestroy();
	int VidasRestantes = 3;

	int GetVidasRestantes() const { return VidasRestantes; }
	void AumentarVida()
	{
		if (VidasRestantes > 0)
			VidasRestantes++;
	}
	// Funci�n para reducir una vida del pawn
	void ReducirVida()
	{
		if (VidasRestantes > 0)
			VidasRestantes--;
	}
	void Jump();
	//void Teleport();
	FVector posicionInicial;
	void Energia();
	FTimerHandle TimerHandle_Energia;

	virtual void BeginPlay() override;
public:

	class IIBounceBall*BounceBall;
	void SetBounceBall(AActor* _Adaptador);
	void Lanzar() override;

public:
	float LifePawn;
	void Damage(float Damage);
	void Componentes_Colision();
	float GetHelth() const { return LifePawn; }
};


