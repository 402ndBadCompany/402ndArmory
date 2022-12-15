_position = [6114.11,3938.397,1959.076];
_crew1 = creategroup west; 
_airframe1 = [_position, 180, "OPTRE_EscapePod", _crew1] call BIS_fnc_spawnVehicle;


_units = ["OPTRE_UNSC_Navy_Soldier_Gray","OPTRE_UNSC_Navy_Soldier_White","OPTRE_UNSC_Navy_Soldier_Blue","OPTRE_UNSC_Navy_Soldier_Yellow","OPTRE_UNSC_Navy_Soldier_Red_SMG","OPTRE_UNSC_Navy_Soldier_Red_HVY","OPTRE_UNSC_Navy_Soldier_Orange","VES_Rifleman_MA5B_ODSTOPTRE_FC_Marines_Soldier_Rifleman_AR","OPTRE_FC_Marines_Soldier_SquadLead"];

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

_grp1 = [_position, west, [_rUnit1, _rUnit2, _rUnit3, _rUnit4, _rUnit5, _rUnit6],0] call BIS_fnc_spawnGroup;

{ _x assignAsCargo (_airframe1 select 0); _x moveIncargo (_airframe1 select 0);} foreach units _grp1;


