#include "GamePlay/SIAiGameMode.h"
#include "GamePlay/SIAiPlayerController.h"
#include "UIs/SIAiHUD.h"

ASIAiGameMode::ASIAiGameMode()
{
	PlayerControllerClass = ASIAiPlayerController::StaticClass();
	HUDClass = ASIAiHUD::StaticClass();
}
