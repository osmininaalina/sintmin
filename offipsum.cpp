// NewTask.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NewTask.generated.h"

UCLASS()
class MYGAME_API UNewTask : public UObject
{
    GENERATED_BODY()

public:
    // PlayerController property
    UPROPERTY()
    APlayerController* PlayerController;

    // Other properties and methods...
};

// NewTask.cpp
#include "NewTask.h"

// Implementation of UNewTask methods...
