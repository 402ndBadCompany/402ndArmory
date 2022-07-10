["CAManBase", "Init", {
	params ["_entity"];
	
	_entity setVariable ["side_unit", side _entity];

	_entity addEventHandler ["Killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];

		_sideUnit = _unit getVariable ["side_unit", sideUnknown];
		if (_sideUnit isEqualTo sideUnknown) exitWith {};

		_budget = switch(_sideUnit) do {
			case west: { -50 };
			case east: { 50 };
			case resistance: { 50 };
			case civilian: {
				if ((side _instigator) isEqualTo west) then { -200 } else { 0 }
			};
			default { 0 };
		};
		
		if (_budget isEqualTo 0) exitWith {};

		[west, _budget, (_sideUnit isEqualTo civilian)] call acex_fortify_fnc_updateBudget;
		["ACE_Fortify_budget_change", []] call CBA_fnc_serverEvent;
	}];

}] call CBA_fnc_addClassEventHandler;
