#include "GauntletGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameInstance.h"
#include "Engine/Engine.h"

AGauntletGameMode::AGauntletGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AGauntletGameMode::HandleLevelCompleted(AActor* GoalActor)
{
    if (UGameInstance* GI = GetGameInstance())
    {
        if (UMyGameInstance* MyGI = Cast<UMyGameInstance>(GI))
        {
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Cast GI OK"));
            }

            MyGI->LoadMainMenu();
        }
        else if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Cast GI FAILED"));
        }
    }
}
void AGauntletGameMode::BeginPlay()
{
    Super::BeginPlay();
}
void AGauntletGameMode::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
    if (!PlayerPawn) return;
    const FVector Loc = PlayerPawn->GetActorLocation();
    if (Loc.Z < -10.f)
    {
        HandlePlayerDeath();
    }
}
void AGauntletGameMode::HandlePlayerDeath()
{
    if (UGameInstance* GI = GetGameInstance())
    {
        if (UMyGameInstance* MyGI = Cast<UMyGameInstance>(GI))
        {
            MyGI->LoadMainMenu();
        }
    }
}
