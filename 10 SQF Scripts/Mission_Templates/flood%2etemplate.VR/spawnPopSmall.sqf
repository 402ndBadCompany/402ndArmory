if (isServer) then {

params [ ["_position",[],[[]]] ];

pop = "dev_flood_infection_o";

_grp1 = [_position, east, [pop, pop, pop, pop],0] call BIS_fnc_spawnGroup;
};