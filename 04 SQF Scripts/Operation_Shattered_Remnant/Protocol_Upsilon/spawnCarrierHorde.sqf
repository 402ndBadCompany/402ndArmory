if (isServer) then {

params [ ["_position",[],[[]]] ];

carrier = "dev_flood_carrier_o";
pop = "dev_flood_infection_o";

_grp1 = [_position, east, [pop, pop, pop, pop, carrier, carrier, carrier, carrier],0] call BIS_fnc_spawnGroup;

};