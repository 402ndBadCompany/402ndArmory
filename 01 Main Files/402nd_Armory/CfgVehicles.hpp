/*
	CfgVehicles
	includes items such as
	- Murky Pelican (Magic School Bus)

*/

// START OF FILE -----------------------------------------------------------------------------------------------------

#include "VES_BDU_V_Base.hpp"

class CfgVehicles
{

	// START UNIFORM TEXTURES
	class 402nd_UR_Uniform: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg",/*"A_SlimLeg"*/};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_UR_Uniform_CO.paa","\402nd_Armory\data\uniform\402nd_UR_Uniform_CO.paa"};
		uniformclass="402nd_UR_Uniform";
	};
	class 402nd_GR_Uniform: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg",/*"A_SlimLeg"*/};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_GR_Uniform_CO.paa","\402nd_Armory\data\uniform\402nd_GR_Uniform_CO.paa"};
		uniformclass="402nd_GR_Uniform";
	};
	class 402nd_GR2_Uniform: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg",/*"A_SlimLeg"*/};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_GR2_Uniform_CO.paa","\402nd_Armory\data\uniform\402nd_GR2_Uniform_CO.paa"};
		uniformclass="402nd_GR2_Uniform";
	};
	class 402nd_DE_Uniform: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg",/*"A_SlimLeg"*/};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_DE_Uniform_CO.paa","\402nd_Armory\data\uniform\402nd_DE_Uniform_CO.paa"};
		uniformclass="402nd_DE_Uniform";
	};
	class 402nd_SN_Uniform: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg",/*"A_SlimLeg"*/};
		hiddenSelectionsTextures[]={"\402nd_Armory\data\uniform\402nd_SN_Uniform_CO.paa","\402nd_Armory\data\uniform\402nd_SN_Uniform_CO.paa"};
		uniformclass="402nd_SN_Uniform";
	};
	// END UNIFORM TEXTURES

	// START PELICANS
	class VES_D77HTCI_A;
	class MRK_D77HTCI_A: VES_D77HTCI_A
	{
		dlc="402nd Armory";
		author="Azzamean, Vespade & BoomMicGuy";
		displayName="D77H-TCI/AV Pelican Magic Bus";
		editorCategory="A_BD_EdCat_402nd";
		editorSubcategory="A_BD_EdSubCat_Rotary";
		hiddenSelectionsTextures[]={"\402nd_Armory\data\vehicles\MURK_Pelican_Base.paa",};
	};
};

// END OF FILE -----------------------------------------------------------------------------------------------------