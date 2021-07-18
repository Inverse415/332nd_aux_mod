#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Valken38x)
	{
		author = "Halligan";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(Valken38x),
			"332nd_Optic_VK38X"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class 3AS_Valken38X_Base_F;
	class 3AS_Valken38X_F: 3AS_Valken38X_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class MACRO_NEW_WEAPON(Valken38x) : 3AS_Valken38X_F
	{
		recoil="recoil_dmr_05";
		recoilprone="recoil_prone_dmr_05";
		cursor="332_DOT";
        cursoraim="332_DMR";
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		maxZeroing=1500;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"332nd_Optic_VK38X"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
		};
		descriptionShort="Valken-38x Marksman Rifle";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"332nd_weapons\Valken_38x\sounds\ValkenFire.wss",
					1,
					1,
					2200
				};
				soundBegin[]=
				{
					"begin1",
					1,
				};
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			reloadTime=0.7;
			dispersion=0.000000000005;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};		
		scope=2;
		displayName = MACRO_WEAPON_DISPLAYNAME(Valken 38x)
		weaponInfoType="RscWeaponZeroing";
		magazines[]=
		{
			MACRO_NEW_MAG(Valken38x,15),
			MACRO_NEW_MAG(Valken38x_T,15)
		};
		modelOptics="3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
	};



	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class 332nd_Optic_VK38X : ItemCore
	{
		scope=2;
		displayName="332nd VK-38X Optic";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="3AS\3AS_Weapons\Valken38X\3AS_VK38X_Scope_f.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
			class OpticsModes
			{
				class 332_VK38X_Optic
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.125;
					opticsZoomMax=0.04;
					opticsZoomInit=0.0625;
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					discreteFov[]={0.125,0.0625};
					discreteInitIndex=0;
					modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={1,2};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class IronOnTopOfMyOptics : 332_VK38X_Optic
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
				};
			};
		};
	};
};
