﻿// Name: Sea of Thieves, Version: 2.2.0.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void USafeZoneComponent::SafeZoneIsEmpty__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature");

	USafeZoneComponent_SafeZoneIsEmpty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile
// (Final, Native, Private)
void USafeZoneComponent::OnRep_UpdateCollisionProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile");

	USafeZoneComponent_OnRep_UpdateCollisionProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged
// (Final, Native, Private)
void USafeZoneComponent::OnRep_EmptyStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged");

	USafeZoneComponent_OnRep_EmptyStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void USafeZoneComponent::DeactivateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone");

	USafeZoneComponent_DeactivateSafeZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void USafeZoneComponent::DeactivateCollider()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider");

	USafeZoneComponent_DeactivateCollider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void USafeZoneComponent::ActivateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone");

	USafeZoneComponent_ActivateSafeZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
