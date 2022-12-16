_budget = "ACE_fortify_budget" call AliVE_fnc_ProfileNameSpaceLoad;
_objects = ["ASO_Fortify_Objects"] call acex_fortify_fnc_getPlaceableSet;

if (_budget isEqualType 0) then {
	["acex_fortify_registerObjects", [west, _budget, _objects]] call CBA_fnc_serverEvent;
} else {
	["acex_fortify_registerObjects", [west, 0, _objects]] call CBA_fnc_serverEvent;
};

["ACE_Fortify_budget_change", {
	_budget = [west] call acex_fortify_fnc_getBudget;
	_saved = ["ACE_fortify_budget", _budget] call ALiVE_fnc_ProfileNameSpaceSave;
}] call CBA_fnc_addEventHandler;

_objects = [alive_sys_logistics, "allObjects"] call ALiVE_fnc_logistics;
_aceFortifyObjects = ["ASO_Fortify_Objects"] call acex_fortify_fnc_getPlaceableSet;
private _aceFortifyObjectsCleaned = [];
{
	_aceFortifyObjectsCleaned pushBack (_x select 0);
} forEach _aceFortifyObjects;

{
	if (_x isKindOf "Static") then {
		if (_x isKindOf "CBA_NamespaceDummy" || _x isKindOf "Helipad_base_F") exitWith {};
		if ((typeOf _x) in _aceFortifyObjectsCleaned) then {
			_jipID = ["acex_fortify_addActionToObject", [west, _x]] call CBA_fnc_globalEventJIP;  
			[_jipID, _x] call CBA_fnc_removeGlobalEventJIP;
		};
	};
} forEach _objects;

["crowsEW_spectrum_addRandomRadioTrackingChatter", [r1, 2000, [5, 10], [5, 30], [200, 250], "british"]] call CBA_fnc_serverEvent;
["crowsEW_spectrum_addRandomRadioTrackingChatter", [r2, 2000, [5, 10], [5, 30], [200, 250], "british"]] call CBA_fnc_serverEvent;
["crowsEW_spectrum_addRandomRadioTrackingChatter", [r3, 2000, [5, 10], [5, 30], [100, 150], "police"]] call CBA_fnc_serverEvent;
["crowsEW_spectrum_addRandomRadioTrackingChatter", [r4, 2000, [5, 10], [5, 30], [100, 150], "police"]] call CBA_fnc_serverEvent;

["crowsEW_spectrum_addRandomRadioTrackingChatter", [r5, 2000, [5, 10], [5, 30], [400, 500], "morsecode"]] call CBA_fnc_serverEvent;
["crowsEW_spectrum_addRandomRadioTrackingChatter", [r6, 2000, [5, 10], [5, 30], [400, 500], "morsecode"]] call CBA_fnc_serverEvent;
["crowsEW_spectrum_addRandomRadioTrackingChatter", [r7, 2000, [5, 10], [5, 30], [400, 500], "morsecode"]] call CBA_fnc_serverEvent;
["crowsEW_spectrum_addRandomRadioTrackingChatter", [r8, 2000, [5, 10], [5, 30], [400, 500], "morsecode"]] call CBA_fnc_serverEvent;