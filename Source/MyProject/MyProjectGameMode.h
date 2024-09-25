#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyProjectGameMode.generated.h"

UCLASS()
class MYPROJECT_API AMyProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Constructor
	AMyProjectGameMode();

protected:
	// Método BeginPlay
	virtual void BeginPlay() override;
};
