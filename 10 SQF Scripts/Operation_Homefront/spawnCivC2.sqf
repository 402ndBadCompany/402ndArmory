if (isServer) then {

params [ ["_position",[],[[]]] ];

_civilians = ["C_Man_smart_casual_1_F_euro","C_Man_smart_casual_1_F_euro","C_man_shorts_4_F_euro","C_man_polo_1_F_euro","C_scientist_01_informal_F","C_Man_casual_5_V2_F_euro","C_Man_casual_8_F_euro","C_man_p_beggar_F_euro","C_Man_casual_9_F_euro","C_scientist_02_informal_F","C_Man_casual_6_v2_F_euro"];

_rUnit1 = selectRandom _civilians;
sleep 0.25;
_rUnit2 = selectRandom _civilians;
sleep 0.25;
_rUnit3 = selectRandom _civilians;
sleep 0.25;
_rUnit4 = selectRandom _civilians;
sleep 0.25;
_rUnit5 = selectRandom _civilians;
sleep 0.25;
_rUnit6 = selectRandom _civilians;
sleep 0.25;
_rUnit7 = selectRandom _civilians;
sleep 0.25;
_rUnit8 = selectRandom _civilians;
sleep 0.25;

grp1 = [_position, resistance, [_rUnit1, _rUnit2, _rUnit3, _rUnit4, _rUnit5, _rUnit6, _rUnit7, _rUnit8],0] call BIS_fnc_spawnGroup;
sleep 0.25;
[grp1, _position, 50, nil, true, false] call lambs_wp_fnc_taskCamp;
sleep 0.25;

civieGrp2 = grp1;
publicVariable "civieGrp2";

grp2 = [_position, resistance, ["OPTRE_Ins_ER_Deserter_GL","OPTRE_Ins_ER_Militia_MG","OPTRE_Ins_ER_Guerilla_AR","OPTRE_Ins_ER_Rebel_AT","OPTRE_Ins_ER_Insurgent_BR","OPTRE_Ins_ER_Farmer"],0] call BIS_fnc_spawnGroup;
sleep 0.25;
[grp2, grp2, 50, nil, true, false, nil, true] call lambs_wp_fnc_taskGarrison;
sleep 0.25;

_position1 = getMarkerPos "pspawn";
sleep 0.25;

_grp3 = [_position1, resistance, ["LM_OPCAN_CPD_TL","LM_OPCAN_CPD_TL","LM_OPCAN_CPD_TL","LM_OPCAN_CPD_TL","LM_OPCAN_CPD_TL","LM_OPCAN_CPD_TL"],0] call BIS_fnc_spawnGroup;
[_grp3, _position1, 250, 3, nil, false, true] spawn lambs_wp_fnc_taskPatrol;
sleep 0.25;

_grp4 = [_position1, resistance, ["LM_OPCAN_CPD_Officer_M45","LM_OPCAN_CPD_Officer","LM_OPCAN_CPD_Officer_M45"],0] call BIS_fnc_spawnGroup;
[_grp4, _position1, 250, 3, nil, false, true] spawn lambs_wp_fnc_taskPatrol;
sleep 0.25;

_grp5 = [getMarkerPos "covieCiv2Spawn", east, ["OPTRE_FC_Elite_Minor","OPTRE_FC_Elite_Minor2","OPTRE_Jackal_F","OPTRE_Jackal_F","OPTRE_Jackal_Sharpshooter_F"],0] call BIS_fnc_spawnGroup;
[_grp5, getMarkerPos "covieCiv2Spawn", 250, 3, nil, false, true] spawn lambs_wp_fnc_taskPatrol;
sleep 0.25;

};