// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BasicGhost.h"
#include "BTTask_CheckDistance.generated.h"

UENUM(BlueprintType)
enum class ECondition : uint8
{
	LessThen = 0		UMETA(Display = "<"),
	GreaterThen = 1		UMETA(Display = ">"),
};

/**
 * 
 */
UCLASS()
class MIDNIGHTCLEANUP_API UBTTask_CheckDistance : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Condition")
	ECondition TargetCondition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Condition")
	float TargetDistance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Condition")
	EGhostState TargetState;
};
