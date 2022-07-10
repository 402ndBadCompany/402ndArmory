
class CfgPatches
{
	class V_FZ_Armor
	{
		author="Azzamean & Vespade"
		name="402nd Armory"
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{"V_FZ_Core","OPTRE_UNSC_Units_Army"};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class V_FZ_Armor
		{
			list[]={"V_FZ_Armor"};
		};
	};
};


class CfgWeapons
{
	// Helmets
	class OPTRE_UNSC_CH252D_Helmet;
	class 402nd_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="402nd Armory
		author="Azzamean & Vespade"
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60;
		displayName="[402nd] CH252D Helmet";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252D_V.rvmat"};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252D_V.rvmat"};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	class 402nd_CH252D_AZZ: 402nd_CH252D
	{
		displayName="[402nd] CH252D Helmet (Azzamean)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Azzamean_test_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Azzamean_test_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};};
	};
	class 402nd_CH252D_HAW: 402nd_CH252D
	{
		displayName="[402nd] CH252D Helmet (Hawke)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Hawke_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Hawke_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};};
	};
	class 402nd_CH252D_HOU: 402nd_CH252D
	{
		displayName="[402nd] CH252D Helmet (Houlston)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Houlston_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Houlston_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_Kam: 402nd_CH252D
	{
		displayName="[402nd] CH252D Helmet (Kami)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Kami_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Kami_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_PAR: 402nd_CH252D
	{
		displayName="[402nd] CH252D Helmet (Parris)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Parris_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Parris_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_Ren: 402nd_CH252D
	{
		displayName="[402nd] CH252D Helmet (Renalds)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Renalds_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Renalds_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_UND: 402nd_CH252D
	{
		displayName="[402nd] CH252D Helmet (Underwood)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Underwood_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Underwood_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_VES: 402nd_CH252D
	{
		displayName="[402nd] CH252D Helmet (Vespade)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Vespade_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Vespade_CO", "V_FZ_Armor\Data\Helmets\ODSTVisor_BC_CO"};};
	};
	

	class OPTRE_UNSC_CH252D_Helmet_dp;
	class 402nd_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc="402nd";
		author="Azzamean & Vespade";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.10;
		displayName="[402nd] CH252D Helmet";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	class 402nd_CH252D_AZZ_dp: VES_CH252D_dp{displayName="[402nd] CH252D Helmet (Reaper)";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Azzamean_test_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Azzamean_test_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_HAW_dp: VES_CH252D_dp{displayName="[402nd] CH252D Helmet (Reaper)";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Hawke_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Hawke_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_HOU_dp: VES_CH252D_dp{displayName="[402nd] CH252D Helmet (Reaper)";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Houlston_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Houlston_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_KAM_dp: VES_CH252D_dp{displayName="[402nd] CH252D Helmet (Reaper)";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Kami_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Kami_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_PAR_dp: VES_CH252D_dp{displayName="[402nd] CH252D Helmet (Reaper)";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Parris_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Parris_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_REN_dp: VES_CH252D_dp{displayName="[402nd] CH252D Helmet (Reaper)";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Renalds_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Renalds_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_UND_dp: VES_CH252D_dp{displayName="[402nd] CH252D Helmet (Reaper)";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Underwood_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Underwood_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_VES_dp: VES_CH252D_dp{displayName="[402nd] CH252D Helmet (Reaper)";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Vespade_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\ODSTHelm_BC_Vespade_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};


	// Armor Sets
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class 402nd_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="402nd";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D (Rifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"402nd_Armory\data\armor\ODSTVest_BC_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class 402nd_M52D_Demolitions: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="402nd";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D (Demolitions)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"402nd_Armory\data\armor\ODSTVest_BC_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Marksman;
	class 402nd_M52D_Marksman: OPTRE_UNSC_M52D_Armor_Marksman
	{
		dlc="402nd";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D (Marksman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"402nd_Armory\data\armor\ODSTVest_BC_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Scout;
	class 402nd_M52D_Scout: OPTRE_UNSC_M52D_Armor_Scout
	{
		dlc="402nd";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D (Scout)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"402nd_Armory\data\armor\ODSTVest_BC_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class 402nd_M52D_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="402nd";
		author="Azzamaean & Vespade";
		displayName="[402nd] M52D (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"402nd_Armory\data\armor\ODSTVest_BC_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
class 402nd_M52D_Vest: 402nd_Rifleman
	{
		displayName="[402nd] M52D (Vest)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
