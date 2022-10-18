//All this can be put in the init.sqf, if theres no init.sqf in your mission folder, create one
//The script below can be done in another file other than init such as "mysound.sqf"
//To create such as "mysound.sqf", put in your init.sqf: [] execVM "mysound.sqf";

enableEnvironment false; // disables all environment sounds defined by the map's config
//If you want the sound to be played in a position, do the below script
//[ambience] playSound3D "flood";

//If you just want the sound to play in a loop that plays forever around you, do this below

null = ["mkr_1"] execVM "LootInit.sqf";

while {true} do {
	
	[ambience, ["flood", 10000, 1]] remoteExec ["say3d", 0, true];
    sleep 175;
	
};

//Below must not be placed in init.sqf or mysound.sqf, this is ONLY for description.ext
//If there's no description.ext such as init.sqf again, create a new text and rename to description.ext

