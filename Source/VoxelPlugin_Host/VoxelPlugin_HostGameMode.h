// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VoxelPlugin_HostGameMode.generated.h"

/**
 *  Simple GameMode for a first person game
 */
UCLASS(abstract)
class AVoxelPlugin_HostGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AVoxelPlugin_HostGameMode();
};



