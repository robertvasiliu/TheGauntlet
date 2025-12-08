#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GauntletGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLevelCompleted);

UCLASS()
class THEGAUNTLET_API AGauntletGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AGauntletGameMode();

    UFUNCTION(BlueprintCallable)
    void HandleLevelCompleted(AActor* GoalActor);

    UFUNCTION(BlueprintCallable)
    void HandlePlayerDeath();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

    FTimerHandle GateTimerHandle;
    UFUNCTION(BlueprintCallable, Category = "Gate")
    void OpenGateTimed(class AActor* GateActor, float OpenTime);

    UFUNCTION()
    void CloseGate(class AActor* GateActor);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gate")
        TArray<AActor*> PuzzleLevers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gate")
    AActor* PuzzleGate;

    UFUNCTION(BlueprintCallable, Category = "Gate")
    void RegisterLeverState(AActor* Lever, bool bIsOn);
};
