#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Rowboat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rowboat.BP_Rowboat_C
// 0x0028 (0x0A98 - 0x0A70)
class ABP_Rowboat_C : public ARowboat
{
public:
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImpulseThrottlerComponent*                  ImpulseThrottler;                                         // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BackSeat;                                                 // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MiddleRightSeat;                                          // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MiddleLeftSeat;                                           // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Rowboat.BP_Rowboat_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
