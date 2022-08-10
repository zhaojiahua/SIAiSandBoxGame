#include "UIs/SIAiHUD.h"
#include "UIs/SSIAiMenuHUDWidget.h"
#include "SlateBasics.h"

ASIAiHUD::ASIAiHUD()
{
	if (GEngine&&GEngine->GameViewport)
	{
		SAssignNew(MenuHUDWidget, SSIAiMenuHUDWidget);
		GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MenuHUDWidget.ToSharedRef()));
	}
}
