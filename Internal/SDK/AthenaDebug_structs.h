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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaDebug.DrawDebugItemLine
// 0x002C
struct FDrawDebugItemLine
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReplaceInGroup;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J4EG[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LineStart;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LineEnd;                                                   // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      Colour;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Thickness;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AthenaDebug.DrawDebugItemSector
// 0x0048
struct FDrawDebugItemSector
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReplaceInGroup;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_057E[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotationAngle;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Centre;                                                    // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SectorAngle;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      Colour;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ZeroAngleVector;                                           // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     RotationAxis;                                              // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SubAngles;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Thickness;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AthenaDebug.DrawDebugItemString
// 0x0030
struct FDrawDebugItemString
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReplaceInGroup;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XAE3[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     String;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FColor                                      Colour;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StringPos;                                                 // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct AthenaDebug.DrawDebugItemMessage
// 0x0028
struct FDrawDebugItemMessage
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReplaceInGroup;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T1HX[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FColor                                      Colour;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SLUX[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaDebug.DrawDebugItemSphere
// 0x0020
struct FDrawDebugItemSphere
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReplaceInGroup;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WIMT[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CentrePos;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      Colour;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct AthenaDebug.DrawDebugItemBox
// 0x0050
struct FDrawDebugItemBox
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReplaceInGroup;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8DXS[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CentrePos;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Box;                                                       // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_920I[0xC];                                     // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0030(0x0010) (IsPlainOldData, NoDestructor)
	struct FColor                                      Colour;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2PTV[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaDebug.DrawDebugItemCapsule
// 0x0040
struct FDrawDebugItemCapsule
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReplaceInGroup;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_26NN[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CentrePos;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HalfHeight;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                       Rotation;                                                  // 0x0020(0x0010) (IsPlainOldData, NoDestructor)
	struct FColor                                      Colour;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FPOS[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaDebug.SphereData
// 0x0018
struct FSphereData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Segments;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      Colour;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
