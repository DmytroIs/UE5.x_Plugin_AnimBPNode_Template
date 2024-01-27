#include "AnimGraphNode_BlendAccl.h"
//#include "Blend_Acceleration.h"

#define LOCTEXT_NAMESPACE "AnimGraphNode_BlendAccl"

UAnimGraphNode_BlendAccl::UAnimGraphNode_BlendAccl(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FString UAnimGraphNode_BlendAccl::GetNodeCategory() const
{
	return TEXT("Animation|Blends");
}

FLinearColor UAnimGraphNode_BlendAccl::GetNodeTitleColor() const
{
	return FLinearColor(0.75f, 0.75f, 0.75f);
}	

FText UAnimGraphNode_BlendAccl::GetTooltipText() const
{
	return LOCTEXT("Dmytro's BlendAccl", "Accleration Based Blending");
}

FText UAnimGraphNode_BlendAccl::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("Blend by Acceleration", "Blend by Acceleration");
}

#undef LOCTEXT_NAMESPACE
