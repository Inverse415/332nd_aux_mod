#include "..\..\332nd_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(land_weapons)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgAmmo
{
    class Sh_125mm_APFSDS;
	class MACRO_NEW_AMMO(MassDriver_AP): Sh_125mm_APFSDS
	{
    soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,1000}; //Volume,Pitch,Distance
	cartridge = "";
	caliber=40;
	model = "ls_weapons_core\effects\laser_blue.p3d";
	effectfly = "SWLW_plasma_green";
	hit=800;
	explosionEffects = "ATRocketExplosion";
	tracerScale = 5;
	indirectHit = 35;
	indirectHitRange = 0.5;
	};
	class Sh_125mm_HE;
	class MACRO_NEW_AMMO(MassDriver_HE): Sh_125mm_HE
	{
    soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,1000}; //Volume,Pitch,Distance
	cartridge = "";
	caliber=10;
	explosionEffects = "ATRocketExplosion";
	model = "ls_weapons_core\effects\laser_heat";
	effectfly = "SWLW_plasma_green";
	hit=300;
	tracerScale = 5;
	indirectHit = 80;
	indirectHitRange = 6;
	};

	class ls_ammo_127x108_blue;
	class MACRO_NEW_AMMO(ATRT_30mm): ls_ammo_127x108_blue
	{
		cartridge = "";
		caliber=6;
		hit=150;
		model = "swlw_main\Effects\laser_blue.p3d";
		tracerScale = 2.5;
		indirectHit = 0;
		indirectHitRange = 0;
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
		};
		class CamShakeHit
		{
			power = 0;
			duration = 0;
			frequency = 0;
		};
	};

	class MACRO_NEW_AMMO(20mmHMG): ls_ammo_127x108_blue
	{
	cartridge = "";
	caliber=3.2;
	hit=40;
	tracerScale = 3.5;
	indirectHit = 0;
	indirectHitRange = 0;
	};

	class ls_50mm_laat_apfsds;
	class MACRO_NEW_AMMO(BARC_40mm): ls_50mm_laat_apfsds
	{
	model="SWLW_main\Effects\laser_green.p3d";
	flaresize=2;
	caliber=4;
	explosionEffects = "GrenadeExplosion";
	tracersEvery = 1;
	indirectHit = 12;
	mass=2;
	indirectHitRange = 1;
	tracerscale=2;
	};

	class MACRO_NEW_AMMO(40mmAP): ls_ammo_127x108_blue
	{
    soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,1000};
	cartridge = "";
	effectsMissile = "332nd_aux_effects_RPS4_blue";
	caliber=15;
	hit=250;
	indirectHit = 8;
	indirectHitRange = 0.2;
	};
	class B_40mm_GPR;
	class MACRO_NEW_AMMO(40mmHEDP): B_40mm_GPR
	{
    soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,1000}; //Volume,Pitch,Distance
	cartridge = "";
	effectsMissile = "332nd_aux_effects_RPS4_green";
	caliber=6;
	model = "swlw_main\Effects\laser_green.p3d";
	effectfly = "SWLW_plasma_green";
	hit=70;
	tracerScale = 1.3;
	indirectHit = 35;
	indirectHitRange = 3;
	};
	class M_Titan_AT_long;
	class MACRO_NEW_AMMO(RX_200_ATGM): M_Titan_AT_long
	{
	soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			5,
			5,
			1000
		};
	manualcontrol=1;
	caliber=5;
	effectsMissile = "332nd_aux_effects_missile_plx_blue";
	hit=200;
	thrusttime = 12;
	indirectHit = 35;
	indirectHitRange = 3;
	};
};

class CfgMagazines
{
    class 12Rnd_120mm_APFSDS_shells;
	class MACRO_NEW_MAG(MassDriver_AP,25): 12Rnd_120mm_APFSDS_shells
	{
		displayName="Mass Driver AP";
		ammo=MACRO_NEW_AMMO(MassDriver_AP)
		initSpeed = 1000;
		tracersevery = 1;
		count=25;
	};
	class MACRO_NEW_MAG(MassDriver_HE,15): 12Rnd_120mm_APFSDS_shells
	{
		displayName="Mass Driver HE";
		ammo=MACRO_NEW_AMMO(MassDriver_HE)
		initSpeed = 1000;
		tracersevery = 1;
		count=15;
	};

	class MACRO_NEW_MAG(Saber_AP,25): 12Rnd_120mm_APFSDS_shells
	{
		displayName="Saber High AP";
		ammo=MACRO_NEW_AMMO(MassDriver_AP)
		initSpeed = 1000;
		tracersevery = 1;
		count=30;
	};
	class MACRO_NEW_MAG(Saber_HE,15): 12Rnd_120mm_APFSDS_shells
	{
		displayName="Saber High HE";
		ammo=MACRO_NEW_AMMO(MassDriver_HE)
		initSpeed = 1200;
		tracersevery = 1;
		count=20;
	};


	class 3AS_9999Rnd_ATRT_Mag;
	class MACRO_NEW_MAG(ATRT_30mm,9999): 3AS_9999Rnd_ATRT_Mag
	{
		displayName="ATRT 30mm";
		ammo=MACRO_NEW_AMMO(ATRT_30mm)
		initSpeed = 1000;
		tracersevery = 1;
		count=99999;
	};

	class 100Rnd_127x99_mag;
	class MACRO_NEW_MAG(ATTE_HMG,1000): 12Rnd_120mm_APFSDS_shells
	{
		displayName="Heavy Hmg 1000rnd";
		ammo=MACRO_NEW_AMMO(20mmHMG)
		initSpeed = 1200;
		tracersevery = 1;
		count=1000;
	};

	class MACRO_NEW_MAG(Saber_Low,500): 12Rnd_120mm_APFSDS_shells
	{
	    cartridge = "";
		displayName="Heavy Hmg 1000rnd";
		ammo=MACRO_NEW_AMMO(20mmHMG)
		initSpeed = 800;
		tracersevery = 1;
		count=500;
	};

	class MACRO_NEW_MAG(BARC_MainCannon,300): 12Rnd_120mm_APFSDS_shells
	{
		displayName="40mm Cannon 1000rnd";
		ammo=MACRO_NEW_AMMO(BARC_40mm)
		initSpeed = 600;
		tracersevery = 1;
		count=300;
	};

	class MACRO_NEW_MAG(Heavy_HMG,150): 12Rnd_120mm_APFSDS_shells
	{
		displayName="Heavy Hmg 150rnd";
		ammo=MACRO_NEW_AMMO(20mmHMG)
		initSpeed = 1200;
		tracersevery = 1;
		count=1000;
	};



	class 40Rnd_40mm_APFSDS_shells;
	class MACRO_NEW_MAG(RX200_40mmAP,50): 40Rnd_40mm_APFSDS_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Direct Energy AP,50)
		ammo=MACRO_NEW_AMMO(40mmAP)
		initSpeed = 1500;
		count=50;
	};
	class MACRO_NEW_MAG(RX200_40mmHE,100): 40Rnd_40mm_APFSDS_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Direct Energy HEDP,100)
		descriptionshort="40mm HEDP";
		initSpeed = 1500;
		displayNameShort="40mm HEDP";
		ammo=MACRO_NEW_AMMO(40mmHEDP)
		count=100;
	};
	class MACRO_NEW_MAG(DC_15L,125);
	class MACRO_NEW_MAG(15L,500): MACRO_NEW_MAG(DC_15L,125)
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Direct Energy HEDP,100)
		descriptionshort="Concentrated Medium";
		initSpeed = 1500;
		scope=1;
		count=500;
	};
	class 2Rnd_GAT_missiles_O;
	class MACRO_NEW_MAG(ATGM,2): 2Rnd_GAT_missiles_O
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Concussion AT Missile,2)
		ammo = MACRO_NEW_AMMO(RX_200_ATGM)
		descriptionshort="Concussion AT Missile";
		displayNameShort="Concussion Missile";
		scope=1;
		count=2;
	};
};

class MGun;
class player;
class manual;
class CfgWeapons
{
    class cannon_125mm_advanced;
	class MACRO_NEW_WEAPON(Mass_Driver): cannon_125mm_advanced
	{
	    ace_overpressure_angle =0;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 0;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0;  // Damage multiplier
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(MassDriver_AP,25),
			MACRO_NEW_MAG(MassDriver_HE,15)
		};
		modes[] = {"player","close","short","medium","far"};
		displayName = "Mass Driver";
		class player: player
		{
			magazineReloadTime = 5;
			displayname="Full";
			reloadTime=3;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"332nd_vehicle_weapons\Land\sounds\MassDriver.wss",
					2.5,
					0.95,
					10000
				};
				soundBegin[]=
				{
					"begin1",
					1,
				};
			};
		};
				class close: player
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Far: medium
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=510;
			minRangeProbab=0.050000001;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.1;
		};
	};

    class HMG_127;
	class MACRO_NEW_WEAPON(Heavy_Hmg): HMG_127
	{
	    ace_overpressure_angle = 0;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 0;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0;  // Damage multiplier
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(ATTE_HMG,1000),
			MACRO_NEW_MAG(Heavy_HMG,150)
		};
		modes[] = {"manual","close","short","medium","far"};
		displayName = "Heavy Hmg";
		class manual: manual
		{
			magazineReloadTime = 5;
			displayname="Auto";
			reloadTime=0.1;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"332nd_vehicle_weapons\Land\sounds\Hmg20mm.wss",
					0.8,
					0.9,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1,
				};
			};
		};
		class close: manual
		{
			burst=1;
			aiRateOfFire=0.3;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=1;
			aiRateOfFire=0.3;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=1;
			aiRateOfFire=0.3;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Far: medium
		{
			burst=1;
			aiRateOfFire=0.3;
			aiRateOfFireDistance=600;
			minRange=510;
			minRangeProbab=0.050000001;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab=0.1;
		};
	};
	
	class SWLG_TX130_aa;
	class MACRO_NEW_WEAPON(Saber_low): SWLG_TX130_aa
	{
	   	magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Saber_Low,500)
		};
		displayName = "Saber Low Energy";
		modes[] = {"manual","close","short","medium"};
		class manual:  manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"332nd_vehicle_weapons\Land\sounds\SaberLowPower.wss",
					2.3,
					1,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			burst=1;
			reloadTime=0.04;
			dispersion=0;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
		};
		class close: manual
		{
			burst=40;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=40;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=40;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};

	class 3AS_Sabre_Cannons;
	class MACRO_NEW_WEAPON(Saber_High): 3AS_Sabre_Cannons
	{
	   	magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Saber_AP,25),
			MACRO_NEW_MAG(MassDriver_HE,15)
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class SecondEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne 2";
				directionName="Konec hlavne 2";
			};
		};
		displayName = "Saber High Energy";
		modes[] = {"manual","close","short","medium"};
		class manual: manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlg_clones_tanks\tx130\data\sounds\Saber_heavy_shot.wss",
					2.3,
					0.95,
					10000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			burst=1;
			reloadTime=0.25;
			dispersion=0;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
		};
		class close: manual
		{
			burst=2;
			aiRateOfFire=0.3;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=2;
			aiRateOfFire=3;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=2;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};


	class BARC_Repeater;
	class MACRO_NEW_WEAPON(BARC_40mm): BARC_Repeater
	{
	   	magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(BARC_MainCannon,1000)
		};
		displayName = "Saber Low Power";
		modes[] = {"manual","close","short","medium"};
		class GunParticles
		{
		};
		class manual:  manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"332nd_vehicle_weapons\air\sounds\LAAT_Nose.wss",
					1,
					2,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.2;
			dispersion=0;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=0.1375;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};

	class 3AS_ATRT_Weapon_F;
	class MACRO_NEW_WEAPON(ATRT_cannon): 3AS_ATRT_Weapon_F
	{
	    ace_overpressure_angle =0;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 0;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0;  // Damage multiplier
		muzzles[] = {"this"};
		magazineWell[] = {};
		recoil="";
		magazines[] = {
			MACRO_NEW_MAG(ATRT_30mm,9999)
		};
		displayName = "ATRT Cannon";
		//class FullAuto: FullAuto
		//{
		//	magazineReloadTime = 2;
		//	displayname="Full";
		//	reloadTime=0.35;
		//	dispersion=0.00005;
		//	sounds[]=
		//	{
		//		"StandardSound"
		//	};
		//	class StandardSound
		//	{
		//		begin1[]=
		//		{
		//			"3AS\3AS_Static\data\Sounds\FieldCannon\Fieldcannon.ogg",
		//			25,
		//			2.5,
		//			4000
		//		};
		//		soundBegin[]=
		//		{
		//			"begin1",
		//			1,
		//		};
		//	};
		//};
	};

	class autocannon_40mm_CTWS;
	class MACRO_NEW_WEAPON(RX200_40mm): autocannon_40mm_CTWS
	{
	    ace_overpressure_angle = 0;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 0;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0;  // Damage multiplier
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(RX200_40mmAP,50),
			MACRO_NEW_MAG(RX200_40mmHE,100)
		};
		displayName = "40mm Directed Energy Autocannon";
		class player: player
		{
			magazineReloadTime = 2;
			displayname="Full";
			reloadTime=0.35;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"3AS\3AS_Static\data\Sounds\FieldCannon\Fieldcannon.ogg",
					25,
					2.5,
					4000
				};
				soundBegin[]=
				{
					"begin1",
					1,
				};
			};
		};
	};
    class LMG_coax_ext;
	class MACRO_NEW_WEAPON(RX200_15L): LMG_coax_ext
	{
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
             MACRO_NEW_MAG(15L,500)
		};
		displayName = "15L Coaxial";
		class manual: manual
		{
			magazineReloadTime = 2;
			displayname="Full";
			reloadTime=0.10;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",
					8,
					1.35,
					2500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class missiles_titan;
	class MACRO_NEW_WEAPON(RX200_ATGM): missiles_titan
	{
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
            MACRO_NEW_MAG(ATGM,2)
		};
		displayName = "Concussion Missiles";
		class player: player
		{
			magazineReloadTime = 10;
			displayname="Full";
			reloadTime=0.10;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlw_rework\sounds\launcher\PLX_shot.wss",
					10,
					2,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
};