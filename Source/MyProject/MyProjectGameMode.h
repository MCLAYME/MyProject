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
	// M�todo BeginPlay
	virtual void BeginPlay() override;
};
