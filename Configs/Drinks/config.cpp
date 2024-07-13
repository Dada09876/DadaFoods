////////////////////////////////////////////////////////////////////
//DeRap: Food\Drinks\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 15 14:56:06 2023 : 'file' last modified on Wed Nov 15 14:56:06 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Drinks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DadaFoods"};
	};
};

class CfgVehicles
{
	class Edible_Base;
	class DadaDrinks_ColorBase: Edible_Base
	{
		model = "\dz\gear\drinks\SodaCan.p3d";
		debug_ItemCategory = 6;
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 300;
		varQuantityMin = 0;
		varQuantityMax = 300;
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"DZ\gear\drinks\data\sodacan.rvmat"}},{0.7,{"DZ\gear\drinks\data\sodacan.rvmat"}},{0.5,{"DZ\gear\drinks\data\sodacan_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\sodacan_damage.rvmat"}},{0.0,{"DZ\gear\drinks\data\sodacan_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "metal";
		class Nutrition
		{
			totalVolume = 1;
			energy = 50;
			water = 150;
			nutritionalIndex = 1;
			toxicity = 0;
		};

		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,100,75,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,75,50,1,0,16};
					cooking_properties[] = {0,0};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaDrink_FreshMilk: DadaDrinks_ColorBase
	{
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 50;
			water = 150;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		canBeSplit = 1;
		scope = 2;
		displayName = "Fresh Milk";
		descriptionShort = "Some say it's good for the bones";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_FreshMilk_co.paa"};
	};

	class DadaDrink_CurdsAndWhey: DadaDrinks_ColorBase
	{
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 100;
			water = 200;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		canBeSplit = 1;
		scope = 2;
		displayName = "Curds and whey";
		descriptionShort = "Little Miss Muffet’s favourite snack. Chunky and cheesy mix. Can be strained for its curds";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_CurdsAndWhey_co.paa"};
	};
	class DadaDrink_Whey: DadaDrinks_ColorBase
	{
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 10;
			water = 290;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		canBeSplit = 1;
		scope = 2;
		displayName = "Whey";
		descriptionShort = "Little Miss Muffet’s favourite drink. Cheesy drink.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_Whey_co.paa"};
	};

	class DadaDrink_Coffee: DadaDrinks_ColorBase
	{
		scope = 2;
		itemSize[] = {2,2};
		displayName = "Cup of coffee";
		descriptionShort = "A cup full of coffee.";
		model = "Source_Files\DadaFoods\Configs\Drinks\data\Cup.p3d";
		hiddenSelections[] = {"zbytek","camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_Coffee_co.paa","Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_Coffee_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class DadaDrink_MilkBottle: DadaDrinks_ColorBase
	{
		scope = 2;
		canBeSplit = 1;
		displayName = "Milk Bottle";
		descriptionShort = "Some say it's good for the bones";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_MilkBottle_co.paa"};
		model = "\dz\gear\drinks\WaterBottle.p3d";
		weight = 50;
		itemSize[] = {1,3};
		varQuantityInit = 1000;
		varQuantityMax = 1000;
		class Nutrition
		{
			energy = 50;
			water = 150;
			nutritionalIndex = 1;
			toxicity = 0;
			fullnessIndex = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"}},{0.7,{"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"}},{0.5,{"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"}},{0,{"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "WaterBottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class DadaDrink_MilkCarton: DadaDrinks_ColorBase
	{
		scope = 2;
		canBeSplit = 1;
		displayName = "Milk Carton";
		descriptionShort = "Some say it's good for the bones";
		hiddenSelections[] = {"zbytek","camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\MilkCartonCap_co.paa","Source_Files\DadaFoods\Configs\Drinks\data\MilkCarton_co.paa"};
		model = "Source_Files\DadaFoods\Configs\Drinks\data\MilkCartonModel.p3d";
		weight = 50;
		itemSize[] = {1,3};
		varQuantityInit = 1000;
		varQuantityMax = 1000;
		class Nutrition
		{
			energy = 50;
			water = 150;
			nutritionalIndex = 1;
			toxicity = 0;
			fullnessIndex = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkCarton.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkCarton.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkCarton_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkCarton_damage.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkCarton_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "WaterBottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class DadaDrink_MilkGallon: DadaDrinks_ColorBase
	{
		fullnessIndex = 1;
		canBeSplit = 1;
		scope = 2;
		displayName = "Milk Gallon";
		descriptionShort = "Some say it's good for the bones";
		model = "Source_Files\DadaFoods\Configs\Drinks\data\MilkGallonModel.p3d";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\MilkGallon_co.paa"};
		inventorySlot[] = {"DadaMilkGallon"};
		weight = 200;
		itemSize[] = {4,5};
		varQuantityInit = 4000;
		varQuantityMax = 4000;
		class Nutrition
		{
			energy = 50;
			water = 150;
			nutritionalIndex = 1;
			toxicity = 0;
			fullnessIndex = 2;
		};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Drinks\data\MilkGallon.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkGallon.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkGallon.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkGallon_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkGallon_damage.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Drinks\data\MilkGallon_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet = "pickUpPotLight_SoundSet";
					id = 796;
				};
				class pickUpPot
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "pot_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class DadaDrink_MilkCoffee: DadaDrinks_ColorBase
	{
		scope = 2;
		itemSize[] = {2,2};
		displayName = "Cup of milk coffee";
		descriptionShort = "A cup full of milk coffee.";
		model = "Source_Files\DadaFoods\Configs\Drinks\data\Cup.p3d";
		hiddenSelections[] = {"zbytek","camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_MilkCoffee_ca.paa","Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_MilkCoffee_ca.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}; 
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_damage.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class DadaDrink_MilkCoffeeArt: DadaDrinks_ColorBase
	{
		scope = 2;
		itemSize[] = {2,2};
		displayName = "Cup of milk coffee";
		descriptionShort = "A cup full of coffee.";
		model = "Source_Files\DadaFoods\Configs\Drinks\data\Cup.p3d";
		hiddenSelections[] = {"zbytek","camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_MilkCoffeeArt_ca.paa","Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_MilkCoffeeArt_ca.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_damage.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class DadaDrink_BlackTea: DadaDrinks_ColorBase
	{
		scope = 2;
		itemSize[] = {2,2};
		displayName = "Cup of black tea";
		descriptionShort = "A cup full of tea.";
		model = "Source_Files\DadaFoods\Configs\Drinks\data\Cup.p3d";
		hiddenSelections[] = {"zbytek","camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_BlackTea_ca.paa","Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_BlackTea_ca.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}; 
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_damage.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class DadaDrink_GreenTea: DadaDrinks_ColorBase
	{
		scope = 2;
		itemSize[] = {2,2};
		displayName = "Cup of matcha";
		descriptionShort = "A cup full of tea.";
		model = "Source_Files\DadaFoods\Configs\Drinks\data\Cup.p3d";
		hiddenSelections[] = {"zbytek","camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_GreenTea_ca.paa","Source_Files\DadaFoods\Configs\Drinks\data\DadaDrink_GreenTea_ca.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_damage.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Cup_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class DadaDrink_MilkShake: DadaDrinks_ColorBase
	{
		scope = 2;
		canBeSplit = 1;
		displayName = "Milkshake";
		descriptionShort = "Shake it like a polaroid picture";
		hiddenSelections[] = {"cs_raw","zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\Milkshake_co.paa","Source_Files\DadaFoods\Configs\Drinks\data\Milkshake_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Drinks\data\MilkCarton.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}; 
		model = "Source_Files\DadaFoods\Configs\Drinks\data\Milkshake.p3d";
		weight = 50;
		itemSize[] = {1,3};
		varQuantityInit = 300;
		varQuantityMax = 300;
		class Nutrition
		{
			energy = 50;
			water = 150;
			nutritionalIndex = 1;
			toxicity = 0;
			fullnessIndex = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}}};
				};
			};
		};
		soundImpactType = "plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "WaterBottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
};