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

// Class Cooking.CookableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCookableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookableInterface");
		return ptr;
	}



};

// Class Cooking.CookingDefaultsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCookingDefaultsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookingDefaultsInterface");
		return ptr;
	}



};

// Class Cooking.CookingStatusPublisherInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCookingStatusPublisherInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookingStatusPublisherInterface");
		return ptr;
	}



};

// Class Cooking.CookingStateInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCookingStateInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookingStateInterface");
		return ptr;
	}



};

// Class Cooking.CookableComponent
// 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
class UCookableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_HQ7M[0x20];                                    // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      NextCookState;                                             // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TimeToNextCookState;                                       // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2X42[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCookableComponentSmokeFeedbackTimingEntry> SmokeFeedbackLevels;                                       // 0x00F8(0x0010) (Edit, ZeroConstructor)
	class UCurveFloat*                                 VisibleCookedExtentOverTime;                               // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultVisibleCookedExtent;                                // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CookableTypeName;                                          // 0x0114(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cooking_ECookingState>                 CookingState;                                              // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5ORX[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookableComponent");
		return ptr;
	}



};

// Class Cooking.CookerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCookerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookerInterface");
		return ptr;
	}



};

// Class Cooking.CookerComponent
// 0x0180 (FullSize[0x0248] - InheritedSize[0x00C8])
class UCookerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_U5AJ[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStatus>                             StatusToApplyToContents;                                   // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCookerSmokeFeedbackEntry>           VFXFeedback;                                               // 0x00E0(0x0010) (Edit, ZeroConstructor)
	class UStaticMeshMemoryConstraintComponent*        CookableStaticMeshComponent;                               // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshMemoryConstraintComponent*      CookableSkeletalMeshComponent;                             // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CookedMaterialParameterName;                               // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BurnDownDirectionParameterName;                            // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlacementVarianceAngleBound;                               // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnByDefault;                                               // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D8YO[0x3];                                     // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCookingComponentAudioParams*                AudioParams;                                               // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<Athena_EVfxRegion>                     VfxLocation;                                               // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M8TK[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AItemInfo*                                   CurrentlyCookingItem;                                      // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCookingClientRepresentation                CookingState;                                              // 0x0130(0x0068) (Net, Transient, RepNotify)
	class UParticleSystemComponent*                    SmokeParticleComponent;                                    // 0x0198(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    VisibleCookableMaterial;                                   // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TurnedOn;                                                  // 0x01A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               OnIsland;                                                  // 0x01A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_COIG[0x9E];                                    // 0x01AA(0x009E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookerComponent");
		return ptr;
	}



	void OnRep_CookingState(const struct FCookingClientRepresentation& OldRepresentation);
};

// Class Cooking.CookingComponentAudioParams
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UCookingComponentAudioParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     CookingPool;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EmitterOffsetVector;                                       // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YPCT[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 FoodPlaceInPot;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 CookingStart;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 CookingStop;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CookingTypeSwitchGroup;                                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CookingTypeSizzle;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CookingTypeSimmer;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FoodTypeSwitchGroup;                                       // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FoodTypeFruit;                                             // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FoodTypeMeat;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FoodTypeRareMeat;                                          // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FoodCookedAmount;                                          // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxCookingRtpcAmount;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BPAW[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookingComponentAudioParams");
		return ptr;
	}



};

// Class Cooking.CookingPot
// 0x01E0 (FullSize[0x05D8] - InheritedSize[0x03F8])
class ACookingPot : public AInteractableBase
{
public:
	unsigned char                                      UnknownData_ZF6Y[0x8];                                     // 0x03F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionRulesInteractableComponent*           InteractableComponent;                                     // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCookerComponent*                            CookerComponent;                                           // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HoldToInteractTime;                                        // 0x0418(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8LJW[0x4];                                     // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       NotWieldingCookableItemTooltip;                            // 0x0420(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_EFWT[0x20];                                    // 0x041C(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       WieldingCookableItemTooltip;                               // 0x0458(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_IOUT[0x20];                                    // 0x0458(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       TakeItemTooltip;                                           // 0x0490(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_VADK[0x20];                                    // 0x0490(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CannotTakeItemTooltip;                                     // 0x04C8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_0ENA[0x20];                                    // 0x04C8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       MixInItemTooltip;                                          // 0x0500(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_Y8SF[0x20];                                    // 0x0500(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_2RIX[0xA0];                                    // 0x0538(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookingPot");
		return ptr;
	}



};

// Class Cooking.CookItemConditionalStatTrigger
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCookItemConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.CookItemConditionalStatTrigger");
		return ptr;
	}



};

// Class Cooking.HasRequiredCookingStateStatCondition
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UHasRequiredCookingStateStatCondition : public UTargetedStatCondition
{
public:
	TEnumAsByte<Cooking_ECookingState>                 RequiredState;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8BYG[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.HasRequiredCookingStateStatCondition");
		return ptr;
	}



};

// Class Cooking.MixableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMixableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.MixableInterface");
		return ptr;
	}



};

// Class Cooking.PottableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPottableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.PottableInterface");
		return ptr;
	}



};

// Class Cooking.PottableComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UPottableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_B5M0[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               CanBePutInPot;                                             // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EVCL[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Cooking.PottableComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
