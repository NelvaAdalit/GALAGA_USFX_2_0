// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilNaveEnemiga.h"


// Sets default values
AProyectilNaveEnemiga::AProyectilNaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProyectilMesh(TEXT("StaticMesh'/Game/Meshes/BulletLevel1.BulletLevel1'"));

	ProyectilBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProyectilMesh"));
	ProyectilBase->SetStaticMesh(ProyectilMesh.Object);
	ProyectilBase->SetupAttachment(RootComponent);
	ProyectilBase->BodyInstance.SetCollisionProfileName("Proyectile");
	ProyectilBase->OnComponentHit.AddDynamic(this, &AProyectilNaveEnemiga::OnHit);
	RootComponent = ProyectilBase;
	
	ProyectilBase->SetWorldScale3D(FVector(1.25f, 1.25f, 1.25f)); // Ejemplo: escalar el proyectil
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = ProyectilBase;
	ProjectileMovement->InitialSpeed = 2000.0f;
	ProjectileMovement->MaxSpeed = 2000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.0f;

	Dano = 10.0f;
	InitialLifeSpan = 3.0f;
}

void AProyectilNaveEnemiga::FireInDirection(FVector& ShootDirection)
{
	ProjectileMovement->Velocity = ShootDirection * ProjectileMovement->InitialSpeed;
}


void AProyectilNaveEnemiga::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
		Destroy();
}

// Called when the game starts or when spawned
void AProyectilNaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilNaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

