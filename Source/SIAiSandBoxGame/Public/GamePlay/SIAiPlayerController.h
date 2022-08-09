// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SIAiPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIAISANDBOXGAME_API ASIAiPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ASIAiPlayerController();

protected:
	virtual void BeginPlay() override;
};
