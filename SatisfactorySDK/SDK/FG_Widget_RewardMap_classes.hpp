#pragma once

// Satisfactory SDK (V0.1.13 - Build 99427)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_RewardMap.Widget_RewardMap_C
// 0x0090 (0x03C0 - 0x0330)
class UWidget_RewardMap_C : public UWidget_SchematicRewardItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	struct FSlateBrush                                 mMapBrush;                                                // 0x0338(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RewardMap.Widget_RewardMap_C");
		return ptr;
	}


	void IsValidRewardItem(bool* IsValid);
	void UpdateVisibility();
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void OnRewardClicked();
	void ExecuteUbergraph_Widget_RewardMap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
