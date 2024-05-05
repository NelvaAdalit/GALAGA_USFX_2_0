#include "NaveNodrizaBase.h"

// Sets default values
ANaveNodrizaBase::ANaveNodrizaBase()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza5.Nodriza5'"));
    MeshNaveNodrizaBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
    MeshNaveNodrizaBase->SetupAttachment(RootComponent);
    MeshNaveNodrizaBase->SetStaticMesh(ShipMesh.Object);
    RootComponent = MeshNaveNodrizaBase;
    SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
    SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

    VelocidadMovimiento =1.0f;
}

// Called when the game starts or when spawned
void ANaveNodrizaBase::BeginPlay()
{
    Super::BeginPlay();

    // Set the initial position of the actor
    PosicionInicial = GetActorLocation();
}

// Called every frame
void ANaveNodrizaBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Move the actor based on its velocity
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

