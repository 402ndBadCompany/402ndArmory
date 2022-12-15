if (isServer) then {

params [ ["_position",[],[[]]] ];

pop = "dev_flood_infection_o";
carrier = "dev_flood_carrier_o";

_grp1 = [_position, east, [pop, pop, pop, pop, pop, pop, pop, pop, carrier],0] call BIS_fnc_spawnGroup;
};