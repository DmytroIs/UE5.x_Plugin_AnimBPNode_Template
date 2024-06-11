#include "TimingVisualiser_AnimNode.h"

//#include UE_INLINE_GENERATED_CPP_BY_NAME (TimingVisualiser_AnimNode)

FTimingVisualiser_AnimNode::FTimingVisualiser_AnimNode() : Super ()
{
}

void FTimingVisualiser_AnimNode::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	// Initialize the asset or actor that owns this node
	Super::Initialize_AnyThread(Context);
	//FAnimNode_Base::Initialize_AnyThread(Context);
	//OwningActor = Context.AnimInstanceProxy->GetSkelMeshComponent()->GetOwner();
	BasePose.Initialize(Context);
}

void FTimingVisualiser_AnimNode::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	Super::CacheBones_AnyThread(Context);
	//FAnimNode_Base::CacheBones_AnyThread(Context);
	BasePose.CacheBones(Context);
}

void FTimingVisualiser_AnimNode::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	Super::Update_AnyThread(Context);
	BasePose.Update(Context);
	GetEvaluateGraphExposedInputs().Execute(Context);
}

void FTimingVisualiser_AnimNode::GatherDebugData(FNodeDebugData& DebugData)
{
	BasePose.GatherDebugData(DebugData);
}

void FTimingVisualiser_AnimNode::EvaluateComponentSpace_AnyThread(FComponentSpacePoseContext& Output)
{
    // Implement your custom evaluation logic here
	Super::EvaluateComponentSpace_AnyThread(Output);
	BasePose.EvaluateComponentSpace(Output);
	GEngine->AddOnScreenDebugMessage(-1, 0.03f, FColor::Red, FString::Printf(TEXT("MSG from EvaluateComponentSpace_AnyThread")));

	//ForwardedPose.CopyPose(Output.Pose);

}

//void FTimingVisualiser_AnimNode::Evaluate_AnyThread(FPoseContext& Output)
//{
//	// Implement your custom evaluation logic here
//	GEngine->AddOnScreenDebugMessage(-1, 0.03f, FColor::Red, FString::Printf(TEXT("MSG from Evaluate_AnyThread")));
//	// Modify the pose as needed
//}