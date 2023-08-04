// Copyright SericoGames


#include "UI/HUD/AuraHUD.h"

#include "Blueprint/UserWidget.h"

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();

	U CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
}
