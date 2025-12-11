#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GauntletGameMode.generated.h"
//
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerDied);
//
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLevelCompletedSimple);
UCLASS()
class THEGAUNTLET_API AGauntletGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    FTimerHandle ReturnToMenuTimerHandle;  
    UFUNCTION()
    void ReturnToMainMenu();
    AGauntletGameMode();

    UFUNCTION(BlueprintCallable)
    void HandleLevelCompleted(AActor* GoalActor);

    UFUNCTION(BlueprintCallable)
    void HandlePlayerDeath();   
    virtual void BeginPlay() override;

    FTimerHandle GateTimerHandle;

    UFUNCTION(BlueprintCallable, Category = "Gate")
    void OpenGateTimed(class AActor* GateActor, float OpenTime);

    UFUNCTION()
    void CloseGate(class AActor* GateActor);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Puzzle")
    TArray<AActor*> PuzzleLevers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Puzzle")
    AActor* PuzzleGate;

    UFUNCTION(BlueprintCallable, Category = "Puzzle")
    void RegisterLeverState();

public:
    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnPlayerDied OnPlayerDied;

    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnLevelCompletedSimple OnLevelCompleted;
};