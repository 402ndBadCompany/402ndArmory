#include "BIS_AddonInfo.hpp"
#define _ARMA_

class CfgPatches
{
	class 402nd_Music
	{
		name = "402nd Music Pack";
		author = "BoomMicGuy";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMusic
{
	#include "tracklist.hpp"
};

class CfgMusicClasses
{
	class 402ndSpecial
	{
		displayName = "402nd Special";
	};
	class AceCombat
	{
		displayName = "Ace Combat";
	};
	class HaloWars
	{
		displayName = "Halo Wars";
	};
};

