if (isServer) then {

_units = ["LM_OPCAN_CPD_Officer_M45","LM_OPCAN_CPD_Officer"];

_rUnit1 = selectRandom _units;
sleep 0.25;
_rUnit2 = selectRandom _units;
sleep 0.25;
_rUnit3 = selectRandom _units;
sleep 0.25;
_rUnit4 = selectRandom _units;
sleep 0.25;
_rUnit5 = selectRandom _units;
sleep 0.25;
_rUnit6 = selectRandom _units;
sleep 0.25;

_position = getMarkerPos "pspawn_2";
_position_1 = getMarkerPos "cspawn";
sleep 0.25;

_grp1 = [_position, resistance, [_rUnit1, _rUnit2, _rUnit3, _rUnit4, _rUnit5, _rUnit6],0] call BIS_fnc_spawnGroup;
sleep 0.25;

[_grp1, _position, 250, 3, nil, false, true] spawn lambs_wp_fnc_taskPatrol;
sleep 0.25;

_grp2 = [_position_1, east, ["OPTRE_FC_Elite_Minor","OPTRE_FC_Elite_Minor2","OPTRE_Jackal_F","OPTRE_Jackal_F","OPTRE_Jackal_F","OPTRE_Jackal_F","OPTRE_FC_Elite_MinorAT","OPTRE_FC_Elite_MinorAA"],0] call BIS_fnc_spawnGroup;
sleep 0.25;

_wpt2a = _grp2 addWaypoint [_position,5];
_wpt2a setWaypointBehaviour "COMBAT";
_wpt2a setWaypointCombatMode "RED";
_wpt2a setWaypointType "MOVE"; 

};