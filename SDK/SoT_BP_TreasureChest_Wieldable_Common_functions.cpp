// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Wieldable_Common_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TreasureChest_Wieldable_Common.BP_TreasureChest_Wieldable_Common_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TreasureChest_Wieldable_Common_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureChest_Wieldable_Common.BP_TreasureChest_Wieldable_Common_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
