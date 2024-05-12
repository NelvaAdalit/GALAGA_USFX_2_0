// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_2_0Pawn.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "GameFramework/PlayerInput.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


const FName AGALAGA_USFX_2_0Pawn::MoveForwardBinding("MoveForward");
const FName AGALAGA_USFX_2_0Pawn::MoveRightBinding("MoveRight");
const FName AGALAGA_USFX_2_0Pawn::FireForwardBinding("FireForward");
const FName AGALAGA_USFX_2_0Pawn::FireRightBinding("FireRight");

AGALAGA_USFX_2_0Pawn::AGALAGA_USFX_2_0Pawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.2f;
	bCanFire = true;
	ContImpacto = 0;
	SetActorLocation(FVector(-885.0f, -122.0f, 200.0f));// posicion inicial del jugador  
	posicionInicial = GetActorLocation();

}

void AGALAGA_USFX_2_0Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void AGALAGA_USFX_2_0Pawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
}

void AGALAGA_USFX_2_0Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AGALAGA_USFX_2_0Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGALAGA_USFX_2_0Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void AGALAGA_USFX_2_0Pawn::ShotTimerExpired()
{
	bCanFire = true;
}

void AGALAGA_USFX_2_0Pawn::recibirImpacto()
{
	ContImpacto++;

	// Verificar si el pawn debe ser destruido
	CheckDestroy();
}

void AGALAGA_USFX_2_0Pawn::CheckDestroy()
{
	if (ContImpacto == 3)
	{
		FString Message = FString::Printf(TEXT("GAME OVER"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, Message);

		Destroy();

	}
}

void AGALAGA_USFX_2_0Pawn::Jump()
{
}

void AGALAGA_USFX_2_0Pawn::Energia()
{
	MoveSpeed = 2000.0f;
	//GetWorldTimerManager().SetT
}

void AGALAGA_USFX_2_0Pawn::BeginPlay()
{
	Super::BeginPlay();
}

void AGALAGA_USFX_2_0Pawn::SetBounceBall(AActor* _Adaptador)
{
	BounceBall=Cast<IIBounceBall>(_Adaptador);
	if (!BounceBall) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT("No se pudo castear")));
		return;
	
	}

}

void AGALAGA_USFX_2_0Pawn::Lanzar()
{
	BounceBall->Lanzar();

}

