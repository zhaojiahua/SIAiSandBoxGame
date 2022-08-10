#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class SIAISANDBOXGAME_API SSIAiMenuHUDWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSIAiMenuHUDWidget)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
};
