 #include "../../332nd_main/macros/main.hpp"
/*current Mission
Make rebels carry custom equipment as well as equipment in there backpack, with spawnable groups of rebels
*/
class CfgPatches
{
    class MACRO_PATCH_NAME(indep_units)
    {
        author = "Bugs+Thunder";
        addonRootClass = MACRO_PATCH_NAME(units);
        requiredAddons[] =
        {
            MACRO_PATCH_NAME(units)
        };
        requiredVersion = 0.1;
        units[] = {
			MACRO_NEW_UNIT(rebel,332nd_indep_rebel),//added
			MACRO_NEW_UNIT(rebel_AT,332nd_indep_rebel_AT),
			MACRO_NEW_UNIT(rebel_Sniper,332nd_indep_rebel_Sniper),
			MACRO_NEW_UNIT(rebel_Medic,332nd_indep_rebel_Medic),
			MACRO_NEW_UNIT(rebel_Heavy,332nd_indep_rebel_Heavy),
			MACRO_NEW_UNIT(rebel_SL,332nd_indep_rebel_SL),
			MACRO_NEW_UNIT(rebel_FL,332nd_indep_rebel_FL),
			MACRO_NEW_UNIT(rebel_AA,332nd_indep_rebel_AA),
			MACRO_NEW_UNIT(rebel_Spotter,332nd_indep_rebel_Spotter),
			MACRO_NEW_UNIT(rebel_Shocker,332nd_indep_rebel_Shocker),
			MACRO_NEW_UNIT(rebel_Breacher,332nd_indep_rebel_Breacher),
			MACRO_NEW_UNIT(rebel_Human,332nd_indep_rebel_Human),
        };
        weapons[] = {
			MACRO_NEW_UNIFORM(rebel,332nd_indep_rebel),
			MACRO_NEW_UNIFORM(rebel_AT,332nd_indep_rebel_AT),
			MACRO_NEW_UNIFORM(rebel_Sniper,332nd_indep_rebel_Sniper),
			MACRO_NEW_UNIFORM(rebel_Medic,332nd_indep_rebel_Medic),
			MACRO_NEW_UNIFORM(rebel_Heavy,332nd_indep_rebel_Heavy),
			MACRO_NEW_UNIFORM(rebel_SL,332nd_indep_rebel_SL),
			MACRO_NEW_UNIFORM(rebel_FL,332nd_indep_rebel_FL),
			MACRO_NEW_UNIFORM(rebel_AA,332nd_indep_rebel_AA),
			MACRO_NEW_UNIFORM(rebel_Spotter,332nd_indep_rebel_Spotter),
			MACRO_NEW_UNIFORM(rebel_Shocker,332nd_indep_rebel_Shocker),
			MACRO_NEW_UNIFORM(rebel_Breacher,332nd_indep_rebel_Breacher),
			MACRO_NEW_UNIFORM(rebel_Human,332nd_indep_rebel_Human),
        };
    };
};

class CfgWeapons
{
	class C_Man_casual_1_F;
	class JLTS_DroidB1;
	class I_rebel_human;
	class I_rebel_human_base;
	class I_rebel_human_base_v2;
	class I_rebel_human_base_v3;
	class I_rebel_human_base_v4;
	class I_rebel_human_base_v5;
	class I_rebel_human_base_v6;
	//Rebel
	class MACRO_NEW_UNIFORM(rebel,base) : JLTS_DroidB1 //leave droid skin for now find where civil skins are
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_AT,base) : JLTS_DroidB1 //leave droid skin for now find where civil skins are
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Sniper,base) : JLTS_DroidB1 //leave droid skin for now find where civil skins are
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Medic,base) : JLTS_DroidB1 
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Heavy,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_AA,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Spotter,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Shocker,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Breacher,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_SL,base) : I_rebel_human
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_FL,base) : I_rebel_human
	{
		class ItemInfo;
	};


	//Rebel Human
	class MACRO_NEW_UNIFORM(rebel_Human,base) : I_rebel_human_base
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Human_AT,base) : I_rebel_human_base_v2
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Human_Sniper,base) : I_rebel_human_base_v3
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Human_Medic,base) : I_rebel_human_base_v4
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Human_Heavy,base) : I_rebel_human_base_v5
	{
		class ItemInfo;
	}; 
	
	class MACRO_NEW_UNIFORM(rebel_Human_Spotter,base) : I_rebel_human_base_v6
	{
		class ItemInfo;
	};

	//Rebel
	MACRO_NEW_REBEL_UNIFORM_ITEM(332nd_indep_rebel,Rebel,332nd_indep_rebel)//Class name, shown name, unit name
	MACRO_NEW_REBEL_AT_UNIFORM_ITEM(332nd_indep_rebel_AT,AT Rebel,332nd_indep_rebel_AT)
	MACRO_NEW_REBEL_SNIPER_UNIFORM_ITEM(332nd_indep_rebel_Sniper,Sniper Rebel,332nd_indep_rebel_Sniper)
	MACRO_NEW_REBEL_MEDIC_UNIFORM_ITEM(332nd_indep_rebel_Medic,Medical Rebel,332nd_indep_rebel_Medic)
	MACRO_NEW_REBEL_HEAVY_UNIFORM_ITEM(332nd_indep_rebel_Heavy,Heavy Rebel,332nd_indep_rebel_Heavy)
	MACRO_NEW_REBEL_SL_UNIFORM_ITEM(332nd_indep_rebel_SL,Squad Leader Rebel,332nd_indep_rebel_SL)
	MACRO_NEW_REBEL_FL_UNIFORM_ITEM(332nd_indep_rebel_FL,Fireteam Leader Rebel,332nd_indep_rebel_FL)
	MACRO_NEW_REBEL_AA_UNIFORM_ITEM(332nd_indep_rebel_AA,AA Rebel,332nd_indep_rebel_AA)
	MACRO_NEW_REBEL_SPOTTER_UNIFORM_ITEM(332nd_indep_rebel_Spotter,Spotter Rebel,332nd_indep_rebel_Spotter)
	MACRO_NEW_REBEL_SHOCKER_UNIFORM_ITEM(332nd_indep_rebel_Shocker,Shocker Rebel,332nd_indep_rebel_Shocker)
	MACRO_NEW_REBEL_BREACHER_UNIFORM_ITEM(332nd_indep_rebel_Breacher,Breacher Rebel,332nd_indep_rebel_Breacher)
	MACRO_NEW_REBEL_HUMAN_UNIFORM_ITEM(332nd_indep_rebel_Human,Human Rebel,332nd_indep_rebel_Human)
	MACRO_NEW_REBEL_HUMAN_AT_UNIFORM_ITEM(332nd_indep_rebel_Human_AT,Human AT Rebel,332nd_indep_rebel_Human_AT)
	MACRO_NEW_REBEL_HUMAN_SNIPER_UNIFORM_ITEM(332nd_indep_rebel_Human_Sniper,Human Sniper Rebel,332nd_indep_rebel_Human_Sniper)
	MACRO_NEW_REBEL_HUMAN_MEDIC_UNIFORM_ITEM(332nd_indep_rebel_Human_Medic,Human Medic Rebel,332nd_indep_rebel_Human_Medic)
	MACRO_NEW_REBEL_HUMAN_HEAVY_UNIFORM_ITEM(332nd_indep_rebel_Human_Heavy,Human Heavy Rebel,332nd_indep_rebel_Human_Heavy)
	MACRO_NEW_REBEL_HUMAN_SPOTTER_UNIFORM_ITEM(332nd_indep_rebel_Human_Spotter,Human Spotter Rebel,332nd_indep_rebel_Human_Spotter)


};

class CfgVehicles
{
	class MACRO_NEW_UNIT(rebel,base);//Added
	class MACRO_NEW_UNIT(rebel_AT,base);
	class MACRO_NEW_UNIT(rebel_Sniper,base);
	class MACRO_NEW_UNIT(rebel_Medic,base);
	class MACRO_NEW_UNIT(rebel_Heavy,base);
	class MACRO_NEW_UNIT(rebel_SL,base);
	class MACRO_NEW_UNIT(rebel_FL,base);
	class MACRO_NEW_UNIT(rebel_AA,base);
	class MACRO_NEW_UNIT(rebel_Spotter,base);
	class MACRO_NEW_UNIT(rebel_Shocker,base);
	class MACRO_NEW_UNIT(rebel_Breacher,base);
	//Rebel Human
	class MACRO_NEW_UNIT(rebel_Human,base);
	class MACRO_NEW_UNIT(rebel_Human_AT,base);
	class MACRO_NEW_UNIT(rebel_Human_Sniper,base);
	class MACRO_NEW_UNIT(rebel_Human_Medic,base);
	class MACRO_NEW_UNIT(rebel_Human_Heavy,base);
	class MACRO_NEW_UNIT(rebel_Human_Spotter,base);

		//Rebels
		MACRO_NEW_REBEL_UNIT(332nd_indep_rebel,Rebel,332nd_indep_rebel)//Added
		MACRO_NEW_REBEL_AT_UNIT(332nd_indep_rebel_AT,AT Rebel,332nd_indep_rebel_AT)
		MACRO_NEW_REBEL_SNIPER_UNIT(332nd_indep_rebel_Sniper,Sniper Rebel,332nd_indep_rebel_Sniper)
		MACRO_NEW_REBEL_MEDIC_UNIT(332nd_indep_rebel_Medic,Medical Rebel,332nd_indep_rebel_Medic)
		MACRO_NEW_REBEL_HEAVY_UNIT(332nd_indep_rebel_Heavy,Heavy Rebel,332nd_indep_rebel_Heavy)
		MACRO_NEW_REBEL_SL_UNIT(332nd_indep_rebel_SL,Sqaud Leader Rebel,332nd_indep_rebel_SL)
		MACRO_NEW_REBEL_FL_UNIT(332nd_indep_rebel_FL,Fireteam Leader Rebel,332nd_indep_rebel_FL)
		MACRO_NEW_REBEL_AA_UNIT(332nd_indep_rebel_AA,AA Rebel,332nd_indep_rebel_AA)
		MACRO_NEW_REBEL_SPOTTER_UNIT(332nd_indep_rebel_Spotter,Spotter Rebel,332nd_indep_rebel_Spotter)
		MACRO_NEW_REBEL_SHOCKER_UNIT(332nd_indep_rebel_Shocker,Shocker Rebel,332nd_indep_rebel_Shocker)
		MACRO_NEW_REBEL_BREACHER_UNIT(332nd_indep_rebel_Breacher,Breacher Rebel,332nd_indep_rebel_Breacher)

		//Rebel Human
		MACRO_NEW_REBEL_HUMAN_UNIT(332nd_indep_rebel_Human,Human Rebel,332nd_indep_rebel_Human)
		MACRO_NEW_REBEL_HUMAN_AT_UNIT(332nd_indep_rebel_Human_AT, Human AT Rebel, 332nd_indep_rebel_Human_AT)
		MACRO_NEW_REBEL_HUMAN_SNIPER_UNIT(332nd_indep_rebel_Human_Sniper, Human Sniper Rebel, 332nd_indep_rebel_Human_Sniper)
		MACRO_NEW_REBEL_HUMAN_MEDIC_UNIT(332nd_indep_rebel_Human_Medic, Human Medic Rebel, 332nd_indep_rebel_Human_Medic)
		MACRO_NEW_REBEL_HUMAN_HEAVY_UNIT(332nd_indep_rebel_Human_Heavy, Human Heavy Rebel, 332nd_indep_rebel_Human_Heavy)
		MACRO_NEW_REBEL_HUMAN_SPOTTER_UNIT(332nd_indep_rebel_Human_Spotter, Human Spotter Rebel, 332nd_indep_rebel_Human_Spotter)
};		

class CfgGroups
{
	class Indep
	{
		side = 2;
		class EdCat_332nd_Rebel
		{
			side = 2;
			name = "332nd Rebels";
			class RebelFireteams
			{
				name = "Rebel Fireteams";
				class rebelFireteamBasic
				{
					name = "Basic Fireteam";
					side = 2;
					faction = "EdCat_332nd_Rebel";
					class Unit0
					{
						side = 2;
						vehicle = "332nd_aux_rebel_FL_unit_332nd_indep_rebel_FL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Medic_unit_332nd_indep_rebel_Medic";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit4
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { -2,2,0 };
					};
					class Unit5
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 2,-2,0 };
					};
					class Unit6
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
				};

				class rebelFireteamWeapons
				{
					name = "Weapons Fireteam";
					side = 2;
					faction = "EdCat_332nd_Rebel";
					class Unit0
					{
						side = 2;
						vehicle = "332nd_aux_rebel_FL_unit_332nd_indep_rebel_FL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Medic_unit_332nd_indep_rebel_Medic";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
			};

			class RebelSquads
			{
				name = "Rebel Squads"
				class rebelSquadBasic 
				{
					name = "Basic Squad";
					side = 2;
					faction = "EdCat_332nd_Rebel";

					class Unit0
					{
						side = 2;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};

					//Start Fireteam A
					class Unit1
					{
						side = 2;
						vehicle = "332nd_aux_rebel_FL_unit_332nd_indep_rebel_FL";
						rank = "PRIVATE";
						position[] = { 2,-2,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Medic_unit_332nd_indep_rebel_Medic";
						rank = "PRIVATE";
						position[] = { 2,-3,0 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { 2,-4,0 };
					};
					class Unit4
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "PRIVATE";
						position[] = { 2,-5,0 };
					};
					class Unit5
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { 2,-6,0 };
					};
					class Unit6
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 2,-7,0 };
					};
					class Unit7
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 2,-8,0 };
					};
					//END Fireteam A

					//Start Fireteam B
					class Unit8
					{
						side = 2;
						vehicle = "332nd_aux_rebel_FL_unit_332nd_indep_rebel_FL";
						rank = "PRIVATE";
						position[] = { 1,-2,0 };
					};
					class Unit9
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Medic_unit_332nd_indep_rebel_Medic";
						rank = "PRIVATE";
						position[] = { 1,-3,0 };
					};
					class Unit10
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { 1,-4,0 };
					};
					class Unit11
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "PRIVATE";
						position[] = { 1,-5,0 };
					};
					class Unit12
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { 1,-6,0 };
					};
					class Unit13
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,-7,0 };
					};
					class Unit14
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,-8,0 };
					};
					//END Fireteam B

					//Start Fireteam C
					class Unit15
					{
						side = 2;
						vehicle = "332nd_aux_rebel_FL_unit_332nd_indep_rebel_FL";
						rank = "PRIVATE";
						position[] = { -1,-2,0 };
					};
					class Unit16
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Medic_unit_332nd_indep_rebel_Medic";
						rank = "PRIVATE";
						position[] = { -1,-3,0 };
					};
					class Unit17
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { -1,-4,0 };
					};
					class Unit18
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "PRIVATE";
						position[] = { -1,-5,0 };
					};
					class Unit19
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { -1,-6,0 };
					};
					class Unit20
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { -1,-7,0 };
					};
					class Unit21
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { -1,-8,0 };
					};
					//END Fireteam C

					//Start Fireteam D
					class Unit22
					{
						side = 2;
						vehicle = "332nd_aux_rebel_FL_unit_332nd_indep_rebel_FL";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};

					class Unit23
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Medic_unit_332nd_indep_rebel_Medic";
						rank = "PRIVATE";
						position[] = { -2,-3,0 };
					};

					class Unit24
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { -2,-4,0 };
					};

					class Unit25
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { -2,-5,0 };
					};

					class Unit26
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "PRIVATE";
						position[] = { -2,-6,0 };
					};

					class Unit27
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "PRIVATE";
						position[] = { -2,-7,0 };
					};

					class Unit28
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { -2,-8,0 };
					};
					//END Fireteam D

				};
			};
		};
	};
};