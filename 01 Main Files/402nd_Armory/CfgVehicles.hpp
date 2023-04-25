/*
	CfgVehicles
	includes items such as
	- Murky Pelican (Magic School Bus)

*/

// START OF FILE -----------------------------------------------------------------------------------------------------

class CfgVehicles
{
	#include "VES_BDU_V_Base.hpp"

	// START UNIFORM TEXTURES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// START OF BDU TEXTURES
	
	class 402nd_GR_BDU: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg",/*"A_SlimLeg"*/};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_GR_BDU_CO.paa","\402nd_Armory\data\uniform\402nd_GR_BDU_CO.paa"};
		uniformclass="402nd_GR_BDU";
	};
	class 402nd_UR_BDU: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_UR_BDU_CO.paa","\402nd_Armory\data\uniform\402nd_UR_BDU_CO.paa"};
		uniformclass="402nd_UR_BDU";
	};
	/*
	class 402nd_SN_BDU: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_SN_BDU_CO.paa","\402nd_Armory\data\uniform\402nd_SN_BDU_CO.paa"};
		uniformclass="402nd_SN_BDU";
	};
	
	// REMOVED FOR MY OWN SAFETY
	
	class 402nd_DE_BDU: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_DE_BDU_CO.paa","\402nd_Armory\data\uniform\402nd_DE_BDU_CO.paa"};
		uniformclass="402nd_DE_BDU";
	};
	*/
	

	// END OF BDU TEXTURES -----------------------------------------------------------------------------------
	// START OF CUU TEXTURES -----------------------------------------------------------------------------------
	
	class 402nd_GR_CUU: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_GR_CUU_CO.paa","\402nd_Armory\data\uniform\402nd_GR_CUU_CO.paa"};
		uniformclass="402nd_GR_CUU";
	};
	
	
	class 402nd_UR_CUU: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_UR_CUU_CO.paa","\402nd_Armory\data\uniform\402nd_UR_CUU_CO.paa"};
		uniformclass="402nd_UR_CUU";
	};
	/*
	class 402nd_SN_CUU: 402nd_CUU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_SN_CUU_CO.paa","\402nd_Armory\data\uniform\402nd_SN_CUU_CO.paa"};
		uniformclass="402nd_SN_CUU";
	};

	// REMOVED FOR MY OWN SAFETY
	
	class 402nd_DE_CUU: 402nd_CUU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_DE_CUU_CO.paa","\402nd_Armory\data\uniform\402nd_DE_CUU_CO.paa"};
		uniformclass="402nd_DE_CUU";
	};
	*/

	// END OF CUU TEXTURES
	// END UNIFORM TEXTURES

	// START PELICANS ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class VES_D77HTCI_A;
	class MRK_D77HTCI_A: VES_D77HTCI_A
	{
		dlc="402nd Armory";
		author="Azzamean, Vespade & BoomMicGuy";
		displayName="[SQ] D77H-TCI/AV Pelican Magic Bus";
		editorCategory="A_BD_EdCat_402nd";
		editorSubcategory="A_BD_EdSubCat_Rotary";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\vehicles\MURK_Pelican_Base.paa",};
	};
	// END PELICANS
	// START FALCION ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class B_Plane_Fighter_01_F;
	class AZZ_VAF19: B_Plane_Fighter_01_F
	{
		dlc="402nd Armory";
		author="Azzamean & BoomMicGuy";
		displayName="[SQ] VAF-19 Falchion";
		editorCategory="A_BD_EdCat_402nd";
		editorSubcategory="A_BD_EdSubCat_Plane"; 
		hiddenSelectionsTextures[] = {"\402nd_Armory\data\vehicles\Azz_Fighter_01_fuselage_01_SabresSqd_co.paa","V_FZ_Air_Vehicles\data\Falchion\V_VAF19_A_CO","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co","","",""};
	};
	// END FALCION
};

// END OF FILE -----------------------------------------------------------------------------------------------------