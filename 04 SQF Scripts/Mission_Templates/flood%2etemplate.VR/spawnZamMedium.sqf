if (isServer) then {

params [ ["_position",[],[[]]] ];

_zombies = ["C_Man_Messenger_01_F", "C_man_sport_3_F", "C_man_p_begger_F", "C_man_1","C_Man_casual_1_F","C_Man_Paramedic_01_F","C_Man_casual_7_F","C_Man_casual_6_F","C_man_w_worker_F","C_Man_UtilityWorker_01_F","C_man_hunter_1_F"];

_rUnit1 = selectRandom _zombies;
sleep 0.25;
_rUnit2 = selectRandom _zombies;
sleep 0.25;
_rUnit3 = selectRandom _zombies;
sleep 0.25;
_rUnit4 = selectRandom _zombies;

pop = "dev_flood_infection_o";

_grp1 = [_position, civilian, [_rUnit1, _rUnit2, _rUnit3, _rUnit4],0] call BIS_fnc_spawnGroup;
sleep 2;
_grp2 = [_position, east, [pop, pop, pop, pop],0] call BIS_fnc_spawnGroup;
sleep 1;
//{_x setDamage 1;} forEach units _grp1;
"forEach units _grp1;" remoteExec ["{_x setDamage 1;}", 0];
};