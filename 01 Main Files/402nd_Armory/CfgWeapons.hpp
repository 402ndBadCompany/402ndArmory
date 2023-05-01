/*
    CfgWeapons
    this header includes custom items such as
    - Helmets
    - Vests
    - Uniforms
*/

// START OF FILE ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CfgWeapons
{
	// Inheretance Classess
	class OPTRE_UNSC_CH252D_Helmet;
	class HeadgearItem;
	class VestItem;
	// CREATE CH252D FROM OPTRE UNSC CH252D

	class 402nd_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60;
		displayName="[402nd] [GR] CH252D Helmet";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_CH252D.rvmat", ""}; // V_FZ_Armor\data\Helmets\Materials\V_CH252D_V.rvmat (removed path to hopefully make the visor look nicer)
		CBRN_protection=1;
		class ItemInfo: HeadgearItem 
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2","H_Ghillie"};
			hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
			hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_CH252D.rvmat", ""};  // V_FZ_Armor\data\Helmets\Materials\V_CH252D_V.rvmat (removed path to hopefully make the visor look nicer)
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitzFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	class 402nd_CH252D_Ghillie: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60;
		displayName="[402nd] [GR] [Ghillie] CH252D Helmet";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_CH252D.rvmat", ""}; // V_FZ_Armor\data\Helmets\Materials\V_CH252D_V.rvmat (removed path to hopefully make the visor look nicer)
		CBRN_protection=1;
		class ItemInfo: HeadgearItem 
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
			hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_CH252D.rvmat", ""};  // V_FZ_Armor\data\Helmets\Materials\V_CH252D_V.rvmat (removed path to hopefully make the visor look nicer)
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitzFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	// END OF 402nd CH252D

	// START OF EXTRA CUSTOM SHIT FOR CH252D
	
	// CAMO HELMS
	// Leafy (GRL)
	class 402nd_CH252D_Leafy: 402nd_CH252D
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRL] CH252D Helmet";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GRL_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GRL_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};
	};
	class 402nd_CH252D_Ghillie_Leafy: 402nd_CH252D
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRL] [Ghillie] CH252D Helmet";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GRL_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelections[]={"camo","camo2"};hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GRL_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};
	};
	// Urban (UR)
	class 402nd_CH252D_UR: 402nd_CH252D
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [UR] CH252D Helmet";
		hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\Base\ODSTHelm_UR_BC_CO", "\402nd_Armory\data\headgear\Visors\ODSTVisor_UR_BC_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\Base\ODSTHelm_UR_BC_CO", "\402nd_Armory\data\headgear\Visors\ODSTVisor_UR_BC_CO.paa"};};
	};

	// SQUAD SPECIFIC HELM --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class 402nd_CH252D_Broadsword: 402nd_CH252D
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRS] CH252D Helmet (Broadsword)";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_Broadsword_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Broadsword\ODSTHelm_BC_Broadsword_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};
	};
	class 402nd_CH252D_Longsword: 402nd_CH252D
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRS] CH252D Helmet (Longsword)";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Longsword\ODSTHelm_GR_BC_Longsword_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Longsword\ODSTHelm_GR_BC_Longsword_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};
	};
	class 402nd_CH252D_Hammer: 402nd_CH252D
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRS] CH252D Helmet (Hammer)";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Hammer\ODSTHelm_GR_BC_Hammer_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Hammer\ODSTHelm_GR_BC_Hammer_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};
	};
	class 402nd_CH252D_Staff: 402nd_CH252D
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRS] CH252D Helmet (Command Staff)";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_Staff_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Hammer\ODSTHelm_GR_BC_Hammer_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};
	};
	
	
	// CUSTOM PERSONS HELM --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		class 402nd_CH252D_AZZ: 402nd_CH252D{author="402nd Aux Mod Team";displayName="[402nd] [C] CH252D Helmet (Azzamean)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Sabre\ODSTHelm_BC_Azzamean_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Sabre\ODSTHelm_BC_Azzamean_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};};
		class 402nd_CH252D_HAW: 402nd_CH252D{author="402nd Aux Mod Team";displayName="[402nd] [C] CH252D Helmet (Tuf)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Hawke_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Hawke_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};};
		class 402nd_CH252D_HOU: 402nd_CH252D{author="402nd Aux Mod Team";displayName="[402nd] [C] CH252D Helmet (Houlston)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Houlston_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Houlston_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};};
		class 402nd_CH252D_KAM: 402nd_CH252D{author="402nd Aux Mod Team";displayName="[402nd] [C] CH252D Helmet (Hudson)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Kami_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Kami_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};};
		class 402nd_CH252D_PAR: 402nd_CH252D{author="402nd Aux Mod Team";displayName="[402nd] [C] CH252D Helmet (Parris)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Broadsword\ODSTHelm_BC_Parris_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Broadsword\ODSTHelm_BC_Parris_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};};
		class 402nd_CH252D_REN: 402nd_CH252D{author="402nd Aux Mod Team";displayName="[402nd] [C] CH252D Helmet (Renalds)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Hammer\ODSTHelm_BC_Renalds_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Hammer\ODSTHelm_BC_Renalds_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};};
		class 402nd_CH252D_VES: 402nd_CH252D{author="402nd Aux Mod Team";displayName="[402nd] [C] CH252D Helmet (Mike)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Vespade_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Vespade_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};};
		class 402nd_CH252D_MAR: 402nd_CH252D{author="402nd Aux Mod Team";displayName="[402nd] [C] CH252D Helmet (Martinez)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Broadsword\ODSTHelm_GR_BC_Broadsword_Martinez_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Broadsword\ODSTHelm_GR_BC_Broadsword_Martinez_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTVisor_GR_BC_CO.paa"};};};


	// END OF EXTRA CUSTOM SHIT FOR CH252D

	// START OF DP FOR CH252D FROM OPTRE CH252D DP --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class 402nd_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc="402nd";
		author="402nd Aux Mod Team";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.10;
		displayName="[402nd] [GR] CH252D Helmet";
		hiddenSelections[]={"camo","camo2","H_Ghillie"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_CH252D.rvmat", ""};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2","H_Ghillie"};
			hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
			hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_CH252D.rvmat", ""};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	class 402nd_CH252D_Ghillie_dp: 402nd_CH252D_dp
	{
		dlc="402nd";
		author="402nd Aux Mod Team";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.10;
		displayName="[402nd] [GR] [Ghillie] CH252D Helmet";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_CH252D.rvmat", ""};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
			hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_CH252D.rvmat", ""};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	
	// EXTRA CUSTOM DP SHIT HERE -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// CUSTOM PERSONS DP
	
	
	class 402nd_CH252D_AZZ_dp: 402nd_CH252D_dp{displayName="[402nd] [C] CH252D Helmet (Azzamean)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Sabre\ODSTHelm_BC_Azzamean_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Sabre\ODSTHelm_BC_Azzamean_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_HAW_dp: 402nd_CH252D_dp{displayName="[402nd] [C] CH252D Helmet (Tuf)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Hawke_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Hawke_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_HOU_dp: 402nd_CH252D_dp{displayName="[402nd] [C] CH252D Helmet (Houlston)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Houlston_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Houlston_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_KAM_dp: 402nd_CH252D_dp{displayName="[402nd] [C] CH252D Helmet (Hudson)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Kami_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Kami_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_PAR_dp: 402nd_CH252D_dp{displayName="[402nd] [C] CH252D Helmet (Parris)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Broadsword\ODSTHelm_BC_Parris_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Broadsword\ODSTHelm_BC_Parris_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_REN_dp: 402nd_CH252D_dp{displayName="[402nd] [C] CH252D Helmet (Renalds)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Hammer\ODSTHelm_BC_Renalds_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Hammer\ODSTHelm_BC_Renalds_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_UND_dp: 402nd_CH252D_dp{displayName="[402nd] [C] CH252D Helmet (Underwood)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Ballista\ODSTHelm_BC_Underwood_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Ballista\ODSTHelm_BC_Underwood_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_VES_dp: 402nd_CH252D_dp{displayName="[402nd] [C] CH252D Helmet (Mike)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Vespade_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Misc\ODSTHelm_BC_Vespade_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_MAR_dp: 402nd_CH252D_dp{displayName="[402nd] [C] CH252D Helmet (Martinez)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Broadsword\ODSTHelm_GR_BC_Broadsword_Martinez_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Broadsword\ODSTHelm_GR_BC_Broadsword_Martinez_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};

	// CAMO DP
	class 402nd_CH252D_Leafy_dp: 402nd_CH252D_dp{displayName="[402nd] [GRL] CH252D Helmet";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GRL_BC_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GRL_BC_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_Ghillie_Leafy_dp: 402nd_CH252D_Ghillie_dp{displayName="[402nd] [GRL] [Ghillie] CH252D Helmet";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GRL_BC_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GRL_BC_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	
	class 402nd_CH252D_UR_dp: 402nd_CH252D_dp{displayName="[402nd] [UR] CH252D Helmet";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\Base\ODSTHelm_UR_BC_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\Base\ODSTHelm_UR_BC_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	/*
	class 402nd_CH252D_SN_dp: 402nd_CH252D_dp{displayName="[402nd] [SN] CH252D Helmet";hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_SN_BC_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"402nd_Armory\data\headgear\ODSTHelm_SN_BC_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	*/

	// SQUAD SPECIFIC DP
	class 402nd_CH252D_Longsword_dp: 402nd_CH252D_dp{displayName="[402nd] [GRS] CH252D Helmet (Longsword)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Longsword\ODSTHelm_GR_BC_Longsword_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Longsword\ODSTHelm_GR_BC_Longsword_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_Broadsword_dp: 402nd_CH252D_dp{displayName="[402nd] [GRS] CH252D Helmet (Broadsword)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_Broadsword_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_Broadsword_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_Hammer_dp: 402nd_CH252D_dp{displayName="[402nd] [GRS] CH252D Helmet (Hammer)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Hammer\ODSTHelm_GR_BC_Hammer_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Hammer\ODSTHelm_GR_BC_Hammer_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};
	class 402nd_CH252D_Staff_dp: 402nd_CH252D_dp{displayName="[402nd] [GRS] CH252D Helmet (Command Staff)";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_Staff_CO", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Base\ODSTHelm_GR_BC_Staff_CO.paa", "\V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};};};

	// END OF DP FOR CH252D
	// START OF CH252R RECON
	
	class 402nd_CH252R: 402nd_CH252D
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GR] CH252R Helmet";
		model="\OPTRE_UNSC_Units\Army\recon_helmet";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[]={"camo","camo2","H_Ghillie"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_GR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_S1ONIR.rvmat", ""}; // V_FZ_Armor\data\Helmets\Materials\V_S1ONIR_V.rvmat (Removed this path to make visor look nicer)
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]={"camo","camo2","H_Ghillie"};
			hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_GR_BC_CO.paa"};
			hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_S1ONIR.rvmat", ""}; // V_FZ_Armor\data\Helmets\Materials\V_S1ONIR_V.rvmat (Removed this path to make visor look nicer)
		};
	}; 
	class 402nd_CH252R_Ghillie: 402nd_CH252D
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GR] [Ghillie] CH252R Helmet";
		model="\OPTRE_UNSC_Units\Army\recon_helmet";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_GR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_S1ONIR.rvmat", ""}; // V_FZ_Armor\data\Helmets\Materials\V_S1ONIR_V.rvmat (Removed this path to make visor look nicer)
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_GR_BC_CO.paa"};
			hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_S1ONIR.rvmat", ""}; // V_FZ_Armor\data\Helmets\Materials\V_S1ONIR_V.rvmat (Removed this path to make visor look nicer)
		};
	}; 
	
	// END OF CH252R RECON
	// EXTRA CUSTOM SHIT HERE RECON
	
	class 402nd_CH252R_Leafy: 402nd_CH252R
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRL] CH252R Helmet";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GRL_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_GR_BC_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GRL_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_GR_BC_CO.paa"};};
	};
	class 402nd_CH252R_Ghillie_Leafy: 402nd_CH252R
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRL] [Ghillie] CH252R Helmet";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GRL_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_GR_BC_CO.paa"};
		hiddenSelections[]={"camo","camo2"};
		class ItemInfo: ItemInfo {
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GRL_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_GR_BC_CO.paa"};
		};
	};
	
	
	class 402nd_CH252R_UR: 402nd_CH252R
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [UR] CH252R Helmet";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_UR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_UR_BC_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_UR_BC_CO.paa", "\402nd_Armory\data\headgear\Visors\ODSTRVisor_UR_BC_CO.paa"};};
	};

	// END OF CUSTOM RECON SHIT
	// START OF RECON DP
	class 402nd_CH252R_dp: 402nd_CH252D_dp
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GR] CH252R Helmet";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[]={"camo","camo2","H_Ghillie"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GR_BC_CO.paa", "\V_FZ_Armor\data\Helmets\V_S1ONIR_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_S1ONIR.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]={"camo","camo2","H_Ghillie"};
			hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GR_BC_CO.paa", "\V_FZ_Armor\data\Helmets\V_S1ONIR_CLR_V_CA.paa"};
			hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_S1ONIR.rvmat",""};
		};
	};
	class 402nd_CH252R_Ghillie_dp: 402nd_CH252D_dp
	{
		author="402nd Aux Mod Team";
		displayName="[402nd] [GR] [Ghillie] CH252R Helmet";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GR_BC_CO.paa", "\V_FZ_Armor\data\Helmets\V_S1ONIR_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_S1ONIR.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GR_BC_CO.paa", "\V_FZ_Armor\data\Helmets\V_S1ONIR_CLR_V_CA.paa"};
			hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Helmets\Materials\V_S1ONIR.rvmat",""};
		};
	};
	// CUSTOM RECON DP
	class 402nd_CH252R_Leafy_dp: 402nd_CH252R_dp{displayName="[402nd] [GRL] CH252R Helmet";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GRL_BC_CO", "\V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GRL_BC_CO", "\V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA.paa"};};};
	class 402nd_CH252R_Ghillie_Leafy_dp: 402nd_CH252R_Ghillie_dp{displayName="[402nd] [GRL] [Ghillie] CH252R Helmet";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GRL_BC_CO", "\V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_GRL_BC_CO", "\V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA.paa"};};};
	class 402nd_CH252R_UR_dp: 402nd_CH252R_dp{displayName="[402nd] [UR] CH252R Helmet";hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_UR_BC_CO", "\V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"\402nd_Armory\data\headgear\Recon\ODSTRHelm_UR_BC_CO", "\V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA.paa"};};};
	
	// END OF RECON DP
	// START OF VESTS -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// 402nd BASE RIFLEMAN ARMOR
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class 402nd_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GR] M52D (Rifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_GR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_Rifleman_Leafy: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRL] M52D (Rifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_GRL_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_Rifleman_UR: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [UR] M52D (Rifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_UR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	}; 
	// END OF RIFLEMAN
	// START OF CORPSMAN
	class 402nd_Corpsman: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GR] M52D (Corpsman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_V_URB_CO","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","\402nd_Armory\data\armor\Base\ODSTVest_GR_BC_MED_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_Corpsman_UR: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [UR] M52D (Corpsman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_V_URB_CO","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","\402nd_Armory\data\armor\Base\ODSTVest_UR_BC_MED_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	// END OF CORPSMAN
	// START OF DEMOLITIONS
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class 402nd_M52D_Demolitions: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GR] M52D (Demolitions)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","\402nd_Armory\data\armor\Base\ODSTVest_GR_BC_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Demolitions_Leafy: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRL] M52D (Demolitions)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO","\V_FZ_Armor\data\Vests\V_M52_URB_CO","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_GRL_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Demolitions_UR: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [UR] M52D (Demolitions)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","\402nd_Armory\data\armor\Base\ODSTVest_UR_BC_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	// END OF DEMOLITION
	// START OF MARKSMAN
	class OPTRE_UNSC_M52D_Armor_Marksman;
	class 402nd_M52D_Marksman: OPTRE_UNSC_M52D_Armor_Marksman
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GR] M52D (Marksman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\data\Vests\V_M52_V_URB_CO","V_FZ_Armor\data\Vests\V_M52_URB_CO","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO","optre_unsc_units\army\data\ghillie_woodland_co","\402nd_Armory\data\armor\Base\ODSTVest_GR_BC_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Marksman_Leafy: OPTRE_UNSC_M52D_Armor_Marksman
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRL] M52D (Marksman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_GRL_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Marksman_UR: OPTRE_UNSC_M52D_Armor_Marksman
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [UR] M52D (Marksman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_UR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	// END OF MARKSMAN
	// START OF SCOUT
	class OPTRE_UNSC_M52D_Armor_Scout;
	class 402nd_M52D_Scout: OPTRE_UNSC_M52D_Armor_Scout
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GR] M52D (Scout)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_GR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Scout_Leafy: OPTRE_UNSC_M52D_Armor_Scout
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRL] M52D (Scout)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_GRL_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Scout_UR: OPTRE_UNSC_M52D_Armor_Scout
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [UR] M52D (Scout)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_UR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Light_UR: OPTRE_UNSC_M52D_Armor_Scout
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [UR] M52D (Light)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_UR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 80;
			modelSides[] = { 6 };
			containerClass = "Supply200";
			class HitpointsProtectionInfo
            {
                class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
                class Arms: Abdomen {hitpointName="HitArms";};
                class Body: Abdomen {hitpointName="HitBody";};
                class Chest: Abdomen {hitpointName="HitChest";};
                class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
                class Hands: Abdomen {hitpointName="HitHands";};
                class Legs: Abdomen {hitpointName="HitLegs";};
                class Neck: Abdomen {hitpointName="HitNeck";};
            };
			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
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
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			//"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			//"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			//"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
	};
	// END OF SCOUT
	// START OF SNIPER
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class 402nd_M52D_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="402nd Armory";
		author="Azzamaean & Vespade";
		displayName="[402nd] [GR] M52D (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","\optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_GR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","\V_FZ_Armor\data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Sniper_Leafy: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [GRL] M52D (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_GRL_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 402nd_M52D_Sniper_UR: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="402nd Armory";
		author="402nd Aux Mod Team";
		displayName="[402nd] [UR] M52D (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\data\Vests\V_M52_V_URB_CO.paa","\V_FZ_Armor\data\Vests\V_M52_URB_CO.paa","\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","\402nd_Armory\data\armor\Base\ODSTVest_UR_BC_CO.paa"};
		hiddenSelectionsMaterials[]={"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat","\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	// END OF SNIPER
	// START OF CUSTOM ARMOR
	// BALLISTA
	class 402nd_M52D_Raven : OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc = "402nd Armory";
		Scope = 2;
		scopeArsenal = 2;
		author = "402nd Aux Mod Team";
		displayName = "[402nd] [C] M52D (Raven)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"\402nd_Armory\data\armor\Base\ODSTLegs_BC_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"\402nd_Armory\data\armor\Ballista\ODSTVest_GR_Ballista_Raven_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\V_FZ_Armor\data\Vests\Materials\V_M52_V.rvmat",
			"\V_FZ_Armor\data\Vests\Materials\V_M52.rvmat",
			"V_FZ_Armor\data\Vests\Materials\V_M52_L.rvmat",
			"",
			"V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
			};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass = 80;
			modelSides[] = { 6 };
			containerClass = "Supply200";
			class HitpointsProtectionInfo
            {
                class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
                class Arms: Abdomen {hitpointName="HitArms";};
                class Body: Abdomen {hitpointName="HitBody";};
                class Chest: Abdomen {hitpointName="HitChest";};
                class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
                class Hands: Abdomen {hitpointName="HitHands";};
                class Legs: Abdomen {hitpointName="HitLegs";};
                class Neck: Abdomen {hitpointName="HitNeck";};
            };
			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			//"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			//"AP_Pistol",
			//"AP_Rounds",
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
			//"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
	};
	// START OF UNIFORMS ----------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Army_Uniform_OLI;
	class UniformItem;

	// START OF BDU
	class 402nd_GR_BDU: OPTRE_UNSC_Army_Uniform_OLI
    {
		dlc="402nd Armory";
		scope=2;
        author="Vespade & BoomMicGuy";
        displayName="[402nd] [GR] Battle Dress Uniform";
        picture="\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection=1;
        class ItemInfo: UniformItem
        {
			containerClass="Supply100";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass = 402nd_GR_BDU;
        };
	};
	
	
	class 402nd_UR_BDU: OPTRE_UNSC_Army_Uniform_OLI
    {
		dlc="402nd Armory";
		scope=2;
        author="Vespade & BoomMicGuy";
        displayName="[402nd] [UR] Battle Dress Uniform";
        picture="\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection=1;
        class ItemInfo: UniformItem
        {
			containerClass="Supply100";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass = 402nd_UR_BDU;
        };
	};
	// END OF BDU
	// START OF CUU
	class 402nd_GR_CUU: OPTRE_UNSC_Army_Uniform_OLI
    {
		dlc="402nd Armory";
		scope=2;
        author="Vespade & BoomMicGuy";
        displayName="[402nd] [GR] Combat Utility Uniform";
        picture="\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection=1;
        class ItemInfo: UniformItem
        {
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass = 402nd_GR_CUU;
        };
	};
	
	
	class 402nd_UR_CUU: OPTRE_UNSC_Army_Uniform_OLI
    {
		dlc="402nd Armory";
		scope=2;
        author="Vespade & BoomMicGuy";
        displayName="[402nd] [UR] Combat Utility Uniform";
        picture="\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection=1;
        class ItemInfo: UniformItem
        {
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass = 402nd_UR_CUU;
        };
	};
	// END OF CUU
	// END OF UNIFORMS
};

// END OF FILE -----------------------------------------------------------------------------------------------------