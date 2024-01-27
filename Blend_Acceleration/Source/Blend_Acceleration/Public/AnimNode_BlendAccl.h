#pragma once

//#include "CoreMinimal.h"
//#include "ObjectMacros.h"
//#include "AnimationAsset.h"
#include "AnimNodeBase.h"
#include "AnimNode_BlendAccl.generated.h"



USTRUCT(BlueprintInternalUseOnly)  
struct FAnimNode_BlendAccl : public FAnimNode_Base
{
	//GENERATED_BODY()
	GENERATED_USTRUCT_BODY()
	//GENERATED_UCLASS_BODY()

	/** Base Pose */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	FPoseLink BasePose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	FComponentSpacePoseLink ExtraPose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (PinShownByDefault))
	mutable float BlendDuration;

public:
	FAnimNode_BlendAccl () = default;
	// FAnimNode_Base interface
	 virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;   
	 virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;   
	 virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;		   
	 virtual void Evaluate_AnyThread(FPoseContext& Output) override;						   
	 virtual void GatherDebugData(FNodeDebugData& DebugData) override;						   
	// End of FAnimNode_Base interface

protected:
	AActor* OwningActor;

private:
	
};