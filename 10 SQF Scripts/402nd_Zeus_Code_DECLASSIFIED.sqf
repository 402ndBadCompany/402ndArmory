
// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
//Used in Description.ext to keep spawns on position
respawnOnStart = 0;

//Gear Scanner for Arsenal

AllPlayableUnitsItens = [];
{AllPlayableUnitsItens = AllPlayableUnitsItens + [(headgear _x)] + [(goggles _x)] + (assignedItems _x) + (backpackitems _x)+ [(backpack _x)] + (uniformItems _x) + [(uniform _x)] + (vestItems _x) + [(vest _x)] + (magazines _x) + (weapons _x) + (primaryWeaponItems _x)+ (primaryWeaponMagazine _x) + (handgunMagazine _x) + (handgunItems _x) + (secondaryWeaponItems _x) + (secondaryWeaponMagazine _x)} forEach (playableUnits + switchableUnits);
AllPlayableUnitsItens = AllPlayableUnitsItens select {count _x > 0};
AllPlayableUnitsItens = AllPlayableUnitsItens arrayIntersect AllPlayableUnitsItens;
copyToClipboard str AllPlayableUnitsItens;

//Spawn Units with LAMBS
// class names for LAMBs waypoints for use with triggers: LOOK UP GITHUB FOR PARAMS
// lambs_wp_fnc_taskCQB
// lambs_wp_fnc_taskCreep
// lambs_wp_fnc_taskGarrison
// lambs_wp_fnc_taskHunt
// lambs_wp_fnc_taskPatrol
// lambs_wp_fnc_taskRush
// lambs_wp_fnc_taskCamp
// lambs_wp_fnc_taskAssault

_grp1 = [getMarkerPos "testSpawn2", east, ["O_Soldier_SL_F", "O_Soldier_F","O_Soldier_F","O_Soldier_F","O_Soldier_F","O_Soldier_AR_F"],0] call BIS_fnc_spawnGroup;
[_grp1, 1000, nil, nil, getmarkerPos "testRush"] spawn lambs_wp_fnc_taskRush;

//Spawn Units with Waypoint

_grp1 = [getMarkerPos "testSpawn", east, ["O_Soldier_SL_F", "O_Soldier_F","O_Soldier_F","O_Soldier_F","O_Soldier_F","O_Soldier_AR_F"],0] call BIS_fnc_spawnGroup; 
_wpt1 = _grp1 addWaypoint [getMarkerPos "testMove",5]; 
_wpt1 setWaypointType "MOVE";


doStop this; //Stop Soldiers from moving, will react to contact
this disableAI "PATH"; //Stop Soldiers from moving, will not react to contact

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
//Force Load 
_EndSplashScreen = {
    for "_x" from 1 to 4 do {
        endLoadingScreen;
        sleep 3;
    };
};

[] spawn _EndSplashScreen;

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
//Use with drake to make it stop firing
if (isServer) then {
    private _groups = this getVariable "optre_draketurretcrewgroups";

    private "_units";
    _groups apply {
        _units = units _x;
        _units apply {_x setCaptive true};
    };
};

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
// Enable simulation of anything inside trigger radius. Doesn't work... ;-;
{ 
if(!(_x getVariable ["simulationDisabled", false])) then { 
[_x, true] remoteExec ["enableSimulationGlobal", 0]; 
}; 
} forEach thisList;

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
_list = getPosATL corvette nearObjects 400; 
 
{if !( _x isKindOf "Man") then {[_x, drake] call Bis_fnc_attachToRelative;};} forEach _list;

// ATTACHES CORVETTE TO THINGY ^

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
// **MAC CANNON** (Borked) (Put in obj INIT)

//if ((isDedicated) OR (hasInterface && isServer)) then
//{
        _forEachIndex = 0;
        while {_forEachIndex < 10} do 
        {
            _randomPos = [[[(getPos _this), 25]],[]] call BIS_fnc_randomPos;
            _missile_forEachIndex = createVehicle ["ammo_Missile_Cruise_01", [((getPos _this) select 0), ((getPos _this) select 1), ((getPos _this) select 2) + 5000], [], 0, "CAN_COLLIDE"];
            [_missile_forEachIndex, -90, 0] call BIS_fnc_setPitchBank;
            _missile_forEachIndex setVelocityModelSpace [0, 1000, 0];
          _forEachIndex = _forEachIndex + 1;
        };
//};


// **SPIRIT OF FIRE BARRAGE** (BORKED)

if ((isDedicated) OR (hasInterface && isServer)) then
{
    [] spawn 
    {
        _forEachIndex = 0;
        while {_forEachIndex < 40} do 
        {
            _randomPos = [[[(getPos _this), 250]],[]] call BIS_fnc_randomPos;
            _missile_forEachIndex = createVehicle ["ammo_Missile_Cruise_01", [((_randomPos) select 0), ((_randomPos) select 1), ((getPos _this) select 2) + 5000], [], 0, "CAN_COLLIDE"];
            [_missile_forEachIndex, -90, 0] call BIS_fnc_setPitchBank;
            _missile_forEachIndex setVelocityModelSpace [0, 1000, 0];
          _forEachIndex = _forEachIndex + 1;
            sleep 1;
        };
    };
};

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
//Solution to edit terrain module exploding vehicles:
 { 
if(!(_x getVariable ["simulationDisabled", false])) then { 
[_x, true] remoteExec ["enableSimulationGlobal", 0]; 
}; 
} forEach thisList; 

//^ Any non-simulated object in a trigger's zone that isn't sim disabled with:
 
this setVariable ["simulationDisabled", true]; 

//Will have it's simulation turned on after a three second delay that has to be set separately in the trigger

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
nul = [this] spawn {while {true} do {(_this select 0) say3D ["sound01", 50, 1]; sleep 150;};};
// Play a sound repeatedly using a while loop ^

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //

//https://docs.google.com/document/d/1ET1LHDb9dM7VFdxIukHhS3Pae-jT20cO4ghAhjvZCPE/edit?usp=drivesdk

// Link to Hidden Selections Legend for OPTER ^

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
//Give an item the ability for players to get perms they need
this addAction ["Assign Medic Perms", {player setUnitTrait ["Medic",true]}]; 
this addAction ["Assign Engineer Perms", {player setUnitTrait ["Engineer",true]}];
this addAction ["Remove Medic Perms", {player setUnitTrait ["Medic",false]}]; 
this addAction ["Remove Engineer Perms", {player setUnitTrait ["Engineer",false]}]; 

// REQUIRES MODIFGICATION TO INCLUDE A REMOTE EXECUTE COMMAND FOR LOCALITY, EXECUTE GLOBALLY ^

// i.e.
[radio, ["Turn on Radio", {radioOn = true;}]] remoteExec ["addAction", 0, true];
// EXAMPLE WITH REMOTE remoteExec

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
//Teleport Object:
this addAction ["Go Inside", {player setPos (getPos obbjectVariableNameOfWhatYoureTPingTo)}]


//Reset Unit Cap:
{deleteGroup _X} foreach allGroups;


//Texture Object/Person/Vehicle/Anything:
this setObjectTexture [0, "Location of Texture"];


//Attach Object:
[objectyouwantattached,objectyouareattachingto] call BIS_fnc_attachToRelative;

// REQUIRES MODIFGICATION TO INCLUDE A REMOTE EXECUTE COMMAND FOR LOCALITY, EXECUTE GLOBALLY ^

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
//Heli repair,rearm,refuel script

ServiceHeli.sqf

private ["_veh","_vehType"];
_veh = _this select 0;
_vehType = getText(configFile>>"CfgVehicles">>typeOf _veh>>"DisplayName");


if ((_veh isKindOf "helicopter") && (driver _veh == player)) exitWith { 

    _veh sidechat format ["Servicing %1.", _vehType];
    _veh setFuel 0;
    sleep 3;
    
    _veh setVehicleAmmo 1;    
    _veh sidechat format ["%1 Rearmed.", _vehType];
    sleep 3;
    
    _veh setDamage 0;    
    _veh sidechat format ["%1 Repaired.", _vehType];    
    sleep 3;
    
    _veh setFuel 1;
    _veh sidechat format ["%1 Refueled.", _vehType];
    sleep 2;
    

    _veh sidechat format ["Service Complete", _vehType];

};

Trigger
Condition
call{{_x iskindof "helicopter" && isTouchingGround _x && speed _x < 1} count thislist > 0  }
On Activation
call{_handle = [(thisList select 0)] execVM "scripts\vehicle\ServiceHeli.sqf";}

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
// https://youtu.be/pmowawWG4lg

// RED DOG CORVETTE VEHICLE STORAGE ^

//Headless client stuffs
//Some missions I have an sqf file that transfers the AI for me automatically with minimal debug console work.

_handle = execVM "headless.sqf";

//Check Network ID
owner HC_1;

{{group _x setGroupOwner [NETWORK ID GOES HERE]} forEach units _x} forEach [east, west]
//2 = machine network id (Server ID)
//0 = global

// PAIN AND SUFFERUBG

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
//Make objects simple
[this] call bis_fnc_replacewithsimpleobject

/**
"In my mission, I wanted to give the player a chance to disable the IED should they see it ahead on the road or wherever it happened to spawn. I wrote a bunch of code to handle this...

first, instead of just exploding when it detects a nearby player, I'm listening for players and vehicles that are moving faster than some threshold.
*/
while { alive _ied and (_ied getVariable "isActive") } do {
    _nearest = nearestObjects [_ied, ["Man","Car"], 10];
                
    if ((count _nearest) > 0) then {
        _nearVel = velocity (_nearest select 0);
        _nearSpeed = _nearVel call dl_fnc_velocityToSpeed;
        if (((velocity (_nearest select 0)) call dl_fnc_velocityToSpeed) > 3) then { _ied call iedExplode; };
    };

    sleep 1;
};
/**
dl_fnc_velocityToSpeed is just a simple sqrt(dx2 + dy2 + dz2) method
second, players need to enter a random sequence of numbers to defuse the bomb (I added a "defuse IED" action via addAction). I still need to refactor this, so I'm sure there's a better way to do this, but this works for me...
*/
disarmIED = {
    private ["_index", "_defuseTime", "_isDefusing"];

    _caller = _this select 1;
    _ied = (_this select 3) select 0;
    _code = _ied getVariable "code";
    _index = 0;

    //if !("ToolKit" in (items _caller)) exitWith { hint "need toolkit" };
    _KH = (findDisplay 46) displayAddEventHandler ["KeyDown", "_handled = true; pushedKey = ((_this select 1) - 1); _handled"];

    _defuseTime = 3;
    _isDefusing = true;
    while { _isDefusing } do {
        [format["<t size='5'>%1</t>", _code select _index], 0, 0.2, 0.1, 0] spawn bis_fnc_dynamictext;
        if (!isNil "pushedKey") then {
            if (pushedKey == (_code select _index)) then {
                _index = _index + 1;

                if (_index == (count _code)) then { _isDefusing = false; };
                    _defuseTime = 3;
                    pushedKey = nil;
                } else {
                    _isDefusing = false;
                    _ied call iedExplode;
                    pushedKey = nil;
                };
            } else {
                if (_defuseTime == 0) then {
                    _ied call iedExplode;
                    _isDefusing = false;
                };

                _defuseTime = _defuseTime - 0.1;
            };

            sleep 0.1;
        };

    _ied setVariable ["isActive", false, true];
    (findDisplay 46) displayRemoveEventHandler ["KeyDown", _KH];
};

/**
If you've ever played Just Cause, it's like the car-jacking sequence in that game where a number will come up on the screen and you have to push it within x seconds."
from a comment here https://www.reddit.com/r/armadev/comments/2buh1m/how_to_detonate_editor_placed_ieds_and_explosives/
*/

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
// If they can see an enemy and their morale goes below -0.95 they will surrender. If they're in a vehicle they should also get out before doing so, but it might not work as expected.
{_h = _x spawn { 
waitUntil {morale _this <= -0.95 && _this call BIS_fnc_enemyDetected};
_this action ["Eject", vehicle _this];
["ace_captives_setSurrendered",[_this,true]] call CBA_fnc_globalEvent;
};} foreach units group this
/**
Use that on a squad leader to have it done for all members of his squad automatically, so you don't gotta do it for each one.
Rough morale estimates:

-.15 through -.35 = Get shot at once or twice and surrender.  If they even see a tank coming near them, even if the tank is not firing, they will shit their pants and surrender sometimes. Maybe criminals or really shitty police.

-.35 through -.60 = Get sprayed up real good like with a M249 and surrender. Reserve forces, garrisons, recruits, people in training.

-.60 through -.75 = Take fire and be injured or have a lot of friends die in a short amount of time and surrender. Average insurgent nobody.

-.75 through -.95 = Get shot or injured more than once, be shot at constantly, watch your friends die and only surrender when there's no other choice. Sometimes never surrenders if their morale doesn't drop enough and they then seek martyrdom. Hardcore insurgents, regular trained army.

-1 - Unknown, possibly never surrenders. I don't know what can make morale hit rock bottom. May only surrender in the most dire and disturbing circumstances. Special forces.
 
I pretty much only use -.75 through -.95 for the most part. 
*/

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //

//Play an audio file from an object
//use with "server only" locality
[alarm_def, ["defconstage", 1500, 10]] remoteExec ["say3d", 0, true]; 
// alarm_def = object
//"filename", range in meters, pitch

//How to set up audio files to be used by the above
class CfgSounds
{
    sounds[] = {};
    
    class defconstage
    {
        name = "defconstage";
        sound[] = {\sound\defconstage.ogg, db+0, 1};
        titles[] = {};
    };
    class buzzralarm
    {
        name = "buzzralarm";
        sound[] = {\sound\buzzralarm.ogg, db+0, 1};
        titles[] = {};
    };
    class EG_Jump_Exit
    {
        name = "EG_Jump_Exit";
        sound[] = {\sound\EG_Jump_Exit.ogg, db+0, 1};
        titles[] = {};
    };
};

//put in description.ext 

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
/**
Spawns an armored QRF at marker and places inf in victor
moves to markers using waypoints
does not unload inf at appropriate waypoint
use with "server only" locality
*/
// Armor 1 ---------------------------------------------------------------------------------------------
_crew1 = [];
_IFV1 = [];
_mygroup = [];

_crew1 = creategroup EAST; 
_IFV1 = [getMarkerPos "O_QRF_Spawn_1", 45, "O_OColURFOPTRE_M350_Recluse_ALiVE_01", _crew1] call BIS_fnc_spawnVehicle;

_mygroup = [getmarkerpos "O_QRF_Spawn_1", EAST, ["O_OColURFOPTRE_Team_Leader_ALiVE_01","O_OColURFOPTRE_Autorifleman_ALiVE_01","O_OColURFOPTRE_Autorifleman_ALiVE_01","O_OColURFOPTRE_Grenadier_ALiVE_01","O_OColURFOPTRE_Rifleman_AT_ALiVE_01","O_OColURFOPTRE_Rifleman_AT_ALiVE_01"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_wp1a = _mygroup addWaypoint [getmarkerpos "O_QRF_Orders_4", 0];

sleep .5;

_mygroup = _mygroup;
{ _x assignAsCargo (_IFV1 select 0); _x moveIncargo (_IFV1 select 0);} foreach units _mygroup;

_wp1 = _crew1 addWaypoint [(getmarkerpos "O_QRF_Orders_1"), 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointBehaviour "CARELESS";
_wp1 setWaypointCombatMode "BLUE";
_wp1 setWaypointSpeed "NORMAL";

_wp2 = _crew1 addWaypoint [(getmarkerpos "O_QRF_Orders_2"), 0];
_wp2 setWaypointType "TRANSPORT UNLOAD";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";
_wp2 setWaypointSpeed "NORMAL";

_wp3 = _crew1 addWaypoint [(getmarkerpos "O_QRF_Orders_3"), 0];
_wp3 setWaypointType "MOVE";
_wp3 setWaypointBehaviour "COMBAT";
_wp3 setWaypointCombatMode "RED";
_wp3 setWaypointSpeed "NORMAL";

// Armor 2 ---------------------------------------------------------------------------------------------
sleep 5;
// Armor 2 ---------------------------------------------------------------------------------------------
_crew1 = [];
_IFV1 = [];
_mygroup = [];

_crew1 = creategroup EAST; 
_IFV1 = [getMarkerPos "O_QRF_Spawn_2", 45, "O_OColURFOPTRE_M350_Recluse_ALiVE_01", _crew1] call BIS_fnc_spawnVehicle;

_mygroup = [getmarkerpos "O_QRF_Spawn_2", EAST, ["O_OColURFOPTRE_Team_Leader_ALiVE_01","O_OColURFOPTRE_Autorifleman_ALiVE_01","O_OColURFOPTRE_Autorifleman_ALiVE_01","O_OColURFOPTRE_Grenadier_ALiVE_01","O_OColURFOPTRE_Rifleman_AT_ALiVE_01","O_OColURFOPTRE_Rifleman_AT_ALiVE_01"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_wp1a = _mygroup addWaypoint [getmarkerpos "O_QRF_Orders_4", 0];

sleep .5;

_mygroup = _mygroup;
{ _x assignAsCargo (_IFV1 select 0); _x moveIncargo (_IFV1 select 0);} foreach units _mygroup;

_wp1 = _crew1 addWaypoint [(getmarkerpos "O_QRF_Orders_1"), 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointBehaviour "CARELESS";
_wp1 setWaypointCombatMode "BLUE";
_wp1 setWaypointSpeed "NORMAL";

_wp2 = _crew1 addWaypoint [(getmarkerpos "O_QRF_Orders_2"), 0];
_wp2 setWaypointType "TRANSPORT UNLOAD";
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointCombatMode "BLUE";
_wp2 setWaypointSpeed "NORMAL";

_wp3 = _crew1 addWaypoint [(getmarkerpos "O_QRF_Orders_3"), 0];
_wp3 setWaypointType "MOVE";
_wp3 setWaypointBehaviour "COMBAT";
_wp3 setWaypointCombatMode "RED";
_wp3 setWaypointSpeed "NORMAL";

// ---------------------------------------------------------------------------------------------------------------------------------------------------------- //
//For removing persistent things ~Kinda works maybe~
[alive_sys_logistics,"removeObject", [cursorObject]] call ALiVE_fnc_logistics;
deleteVehicle cursorObject;

//_unit: the unit you which to add. You can give the unit a variable name in editor and use that. 
//_freq: Frequency to set signal on. Has to be within range of the antenna frequencies
//_range: The range the signal is transmitted in meters
//type: text that say what type it is. Use the default set "zeus". 
["crowsEW_spectrum_addBeacon", [_unit, _freq, _range, "zeus"]] call CBA_fnc_globalEventJIP;

//_unit: the unit you which to add. You can give the unit a variable name in editor and use that. 
//_range: The range the signal is transmitted in meters
//_pauseMin: Minimum time in seconds to pause between broadcasts
//_pauseMax: Maximum time in seconds to pause between broadcasts
//_durationMin: Minimum time in seconds to broadcasts
//_durationMax: Maximum time in seconds to broadcasts
//_freqMin: lower limit of random frequency used
//_freqMax: upper limit of random frequency used. (frequency used will be within this interval)
//_voicePack: The voicepack to use when people listen to it. 
["crowsEW_spectrum_addRandomRadioTrackingChatter", [_unit, _range, [_pauseMin, _pauseMax], [_durationMin, _durationMax], [_freqMin, _freqMax], _voicePack]] call CBA_fnc_serverEvent;

["british", "morsecode", "electronic", "alienElectronic", "police"]

// DRONE JAMMING
[_this] call crowsEW_spectrum_fnc_initDroneSignals