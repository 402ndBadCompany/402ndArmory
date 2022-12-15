// FLIGHT 1 ---------------------------------------------------------------------------------------------
_crew1 = [];
_airframe1 = [];
_mygroup = [];

_crew1 = creategroup EAST; 
_airframe1 = [getMarkerPos "spawner", 315, "O_OColURFOPTRE_Y32_IT_ALiVE_01", _crew1] call BIS_fnc_spawnVehicle;

_mygroup = [getmarkerpos "spawner", EAST, ["TCF_URA_BJ_SL","TCF_URA_BJ_GL","TCF_URA_BJ_Marksman","TCF_URA_BJ_Medic","TCF_URA_BJ_TL","TCF_URA_BJ_Rifleman_AT","TCF_URA_BJ_AutoRifleman"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_wp1a = _mygroup addWaypoint [getmarkerpos "RP1", 0];

sleep .5;

_mygroup = _mygroup;
{ _x assignAsCargo (_airframe1 select 0); _x moveIncargo (_airframe1 select 0);} foreach units _mygroup;


_aircraft1 = _airframe1 select 0;
_aircraft1 setVehicleVarName "chalk1";
chalk1 = _aircraft1;
publicVariable "chalk1";

sleep .5;

_wp1 = _crew1 addWaypoint [(getmarkerpos "LZ1"), 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointBehaviour "CARELESS";
_wp1 setWaypointCombatMode "BLUE";
_wp1 setWaypointSpeed "LIMITED";

_wp2 = _crew1 addWaypoint [(getmarkerpos "LZ2"), 0];
_wp2 setWaypointType "MOVE";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";
_wp2 setWaypointSpeed "LIMITED";

_wp3 = _crew1 addWaypoint [(getmarkerpos "CAS3"), 0];
_wp3 setWaypointType "LOITER";
_wp3 setWaypointBehaviour "COMBAT";
_wp3 setWaypointCombatMode "RED";
_wp3 setWaypointSpeed "NORMAL";

chalk1 flyInHeight 500;

// FLIGHT 2 ---------------------------------------------------------------------------------------------
sleep 10;
// FLIGHT 2 ---------------------------------------------------------------------------------------------

_crew1 = [];
_airframe1 = [];
_mygroup = [];

_crew1 = creategroup EAST; 
_airframe1 = [getMarkerPos "spawner", 315, "O_OColURFOPTRE_Y32_IT_ALiVE_01", _crew1] call BIS_fnc_spawnVehicle;

_mygroup = [getmarkerpos "spawner", EAST, ["TCF_URA_BJ_SL","TCF_URA_BJ_GL","TCF_URA_BJ_Marksman","TCF_URA_BJ_Medic","TCF_URA_BJ_TL","TCF_URA_BJ_Rifleman_AT","TCF_URA_BJ_AutoRifleman"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_wp1a = _mygroup addWaypoint [getmarkerpos "RP1", 0];

sleep .5;

_mygroup = _mygroup;
{ _x assignAsCargo (_airframe1 select 0); _x moveIncargo (_airframe1 select 0);} foreach units _mygroup;

_aircraft1 = _airframe1 select 0;
_aircraft1 setVehicleVarName "chalk1_1"; 
chalk1_1 = _aircraft1;
publicVariable "chalk1_1";

sleep .5;

_wp1 = _crew1 addWaypoint [(getmarkerpos "LZ1"), 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointBehaviour "CARELESS";
_wp1 setWaypointCombatMode "BLUE";
_wp1 setWaypointSpeed "LIMITED";


_wp2 = _crew1 addWaypoint [(getmarkerpos "LZ2"), 0];
_wp2 setWaypointType "MOVE";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";
_wp2 setWaypointSpeed "LIMITED";


_wp3 = _crew1 addWaypoint [(getmarkerpos "CAS3"), 0];
_wp3 setWaypointType "LOITER";
_wp3 setWaypointBehaviour "COMBAT";
_wp3 setWaypointCombatMode "RED";
_wp3 setWaypointSpeed "NORMAL";

chalk1_1 flyInHeight 500;

// FLIGHT 3 ---------------------------------------------------------------------------------------------
sleep 5;
// FLIGHT 3 ---------------------------------------------------------------------------------------------

_crew1 = [];
_airframe1 = [];
_mygroup = [];

_crew1 = creategroup EAST; 
_airframe1 = [getMarkerPos "spawner", 315, "O_OColURFOPTRE_Y32_IT_ALiVE_01", _crew1] call BIS_fnc_spawnVehicle;

_mygroup = [getmarkerpos "spawner", EAST, ["TCF_URA_BJ_SL","TCF_URA_BJ_GL","TCF_URA_BJ_Marksman","TCF_URA_BJ_Medic","TCF_URA_BJ_TL","TCF_URA_BJ_Rifleman_AT","TCF_URA_BJ_AutoRifleman"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_wp1a = _mygroup addWaypoint [getmarkerpos "RP2", 0];

sleep .5;

_mygroup = _mygroup;
{ _x assignAsCargo (_airframe1 select 0); _x moveIncargo (_airframe1 select 0);} foreach units _mygroup;

_aircraft1 = _airframe1 select 0;
_aircraft1 setVehicleVarName "chalk1_2"; 
chalk1_2 = _aircraft1;
publicVariable "chalk1_2";

sleep .5;

_wp1 = _crew1 addWaypoint [(getmarkerpos "LZ1"), 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointBehaviour "CARELESS";
_wp1 setWaypointCombatMode "BLUE";
_wp1 setWaypointSpeed "LIMITED";

_wp2 = _crew1 addWaypoint [(getmarkerpos "LZ2"), 0];
_wp2 setWaypointType "MOVE";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";
_wp2 setWaypointSpeed "LIMITED";

_wp3 = _crew1 addWaypoint [(getmarkerpos "CAS3"), 0];
_wp3 setWaypointType "LOITER";
_wp3 setWaypointBehaviour "COMBAT";
_wp3 setWaypointCombatMode "RED";
_wp3 setWaypointSpeed "NORMAL";

chalk1_2 flyInHeight 500;

// FLIGHT 4 ---------------------------------------------------------------------------------------------
sleep 10;
// FLIGHT 4 ---------------------------------------------------------------------------------------------

_crew1 = [];
_airframe1 = [];
_mygroup = [];

_crew1 = creategroup EAST; 
_airframe1 = [getMarkerPos "spawner", 315, "O_OColURFOPTRE_Y32_IT_ALiVE_01", _crew1] call BIS_fnc_spawnVehicle;

_mygroup = [getmarkerpos "spawner", EAST, ["TCF_URA_BJ_SL","TCF_URA_BJ_GL","TCF_URA_BJ_Marksman","TCF_URA_BJ_Medic","TCF_URA_BJ_TL","TCF_URA_BJ_Rifleman_AT","TCF_URA_BJ_AutoRifleman"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_wp1a = _mygroup addWaypoint [getmarkerpos "RP2", 0];

sleep .5;

_mygroup = _mygroup;
{ _x assignAsCargo (_airframe1 select 0); _x moveIncargo (_airframe1 select 0);} foreach units _mygroup;

_aircraft1 = _airframe1 select 0;
_aircraft1 setVehicleVarName "chalk1_3"; 
chalk1_3 = _aircraft1;
publicVariable "chalk1_3";

sleep .5;

_wp1 = _crew1 addWaypoint [(getmarkerpos "LZ1"), 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointBehaviour "CARELESS";
_wp1 setWaypointCombatMode "BLUE";
_wp1 setWaypointSpeed "LIMITED";

_wp2 = _crew1 addWaypoint [(getmarkerpos "LZ2"), 0];
_wp2 setWaypointType "MOVE";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";
_wp2 setWaypointSpeed "LIMITED";

_wp3 = _crew1 addWaypoint [(getmarkerpos "CAS3"), 0];
_wp3 setWaypointType "LOITER";
_wp3 setWaypointBehaviour "COMBAT";
_wp3 setWaypointCombatMode "RED";
_wp3 setWaypointSpeed "NORMAL";

chalk1_3 flyInHeight 500;