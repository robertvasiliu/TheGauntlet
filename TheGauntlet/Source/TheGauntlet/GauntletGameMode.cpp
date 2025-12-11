#include "GauntletGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameInstance.h"
#include "Engine/Engine.h"
#include "Components/StaticMeshComponent.h"

AGauntletGameMode::AGauntletGameMode()
{
    
}
void AGauntletGameMode::HandlePlayerDeath()
{
    if (GEngine)
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, TEXT("GM: HandlePlayerDeath"));

    OnPlayerDied.Broadcast();

    GetWorldTimerManager().SetTimer(
        ReturnToMenuTimerHandle,
        this,
        &AGauntletGameMode::ReturnToMainMenu,
        3.0f,
        false
    );
}

void AGauntletGameMode::HandleLevelCompleted(AActor* GoalActor)
{
    OnLevelCompleted.Broadcast();

    GetWorldTimerManager().SetTimer(
        ReturnToMenuTimerHandle,
        this,
        &AGauntletGameMode::ReturnToMainMenu,
        3.0f,
        false
    );
}
void AGauntletGameMode::ReturnToMainMenu()
{
    if (GEngine)
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("GM: ReturnToMainMenu"));

    if (UGameInstance* GI = GetGameInstance())
    {
        if (UMyGameInstance* MyGI = Cast<UMyGameInstance>(GI))
            MyGI->LoadMainMenu();
    }
}

void AGauntletGameMode::BeginPlay()
{
    Super::BeginPlay();
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

void AGauntletGameMode::RegisterLeverState()
{
    if (!PuzzleGate) return;

    bool bAllOn = true;

    for (AActor* LeverActor : PuzzleLevers)
    {
        if (!LeverActor) continue;

        if (UFunction* Func = LeverActor->FindFunction(FName("IsLeverOn")))
        {
            bool bTemp = false;
            LeverActor->ProcessEvent(Func, &bTemp);
            if (!bTemp)
            {
                bAllOn = false;
                break;
            }
        }
    }

    if (bAllOn)
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("ALL ON -> DESTROY"));
        }

        if (PuzzleGate)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan,
                *FString::Printf(TEXT("Destroy: %s"), *PuzzleGate->GetName()));
            PuzzleGate->Destroy();
        }
    }
    else
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, TEXT("NOT ALL ON"));
        }
    }
}
