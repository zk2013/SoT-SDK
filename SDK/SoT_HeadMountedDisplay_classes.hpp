#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_HeadMountedDisplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HeadMountedDisplay.MotionControllerComponent
// 0x0020 (0x05C0 - 0x05A0)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x05A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x05A1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HeadMountedDisplay.MotionControllerComponent"));
		return ptr;
	}


	bool IsTracked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
