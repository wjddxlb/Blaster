#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterOverlay.generated.h"

UCLASS()
class BLASTER_API UCharacterOverlay : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidgt))
	class UProgressBar* HealthBar;

	UPROPERTY(meta = (BindWidgt))
	class UTextBlock* HealthText;

	UPROPERTY(meta = (BindWidgt))
	UTextBlock* ScoreAmount;

	UPROPERTY(meta = (BindWidgt))
	UTextBlock* DefeatsAmount;

};
