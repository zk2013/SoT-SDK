#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CliffGenerator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CliffGenerator.BP_CliffGenerator_C
// 0x01DB (0x0683 - 0x04A8)
class ABP_CliffGenerator_C : public AActor
{
public:
	class USplineComponent*                            Base_Spline;                                              // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Specific_Start_Actor;                                 // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class UStaticMesh*                                 Source_Start_Actor;                                       // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Specific_End_Actor;                                   // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class UStaticMesh*                                 Source_End_Actor;                                         // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMesh*>                         Source_Actors;                                            // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MaxTopSplineHeight;                                       // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpecifyNumberOfElements;                                  // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	int                                                NumberOfElements;                                         // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ObjectSpacer;                                             // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TangetWeights;                                            // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Random_Seed;                                              // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_CliffGenerator_Struct>           DataArray;                                                // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Use_Deformable_SplineMesh_;                               // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Instance_Meshes;                                          // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Flip_Meshes;                                              // 0x0512(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0513(0x0001) MISSED OFFSET
	struct FRandomStream                               ArrayStore;                                               // 0x0514(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SplineRemaninderScale;                                    // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumElementsNeeded;                                        // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBP_CliffGenerator_Struct                   Default_Mesh;                                             // 0x0524(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     BlueprintPosition;                                        // 0x0534(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    InverseBlueprintRotation;                                 // 0x0540(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseSpecifiedMeshAtIndex;                                  // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoopDataArraySize;                                        // 0x054D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Collisions;                                               // 0x054E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               _DEBUG___SplineNumbers;                                   // 0x054F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               _DEBUG___Flip_Text;                                       // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsStartIndex;                                             // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEndIndex;                                               // 0x0552(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0553(0x0005) MISSED OFFSET
	class USplineComponent*                            GeneratedTopSpline;                                       // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTopSplineHeight;                                       // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowTerrainToDrop;                                       // 0x0564(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowTerrainToRaise;                                      // 0x0565(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreTerrainForTopSpline;                                // 0x0566(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0567(0x0001) MISSED OFFSET
	float                                              TerrainBlendWidth;                                        // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrainBlendFallOff;                                      // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TopSplineRollAmount;                                      // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntersectionAmount;                                       // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               _______REBUILD_SPLINE_______;                             // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	class ALandscape*                                  terrain_component;                                        // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               UseDetailedTopSpline;                                     // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0589(0x0003) MISSED OFFSET
	int                                                NumberOfDetailedSplinePoints;                             // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               _DEBUG___Display_Intersection_Names;                      // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	class FString                                      TagToIgnore;                                              // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               ________DEFORM_TERRAIN_________;                          // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	struct FHitResult                                  HirResult;                                                // 0x05BC(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData10[0x4];                                       // 0x063C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             TopSplineIntersectionPoints;                              // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              Local_InternalActorsToIgnore;                             // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                                TopSplineColour;                                          // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BottomSplineColour;                                       // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Reflected;                                             // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugLines;                                           // 0x0681(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Affect_Rain;                                              // 0x0682(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CliffGenerator.BP_CliffGenerator_C"));
		return ptr;
	}


	void Draw_Debug_Numbers(int CurrentIndex, int NextIndex, const struct FVector& StartLocation, const struct FVector& EndLocation, const struct FVector& StartTangent);
	void Deform_Terrain();
	void Build_Element(int Index, class UStaticMesh* ElementMesh);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
