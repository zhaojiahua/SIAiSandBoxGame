#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class SIAISANDBOXGAME_API SSIAiMenuWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSIAiMenuWidget)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
};
