#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_bush_cluster_02_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wld_bush_cluster_02_b.wld_bush_cluster_02_b_C
// 0x0038 (0x04F0 - 0x04B8)
class Awld_bush_cluster_02_b_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        wsp_rock_pebbles_c_01;                                    // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_xtra_small_a_01;                                 // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_pebbles_a_01;                                    // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_xtra_small_e_01;                                 // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_bush_03_a_02;                                         // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_pebbles_b_01;                                    // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wld_bush_cluster_02_b.wld_bush_cluster_02_b_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
