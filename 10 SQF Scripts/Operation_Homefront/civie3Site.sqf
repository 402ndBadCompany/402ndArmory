if (isServer) then {
// FLIGHT 1 ---------------------------------------------------------------------------------------------
_crew1 = [];
_airframe1 = [];
_mygroup = [];
_units = ["OPTRE_FC_Elite_Minor","OPTRE_FC_Elite_Minor2","OPTRE_Jackal_F","OPTRE_Jackal_Sharpshooter_F","OPTRE_Jackal_Sniper_F","OPTRE_Jackal_F","OPTRE_FC_Elite_MinorAT","OPTRE_FC_Elite_MinorAA","OPTRE_FC_Elite_Ultra"];

_rUnit1 = selectRandom _units;
sleep 0.25;
_rUnit2 = selectRandom _units;
sleep 0.25;
_rUnit3 = selectRandom _units;
sleep 0.25;
_rUnit4 = selectRandom _units;
sleep 0.25;
_rUnit5 = selectRandom _units;
sleep 0.25;
_rUnit6 = selectRandom _units;
sleep 0.25;
_rUnit7 = selectRandom _units;
sleep 0.25;
_rUnit8 = selectRandom _units;
sleep 0.25;
_rUnit9 = selectRandom _units;
sleep 0.25;
_rUnit10 = selectRandom _units;
sleep 0.25;
_rUnit11 = selectRandom _units;
sleep 0.25;
_rUnit12 = selectRandom _units;
sleep 0.25;

_crew1 = creategroup EAST; 
_airframe1 = [getMarkerPos "spawner", 315, "OPTRE_FC_Spirit", _crew1] call BIS_fnc_spawnVehicle;

_mygroup = [getmarkerpos "spawner", EAST, [_rUnit1, _rUnit2, _rUnit3, _rUnit4, _rUnit5, _rUnit6, _rUnit7, _rUnit8, _rUnit9, _rUnit10, _rUnit11, _rUnit12],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_wp1a = _mygroup addWaypoint [getmarkerpos "a3M10", 0];
_wp1a setWaypointType "MOVE";
_wp1a setWaypointBehaviour "CARELESS";
_wp1a setWaypointCombatMode "BLUE";

_wp1b = _mygroup addWaypoint [getmarkerpos "pSpawn_1", 0];
_wp1b setWaypointType "MOVE";
_wp1b setWaypointBehaviour "AWARE";
_wp1b setWaypointCombatMode "YELLOW";
_wp1b setWaypointSpeed "NORMAL";

_wp1c = _mygroup addWaypoint [getmarkerpos "a3M12", 0];
_wp1b setWaypointType "MOVE";

sleep .5;

_mygroup = _mygroup;
{ _x assignAsCargo (_airframe1 select 0); _x moveIncargo (_airframe1 select 0);} foreach units _mygroup;


_aircraft1 = _airframe1 select 0;
_aircraft1 setVehicleVarName "Spirit_a3M10";
chalk1 = _aircraft1;
publicVariable "Spirit_a3M10";

sleep .5;

_wp1 = _crew1 addWaypoint [(getmarkerpos "WP1"), 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointBehaviour "CARELESS";
_wp1 setWaypointCombatMode "BLUE";
_wp1 setWaypointSpeed "LIMITED";

_wp2 = _crew1 addWaypoint [(getmarkerpos "a3M10"), 0];
_wp2 setWaypointType "TR UNLOAD";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";
_wp2 setWaypointSpeed "NORMAL";

_wp3 = _crew1 addWaypoint [(getmarkerpos "spawner_1"), 0];
_wp3 setWaypointType "MOVE";
_wp3 setWaypointBehaviour "COMBAT";
_wp3 setWaypointCombatMode "YELLOW";
_wp3 setWaypointSpeed "FULL";

};
// condition: call{this}