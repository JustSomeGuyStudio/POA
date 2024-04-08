// Copyright 2023, Dakota Dawe, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagAssetInterface.h"
#include "Animation/SKGShooterFrameworkAnimInstance.h"
#include "SKGShooterPawnComponent.generated.h"

class USKGLightLaserComponent;
class USKGOpticComponent;
class UCurveVector;
class USKGShooterFrameworkAnimInstance;
class ISKGInfraredInterface;
class USKGFirearmComponent;
class USKGProceduralAnimComponent;
class UCameraComponent;
class USkeletalMeshComponent;
class UMaterialParameterCollection;
class APawn;

USTRUCT(BlueprintType)
struct FSKGFreeLookSettings
{
	GENERATED_BODY()
	// If true, it will auto set bUseControllerRotationYaw to true and false
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SKGFreeLookSettings")
	bool bAutoSetUseControllerRotationYaw {true};
	// The max you can look up
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SKGFreeLookSettings")
	float MaxPitchUp {40};
	// The max you can look down
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SKGFreeLookSettings")
	float MaxPitchDown {30};
	// The max you can look left
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SKGFreeLookSettings")
	float MaxYawLeft {35};
	// The max you can look right
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SKGFreeLookSettings")
	float MaxYawRight {35};
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPoseComplete, const FSKGProceduralPoseReplicationData&, CurrentPoseData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHeldActorSet, AActor*, NewHeldActor, AActor*, OldHeldActor);

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SKGSHOOTERFRAMEWORK_API USKGShooterPawnComponent : public UActorComponent, public IGameplayTagAssetInterface
{
	GENERATED_BODY()
	friend USKGShooterFrameworkAnimInstance;
	
public:	
	// Sets default values for this component's properties
	USKGShooterPawnComponent();

protected:
	/** The linked anim layer class to be used instead of the actual anim instance of the mesh
	 * so you do not need to reparent your animbp. Refer to example project for usage
	 */
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	TSubclassOf<USKGShooterFrameworkAnimInstance> LinkedAnimLayerClass;
	// If true, it will auto link the LinkedAnimLayerClass to your mesh anim instance for the procedurals
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	bool bAutoSetupLinkedAnimLayer {true};
	// If true, it will use the first found match as the first and third person mesh
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	bool bUseSingleMesh {true};
	// The name of the Pawns Third Person Mesh Component
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	FName ThirdPersonMeshComponentName {"CharacterMesh0"};
	// The name of the Pawns First Person Mesh Component
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	FName FirstPersonMeshComponentName {"MeshFP"};
	// The name of the Pawns Camera Component
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	FName CameraComponentName {"CameraComponent"};
	// The socket the camera is attached to on the pawn's mesh
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	FName CameraAttachedSocket {"S_Camera"};
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	FGameplayTagContainer GameplayTags;
	// Used for free look, turn in place, etc
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	bool bReplicateRemoteYaw {true};
	// Replication rate for the Yaw. 0 = every frame
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize", meta = (EditCondition = "bReplicateRemoteYaw"))
	double RemoteYawReplicationRate {0.1};
	// The material parameter collection to be used for handling infrared (when you turn night vision on/off)
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Initialize")
	TObjectPtr<UMaterialParameterCollection> NightVisionMaterialParameterCollection;

	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|FreeLook")
	FSKGFreeLookSettings FreeLookSettings;
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Leaning")
	FSKGLeanLeftRightSettings LeanLeftRightSettings;

	UPROPERTY(BlueprintGetter = GetCameraComponent, Category = "SKGShooterFramework|PawnComponent")
	TObjectPtr<UCameraComponent> CameraComponent;
	UPROPERTY(BlueprintGetter = GetPawnMesh, Category = "SKGShooterFramework|PawnComponent")
	TObjectPtr<USkeletalMeshComponent> MeshFP;
	UPROPERTY(BlueprintGetter = GetPawnMesh, Category = "SKGShooterFramework|PawnComponent")
	TObjectPtr<USkeletalMeshComponent> MeshTP;
	UPROPERTY(BlueprintGetter = GetShooterFrameworkAnimInstance, Category = "SKGShooterFramework|PawnComponent")
	TObjectPtr<USKGShooterFrameworkAnimInstance> ShooterFrameworkAnimInstance;
	UPROPERTY(BlueprintGetter = GetOwningPawn, Category = "SKGShooterFramework|PawnComponent")
	TObjectPtr<APawn> OwningPawn;

	UPROPERTY(BlueprintGetter = GetProceduralShooterPawnData, Category = "SKGShooterFramework|PawnComponent")
	FSKGProceduralShooterPawnData ProceduralShooterPawnData;

	UPROPERTY(ReplicatedUsing = OnRep_TargetLeanAngleCompressed)
	uint8 TargetLeanAngleCompressed {0};
	float TargetLeanAngle {0.0f};
	float TargetLeanLeftAngle {0.0f};
	float TargetLeanRightAngle {0.0f};
	bool bLeaningLeft {false};
	bool bLeaningRight {false};
	UFUNCTION()
	void OnRep_TargetLeanAngleCompressed();
	
	UPROPERTY(ReplicatedUsing = OnRep_HeldActor, BlueprintGetter = GetHeldActor, Category = "SKGShooterFramework|PawnComponent")
	TObjectPtr<AActor> HeldActor;
	UPROPERTY(ReplicatedUsing = OnRep_IsAiming, BlueprintGetter = IsAiming, Category = "SKGShooterFramework|PawnComponent")
	bool bIsAiming {false};
	UPROPERTY(ReplicatedUsing = OnRep_CurrentProceduralPoseData, BlueprintGetter = GetCurrentProceduralPoseReplicationData, Category = "SKGShooterFramework|PawnComponent")
	FSKGProceduralPoseReplicationData CurrentProceduralPoseData;
	UPROPERTY(Replicated, BlueprintGetter = GetOffHandIKIsLeftHand, Category = "SKGShooterFramework|PawnComponent")
	bool bOffHandIKIsLeftHand {true};

	UPROPERTY(ReplicatedUsing = OnRep_InFreeLook)
	bool bInFreeLook {false};
	UFUNCTION()
	void OnRep_InFreeLook();
	FRotator FreeLookStartRotation {FRotator::ZeroRotator};
	bool bCanAddYaw {true};
	bool bCanAddPitch {true};
	
	UPROPERTY(Replicated)
	uint8 RemoteViewYaw {0};

	UPROPERTY()
	TObjectPtr<USKGFirearmComponent> CurrentFirearmComponent;
	UPROPERTY()
	TObjectPtr<USKGProceduralAnimComponent> CurrentProceduralAnimComponent;

	FTransform CameraOffset;
	bool bUseFirstPersonProceduralsAsLocal {true};
	bool bUsingCustomSwayMultiplier {false};
	float SwayMultiplier {1.0f};
	ECollisionChannel FirearmCollisionChannel {ECC_Visibility};
	
	UFUNCTION()
	virtual void OnRep_HeldActor(AActor* OldActor);
	UFUNCTION()
	void OnRep_IsAiming() {}
	UFUNCTION()
	void OnRep_CurrentProceduralPoseData() const;

	FVector2D MouseInput {FVector2D::ZeroVector};
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void PostInitProperties() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }
	FORCEINLINE bool HasAuthority() const { return GetOwnerRole() == ROLE_Authority; }
	void SetupComponents();
	void SetCameraOffset();
	
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetAiming(bool bAim);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Lean(const uint8 TargetAngle);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_PerformProceduralPose(const FGameplayTag& Tag, bool bExitPose);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetOffHandIKHand(bool bLeftHand);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetFreeLook(bool bFreeLook);
	UFUNCTION(Server, Unreliable, WithValidation)
	void Server_PerformCustomCurveUnreliable(const FSKGFirstAndThirdPersonCurveSettings& CurveData);
	UFUNCTION(Server, Unreliable, WithValidation)
	void Server_SetRemoteYaw(uint8 Yaw);
	
	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void Multi_PlayCustomCurveUnreliable(const FSKGFirstAndThirdPersonCurveSettings& CurveData);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_PerformCustomCurve(const FSKGFirstAndThirdPersonCurveSettings& CurveData);
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multi_PlayCustomCurve(const FSKGFirstAndThirdPersonCurveSettings& CurveData);

	void ReplicateYaw(bool bForce);
	
	// Called from only the anim instance so a delegate can be fired
	void PoseComplete() const;

public:
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	USKGShooterFrameworkAnimInstance* LinkAnimLayerClass();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	USKGShooterFrameworkAnimInstance* LinkAnimLayerClassByInstance(UAnimInstance* AnimInstance);
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void UnlinkAnimLayerClass();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void UnlinkAnimLayerClassByInstance(UAnimInstance* AnimInstance);
	
	// Used for freelook. If false, it means control rotation goes to far
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent")
	bool CanAddYaw() const;
	// Used for freelook. If false, it means control rotation goes to far
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent")
	bool CanAddPitch() const;
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void SetMouseInput(float X, float Y);
	/* Returns control rotation if locall controlled, returns replicated
	 * rotator (remote yaw and remote pitch) if remote client
	 */
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent")
	FRotator GetControlRotation() const;

	FORCEINLINE FTransform GetCameraOffset() const { return CameraOffset; }
	FSKGProceduralAnimInstanceData GetProceduralData();

	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void StartFreeLook();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void StopFreeLook();
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent")
	bool IsFreeLooking() const { return bInFreeLook; }

	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent")
	float GetMagnificationSensitivityMultiplier() const;
	// Outputs new sensivity based on whether or not free looking, zoomed with magnification, utilizes base turn rate
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent")
	void GetSensitivityMultiplier(const float X, const float XBaseTurnRate, const float Y, const float YBaseTurnRate, float& NewX, bool& AddYaw, float& NewY, bool& AddPitch) const;
	
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void SetHeldActor(AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void ClearHeldActor();
	
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void LeanLeft(float TargetAngle);
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void LeanRight(float TargetAngle);
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void StopLeaningLeft();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void StopLeaningRight();
	
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void StartAiming();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void StopAiming();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void SetUseFirstPersonProceduralsAsLocal();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void SetUseThirdPersonProceduralsAsLocal();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void SetSwayMultiplier(const float Multiplier);
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void ResetSwayMultiplier();
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent")
	bool GetUsingCustomSwayMultiplier() const { return bUsingCustomSwayMultiplier; }
	
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool IsLocallyControlled() const;
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	bool UseFirstPersonProceduralsAsLocal() const { return bUseFirstPersonProceduralsAsLocal; }
	UFUNCTION(BlueprintGetter, Category = "SKGShooterFramework|PawnComponent")
	FORCEINLINE bool IsAiming() const { return bIsAiming; }

	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent|Components")
	USKGFirearmComponent* GetCurrentFirearmComponent() const;
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent|Components")
	USKGProceduralAnimComponent* GetCurrentProceduralAnimComponent() const;
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent|Components")
	USKGOpticComponent* GetCurrentOpticComponent() const;
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent|Components")
	TArray<USKGLightLaserComponent*> GetCurrentLightLaserComponents() const;
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|Leaning")
	FORCEINLINE float GetTargetLeanAngle() const { return TargetLeanAngle; }

	UFUNCTION(BlueprintGetter)
	const FSKGProceduralShooterPawnData& GetProceduralShooterPawnData() const { return ProceduralShooterPawnData; }
	UFUNCTION(BlueprintGetter)
	UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	// Returns First Person Mesh if local, Third Person Mesh if remote
	UFUNCTION(BlueprintGetter)
	USkeletalMeshComponent* GetPawnMesh() const;
	UFUNCTION(BlueprintGetter)
	APawn* GetOwningPawn() const { return OwningPawn; }
	template< typename T >
	T* GetOwningPawn() const { return Cast<T>(GetOwningPawn()); }
	UFUNCTION(BlueprintGetter)
	USKGShooterFrameworkAnimInstance* GetShooterFrameworkAnimInstance() const { return ShooterFrameworkAnimInstance; }
	template< typename T >
	T* GetShooterFrameworkAnimInstance() const { return Cast<T>(GetShooterFrameworkAnimInstance()); }
	
	UFUNCTION(BlueprintGetter)
	AActor* GetHeldActor() const { return HeldActor; }
	template< typename T >
	T* GetHeldActor() const { return Cast<T>(GetHeldActor()); }
	
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void PerformProceduralRecoil(const FRotator& ControlRotationMultiplier = FRotator(1.0, 1.0, 1.0), const FVector& LocationMultiplier = FVector(1.0), const FRotator& RotationMultiplier = FRotator(1.0, 1.0, 1.0));
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void EnableInfraredMode();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void DisableInfraredMode();

	/**
	 * 
	 * @param Tag used to search for the given pose
	 * @param bExitPose whether or not to use the return curve (return to normal) or the to curve (go from normal to pose)
	 */
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void PerformProceduralPose(const FGameplayTag& Tag, bool bExitPose);
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void PerformCustomCurve(const FSKGCurveSettings& CurveData);
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void SetOffHandIKToLeftHand();
	UFUNCTION(BlueprintCallable, Category = "SKGShooterFramework|PawnComponent")
	void SetOffHandIKToRightHand();
	
	UFUNCTION(BlueprintGetter, Category = "SKGShooterFramework|PawnComponent")
	const FSKGProceduralPoseReplicationData& GetCurrentProceduralPoseReplicationData() const { return CurrentProceduralPoseData; }
	UFUNCTION(BlueprintGetter, Category = "SKGShooterFramework|PawnComponent")
	bool GetOffHandIKIsLeftHand() const { return bOffHandIKIsLeftHand; }
	UFUNCTION(BlueprintPure, Category = "SKGShooterFramework|PawnComponent")
	FSKGToFromCurveSettings GetProceduralPoseData(const FGameplayTag& Tag) const;

	UPROPERTY(BlueprintAssignable, Category = "SKGShooterFramework|PawnComponent|Events")
	FOnPoseComplete OnPoseComplete;
	UPROPERTY(BlueprintAssignable, Category = "SKGShooterFramework|PawnComponent|Events")
	FOnHeldActorSet OnHeldActorSet;

#if WITH_EDITORONLY_DATA
	// If true, firearm collision will be printed
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Debug")
	bool bPrintHit {false};
	UPROPERTY(EditDefaultsOnly, Category = "SKGShooterFramework|Debug")
	bool bDrawDebugTrace {false};
#endif
};
