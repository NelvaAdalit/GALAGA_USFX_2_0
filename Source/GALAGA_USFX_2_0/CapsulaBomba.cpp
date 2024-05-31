// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaBomba.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "GALAGA_USFX_2_0Pawn.h"

// Sets default values
ACapsulaBomba::ACapsulaBomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
		// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Life.Life'"));
	kelly = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	kelly->SetupAttachment(RootComponent);
	kelly->SetStaticMesh(ShipMesh.Object);
	RootComponent = kelly;//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
	VelocidadMovimiento = -600;
	SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));

	Projectil_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil_Mesh"));
	RootComponent = Projectil_Mesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));
	if (MeshAsset.Succeeded())
	{
		Projectil_Mesh->SetStaticMesh(MeshAsset.Object);

	}
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		Explosion_Particles = ParticleAsset.Object;
	}
	SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (SoundAsset.Succeeded())
	{
		Projectil_Sound = SoundAsset.Object;
	}
	Projectil_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectil_Movement"));
	Projectil_Movement->InitialSpeed = 750.0f;
	Projectil_Movement->MaxSpeed = 850.0f;
	Projectil_Movement->bRotationFollowsVelocity = true;
	Projectil_Movement->bShouldBounce = false;
	Projectil_Movement->ProjectileGravityScale = 0.0f;
	Projectil_Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectil_Collision"));
	Projectil_Collision->SetupAttachment(RootComponent);
	InitialLifeSpan = 5.f;
	Projectil_Collision->SetCapsuleHalfHeight(160.0f);
	Projectil_Collision->SetCapsuleRadius(160.0f);
}

// Called when the game starts or when spawned
void ACapsulaBomba::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
	
}

// Called every frame
void ACapsulaBomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * VelocidadMovimiento * DeltaTime;

	// Check if the new location is within the bounds
	if (NewLocation.X < LimiteIzquierdo)
	{
		NewLocation.X = LimiteDerecho;
	}
	else if (NewLocation.X > LimiteDerecho)
	{
		NewLocation.X = LimiteIzquierdo;
	}

	if (NewLocation.Y < Limiteinferior)
	{
		NewLocation.Y = LimiteSuperior;
	}
	else if (NewLocation.Y > LimiteSuperior)
	{
		NewLocation.Y = Limiteinferior;
	}

	SetActorLocation(NewLocation);
}

void ACapsulaBomba::Set_Danio(float Danio)
{
	DanioProvocado = Danio;
}

void ACapsulaBomba::NotifyActorBeginOverlap(AActor* OtherActor)
{
	AGALAGA_USFX_2_0Pawn* Jugador = Cast<AGALAGA_USFX_2_0Pawn>(OtherActor);

	if (Jugador)
	{
		DestroyPROYECTIL();
		Jugador->Damage(DanioProvocado);
	}
}

void ACapsulaBomba::DestroyPROYECTIL()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Projectil_Sound, GetActorLocation());
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Particles, GetActorLocation());
	Destroy();

}

