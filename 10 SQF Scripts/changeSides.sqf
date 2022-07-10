//REBEL SPAWN

sleep 5;

_grp1 = [getMarkerPos "O_CMA_SPAWN_1", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
_wpt1 = _grp1 addWaypoint [getMarkerPos "O_CMA_ORDERS_1",5]; 
_wpt1 setWaypointType "SEEK AND DESTROY";

sleep .5;

_grp2 = [getMarkerPos "O_CMA_SPAWN_2", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
_wpt2 = _grp2 addWaypoint [getMarkerPos "O_CMA_ORDERS_2",5]; 
_wpt2 setWaypointType "SEEK AND DESTROY";

sleep .5;

_grp3 = [getMarkerPos "O_CMA_SPAWN_3", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
_wpt3 = _grp3 addWaypoint [getMarkerPos "O_CMA_ORDERS_3",5]; 
_wpt3 setWaypointType "SEEK AND DESTROY";

sleep 1;

_grp4 = [getMarkerPos "O_CMA_SPAWN_4", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
_wpt4 = _grp4 addWaypoint [getMarkerPos "O_CMA_ORDERS_4",5]; 
_wpt4 setWaypointType "SEEK AND DESTROY";

sleep .5;

_grp5 = [getMarkerPos "O_CMA_SPAWN_5", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
_wpt5 = _grp5 addWaypoint [getMarkerPos "O_CMA_ORDERS_5",5]; 
_wpt5 setWaypointType "SEEK AND DESTROY";

sleep .5;

_grp6 = [getMarkerPos "O_CMA_SPAWN_6", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
_wpt6 = _grp6 addWaypoint [getMarkerPos "O_CMA_ORDERS_6",5]; 
_wpt6 setWaypointType "SEEK AND DESTROY";

sleep 1;

_grp7 = [getMarkerPos "O_CMA_SPAWN_7", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
_wpt7 = _grp7 addWaypoint [getMarkerPos "O_CMA_ORDERS_7",5]; 
_wpt7 setWaypointType "SEEK AND DESTROY";

sleep .5;

_grp10 = [getMarkerPos "O_CMA_SPAWN_8", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01","I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
[_grp10, 1000, nil, nil, getmarkerPos "O_CMA_ORDERS_8"] spawn lambs_wp_fnc_taskRush;

sleep .5;

_grp11 = [getMarkerPos "O_CMA_SPAWN_9", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01","I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
[_grp11, 1000, nil, nil, getmarkerPos "O_CMA_ORDERS_9"] spawn lambs_wp_fnc_taskRush;

sleep .5;

_grp12 = [getMarkerPos "O_CMA_SPAWN_10", east, ["I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01","I_IColMAOPTRE_Rifleman_AT_ALiVE_01","I_ColMA_Grenadier_ALiVE_OPTRE_01","I_ColMA_Squad_Leader_ALiVE_OPTRE_01","I_ColMA_Medic_ALiVE_OPTRE_01","I_ColMA_Autorifleman_ALiVE_OPTRE_01"],0] call BIS_fnc_spawnGroup; 
[_grp12, 1000, nil, nil, getmarkerPos "O_CMA_ORDERS_10"] spawn lambs_wp_fnc_taskRush;


//CMA SPAWN
sleep 1;

_grp8 = [getMarkerPos "I_CMA_SPAWN_1", independent, ["LM_OPCAN_CMA_SL","LM_OPCAN_CMA_Rifleman","LM_OPCAN_CMA_TL","LM_OPCAN_CMA_Rifleman_AT","LM_OPCAN_CMA_Marksman","LM_OPCAN_CMA_GL","LM_OPCAN_CMA_AutoRifleman","LM_OPCAN_CMA_Medic"],0] call BIS_fnc_spawnGroup; 
_wpt8 = _grp8 addWaypoint [getMarkerPos "I_CMA_ORDERS_1",5]; 
_wpt8 setWaypointType "GUARD";

sleep .5;

_grp9 = [getMarkerPos "I_CMA_SPAWN_2", independent, ["LM_OPCAN_CMA_SL","LM_OPCAN_CMA_Rifleman","LM_OPCAN_CMA_TL","LM_OPCAN_CMA_Rifleman_AT","LM_OPCAN_CMA_Marksman","LM_OPCAN_CMA_GL","LM_OPCAN_CMA_AutoRifleman","LM_OPCAN_CMA_Medic"],0] call BIS_fnc_spawnGroup; 
_wpt9 = _grp9 addWaypoint [getMarkerPos "I_CMA_ORDERS_2",5]; 
_wpt9 setWaypointType "GUARD";

