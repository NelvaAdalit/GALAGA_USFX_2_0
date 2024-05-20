// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeCanon.h"
#include "ModeloCanon.h"
#include "Kismet/GameplayStatics.h"
#include "CanonBalaNv1.h"
#include "CanonLazerNv1.h"
#include "CanonBombaNv1.h"
#include "CanonHieloNv1.h"
#include "CanonBalaNv2.h"
#include "CanonLazerNv2.h"
#include "CanonBombaNv2.h"
#include "CanonHieloNv2.h"
#include "CanonBalaNv3.h"
#include "CanonLazerNv3.h"
#include "CanonBombaNv3.h"
#include "CanonHieloNv3.h"
// Sets default values
AFacadeCanon::AFacadeCanon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TopLeftCorner = FVector(-800.f, -800.f, 250.f);
	TopRightCorner = FVector(-800.f, -100.f, 250.f);
	DownLeftCorner = FVector(-800.f, 700.f, 250.f);
	DownRightCorner = FVector(-800.f, 250.f, 250.f);
	NivelInicial= 1;
	IntervaloNivel = 0.5f;
	MaxNivel = 3;
}

// Called when the game starts or when spawned
void AFacadeCanon::BeginPlay()
{
	Super::BeginPlay();
	SpawnCanons(NivelInicial);
	GetWorldTimerManager().SetTimer(IntervaloNivelimerHandle, this, &AFacadeCanon::IncreaseNivel, IntervaloNivel, true);
}

// Called every frame
void AFacadeCanon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeCanon::SpawnCanons(int32 Nivel)
{
    TSubclassOf<AModeloCanon> BalaClass;
    TSubclassOf<AModeloCanon> LazerClass;
    TSubclassOf<AModeloCanon> BmbaClass;
    TSubclassOf<AModeloCanon> HieloClass;

    // Determinar las clases de ca�ones seg�n el nivel
    switch (Nivel)
    {
    case 1:
        BalaClass = ACanonBalaNv1::StaticClass();
        LazerClass = ACanonLazerNv1::StaticClass();
        BmbaClass = ACanonBombaNv1::StaticClass();
        HieloClass = ACanonHieloNv1::StaticClass();
        break;
    case 2:
        BalaClass = ACanonBalaNv2::StaticClass();
        LazerClass = ACanonLazerNv2::StaticClass();
        BmbaClass = ACanonBombaNv2::StaticClass();
        HieloClass = ACanonHieloNv2::StaticClass();
        break;
    case 3:
        BalaClass = ACanonBalaNv3::StaticClass();
        LazerClass = ACanonLazerNv3::StaticClass();
        BmbaClass = ACanonBombaNv3::StaticClass();
        HieloClass = ACanonHieloNv3::StaticClass();
        break;
        return;
    }

    SpawnCanon(BalaClass, TopLeftCorner);
    SpawnCanon(LazerClass, TopRightCorner);
    SpawnCanon(BmbaClass, DownLeftCorner);
    SpawnCanon(HieloClass, DownRightCorner);

}

void AFacadeCanon::SpawnCanon(TSubclassOf<AModeloCanon> CanonClass, FVector Location)
{
    if (GetWorld())
    {
        FActorSpawnParameters SpawnParams;
        GetWorld()->SpawnActor<AModeloCanon>(CanonClass, Location, FRotator::ZeroRotator, SpawnParams);
    }

}

void AFacadeCanon::IncreaseNivel()
{
    if (NivelInicial < MaxNivel)
    {
        NivelInicial++;
        CleanUpCanones(); //borrar canones de otros niveles antes de spawnear los nuevos
        SpawnCanons(NivelInicial);
    }

}

void AFacadeCanon::CleanUpCanones()
{
    TArray<AActor*> BuscarCanones;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AModeloCanon::StaticClass(), BuscarCanones);
    //agarro todos los canones encontrados y los destruyo 
    for (AActor* Actor : BuscarCanones)
    {
        Actor->Destroy();
    }
}

