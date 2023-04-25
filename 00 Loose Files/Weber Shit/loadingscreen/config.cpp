/*
class CfgPatches
{
	class 402nd Loading Screen
	{
		author="402nd Aux Mod Team";
		addonRootClass="402nd_Armory";
		requiredAddons[]=
		{
			"402nd_Armory"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class RscPicture;
class RscStandardDisplay;
class RscActiveText;
class RscActivePicture: RscActiveText;
class RscText;
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture
		{
			text="\402nd_Armory\data\loadingscreen\402ndLogo.paa";
		};
	};
	enableDisplay=0;
	delete Spotlight;
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\402nd_Armory\data\loadingscreen\mainMenu.jpg";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd=250;
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\402nd_Armory\data\loadingscreen\startImage.jpg";
				};
			};
		};
    };
};
*/