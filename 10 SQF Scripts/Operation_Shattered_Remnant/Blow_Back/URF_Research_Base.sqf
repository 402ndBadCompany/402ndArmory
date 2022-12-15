_grp1 = [getMarkerPos "O_URF_SPAWN_RB_1", east, ["TCF_URA_BJ_SL","TCF_URA_BJ_GL","TCF_URA_BJ_Marksman","TCF_URA_BJ_Medic","TCF_URA_BJ_TL","TCF_URA_BJ_Rifleman_AT","TCF_URA_BJ_AutoRifleman"],0] call BIS_fnc_spawnGroup; 
_wpt1 = _grp1 addWaypoint [getMarkerPos "O_URF_ORDERS_RB_1",5]; 
_wpt1 setWaypointType "HOLD";

sleep .5;

_grp2 = [getMarkerPos "O_URF_SPAWN_RB_2", east, ["TCF_URA_BJ_SL","TCF_URA_BJ_GL","TCF_URA_BJ_Marksman","TCF_URA_BJ_Medic","TCF_URA_BJ_TL","TCF_URA_BJ_Rifleman_AT","TCF_URA_BJ_AutoRifleman"],0] call BIS_fnc_spawnGroup; 
_wpt2 = _grp2 addWaypoint [getMarkerPos "O_URF_ORDERS_RB_2",5]; 
_wpt2 setWaypointType "HOLD";

sleep .5;

_grp3 = [getMarkerPos "O_URF_SPAWN_RB_3", east, ["TCF_Tusk_Frieden"],0] call BIS_fnc_spawnGroup; 
_wpt3 = _grp3 addWaypoint [getMarkerPos "O_URF_ORDERS_RB_3",5]; 
_wpt3 setWaypointType "MOVE";

sleep .5;

_grp4 = [getMarkerPos "O_URF_SPAWN_RB_4", east, ["TCF_Tusk_Frieden"],0] call BIS_fnc_spawnGroup; 
_wpt4 = _grp4 addWaypoint [getMarkerPos "O_URF_ORDERS_RB_4",5]; 
_wpt4 setWaypointType "MOVE";

