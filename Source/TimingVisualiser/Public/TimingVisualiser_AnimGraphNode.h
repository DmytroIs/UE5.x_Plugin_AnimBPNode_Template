// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "Animation/AnimInstance.h"
#include "AnimationGraphSchema.h"
#include "TimingVisualiser_AnimNode.h"

#include "TimingVisualiser_AnimGraphNode.generated.h"

/**
 * 
 */
UCLASS()
class TIMINGVISUALISER_API UTimingVisualiser_AnimGraphNode : public UAnimGraphNode_Base
{
	GENERATED_UCLASS_BODY()


public:
	UPROPERTY(EditAnywhere, Category = Settings)
	FTimingVisualiser_AnimNode TimingVisualiserNode;
		//~ Begin UEdGraphNode Interface.
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	//~ End UEdGraphNode Interface.
	// 
	//~ Begin UAnimGraphNode_Base Interface
	virtual FString GetNodeCategory() const override;
	//~ End UAnimGraphNode_Base Interface
	virtual void CreateOutputPins() override;

};
