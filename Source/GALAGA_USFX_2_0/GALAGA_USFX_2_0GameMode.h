// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GALAGA_USFX_2_0GameMode.generated.h"

UCLASS(MinimalAPI)
class AGALAGA_USFX_2_0GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA_USFX_2_0GameMode();
protected:
	virtual void BeginPlay() override;	
public:
	virtual void Tick(float DeltaTime) override;	
};



