#include "VisitorGenerarEscudo.h"
#include "EscudoVisitor.h"
#include "CanonHielo.h"
#include "CanonLazer.h"
#include "TimerManager.h"

// Sets default values
AVisitorGenerarEscudo::AVisitorGenerarEscudo()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    bEscudo = true;
    EscudoActivo = nullptr;
    CanonHielo2 = nullptr;
}

// Called when the game starts or when spawned
void AVisitorGenerarEscudo::BeginPlay()
{
    Super::BeginPlay();

    // Start the timer to generate the shield after 5 seconds
    GetWorld()->GetTimerManager().SetTimer(HandleActivarEscudo, this, &AVisitorGenerarEscudo::GenerarEscudoHielo, 5.0f, false);
}

// Called every frame
void AVisitorGenerarEscudo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Update the shield's location to match the CanonHielo's location
    if (EscudoActivo && CanonHielo2)
    {
        FVector NewLocation = CanonHielo2->GetActorLocation();
        EscudoActivo->SetActorLocation(NewLocation);
    }
    if (EscudoActivo && CanonLazer2)
    {

        FVector NewLocation = CanonLazer2->GetActorLocation();
        EscudoActivo->SetActorLocation(NewLocation);

    }
}

void AVisitorGenerarEscudo::Visit(ACanonHielo* CanonHielo)
{
    CanonHielo2 = CanonHielo;
}

void AVisitorGenerarEscudo::Visit(ACanonLazer* CanonLazer)
{
    CanonLazer2 = CanonLazer;
}

void AVisitorGenerarEscudo::GenerarEscudoHielo()
{
    if (CanonHielo2 && bEscudo)
    {
        // Spawn the shield actor at CanonHielo's location
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        FRotator Rotation = FRotator::ZeroRotator;
        FVector Location = CanonHielo2->GetActorLocation();
        EscudoActivo = GetWorld()->SpawnActor<AEscudoVisitor>(AEscudoVisitor::StaticClass(), Location, Rotation, SpawnParams);

        if (EscudoActivo)
        {
            GetWorld()->GetTimerManager().SetTimer(HandleDesactivarEscudo, this, &AVisitorGenerarEscudo::DesactivarEscudo, 5.0f, false);
        }
    }
    if (CanonLazer2 && bEscudo)
    {
       
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        FRotator Rotation = FRotator::ZeroRotator;
        FVector Location = CanonLazer2->GetActorLocation();
        EscudoActivo = GetWorld()->SpawnActor<AEscudoVisitor>(AEscudoVisitor::StaticClass(), Location, Rotation, SpawnParams);

        if (EscudoActivo)
        {
            
            GetWorld()->GetTimerManager().SetTimer(HandleDesactivarEscudo, this, &AVisitorGenerarEscudo::DesactivarEscudo, 5.0f, false);
        }
    }


}


void AVisitorGenerarEscudo::DesactivarEscudo()
{
    if (EscudoActivo)
    {
        EscudoActivo->Destroy();
        EscudoActivo = nullptr;
    }
}









