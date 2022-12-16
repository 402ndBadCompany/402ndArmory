if (isServer) then {

params [ ["_position",[],[[]]] ];

_zombies = ["Zombie_O_Shooter_LDF", "Zombie_O_Walker_LDF", "Zombie_O_RA_LDF", "Zombie_O_Shambler_LDF"];

_rUnit1 = selectRandom _zombies;
sleep 0.25;
_rUnit2 = selectRandom _zombies;

_grp1 = [_position, east, [_rUnit1, _rUnit2],0] call BIS_fnc_spawnGroup;
sleep 0.25;
[_grp1, _position, 250, 3, nil, false, true] spawn lambs_wp_fnc_taskPatrol;

};

