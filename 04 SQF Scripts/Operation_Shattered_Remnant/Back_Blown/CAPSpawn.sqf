_grp1 = [getMarkerPos "CAP1", east, ["O_OColURFOPTRE_To_201_Shikra_ACE_ALiVE_01"],0] call BIS_fnc_spawnGroup; 
_wpt1 = _grp1 addWaypoint [getMarkerPos "CAPORDER",5]; 
_wpt1 setWaypointType "LOITER";

sleep .5;

_grp2 = [getMarkerPos "CAP1_1", east, ["O_OColURFOPTRE_To_201_Shikra_ACE_ALiVE_01"],0] call BIS_fnc_spawnGroup; 
_wpt2 = _grp2 addWaypoint [getMarkerPos "CAPORDER_1",5]; 
_wpt2 setWaypointType "LOITER";

sleep .5;

_grp4 = [getMarkerPos "CAP1", east, ["O_OColURFOPTRE_To_201_Shikra_ACE_ALiVE_01"],0] call BIS_fnc_spawnGroup; 
_wpt4 = _grp4 addWaypoint [getMarkerPos "CAPORDER",5]; 
_wpt4 setWaypointType "LOITER";

sleep .5;

_grp5 = [getMarkerPos "CAP1_1", east, ["O_OColURFOPTRE_To_201_Shikra_ACE_ALiVE_01"],0] call BIS_fnc_spawnGroup; 
_wpt5 = _grp5 addWaypoint [getMarkerPos "CAPORDER_1",5]; 
_wpt5 setWaypointType "LOITER";

sleep .5;

_grp7 = [getMarkerPos "CAP1", east, ["DAO_Gunship_B"],0] call BIS_fnc_spawnGroup; 
_wpt7 = _grp7 addWaypoint [getMarkerPos "CASORDER",5]; 
_wpt7 setWaypointType "LOITER";

sleep .5;

_grp8 = [getMarkerPos "CAP1_2", east, ["DAO_Gunship_B"],0] call BIS_fnc_spawnGroup; 
_wpt8 = _grp8 addWaypoint [getMarkerPos "CASORDER",5]; 
_wpt8 setWaypointType "LOITER";