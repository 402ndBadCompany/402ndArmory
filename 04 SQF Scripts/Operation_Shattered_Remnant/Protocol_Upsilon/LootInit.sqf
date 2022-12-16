if(isServer)then{

["Spawning Loot..."] remoteExec ["hint", 0];

// Set probability of loot spawning 1-100%
_probability = 25;

// Show loot position and type on map (Debugging)
_showLoot = false;

// Set Weapon loot: Primary weapons, secondary weapons, Sidearms.
weaponsLoot=	["optre_hgun_sas10_F","optre_hgun_comet_F","OPTRE_M6G","OPTRE_M319s","402nd_SRS99E", "hgun_PDW2000_F", "arifle_AKM_F", "srifle_DMR_06_hunter_F", "srifle_DMR_03_multicam_F", "OPTRE_BR55", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7", "OPTRE_M90A", "OPTRE_MA32", "OPTRE_Commando"];
// Set items: Weapon attachments, first-aid, Binoculars
itemsLoot=		["ACE_quikclot","ACE_PackingBandage","ACE_elasticBandage","ACE_fieldDressing","dev_enzymeCapsule_refined","dev_enzymeCapsule","ItemAndroid","ItemRadio","Knife_m3","Kukri","IceAxe","Crowbar","Bat_Spike","Bat_Clear","Pipe_aluminium","WBK_axe","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Yellow","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Blue","MiniGrenade","HandGrenade","ACE_HandFlare_White","ACE_HandFlare_Green","ACE_Chemlight_Orange","Chemlight_green","ACE_Chemlight_HiBlue","ACE_FlareTripMine_Mag","ACE_splint","ACE_personalAidKit","MineDetector","ACE_MapTools","ACE_Clacker","ACE_Kestrel4500","ACE_Flashlight_MX991","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Cellphone","ACE_Can_Spirit","ACE_Can_RedGull","ACE_Can_Franta","VES_TagSpraycan","ACE_CableTie","ACE_Bannana","Rangefinder","Binocular","ToolKit", "FirstAidKit", "optre_br55hb_scope", "optic_aco", "optic_acro", "optre_br45_scope", "optic_holosight", "optic_holosight_smg", "optre_m392_scope", "optic_mrco", "optic_hamr","optre_m7_sight","optic_sos","optic_nightstalker","optre_ma5suppressor","muzzle_snds_65_ti_blk_f","bipod_01_f_blk","muzzle_snds_b","optic_yorris","optre_srs99c_scope","optre_srs99_scope"];
// Set Clothing: Hats, Helmets, Uniforms
clothesLoot=	["OPTRE_HUD_Glasses","G_Aviator","OPTRE_UNSC_CH252_Helmet_MAR","LM_OPCAN_Frihelm","LM_OPCAN_CPD_CH230_UP","LM_OPCAN_CPD_CH230","H_Hat_camo","H_HelmetB_light","U_I_pilotCoveralls","H_Bandanna_camo","U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_tshirt","U_BG_Guerilla1_1","U_BG_Guerilla2_1","U_C_Poloshirt_burgundy","U_I_CombatUniform"];
// Set Vests: Any vests
vestsLoot=		["ACE_quikclot","ACE_PackingBandage","ACE_elasticBandage","ACE_fieldDressing","dev_enzymeCapsule_refined","dev_enzymeCapsule","ItemAndroid","ItemRadio","Knife_m3","Kukri","IceAxe","Crowbar","Bat_Spike","Bat_Clear","Pipe_aluminium","WBK_axe","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Yellow","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Blue","MiniGrenade","HandGrenade","ACE_HandFlare_White","ACE_HandFlare_Green","ACE_Chemlight_Orange","Chemlight_green","ACE_Chemlight_HiBlue","ACE_FlareTripMine_Mag","ACE_splint","ACE_personalAidKit","MineDetector","ACE_MapTools","ACE_Clacker","ACE_Kestrel4500","ACE_Flashlight_MX991","ACE_EntrenchingTool","ACE_EarPlugs","ACE_Cellphone","ACE_Can_Spirit","ACE_Can_RedGull","ACE_Can_Franta","VES_TagSpraycan","ACE_CableTie","ACE_Bannana","V_Chestrig_blk","V_BandollierB_blk","V_HarnessO_brn","V_PlateCarrier1_blk","V_Press_F","V_TacVest_blk"];
// Set Backpacks: Any packpacks
backpacksLoot=	["OPTRE_UNSC_Rucksack","B_Messenger_Black_F","B_LegStrapBag_black_F","B_RadioBag_01_black_F","B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_khk","B_Carryall_cbr","B_Carryall_khk","B_Carryall_mcamo","B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk"];

// Exclude buildings from loot spawn. Use 'TYPEOF' to find building name
_exclusionList=	["Land_Pier_F","Land_Pier_small_F","Land_NavigLight","Land_LampHarbour_F"];

private ["_distance","_houseList"];
	_mkr=(_this select 0);
	_mkr setmarkerAlpha 0;
	_pos=markerpos _mkr;
		_mkrY= getmarkerSize _mkr select 0;
		_mkrX= getmarkerSize _mkr select 1;

 _distance=_mkrX;
	if (_mkrY > _mkrX) 
			then {
			_distance=_mkrY;
			};

 _houseList= _pos nearObjects ["House",_distance];
						
		{
	_house=_X;

	if (!(typeOf _house in _exclusionList)) 
			then {

		
 for "_n" from 0 to 50 do {
 
	_buildingPos=_house buildingpos _n;
		if (str _buildingPos == "[0,0,0]") exitwith {};
					
				if (_probability > random 100) 
					then {
				null=[_buildingPos,_showLoot] execVM "spawnloot.sqf";
				format ["Loot Spawned in Pos: %1", _buildingPos] remoteExec ["hint", 0];
						};	
					};
				};				
	}foreach _houseList;
	
["Loot Spawning Complete"] remoteExec ["hint", 0];
	
};//ISSERVER