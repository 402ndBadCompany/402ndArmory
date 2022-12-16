if(isServer)then{

// Set probability of loot spawning 1-100%
_probability=50;

// Show loot position and type on map (Debugging)
_showLoot=true;

// Set Weapon loot: Primary weapons, secondary weapons, Sidearms.
weaponsLoot=	["arifle_MX_F","arifle_Katiba_F","arifle_Mk20_F","arifle_MXM_F","arifle_MXC_F","arifle_SDAR_F","arifle_TRG20_F","arifle_TRG21_F"];
// Set items: Weapon attachments, first-aid, Binoculars
itemsLoot=		["Rangefinder","Binocular","ToolKit","muzzle_snds_M","muzzle_snds_L","muzzle_snds_H_SW","muzzle_snds_H_MG","muzzle_snds_H","muzzle_snds_B","optic_Arco","optic_Aco","optic_Holosight","optic_Nightstalker","optic_Yorris","optic_tws","FirstAidKit","muzzle_snds_acp"];
// Set Clothing: Hats, Helmets, Uniforms
clothesLoot=	["H_Hat_camo","H_HelmetB_light","U_I_pilotCoveralls","H_Bandanna_camo","U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_tshirt","U_BG_Guerilla1_1","U_BG_Guerilla2_1","U_C_Poloshirt_burgundy","U_I_CombatUniform"];
// Set Vests: Any vests
vestsLoot=		["V_Chestrig_blk","V_BandollierB_blk","V_HarnessO_brn","V_PlateCarrier1_blk","V_Press_F","V_TacVest_blk"];
// Set Backpacks: Any packpacks
backpacksLoot=	["B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_khk","B_Carryall_cbr","B_Carryall_khk","B_Carryall_mcamo","B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk"];

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
						};	
					};
				};				
	}foreach _houseList;
	
};//ISSERVER