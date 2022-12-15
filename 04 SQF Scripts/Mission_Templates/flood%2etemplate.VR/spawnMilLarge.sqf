if (isServer) then {

params [ ["_position",[],[[]]] ];

_zombies = ["dev_flood_combat_o", "dev_flood_combat_at_o", "dev_flood_combat_br55_o", "dev_flood_carrier_o"];

_rUnit1 = selectRandom _zombies;
sleep 0.25;
_rUnit2 = selectRandom _zombies;
sleep 0.25;
_rUnit3 = selectRandom _zombies;
sleep 0.25;
_rUnit4 = selectRandom _zombies;
sleep 0.25;
_rUnit5 = selectRandom _zombies;
sleep 0.25;
_rUnit6 = selectRandom _zombies;

_grp1 = [_position, east, [_rUnit1, _rUnit2, _rUnit3, _rUnit4, _rUnit5, _rUnit6],0] call BIS_fnc_spawnGroup;
sleep 0.25;
[_grp1, _position, 250, 3, nil, false, true] spawn lambs_wp_fnc_taskPatrol;

};

