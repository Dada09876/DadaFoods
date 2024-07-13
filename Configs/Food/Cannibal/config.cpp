#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Cannibal
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DadaFoods"};
	};
};
class CfgVehicles
{

    class BaseFoodStageTransitions;
	class DadaDishStageTransitions;
	class FoodAnimationSources;

    class HumanSteakMeat;
	class DadaCannibal_Base: HumanSteakMeat
	{
		scope = 2;
		canBeSplit = 1;
		quantityBar = 1;
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Bowl_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_rotten_co.paa",};
		displayName = "$STR_HumanSteakMeat0";
		descriptionShort = "$STR_HumanSteakMeat1";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\bowl.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		weightPerQuantityUnit = 2.5;
		interactionWeight = 1;
		itemSize[] = {2,3};
		varQuantityInit = 275;
		varQuantityMin = 0;
		varQuantityMax = 300;
		inventorySlot[] = {"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl.rvmat","\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0.7,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl.rvmat","\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0.5,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl_damage.rvmat","\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0.3,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl_damage.rvmat","\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl_destruct.rvmat","\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}}};
				};
			};
		};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,-1};
					nutrition_properties[] = {5,50,50,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,-1};
					nutrition_properties[] = {10,25,25,1,0,"4 + 16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {-1,-1,-1};
					nutrition_properties[] = {2,250,50,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {-1,-1,-1};
					nutrition_properties[] = {2,200,100,1,0};
					cooking_properties[] = {70,50};
				};
				class Dried
				{
					visual_properties[] = {-1,-1,-1};
					nutrition_properties[] = {3,300,0,1,0};
					cooking_properties[] = {70,55,80};
				};
				class Burned
				{
					visual_properties[] = {-1,-1,-1};
					nutrition_properties[] = {5,50,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaDishStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

    class DadaCannibal_EyeballSoup: DadaCannibal_Base
	{
		scope = 2;
		displayName = "Human Eyeball Soup";
		descriptionShort = "A stew made from human meat.";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Bowl_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_raw_co.paa", "Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_baked_co.paa",
		"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_boiled_co.paa",
		"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_dried_co.paa",
		"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_burnt_co.paa",
		"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_rotten_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 100;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl_damage.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl_damage.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl_destruct.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}}};
				};
			};
		};
	};
	class DadaCannibal_EntrailsSpaghetti: DadaCannibal_Base
	{
		scope = 2;
		displayName = "Human Entrails Spaghetti";
		descriptionShort = "Human Guts Spaghetti";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Bowl_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_raw_co.paa", "Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_baked_co.paa",
		"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_boiled_co.paa",
		"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_dried_co.paa",
		"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_burnt_co.paa",
		"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_rotten_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 100;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	
	class Chips;
	class DadaCannibal_Jerky: Chips
	{
		scope = 2;
		model = "\DZ\gear\food\salty_chips.p3d";
		displayName = "Skin Jerky";
		descriptionShort = "Dried human skin strips";
        debug_ItemCategory = 6;
		rotationFlags = 1;
		weight = 10;
		itemSize[] = {2,3};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Jerky_co.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 50;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
        varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0.7,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0.5,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0.3,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};