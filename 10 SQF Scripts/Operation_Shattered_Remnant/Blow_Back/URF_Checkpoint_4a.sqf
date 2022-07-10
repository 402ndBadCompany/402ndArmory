_grp1 = [getMarkerPos "O_URF_SPAWN_4", east, ["LM_OPCAN_URA_SL", "LM_OPCAN_URA_Rifleman_AT", "LM_OPCAN_URA_TL", "LM_OPCAN_URA_Marksman", "LM_OPCAN_URA_GL", "LM_OPCAN_URA_Medic"],0] call BIS_fnc_spawnGroup; 
_wpt1 = _grp1 addWaypoint [getMarkerPos "O_URF_ORDERS_4",5]; 
_wpt1 setWaypointType "HOLD";