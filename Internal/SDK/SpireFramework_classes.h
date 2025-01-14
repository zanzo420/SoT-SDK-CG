﻿#pragma once

// Name: Sea of Thieves, Version: 2.2.0.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class SpireFramework.HeightTriggerableAudioComponentParams
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UHeightTriggerableAudioComponentParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     Pool;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RisingOneShot;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RisingStart;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RisingStop;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 LoweringStart;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 LoweringStop;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.HeightTriggerableAudioComponentParams");
		return ptr;
	}



};

// Class SpireFramework.HeightTriggerableEffectsComponent
// 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
class UHeightTriggerableEffectsComponent : public UActorComponent
{
public:
	class UHeightTriggerableAudioComponentParams*      AudioParams;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorComponentSelector                     EmitterOwner;                                              // 0x00D0(0x0010) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                                     EmitterOffset;                                             // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseParentEmitter;                                          // 0x00EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z12O[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RisingAudioTriggerValue;                                   // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_26IK[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CameraShake;                                               // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              ShakeInnerRadius;                                          // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShakeOuterRadius;                                          // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1IDR[0x50];                                    // 0x0108(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.HeightTriggerableEffectsComponent");
		return ptr;
	}



	void SetMovementDirection(TEnumAsByte<SpireFramework_EDirectionOfMovement> InMovement);
};

// Class SpireFramework.SpireResource
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class ASpireResource : public AActor
{
public:
	unsigned char                                      UnknownData_LRGC[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireResource");
		return ptr;
	}



};

// Class SpireFramework.SpireServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpireServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireServiceInterface");
		return ptr;
	}



};

// Class SpireFramework.SpireService
// 0x0078 (FullSize[0x0448] - InheritedSize[0x03D0])
class ASpireService : public AActor
{
public:
	unsigned char                                      UnknownData_JT2P[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FServerSpireInfo>                    ServerOnlySpireInfo;                                       // 0x03D8(0x0010) (ZeroConstructor)
	TArray<struct FSpireInfo>                          SpireLevels;                                               // 0x03E8(0x0010) (Net, ZeroConstructor, RepNotify)
	unsigned char                                      UnknownData_M25M[0x50];                                    // 0x03F8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireService");
		return ptr;
	}



	void OnRep_SpireLevels(TArray<struct FSpireInfo> InPreviousSpireLevels);
};

// Class SpireFramework.SpireStreamedLevelDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class USpireStreamedLevelDataAsset : public UDataAsset
{
public:
	class UAthenaStreamedLevelDataAsset*               StreamedLevel;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSpireEntry>                         Entries;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureToggle;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireStreamedLevelDataAsset");
		return ptr;
	}



};

// Class SpireFramework.SpireSettingsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpireSettingsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireSettingsInterface");
		return ptr;
	}



};

// Class SpireFramework.SpireShippingDrawDebugActorSphereCollection
// 0x0010 (FullSize[0x03F0] - InheritedSize[0x03E0])
class ASpireShippingDrawDebugActorSphereCollection : public AShippingDebugActorSphereCollection
{
public:
	TArray<TWeakObjectPtr<class ASpireResource>>       SpireList;                                                 // 0x03E0(0x0010) (ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireShippingDrawDebugActorSphereCollection");
		return ptr;
	}



};

// Class SpireFramework.TaleLoadSpireStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleLoadSpireStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleLoadSpireStep");
		return ptr;
	}



};

// Class SpireFramework.TaleSpireService
// 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
class UTaleSpireService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_357U[0x38];                                    // 0x0040(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleSpireService");
		return ptr;
	}



	void RegisterResetMechanismInterface(class AActor* InMechanismResetInterface);
};

// Class SpireFramework.TaleSpireServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleSpireServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleSpireServiceDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleLoadSpireStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleLoadSpireStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleLoadSpireStepDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleMakeSpireVisibleStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleMakeSpireVisibleStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleMakeSpireVisibleStep");
		return ptr;
	}



};

// Class SpireFramework.TaleMakeSpireVisibleStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleMakeSpireVisibleStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleMakeSpireVisibleStepDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleRegisterSpireStep
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UTaleRegisterSpireStep : public UTaleQuestStep
{
public:
	class UTaleRegisterSpireStepDesc*                  StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RN2W[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleRegisterSpireStep");
		return ptr;
	}



};

// Class SpireFramework.TaleRegisterSpireStepDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UTaleRegisterSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        SelectionOriginPoint;                                      // 0x0030(0x0010) (Edit)
	struct FQuestVariableFloat                         PlayerExclusionSelectionRadius;                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableTaleResourceHandle            AllocatedSpireHandle;                                      // 0x0050(0x0010) (Edit)
	struct FQuestVariableVector                        AllocatedSpireLocation;                                    // 0x0060(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleRegisterSpireStepDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleReleaseSpireStep
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UTaleReleaseSpireStep : public UTaleQuestStep
{
public:
	class UTaleReleaseSpireStepDesc*                   StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_09IB[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleReleaseSpireStep");
		return ptr;
	}



};

// Class SpireFramework.TaleReleaseSpireStepDesc
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UTaleReleaseSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableTaleResourceHandle            SpireHandle;                                               // 0x0030(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleReleaseSpireStepDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleUnloadSpireStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleUnloadSpireStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleUnloadSpireStep");
		return ptr;
	}



};

// Class SpireFramework.TaleUnloadSpireStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleUnloadSpireStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleUnloadSpireStepDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleWaitForSpireToLoadStep
// 0x0050 (FullSize[0x00B8] - InheritedSize[0x0068])
class UTaleWaitForSpireToLoadStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_29PB[0x50];                                    // 0x0068(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleWaitForSpireToLoadStep");
		return ptr;
	}



};

// Class SpireFramework.TaleWaitForSpireToLoadStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleWaitForSpireToLoadStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleWaitForSpireToLoadStepDesc");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
