
class CfgPatches
{
	class 402nd_Armory
	{
		author="Azzamean & Vespade & BoomMicGuy"
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
		{"V_FZ_Armor","V_FZ_Core","OPTRE_UNSC_Units_Army"};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class 402nd_Armory
		{
			list[]={"402nd_Armory"};
		};
	};
};

class CfgEditorCategories
{
	class A_BD_EdCat_402nd
	{
		displayName="[402nd] UNSCDF";
	};
  
};
class CfgEditorSubcategories
{
	class A_BD_EdSubCat_Rotary
	{
		displayName="Rotary";
	};
};
class CfgVehicles
{
	class VES_D77HTCI_A;
	class MRK_D77HTCI_A: VES_D77HTCI_A
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="D77H-TCI/AV Pelican Magic Bus";
		editorCategory="A_BD_EdCat_402nd";
		editorSubcategory="A_BD_EdSubCat_Rotary";
		hiddenSelectionsTextures[]={"402nd_Armory\data\vehicles\MURK_Pelican_Base.paa",};
	};
};
class cfgGlasses
{
	class G_Diving;
	class 402nd_ODST_HUD: G_Diving
	{
		dlc = "402nd Armory";
		displayName = "[402nd] ODST Visor";
		model = "";
		scope = 2;
		picture = "\A3\characters_f\Data\UI\icon_g_tactical_ca.paa";
		mode = 0;
		ace_color[] = {0,0,0};
		ace_tintAmount = 0;
		ace_resistance = 0.5;
		ace_protection = 0.5;
		ace_overlay = "402nd_Armory\ui\HUD_Normal_CA.paa";
		ace_overlayDirt = "402nd_Armory\ui\HUD_Dirt2_CA.paa";
		ace_overlayCracked = "402nd_Armory\ui\HUD_Cracked_CA.paa";
		ace_dustPath = "402nd_Armory\ui\HUD_Dust2_CA.paa";
	};
	class 402nd_ODST_HUD_NC: G_Diving
	{
		dlc = "402nd Armory";
		displayName = "[402nd] ODST Visor (No Contrast)";
		model = "";
		scope = 2;
		picture = "\A3\characters_f\Data\UI\icon_g_tactical_ca.paa";
		mode = 0;
		ace_color[] = {0,0,0};
		ace_tintAmount = 0;
		ace_resistance = 0.5;
		ace_protection = 0.5;
		ace_overlay = "";
		ace_overlayDirt = "402nd_Armory\ui\HUD_Dirt2_CA.paa";
		ace_overlayCracked = "402nd_Armory\ui\HUD_Cracked2_CA.paa";
		ace_dustPath = "402nd_Armory\ui\HUD_Dust2_CA.paa";
	};
};
class CfgWeapons
{
	// Helmets
	class OPTRE_UNSC_CH252D_Helmet;
	class HeadgearItem;
	class 402nd_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="402nd Armory"
		author="Azzamean & Vespade"
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60;
		displayName="[402nd] CH252D Helmet";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		hiddenSelectionsMaterials[]={"402nd_Armory\data\headgear\V_CH252D.rvmat", "402nd_Armory\data\headgear\Visors\V_CH252D_V.rvmat"};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem 
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
			hiddenSelectionsMaterials[]={"402nd_Armory\data\headgear\V_CH252D.rvmat", "402nd_Armory\data\headgear\Visors\V_CH252D_V.rvmat"};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	class 402nd_CH252D_Leafy: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Leafy)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Leafy_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Leafy_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
	
	/*
	class 402nd_CH252D_Broadsword: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet Broadsword";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Broadsword_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Broadsword_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
	class 402nd_CH252D_Leafy_Broadsword: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Leafy) Broadsword";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Leafy_Broadsword_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Leafy_Broadsword_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
	*/

	class 402nd_CH252D_AZZ: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Azzamean)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Azzamean_test_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Azzamean_test_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
	class 402nd_CH252D_HAW: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Tuf)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Hawke_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Hawke_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
	class 402nd_CH252D_HOU: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Houlston)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Houlston_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Houlston_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_Kam: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Hudson)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Kami_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Kami_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_PAR: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Parris)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Parris_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Parris_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_Ren: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Renalds)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Renalds_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Renalds_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_UND: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Underwood)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Underwood_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Underwood_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
	};
		class 402nd_CH252D_VES: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252D Helmet (Mike)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Vespade_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Vespade_CO", "402nd_Armory\data\headgear\Visors\ODSTVisor_BC_CO"};};
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
		hiddenSelectionsMaterials[]={"402nd_Armory\data\headgear\V_CH252D.rvmat", ""};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			hiddenSelectionsMaterials[]={"402nd_Armory\data\headgear\V_CH252D.rvmat", ""};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};

	
	class 402nd_CH252R: 402nd_CH252D
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252R Helmet";
		model="\OPTRE_UNSC_Units\Army\recon_helmet";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTRHelm_BC_CO", "402nd_Armory\data\headgear\Visors\ODSTRVisor_BC_CO"};
		hiddenSelectionsMaterials[]={"402nd_Armory\data\headgear\V_S1ONIR.rvmat", "402nd_Armory\data\headgear\Visors\V_S1ONIR_V.rvmat"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTRHelm_BC_CO", "402nd_Armory\data\headgear\Visors\ODSTRVisor_BC_CO"};
			hiddenSelectionsMaterials[]={"402nd_Armory\data\headgear\V_S1ONIR.rvmat", "402nd_Armory\data\headgear\Visors\V_S1ONIR_V.rvmat"};
		};
	}; 
	
	// EXTRA CUSTOM SHIT HERE RECON
	class 402nd_CH252R_Leafy: 402nd_CH252R
	{
		author="Azzamean & Vespade & BoomMicGuy";
		displayName="[402nd] CH252R Helmet (Leafy)";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTRHelm_BC_Leafy_CO", "402nd_Armory\data\headgear\Visors\ODSTRVisor_BC_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTRHelm_BC_Leafy_CO", "402nd_Armory\data\headgear\Visors\ODSTRVisor_BC_CO"};};
	};

	class 402nd_CH252R_dp: 402nd_CH252D_dp
	{
		author="Azzamean & Vespade";
		displayName="[402nd] CH252R Helmet";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTRHelm_BC_CO", "V_FZ_Armor\data\Helmets\V_S1ONIR_CLR_V_CA"};
		hiddenSelectionsMaterials[]={"402nd_Armory\data\headgear\V_S1ONIR.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTRHelm_BC_CO", "V_FZ_Armor\data\Helmets\V_S1ONIR_CLR_V_CA"};
			hiddenSelectionsMaterials[]={"402nd_Armory\data\headgear\V_S1ONIR.rvmat",""};
		};
	};

	// EXTRA CUSTOM SHIT HERE RECON DP
	class 402nd_CH252R_Leafy_dp: 402nd_CH252R_dp{displayName="[402nd] CH252R Helmet (Leafy)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTRHelm_BC_Leafy_CO", "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTRHelm_BC_Leafy_CO", "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"};};};
	class 402nd_CH252D_AZZ_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Azzamean)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Azzamean_test_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Azzamean_test_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_HAW_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Tuf)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Hawke_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Hawke_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_HOU_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Houlston)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Houlston_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Houlston_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_KAM_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Hudson)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Kami_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Kami_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_PAR_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Parris)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Parris_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Parris_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_REN_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Renalds)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Renalds_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Renalds_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_UND_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Underwood)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Underwood_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Underwood_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_VES_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Mike)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Vespade_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Vespade_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	class 402nd_CH252D_Leafy_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Leafy)";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Leafy_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Leafy_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	// class 402nd_CH252D_Leafy_Broadsword_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet (Leafy) Broadsword";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Leafy_Broadsword_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Leafy_Broadsword_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	// class 402nd_CH252D_Broadsword_dp: 402nd_CH252D_dp{displayName="[402nd] CH252D Helmet Broadsword";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Broadsword_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_BC_Broadsword_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	
	// Armor Sets
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class 402nd_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D (Rifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_Corpsman: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D (Corpsman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_V_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_MED_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class 402nd_M52D_Demolitions: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D (Demolitions)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Marksman;
	class 402nd_M52D_Marksman: OPTRE_UNSC_M52D_Armor_Marksman
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D (Marksman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Scout;
	class 402nd_M52D_Scout: OPTRE_UNSC_M52D_Armor_Scout
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D (Scout)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class 402nd_M52D_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="402nd Armory";
		author="Azzamaean & Vespade";
		displayName="[402nd] M52D (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_Rifleman_Leafy: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D Leafy (Rifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_Leafy_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Demolitions_Leafy: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D Leafy (Demolitions)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_Leafy_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Marksman_Leafy: OPTRE_UNSC_M52D_Armor_Marksman
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D Leafy (Marksman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_Leafy_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Scout_Leafy: OPTRE_UNSC_M52D_Armor_Scout
	{
		dlc="402nd Armory";
		author="Azzamean & Vespade";
		displayName="[402nd] M52D Leafy (Scout)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_Leafy_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Sniper_Leafy: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="402nd Armory";
		author="Azzamaean & Vespade";
		displayName="[402nd] M52D Leafy (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","402nd_Armory\data\armor\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","402nd_Armory\data\armor\ODSTVest_BC_Leafy_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
};