#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureMap_ItemDesc_CargoRun_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureMap_ItemDesc_CargoRun_DVR.BP_TreasureMap_ItemDesc_CargoRun_DVR_C
// 0x0000 (0x0120 - 0x0120)
class UBP_TreasureMap_ItemDesc_CargoRun_DVR_C : public UTreasureMapItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureMap_ItemDesc_CargoRun_DVR.BP_TreasureMap_ItemDesc_CargoRun_DVR_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
