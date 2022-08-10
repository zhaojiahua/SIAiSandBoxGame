#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SIAiHUD.generated.h"

UCLASS()
class SIAISANDBOXGAME_API ASIAiHUD : public AHUD
{
	GENERATED_BODY()
public:
	ASIAiHUD();
	TSharedPtr<class SSIAiMenuHUDWidget> MenuHUDWidget;
};
