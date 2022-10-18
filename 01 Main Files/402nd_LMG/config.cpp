class CfgPatches
{
	class 402nd_LMG
	{
		author="Vespade";
		name="402nd LMG Patch";
		requiredAddons[]=
		{
			"402nd_Armory"
		};
		units[]={};
		weapons[]={};
	};
};
class PointerSlot_Rail;
class MuzzleSlot;
class CfgWeapons
{
	class OPTRE_MachineGun_Base;
	class OPTRE_M73: OPTRE_MachineGun_Base
	{
		class WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot_Rail
			{
				class compatibleItems
				{
					OPTRE_BMR_Laser=1;
					acc_flashlight=1;
					acc_pointer_IR=1;
				};
			};
		};
	};
	class OPTRE_M247: OPTRE_M73
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				class compatibleItems: compatibleItems
				{
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				class compatibleItems
				{
					OPTRE_SRS99D_Suppressor=1;
				};
			};
		};
	};
};
