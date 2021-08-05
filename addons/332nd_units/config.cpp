#include "../332nd_main/macros/main.hpp" // my config macro lib

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_15(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a

class CfgPatches
{
	class MACRO_PATCH_NAME(units)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(main)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_UNIT(infantry,base),
			MACRO_NEW_UNIT(aviation,base),
			"EmptyBox_332nd",
			"MedicalBox_332nd",
			"AmmoBox_332nd"

		};
		weapons[] = {
		 	MACRO_NEW_UNIFORM(infantry,base),
			MACRO_NEW_UNIFORM(aviation,base)
		};
	};
};

class CfgFactionClasses
{
	class EdCat_332nd
	{
		displayName = "332nd Legion";
		side = 1;
		priority = 2;
	};

	class EdCat_332ndCIS
	{
		displayName = "332nd CIS";
		side = 0;
		priority = 2;
	};
};

class CfgEditorCategories
{
	class EdCat_332nd_Props
	{
		displayName = "332nd Legion";
		priority = 2;
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_332nd_AA
	{
		displayName = "Anti-Air";
		priority = 1;
	};
	class EdSubcat_332nd_APCS
	{
		displayName = "APCs";
		priority = 2;
	};
	class EdSubcat_332nd_ART
	{
		displayName = "Artillery";
		priority = 3;
	};
	class EdSubcat_332nd_PACKS
	{
		displayName = "Backpacks";
		priority = 4;
	};
	class EdSubcat_332nd_BOAT
	{
		displayName = "Boats";
		priority = 4;
	};
	class EdSubcat_332nd_CAR
	{
		displayName = "Cars";
		priority = 5;
	};
	class EdSubcat_332nd_DRONE
	{
		displayName = "Drones";
		priority = 6;
	};
	class EdSubcat_332nd_HELI
	{
		displayName = "Helicopters";
		priority = 7;
	};
	class EdSubcat_332nd_MEN
	{
		displayName = "Men";
		priority = 8;
	};
	class EdSubcat_332nd_B1
	{
		displayName = "B1";
		priority = 8;
	};
	class EdSubcat_332nd_BX
	{
		displayName = "BX";
		priority = 9;
	};
	class EdSubcat_332nd_HEAVY
	{
		displayName = "Heavy Droids";
		priority = 10;
	};
	class EdSubcat_332nd_IFV
	{
		displayName = "IFVs";
		priority = 11;
	};
	class EdSubcat_332nd_PLANE
	{
		displayName = "Planes";
		priority = 12;
	};
	class EdSubcat_332nd_RESUPPLY
	{
		displayName = "Resupply";
		priority = 13;
	};
	class EdSubcat_332nd_TANK
	{
		displayName = "Tanks";
		priority = 14;
	};
	class EdSubcat_332nd_TRUCK
	{
		displayName = "Trucks";
		priority = 15;
	};
	class EdSubcat_332nd_TURR
	{
		displayName = "Turrets";
		priority = 16;
	};
};

class CfgMarkers
{
	class mil_dot;
	class Marker_332nd : mil_dot {
		name = "332nd";
		icon = "332nd_units\images\332nd_Logo.paa";
		shadow = false;
		scope = 2;
		color[] = { 1, 1, 1, 1 };
	};
};

class CfgWeapons
{
 	// ---- blufor Uniforms ----

    class U_I_CombatUniform;
	class JLTS_CloneArmor: U_I_CombatUniform
	{
		class ItemInfo;
	};

	//Recruit
	class MACRO_NEW_UNIFORM(recruit,base) : JLTS_CloneArmor
	{
		displayName = "[332nd] Recruit Uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(recruit,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	//Infantry
    class MACRO_NEW_UNIFORM(infantry,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Infantry Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(infantry,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	//RTO
    class MACRO_NEW_UNIFORM(rto,base): JLTS_CloneArmor
	{
		displayName = "[332nd] RTO Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(rto,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	//Medic
    class MACRO_NEW_UNIFORM(medic,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Medic Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(medic,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(aviation,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Aviation Uniform ('base')";
        scope = 0;							
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(aviation,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(cwo,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Clone Warrant Officer Uniform ('base')";
        scope = 0;							
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cwo,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfbase,base) : JLTS_CloneArmor
	{
		displayName = "[332nd] ARF Base Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfbase,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfdes,base) : JLTS_CloneArmor
	{
		displayName = "[332nd] ARF Desert Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfdes, base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfjung,base) : JLTS_CloneArmor
	{
		displayName = "[332nd] ARF Jungle Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfjung,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfsnow,base) : JLTS_CloneArmor
	{
		displayName = "[332nd] ARF Snow Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfsnow,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfurb,base) : JLTS_CloneArmor
	{
		displayName = "[332nd] ARF Urban Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfurb,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(arfwood,base) : JLTS_CloneArmor
	{
		displayName = "[332nd] ARF Woodland Uniform ('base')";
		scope = 0;
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(arfwood,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	class MACRO_NEW_UNIFORM(mech,base) : JLTS_CloneArmor
	{
		displayName = "[332nd] Mechanized Uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(mech,base);
			containerClass = "Supply140";
			uniformType = "Neopren";
		};
	};

	
	// ---- End blufor Uniforms ----

	// ---- Opfor Uniforms ----

	//B1
	class JLTS_DroidB1 : U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Rocket : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Crew : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Commander : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Marine : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Security : JLTS_DroidB1
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Pilot : JLTS_DroidB1
	{
		class ItemInfo;
	};

	//BX
	class ls_redforUniform_base;
	class ls_redforUniform_inherit;
	class lsd_cis_bxDroid_uniform : ls_redforUniform_base
	{
		class ItemInfo;
	};
	class lsd_cis_bxSecurityDroid_uniform : ls_redforUniform_inherit
	{
		class ItemInfo;
	};
	class lsd_cis_bxDiplomatDroid_uniform : ls_redforUniform_inherit
	{
		class ItemInfo;
	};
	class lsd_cis_bxCaptainDroid_uniform : ls_redforUniform_inherit
	{
		class ItemInfo;
	};
	//CIS B-1
	class MACRO_NEW_UNIFORM(cisb1,base) : JLTS_DroidB1
	{
		displayName = "[332nd] Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1jumppack,base) : JLTS_DroidB1_Rocket
	{
		displayName = "[332nd] Jumppack Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1jumppack,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1crew,base) : JLTS_DroidB1_Crew
	{
		displayName = "[332nd] Crew Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1crew,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1comm,base) : JLTS_DroidB1_Commander
	{
		displayName = "[332nd] Commander Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1comm,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1marine,base) : JLTS_DroidB1_Marine
	{
		displayName = "[332nd] Marine Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1marine,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1sec,base) : JLTS_DroidB1_Security
	{
		displayName = "[332nd] Security Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1sec,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisb1pilot,base) : JLTS_DroidB1_Pilot
	{
		displayName = "[332nd] Pilot Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1pilot,base);
			containerClass = "Supply140";
		};
	};

	//CIS BX
	class MACRO_NEW_UNIFORM(cisbx,base) : lsd_cis_bxDroid_uniform
	{
		displayName = "[332nd] BX droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisbx,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisbxsec,base) : lsd_cis_bxSecurityDroid_uniform
	{
		displayName = "[332nd] BX Security droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisbxsec,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisbxdiplo,base) : lsd_cis_bxDiplomatDroid_uniform
	{
		displayName = "[332nd] BX Diplomat droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisbxdiplo,base);
			containerClass = "Supply140";
		};
	};
	class MACRO_NEW_UNIFORM(cisbxcapt,base) : lsd_cis_bxCaptainDroid_uniform
	{
		displayName = "[332nd] BX Captain droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisbxcapt,base);
			containerClass = "Supply140";
		};
	};
	// ---- End opfor Uniforms ----
}

class CfgSounds
{
	sounds[] = {};
	class B1_Death_Sound_1
	{
		name = "B1-Death-Sound-1";
		sound[] = {"\opfor\DeathSounds\B1-Death-Sound-1.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_2
	{
		name = "B1-Death-Sound-2";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-2.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_3
	{
		name = "B1-Death-Sound-3";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-3.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_4
	{
		name = "B1-Death-Sound-4";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-4.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_5
	{
		name = "B1-Death-Sound-5";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-5.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_6
	{
		name = "B1-Death-Sound-6";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-6.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_7
	{
		name = "B1-Death-Sound-7";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-7.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_8
	{
		name = "B1-Death-Sound-8";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-8.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_9
	{
		name = "B1-Death-Sound-9";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-9.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_10
	{
		name = "B1-Death-Sound-10";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-10.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_11
	{
		name = "B1-Death-Sound-11";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-11.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_12
	{
		name = "B1-Death-Sound-12";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-12.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_13
	{
		name = "B1-Death-Sound-13";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-13.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_14
	{
		name = "B1-Death-Sound-14";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-14.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_15
	{
		name = "B1-Death-Sound-15";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-15.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_16
	{
		name = "B1-Death-Sound-16";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-16.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_17
	{
		name = "B1-Death-Sound-17";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-17.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_18
	{
		name = "B1-Death-Sound-18";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-18.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_19
	{
		name = "B1-Death-Sound-19";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-19.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_20
	{
		name = "B1-Death-Sound-21";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-21.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_22
	{
		name = "B1-Death-Sound-22";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-22.ogg", db + 250, 1.0, 125 };
	};
	class B1_Death_Sound_23
	{
		name = "B1-Death-Sound-23";
		sound[] = { "\opfor\DeathSounds\B1-Death-Sound-23.ogg", db + 250, 1.0, 125 };
	};
};

class CfgFunctions
{
	class Resupply
	{
		class myCategory
		{
			class SetCratesToCarryable
			{
				file = "332nd_units\fnc_carryResupplyCrates.sqf";
			};
		};
	};

	class Aux332nd
	{
		class DeathSounds
		{
			file = "\332nd_units\opfor";
			class Killed
			{
			};

			class Killed_BX
			{
			};

			class Killed_Heavy
			{
			};
		};

		class Jumppack
		{
			class Jumppack
			{
				file = "\332nd_units\opfor\fn_Jumppack.sqf";
			};
		};

		class Droideka
		{
			file = "\332nd_units\opfor";
			class initDroideka_Move
			{
			};
			class initDroideka
			{
			};
		};
	};
};

class CfgVehicles
{  
	// ---- Supply Containers for Unif ----

	class ContainerSupply;
	class SupplyXX : ContainerSupply
	{
		maximumLoad = XX;
	};

	// ---- End Supply Containers for Armor ----

	// ---- Supply Crates ----

	class JLTS_Ammobox_support_GAR;
	class JLTS_Ammobox_weapons_GAR;

	class EmptyBox_332nd : JLTS_Ammobox_weapons_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass = "Ammo";
		displayName = "[332nd] Empty Ammo Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_RESUPPLY";

		class TransportWeapons
		{

		};
	};

	class MedicalBox_332nd : JLTS_Ammobox_support_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass = "Ammo";
		displayName = "[332nd] Medical Resupply Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_RESUPPLY";

		class TransportItems
		{
			class Elastics_332nd
			{
				name = "ACE_elasticBandage";
				count = 300;
			};

			class Packing_332nd
			{
				name = "ACE_packingBandage";
				count = 300;
			};

			class Quickclot_332nd
			{
				name = "ACE_quikclot";
				count = 300;
			};

			class Painkillers_332nd
			{
				name = "ACE_morphine";
				count = 40;
			};

			class Epinephrine_332nd
			{
				name = "ACE_epinephrine";
				count = 40;
			};

			class Plasma1k_332nd
			{
				name = "ACE_plasmaIV";
				count = 25;
			};

			class Plasma500_332nd
			{
				name = "ACE_plasmaIV_500";
				count = 50;
			};

			class Plasma250_332nd
			{
				name = "ACE_plasmaIV_250";
				count = 50;
			};

			class Tournys_332nd
			{
				name = "ACE_tourniquet";
				count = 30;
			};

			class PAK_332nd
			{
				name = "ACE_personalAidKit";
				count = 5;
			};
		};

		class TransportWeapons
		{

		};

		class TransportMagazines {

		};

		class EventHandlers
		{
			init = "[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};

	class AmmoBox_332nd : JLTS_Ammobox_weapons_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass = "Ammo";
		displayName = "[332nd] Ammo Resupply Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_RESUPPLY";


		class TransportWeapons
		{
			class DC15A_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DC_15a";
				count = 10;
			};

			class DC15S_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DC_15s";
				count = 10;
			};

			class DC15C_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DC_15c";
				count = 10;
			};

			class DP23_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DP_23";
				count = 10;
			};

			class DW32S_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DW_32S";
				count = 10;
			};

			class Valken38x_Weps_332nd
			{
				weapon = "332nd_aux_weapon_Valken38x";
				count = 10;
			};

			class Z6_Weps_332nd
			{
				weapon = "332nd_aux_weapon_Z6";
				count = 10;
			};

			class DC15B_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DC_15b";
				count = 10;
			};

			class RPS1_Weps_332nd
			{
				weapon = "332nd_aux_weapon_RPS_1";
				count = 5;
			};
		};

		class TransportMagazines
		{
			class DC15A_low_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_Low_x60";
				count = 300;
			};

			class DC15A_medium_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_Medium_x30";
				count = 300;
			};

			class DC15A_High_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_High_x10";
				count = 50;
			};

			class 332_Stun_332nd
			{
				magazine = "332nd_aux_magazine_Stun_x10";
				count = 100;
			};

			class DC15A_UGLAP_332nd
			{
				magazine = "332nd_aux_magazine_DC_15_UGL_AP_x2";
				count = 50;
			};

			class DC15A_UGLHE_332nd
			{
				magazine = "332nd_aux_magazine_DC_15_UGL_HE_x4";
				count = 50;
			};

			class DC15s_332nd
			{
				magazine = "332nd_aux_magazine_DC_15s_x60";
				count = 300;
			};

			class DC15c_332nd
			{
				magazine = "332nd_aux_magazine_DC_15c_Medium_x45";
				count = 300;
			};

			class DC15b_332nd
			{
				magazine = "332nd_aux_magazine_DC_15b_x60";
				count = 200;
			};

			class DC17_332nd
			{
				magazine = "332nd_aux_magazine_DC_17_x15";
				count = 50;
			};

			class SA35_332nd
			{
				magazine = "332nd_aux_magazine_35sa_low_x30";
				count = 50;
			};

			class DC15L_332nd
			{
				magazine = "332nd_aux_magazine_DC_15L_x125";
				count = 100;
			};

			class DC15L_T_332nd
			{
				magazine = "332nd_aux_magazine_DC_15L_T_x125";
				count = 100;
			};

			class DP_23_332nd
			{
				magazine = "332nd_aux_magazine_DP23_x12";
				count = 100;
			};

			class DP_23Wide_332nd
			{
				magazine = "332nd_aux_magazine_DP23_x12Wide";
				count = 100;
			};
			
			class DW_32_HIGH_332nd
			{
				magazine = "332nd_aux_magazine_DW32_High_x5";
				count = 50;
			};

			class DW_32_HIGH_T_332nd
			{
				magazine = "332nd_aux_magazine_DW32_High_T_x5";
				count = 50;
			};
			
			class DW_32_CONCMED_332nd
			{
				magazine = "332nd_aux_magazine_DW32_Med_x20";
				count = 100;
			};

			class DW_32_CONCMED_T_332nd
			{
				magazine = "332nd_aux_magazine_DW32_Med_T_x20";
				count = 100;
			};

			class Valken_38x_REFMED_332nd
			{
				magazine = "332nd_aux_magazine_Valken38x_x15";
				count = 100;
			};

			class Valken_38x_REFMED_T_332nd
			{
				magazine = "332nd_aux_magazine_Valken38x_T_x15";
				count = 100;
			};

			class Valken_38x_REFMED_T_332nd
			{
				magazine = "332nd_aux_magazine_Valken38x_T_x15";
				count = 100;
			};
			 
			class IQA11_high_T_332nd
			{
				magazine = "332nd_aux_magazine_IQA_11_T_x8";
				count = 100;
			};

			class IQA11_high_332nd
			{
				magazine = "332nd_aux_magazine_IQA_11_x8";
				count = 100;
			};
			
			class Westar_m5_40rnd
			{
				magazine = "332nd_aux_magazine_Westar_M5_x40";
				count = 300;
			};

			class Z6_332nd
			{
				magazine = "332nd_aux_magazine_Z6_x200";
				count = 200;
			};

			class Z6_ALT_332nd
			{
				magazine = "332nd_aux_magazine_Z6_x125";
				count = 200;
			};

			class Flash_332nd
			{
				magazine = "332nd_aux_magazine_332_FLASH_x1";
				count = 30;
			};

			class ATCharge_332nd
			{
				magazine = "332nd_aux_magazine_332_INCENDIARY_x1";
				count = 30;
			};

			class HEDPImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_HEDP_x1";
				count = 30;
			};

			class SquadShield_332nd
			{
				magazine = "332nd_aux_magazine_332_SquadShield_x1";
				count = 5;
			};

			class ThermalDet_332nd
			{
				magazine = "332nd_aux_magazine_332_FRAG_x1";
				count = 30;
			};

			class PLXAA_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_AAMag_x2";
				count = 10;
			};

			class PLXAT_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_ATMag_x2";
				count = 10;
			};

			class PLXHE_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_HEMag_x2";
				count = 10;
			};

			class RPS6AT_332nd
			{
				magazine = "332nd_aux_magazine_RPS6_ATMag_x1";
				count = 20;
			};

			class RPS6AA_332nd
			{
				magazine = "332nd_aux_magazine_RPS6_AAMag_x1";
				count = 20;
			};

			class RPS4AT_332nd
			{
				magazine = "332nd_aux_magazine_RPS4_AT_x1";
				count = 20;
			};

			class RPS4HE_332nd
			{
				magazine = "332nd_aux_magazine_RPS4_HE_x1";
				count = 20;
			};

			class DC15xATR_332nd
			{
				magazine = "332nd_aux_magazine_DC_15x_x3";
				count = 20;
			};
		};

		class EventHandlers
		{
			init = "[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};

	// ---- End Supply Crates ----

	// ---- Blufor Units for Uniforms ----

	class B_Soldier_f;
    class JLTS_Clone_P2_DC15A:B_Soldier_f 
    {
        class HitPoints;
    };

	//recruit
	class MACRO_NEW_UNIT(recruit,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Clone Base";

		uniformClass = MACRO_NEW_UNIFORM(recruit,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

		linkedItems[] = {"332nd_aux_infantry_helmet_332nd_recruit","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG"};
		respawnLinkedItems[] = {"332nd_aux_infantry_helmet_332nd_recruit","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		// define stuff like
		// armor, items, unit name

	};

	//infantry
    class MACRO_NEW_UNIT(infantry,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

        uniformClass = MACRO_NEW_UNIFORM(infantry,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {"332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG"};
		respawnLinkedItems[] = {"332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG"};
		weapons[] = {"332nd_aux_weapon_DC_15a","Throw","Put"};
		respawnWeapons[] = {"332nd_aux_weapon_DC_15a","Throw","Put"};
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

        // define stuff like
        // armor, items, unit name

    };

	class MACRO_NEW_UNIT(arfbase,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Clone ARF Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfbase,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfdes,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Clone ARF Desert Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfdes,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfjung,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Clone ARF Jungle Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfjung,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfsnow,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Clone ARF Snow Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfsnow,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfurb,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Clone ARF Urban Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfurb,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(arfwood,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Clone ARF Woodland Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

		uniformClass = MACRO_NEW_UNIFORM(arfwood,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(mech,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Clone Mechanized Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

		uniformClass = MACRO_NEW_UNIFORM(mech,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		linkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = { "332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		// define stuff like
		// armor, items, unit name

	};

	class MACRO_NEW_UNIT(rto,base) : MACRO_NEW_UNIT(infantry,base)
	{
		displayName = "[332nd] Clone RTO Base";

		uniformClass = MACRO_NEW_UNIFORM(rto, base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		backpack = "332nd_aux_blufor_backpack_332nd_RTO_base";
	};

	class MACRO_NEW_UNIT(medic,base) : MACRO_NEW_UNIT(infantry,base)
	{
		displayName = "[332nd] Clone Medic Base";

		uniformClass = MACRO_NEW_UNIFORM(medic, base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		backpack = "332nd_aux_blufor_backpack_332nd_medic";
	};

	class MACRO_NEW_UNIT(aviation,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Aviation Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

        uniformClass = MACRO_NEW_UNIFORM(aviation,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
		linkedItems[] = {"332nd_aux_seniorensign_vest_332nd_FlightSeniorEnsign_Vest", "332nd_aux_aviation_helmet_332nd_pilot","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = { "332nd_aux_seniorensign_vest_332nd_FlightSeniorEnsign_Vest", "332nd_aux_aviation_helmet_332nd_pilot","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		weapons[] = { "332nd_aux_weapon_DC_15s","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15s","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_Pilot_Pack";
		magazines[] =
		{
			mag_15(332nd_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_15(332nd_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 2;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.2;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 2;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.75;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 2;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.75;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 4.5;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 4.5;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 9;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 9;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 9;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 4.5;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 2;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 4.5;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 4.5;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 4.5;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 4.5;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

        // define stuff like
        // armor, items, unit name

    };

	class MACRO_NEW_UNIT(cwo,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Warrant Officer Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

        uniformClass = MACRO_NEW_UNIFORM(cwo,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
		linkedItems[] = {"332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_infantry_vest_332nd_officer","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = {"332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_infantry_vest_332nd_officer","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15s","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15s","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_Leadership";
		magazines[] =
		{
			mag_15(332nd_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_15(332nd_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 3;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 20;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2500;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

    };
	// ---- End Blufor Units for Uniforms ----

	// ---- Opfor Units for Uniforms ----
	class O_Soldier_F;
	class O_soldier_AR_F;
	class O_Soldier_LAT_f;
	class O_Sniper_f;
	class O_Crew_f;
	class O_Officer_f;
	class O_Soldier_AT_F;
	class O_Helipilot_F;
	class lsd_cis_bxDroid_base;
	class O_Soldier_base_F;
	class k_CIS_Droideka;

	class JLTS_Droid_B1_E5 :O_Soldier_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Rocket :JLTS_Droid_B1_E5
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_SBB3 :JLTS_Droid_B1_E5
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_AR : O_soldier_AR_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_AT : O_Soldier_LAT_f
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Sniper : O_Sniper_f
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Crew : O_Crew_f
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Commander : O_Officer_f
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Marine : O_Soldier_AT_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Security : JLTS_Droid_B1_E5
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Pilot : O_Helipilot_F
	{
		class HitPoints;
	};
	class lsd_cis_bxdroid_specops : lsd_cis_bxDroid_base
	{
		class HitPoints;
	};
	class lsd_cis_bxCaptain_specops : lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxAssassin_specops : lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxSecurity_specops : lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxDiplomat_specops : lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class O_soldier_Melee : O_Soldier_base_F
	{
		class HitPoints;
	};
	class O_soldier_Melee_RUSH : O_Soldier_base_F
	{
		class HitPoints;
	};

	//B1
	class MACRO_NEW_UNIT(cisb1,base) : JLTS_Droid_B1_E5
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisb1jumppack,base) : JLTS_Droid_B1_Rocket
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Jumppack Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1jumppack,base);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		class Eventhandlers
		{
			init = "[_this] spawn Aux332nd_fnc_Jumppack";
		};

	};

	class MACRO_NEW_UNIT(cisb1breach,base) : JLTS_Droid_B1_SBB3
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Breacher Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisb1ar,base) : JLTS_Droid_B1_AR
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Support Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisb1at,base) : JLTS_Droid_B1_AT
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Anti-Tank Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","JLTS_RPS6","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","JLTS_RPS6","Throw","Put" };

		magazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisb1sniper,base) : JLTS_Droid_B1_Sniper
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Sniper Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisb1crew,base) : JLTS_Droid_B1_Crew
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Crew Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1crew,base);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisb1comm,base) : JLTS_Droid_B1_Commander
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Commander Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1comm,base);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisb1marine,base) : JLTS_Droid_B1_Marine
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Marine Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1marine,base);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","JLTS_E60R_AT","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","JLTS_E60R_AT","Throw","Put" };

		magazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisb1sec,base) : JLTS_Droid_B1_Security
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Security Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1sec,base);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisb1pilot,base) : JLTS_Droid_B1_Pilot
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Pilot Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_B1";
		uniformClass = MACRO_NEW_UNIFORM(cisb1pilot,base);

		weapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };
		respawnWeapons[] = { MACRO_NEW_WEAPON(E5_B1),"JLTS_RG4D","Throw","Put" };

		magazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			mag_10(332nd_aux_magazine_E5Low_x50),
			mag_2(JLTS_RG4D_mag),
			mag_2(332nd_aux_magazine_332_FRAG_x1),
			"SmokeShellGreen",
			"SmokeShell"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};


	//BX
	class MACRO_NEW_UNIT(cisbx,base) : lsd_cis_bxdroid_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);

		weapons[] = { "JLTS_E5","Throw","Put" };
		respawnWeapons[] = { "JLTS_E5","Throw","Put" };

		magazines[] =
		{
			mag_8(JLTS_E5_mag),
		};
		respawnMagazines[] =
		{
			mag_8(JLTS_E5_mag),
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisbxar,base) : lsd_cis_bxdroid_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Support Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);

		weapons[] = { "JLTS_E5C","Throw","Put" };
		respawnWeapons[] = { "JLTS_E5C","Throw","Put" };

		magazines[] =
		{
			mag_8(JLTS_E5C_mag),
		};
		respawnMagazines[] =
		{
			mag_8(JLTS_E5C_mag),
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisbxat,base) : lsd_cis_bxdroid_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Anti-Tank Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);
		backpack = "JLTS_B1_backpack_at_predef";

		weapons[] = { "JLTS_E5","JLTS_RPS6", "Throw","Put" };
		respawnWeapons[] = { "JLTS_E5","JLTS_RPS6","Throw","Put" };

		magazines[] =
		{
			mag_8(JLTS_E5_mag),
		};
		respawnMagazines[] =
		{
			mag_8(JLTS_E5_mag),
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisbxbreach,base) : lsd_cis_bxdroid_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Breacher Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);

		weapons[] = { "JLTS_SBB3","Throw","Put" };
		respawnWeapons[] = { "JLTS_SBB3","Throw","Put" };

		magazines[] =
		{
			mag_8(JLTS_SBB3_mag),
		};
		respawnMagazines[] =
		{
			mag_8(JLTS_SBB3_mag),
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisbxcapt,base) : lsd_cis_bxCaptain_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Captain Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbxcapt,base);

		weapons[] = { "JLTS_E5","Throw","Put" };
		respawnWeapons[] = { "JLTS_E5","Throw","Put" };

		magazines[] =
		{
			mag_8(JLTS_E5_mag),
		};
		respawnMagazines[] =
		{
			mag_8(JLTS_E5_mag),
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisbxsec,base) : lsd_cis_bxSecurity_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Security Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbxsec,base);

		weapons[] = { "JLTS_E5","Throw","Put" };
		respawnWeapons[] = { "JLTS_E5","Throw","Put" };

		magazines[] =
		{
			mag_8(JLTS_E5_mag),
		};
		respawnMagazines[] =
		{
			mag_8(JLTS_E5_mag),
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisbxdiplo,base) : lsd_cis_bxDiplomat_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Security Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbxdiplo,base);

		weapons[] = { "JLTS_E5","Throw","Put" };
		respawnWeapons[] = { "JLTS_E5","Throw","Put" };

		magazines[] =
		{
			mag_8(JLTS_E5_mag),
		};
		respawnMagazines[] =
		{
			mag_8(JLTS_E5_mag),
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisbxassassin,base) : lsd_cis_bxAssassin_specops
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Assassin Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);

		weapons[] = { "JLTS_E5S","Throw","Put" };
		respawnWeapons[] = { "JLTS_E5S","Throw","Put" };

		magazines[] =
		{
			mag_8(JLTS_E5S_mag),
		};
		respawnMagazines[] =
		{
			mag_8(JLTS_E5S_mag),
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisbxmelee,base) : O_soldier_Melee
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Melee Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);
		nakedUniform = "lsd_cis_bxDroid_uniform";

		identityTypes[] = { "LanguageENG_F", "Head_LSD_BX" };

		linkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		respawnLinkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		weapons[] = { "WBK_Dutch_Vibro","Throw","Put" };
		respawnWeapons[] = { "WBK_Dutch_Vibro","Throw","Put" };

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	class MACRO_NEW_UNIT(cisbxmeleerush,base) : O_soldier_Melee_RUSH
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] BX Melee Rush Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_BX";
		uniformClass = MACRO_NEW_UNIFORM(cisbx,base);
		nakedUniform = "lsd_cis_bxDroid_uniform";

		identityTypes[] = { "LanguageENG_F", "Head_LSD_BX" };

		linkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		respawnLinkedItems[] = { "ItemMap","SWLB_comlink_droid","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg" };
		weapons[] = { "WBK_Dutch_Vibro","Throw","Put" };
		respawnWeapons[] = { "WBK_Dutch_Vibro","Throw","Put" };

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.90000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.90000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.90000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};


	//Heavy Droids
	class MACRO_NEW_UNIT(cisdroideka,base) : k_CIS_Droideka
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Droideka Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_HEAVY";

		armor = 275;

		class EventHandlers {
			init = "[_this] spawn Aux332nd_fnc_initDroideka;";
		};
	};

	class MACRO_NEW_UNIT(cisdroidekamoveable,base) : k_CIS_Droideka
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Droideka Moveable Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_HEAVY";

		armor = 275;

		class EventHandlers {
			init = "[_this] spawn Aux332nd_fnc_initDroideka_Move;";
		};
	};

	// ---- End Opfor Units for Uniforms ----
};

class Extended_Killed_EventHandlers
{
	//B1s
	class MACRO_NEW_UNIT(cisb1,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1jumppack,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1breach,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1ar,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1at,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1sniper,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1crew,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1comm,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1marine,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1sec,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
	class MACRO_NEW_UNIT(cisb1pilot,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};


	//BXs
	class MACRO_NEW_UNIT(cisbx,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};
	class MACRO_NEW_UNIT(cisbxcapt,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};
	class MACRO_NEW_UNIT(cisbxsec,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};
	class MACRO_NEW_UNIT(cisbxdiplo,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};
	class MACRO_NEW_UNIT(cisbxassassin,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};
	class MACRO_NEW_UNIT(cisbxmelee,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};
	class MACRO_NEW_UNIT(cisbxmeleerush,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};
	class MACRO_NEW_UNIT(cisbxar,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};
	class MACRO_NEW_UNIT(cisbxat,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};
	class MACRO_NEW_UNIT(cisbxbreach,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_BX";
	};


	//Heavy Droids
	class MACRO_NEW_UNIT(cisdroideka,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_Heavy";
	};
	class MACRO_NEW_UNIT(cisdroidekamoveable,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed_Heavy";
	};
};