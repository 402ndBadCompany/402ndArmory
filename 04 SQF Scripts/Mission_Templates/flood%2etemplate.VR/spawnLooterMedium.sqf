if (isServer) then {

params [ ["_position",[],[[]]] ];

_looters = ["I_L_Looter_Rifle_F","I_L_Hunter_F","I_L_Looter_Pistol_F", "I_L_Looter_SG_F", "I_L_Looter_SMG_F"];

_rUnit1 = selectRandom _looters;
sleep 0.25;
_rUnit2 = selectRandom _looters;
sleep 0.25;
_rUnit3 = selectRandom _looters;

_grp1 = [_position, independent, [_rUnit1, _rUnit2, _rUnit3],0] call BIS_fnc_spawnGroup;
sleep 0.25;
[_grp1, _position, 250, 3, nil, false, false] spawn lambs_wp_fnc_taskPatrol;

};

