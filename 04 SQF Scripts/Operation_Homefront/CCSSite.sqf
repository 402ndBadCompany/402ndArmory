if (isServer) then {
sleep 10;

grp1 = [getMarkerPos "Banshee1_Spawn", EAST, ["OPTRE_FC_Type26B_Banshee"],0] call BIS_fnc_spawnGroup;          
_wpt1 = grp1 addWaypoint [getMarkerPos "Banshee3_marker",5];
_wpt1 setWaypointBehaviour "CARELESS";
_wpt1 setWaypointCombatMode "BLUE";    
_wpt1 setWaypointType "MOVE";

_wpt1a = grp1 addWaypoint [getMarkerPos "Banshee4_marker",5];
_wpt1a setWaypointBehaviour "COMBAT";
_wpt1a setWaypointCombatMode "RED";       
_wpt1a setWaypointType "SEEK AND DESTROY";    

sleep 0.25;

grp2 = [getMarkerPos "Banshee2_Spawn", EAST, ["OPTRE_FC_Type26B_Banshee"],0] call BIS_fnc_spawnGroup;          
_wpt2 = grp2 addWaypoint [getMarkerPos "Banshee3_marker",5];
_wpt2 setWaypointBehaviour "CARELESS";
_wpt2 setWaypointCombatMode "BLUE";         
_wpt2 setWaypointType "MOVE";
    
_wpt2a = grp2 addWaypoint [getMarkerPos "Banshee4_marker",5];
_wpt2a setWaypointBehaviour "COMBAT";
_wpt2a setWaypointCombatMode "RED";         
_wpt2a setWaypointType "SEEK AND DESTROY";  

sleep 0.25;

grp3 = [getMarkerPos "Banshee3_Spawn", EAST, ["OPTRE_FC_Type26B_Banshee"],0] call BIS_fnc_spawnGroup;          
_wpt3 = grp3 addWaypoint [getMarkerPos "Banshee3_marker",5];
_wpt3 setWaypointBehaviour "CARELESS";
_wpt3 setWaypointCombatMode "BLUE";         
_wpt3 setWaypointType "MOVE";
    
_wpt3a = grp3 addWaypoint [getMarkerPos "Banshee4_marker",5];
_wpt3a setWaypointBehaviour "COMBAT";
_wpt3a setWaypointCombatMode "RED";         
_wpt3a setWaypointType "SEEK AND DESTROY";  
  
sleep 0.25;

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

_crew1 = creategroup EAST; 
_airframe1 = [getMarkerPos "spawner", 315, "OPTRE_FC_Spirit", _crew1] call BIS_fnc_spawnVehicle;

_mygroup = [getmarkerpos "spawner", EAST, [_rUnit1, _rUnit2, _rUnit3, _rUnit4, _rUnit5, _rUnit6, _rUnit7, _rUnit8],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_wp1a = _mygroup addWaypoint [getmarkerpos "a3M5", 0];
_wp1a setWaypointType "MOVE";
_wp1a setWaypointBehaviour "CARELESS";
_wp1a setWaypointCombatMode "BLUE";

_wp1b = _mygroup addWaypoint [getmarkerpos "a3M4", 0];
_wp1b setWaypointType "GUARD";
_wp1b setWaypointBehaviour "AWARE";
_wp1b setWaypointCombatMode "YELLOW";
_wp1b setWaypointSpeed "NORMAL";

sleep .5;

_mygroup = _mygroup;
{ _x assignAsCargo (_airframe1 select 0); _x moveIncargo (_airframe1 select 0);} foreach units _mygroup;


_aircraft1 = _airframe1 select 0;
_aircraft1 setVehicleVarName "Spirit_8";
chalk1 = _aircraft1;
publicVariable "Spirit_8";

sleep .5;

_wp2 = _crew1 addWaypoint [(getmarkerpos "a3M5"), 0];
_wp2 setWaypointType "TR UNLOAD";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";
_wp2 setWaypointSpeed "NORMAL";

_wp3 = _crew1 addWaypoint [(getmarkerpos "spawner_1"), 0];
_wp3 setWaypointType "MOVE";
_wp3 setWaypointBehaviour "COMBAT";
_wp3 setWaypointCombatMode "YELLOW";
_wp3 setWaypointSpeed "FULL";

// FLIGHT 2 ---------------------------------------------------------------------------------------------
sleep 8;
_crew1 = [];
_airframe1 = [];
_mygroup = [];

_crew1 = creategroup EAST; 
_airframe1 = [getMarkerPos "spawner_1", 315, "OPTRE_FC_Spirit", _crew1] call BIS_fnc_spawnVehicle;

_mygroup = [getmarkerpos "spawner_1", EAST, ["OPTRE_FC_Elite_Minor","OPTRE_FC_Elite_Minor2","OPTRE_Jackal_F","OPTRE_Jackal_F","OPTRE_Jackal_F","OPTRE_Jackal_F","OPTRE_FC_Elite_MinorAT","OPTRE_FC_Elite_MinorAA"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_wp1a = _mygroup addWaypoint [getmarkerpos "a3M6", 0];
_wp1a setWaypointType "MOVE";
_wp1a setWaypointBehaviour "CARELESS";
_wp1a setWaypointCombatMode "BLUE";

_wp1b = _mygroup addWaypoint [getmarkerpos "a3M3", 0];
_wp1b setWaypointType "GUARD";
_wp1b setWaypointBehaviour "AWARE";
_wp1b setWaypointCombatMode "YELLOW";
_wp1b setWaypointSpeed "NORMAL";

sleep .5;

_mygroup = _mygroup;
{ _x assignAsCargo (_airframe1 select 0); _x moveIncargo (_airframe1 select 0);} foreach units _mygroup;


_aircraft1 = _airframe1 select 0;
_aircraft1 setVehicleVarName "Spirit_9";
chalk1 = _aircraft1;
publicVariable "Spirit_9";

sleep .5;

_wp2 = _crew1 addWaypoint [(getmarkerpos "a3M6"), 0];
_wp2 setWaypointType "TR UNLOAD";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";
_wp2 setWaypointSpeed "NORMAL";

_wp3 = _crew1 addWaypoint [(getmarkerpos "spawner"), 0];
_wp3 setWaypointType "HOLD";
_wp3 setWaypointBehaviour "COMBAT";
_wp3 setWaypointCombatMode "YELLOW";
_wp3 setWaypointSpeed "FULL";

//WRAITH South
_crew1 = creategroup EAST;
_airframe1 = [getMarkerPos "a3M6", 315, "OPTRE_FC_Wraith", _crew1] call BIS_fnc_spawnVehicle;
_wp1 = _crew1 addWaypoint [(getmarkerpos "a3M3"), 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointCombatMode "YELLOW";
_wp1 setWaypointSpeed "NORMAL";

//Wraith North
_crew1 = creategroup EAST;
_airframe1 = [getMarkerPos "LZ_3", 315, "OPTRE_FC_AA_Wraith", _crew1] call BIS_fnc_spawnVehicle;
_wp1 = _crew1 addWaypoint [(getmarkerpos "LZ"), 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointCombatMode "YELLOW";
_wp1 setWaypointSpeed "LIMITED";

};
// condition: call{this}