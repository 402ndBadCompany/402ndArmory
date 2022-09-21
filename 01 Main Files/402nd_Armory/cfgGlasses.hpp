/*
    cfgGlasses
    this header includes custom items such as
    - ODST VISOR GLASSES
*/

// START OF FILE -----------------------------------------------------------------------------------------------------

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
		ace_resistance = 1;
		ace_protection = 1;
		ace_overlay = "\402nd_Armory\ui\HUD_Normal_CA.paa";
		ace_overlayDirt = "\402nd_Armory\ui\HUD_Dirt2_CA.paa";
		ace_overlayCracked = "\402nd_Armory\ui\HUD_Cracked_CA.paa";
		ace_dustPath = "\402nd_Armory\ui\HUD_Dust2_CA.paa";
	};
	class 402nd_ODST_HUD_NC: G_Diving
	{
		dlc = "402nd Armory";
		displayName = "[402nd] [NC] ODST Visor";
		model = "";
		scope = 2;
		picture = "\A3\characters_f\Data\UI\icon_g_tactical_ca.paa";
		mode = 0;
		ace_color[] = {0,0,0};
		ace_tintAmount = 0;
		ace_resistance = 1;
		ace_protection = 1;
		ace_overlay = "";
		ace_overlayDirt = "\402nd_Armory\ui\HUD_Dirt2_CA.paa";
		ace_overlayCracked = "\402nd_Armory\ui\HUD_Cracked2_CA.paa";
		ace_dustPath = "\402nd_Armory\ui\HUD_Dust2_CA.paa";
	};
};

// END OF FILE -----------------------------------------------------------------------------------------------------