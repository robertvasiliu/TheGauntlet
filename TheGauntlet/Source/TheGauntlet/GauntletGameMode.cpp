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

void AGauntletGameMode::OpenGateTimed(AActor* GateActor, float OpenTime)
{
    if (!GateActor) return;

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("OpenGateTimed"));
    }

    GateActor->SetActorEnableCollision(false);

    TArray<UStaticMeshComponent*> Meshes;
    GateActor->GetComponents<UStaticMeshComponent>(Meshes);
    for (auto* Mesh : Meshes)
    {
        Mesh->SetVisibility(false);
    }

    FTimerDelegate TimerDel;
    TimerDel.BindUFunction(this, FName("CloseGate"), GateActor);

    GetWorldTimerManager().SetTimer(
        GateTimerHandle,
        TimerDel,
        OpenTime,
        false
    );
}

void AGauntletGameMode::CloseGate(AActor* GateActor)
{
    if (!GateActor) return;

    GateActor->SetActorEnableCollision(true);

    TArray<UStaticMeshComponent*> Meshes;
    GateActor->GetComponents<UStaticMeshComponent>(Meshes);
    for (auto* Mesh : Meshes)
    {
        Mesh->SetVisibility(true);
    }
}
void AGauntletGameMode::RegisterLeverState(AActor* Lever, bool bIsOn)
{
    if (!Lever || !PuzzleGate) return;
    bool bAllOn = true;

    for (AActor* L : PuzzleLevers)
    {
        if (!L) continue;

    }
}