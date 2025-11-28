#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "NBPlayerState.generated.h"

/**
 *
 */
UCLASS()
class NBGAME_API ANBPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ANBPlayerState();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	FString GetPlayerInfoString();

public:
	UPROPERTY(Replicated)
	FString PlayerNameString;

	UPROPERTY(Replicated)
	int32 CurrentGuessCount;

	UPROPERTY(Replicated)
	int32 MaxGuessCount;

	UPROPERTY(Replicated, BlueprintReadOnly)
	float CurrentGuessTime;

	UPROPERTY(Replicated, BlueprintReadOnly)
	float MaxGuessTime;

	UPROPERTY(Replicated)
	uint8 bDidParticipateThisTurn : 1;

};