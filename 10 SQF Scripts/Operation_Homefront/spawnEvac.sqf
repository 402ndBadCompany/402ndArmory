if (isServer) then {

_crew1 = creategroup CIVILIAN;  
_airframe1 = [getMarkerPos "evac1", 190, "LM_OPCAN_D77_U_IDAP", _crew1] call BIS_fnc_spawnVehicle;
_wp1 = _crew1 addWaypoint [(getmarkerpos "evac1"), 0];
_wp1 setWaypointType "LAND";
_wp1 setWaypointBehaviour "CARELESS";
_wp1 setWaypointCombatMode "BLUE";

_aircraft1 = _airframe1 select 0;
_aircraft1 setVehicleVarName "Evac_1";
Evac_1 = _aircraft1;
publicVariable "Evac_1";

_crew2 = creategroup CIVILIAN;  
_airframe2 = [getMarkerPos "evac2", 190, "LM_OPCAN_D77_U_IDAP", _crew2] call BIS_fnc_spawnVehicle;
_wp2 = _crew2 addWaypoint [(getmarkerpos "evac2"), 0];
_wp2 setWaypointType "LAND";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";

_aircraft2 = _airframe2 select 0;
_aircraft2 setVehicleVarName "Evac_2";
Evac_2 = _aircraft2;
publicVariable "Evac_2";

_crew3 = creategroup CIVILIAN;  
_airframe3 = [getMarkerPos "evac3", 190, "LM_OPCAN_D77_U_IDAP", _crew3] call BIS_fnc_spawnVehicle;
_wp3 = _crew3 addWaypoint [(getmarkerpos "evac3"), 0];
_wp3 setWaypointType "LAND";
_wp3 setWaypointBehaviour "CARELESS";
_wp3 setWaypointCombatMode "BLUE";

_aircraft3 = _airframe3 select 0;
_aircraft3 setVehicleVarName "Evac_3";
Evac_3 = _aircraft3;
publicVariable "Evac_3";

};
