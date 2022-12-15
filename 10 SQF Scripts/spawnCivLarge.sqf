if (isServer) then {

params [ ["_position",[],[[]]] ];

_zombies = ["Zombie_O_Crawler_Civ", "Zombie_O_Shambler_Civ", "Zombie_O_Walker_Civ", "Zombie_O_RC_Civ", "Zombie_O_RA_Civ"];

_rUnit1 = selectRandom _zombies;
sleep 0.15;
_rUnit2 = selectRandom _zombies;
sleep 0.15;
_rUnit3 = selectRandom _zombies;
sleep 0.15;
_rUnit4 = selectRandom _zombies;
sleep 0.15;
_rUnit5 = selectRandom _zombies;
sleep 0.15;
_rUnit6 = selectRandom _zombies;

_grp1 = [_position, east, [_rUnit1, _rUnit2, _rUnit3, _rUnit4, _rUnit5, _rUnit6],0] call BIS_fnc_spawnGroup;
[_grp1, _position, 250, 3, nil, false, true] spawn lambs_wp_fnc_taskPatrol;

};