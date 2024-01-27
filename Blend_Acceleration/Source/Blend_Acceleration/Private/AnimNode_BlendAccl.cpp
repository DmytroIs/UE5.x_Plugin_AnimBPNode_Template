#include "AnimNode_BlendAccl.h"
#include "Blend_Acceleration.h"
#include "AnimationRuntime.h"
//#include "Animation/AnimInstanceProxy.h"



//#include UE_INLINE_GENERATED_CPP_BY_NAME(AnimNode_BlendAccl)

/*FAnimNode_BlendAccl::FAnimNode_BlendAccl()
	: FAnimNode_Base()
{

}*/

void FAnimNode_BlendAccl::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Initialize_AnyThread)
	FAnimNode_Base::Initialize_AnyThread(Context);
	BasePose.Initialize(Context);
	ExtraPose.Initialize(Context);
}

void FAnimNode_BlendAccl::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(CacheBones_AnyThread)
	FAnimNode_Base::CacheBones_AnyThread(Context);
}

void FAnimNode_BlendAccl::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Update_AnyThread)
	//GetEvaluateGraphExposedInputs().Execute(Context);
	FAnimNode_Base::Update_AnyThread(Context);
}

void FAnimNode_BlendAccl::Evaluate_AnyThread(FPoseContext& Output)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Evaluate_AnyThread)
	FAnimNode_Base::Evaluate_AnyThread(Output);
}

void FAnimNode_BlendAccl::GatherDebugData(FNodeDebugData& DebugData)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(GatherDebugData)
	FAnimNode_Base::GatherDebugData(DebugData);
}