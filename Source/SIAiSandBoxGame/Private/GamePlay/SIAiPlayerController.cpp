#include "GamePlay/SIAiPlayerController.h"

ASIAiPlayerController::ASIAiPlayerController()
{
	bShowMouseCursor = true;
}

void ASIAiPlayerController::BeginPlay()
{
	FInputModeUIOnly inputMode;
	inputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	SetInputMode(inputMode);
}
