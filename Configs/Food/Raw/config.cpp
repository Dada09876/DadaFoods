#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Food_Raw
	{
		units[] = {"DadaRaw_Base","DadaRaw_Salad","DadaRaw_Rice","DadaRaw_PokeBowl","DadaRaw_TomatoSalad","DadaRawCerealCrunchin_Nesquik","DadaRaw_CerealCrunchin_Frosties","DadaRaw_CerealCrunchin_Kosmostar","DadaRaw_SushiMaki","DadaRaw_SushiOnigiri","DadaRaw_SmallButter","DadaRaw_SmallButter_Opened","DadaRaw_BigButter","DadaRaw_Yogourt","DadaRaw_CheeseBase","DadaRaw_Mozza","DadaRaw_MontereyJack","DadaRaw_CheddarCurds","DadaRaw_PumpkinSeeds","DadaRaw_FreshGoatCheese","DadaRaw_Feta","DadaRaw_VanillaChocoSwirl","DadaRaw_VanillaIceCream","DadaRaw_ChocoIScream","DadaRaw_FrozenYogurt"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DadaFoods"};
	};
};
class CfgVehicles
{
	class Edible_Base;
	class DadaRaw_Base: Edible_Base
	{
		scope = 0;
		model = "Source_Files\DadaFoods\Configs\Food\Cooked\data\bowl.p3d";
		weight = 2.5;
		canBeSplit = 1;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		itemSize[] = {2,2};
		inventorySlot[] = {"Ingredient","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8"};
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\DadaRawBowl_Base_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\DadaRawBowl_Base_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}}};
				};
			};
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

	class DadaRaw_Salad: DadaRaw_Base
	{
		scope = 2;
		displayName = "Salad";
		descriptionShort = "Lettuce and dressing, perfect meal for the calorie averse or starter for everyone else";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\ceramicbowl_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\DadaSalad_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,93,44,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,55,16,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,80,8,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaRaw_Rice: DadaRaw_Base
	{
		scope = 2;
		displayName = "Plain Rice";
		descriptionShort = "It's rice. Not sure what you were hoping for";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\ceramicbowl_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\DadaRiceBowl_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,125,85,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,45,21,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,125,10,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaRaw_PokeBowl: DadaRaw_Base
	{
		scope = 2;
		varQuantityInit = 275;
		varQuantityMin = 0;
		varQuantityMax = 300;
		itemSize[] = {2,2};
		displayName = "Poke Bowl";
		descriptionShort = "Bowl of rice with multiple toppings on it, gotta eat em all!";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\ceramicbowl_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\DadaPokeBowl_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,104,76,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,43,24,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,104,12,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaRaw_TomatoSalad: DadaRaw_Base
	{
		scope = 2;
		displayName = "Tomato Salad";
		descriptionShort = "Tomato and Mozzarella Salad";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\ceramicbowl_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\DadaTomatoSalad_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,93,44,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,55,16,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,80,8,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaRaw_CerealCrunchin: DadaRaw_Base
	{
		scope = 1;
		displayName = "Cereal Bowl";
		descriptionShort = "Bowl of cereal";
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,232,100,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,90,38,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,232,65,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaRawCerealCrunchin_Nesquik: DadaRaw_CerealCrunchin
	{
		scope = 2;
		Color = "Coco";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\ceramicbowl_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\DadaCerealCrunchinKids_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,232,100,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,90,38,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,232,65,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaRaw_CerealCrunchin_Frosties: DadaRaw_CerealCrunchin
	{
		scope = 2;
		Color = "Frosties";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\ceramicbowl_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\DadaCerealCrunchinFrosties_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,232,100,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,90,38,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,232,65,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaRaw_CerealCrunchin_Kosmostar: DadaRaw_CerealCrunchin
	{
		scope = 2;
		Color = "Star";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\ceramicbowl_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\DadaCerealCrunchinKosmostar_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,232,100,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,90,38,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,232,65,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaRaw_SushiMaki: DadaRaw_Base
	{
		scope = 2;
		displayName = "Maki";
		descriptionShort = "Homemade sushi. It looks and smells exactly how you think it does.";
		model = "Source_Files\DadaFoods\Configs\Food\Raw\data\Maki.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		varQuantityInit = 75;
		varQuantityMin = 0;
		varQuantityMax = 75;
		itemSize[] = {2,1};
		inventorySlot[] = {"Ingredient","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8"};
		isMeleeWeapon = 1;
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\Dada_Maki_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\Maki.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Food\Raw\data\Maki.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Raw\data\Maki.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Raw\data\Maki.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Raw\data\Maki.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\Maki.rvmat"}}};
				};
			};
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
					nutrition_properties[] = {2,104,76,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,43,24,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,104,12,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
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

	class DadaRaw_SushiOnigiri: DadaRaw_SushiMaki
	{
		scope = 2;
		displayName = "Onigiri";
		descriptionShort = "Homemade sushi. It looks and smells exactly how you think it does.";
		model = "Source_Files\DadaFoods\Configs\Food\Raw\data\Onigiri.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\Dada_Onigiri_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"}}};
				};
			};
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
					nutrition_properties[] = {2,104,76,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,43,24,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,104,12,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class FoodCan_100g_ColorBase;
	class DadaRaw_SmallButter: FoodCan_100g_ColorBase
	{
		scope = 2;
		itemSize[] = {1,1};
		displayName = "Small Butter";
		descriptionShort = "Just a little bit of butter";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\DadaFoodCan_SmallButter_co.paa"};
	};

	class DadaRaw_SmallButter_Opened: DadaRaw_Base
	{
		debug_ItemCategory = 6;
		model = "\dz\gear\food\FoodCan_100g_open.p3d";
		scope = 2;
		itemSize[] = {1,1};
		weight = 1;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		isMeleeWeapon = 1;
		displayName = "Small Butter";
		descriptionShort = "Just a little bit of butter";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\DadaFoodCan_SmallButter_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,128,100,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,32,35,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,128,65,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\FoodCan_100g.rvmat","DZ\gear\food\data\FoodCan_100g_white.rvmat","DZ\gear\food\data\FoodCan_100g_content.rvmat"}},{0.7,{"DZ\gear\food\data\FoodCan_100g.rvmat","DZ\gear\food\data\FoodCan_100g_white.rvmat","DZ\gear\food\data\FoodCan_100g_content.rvmat"}},{0.5,{"DZ\gear\food\data\FoodCan_100g_damage.rvmat","DZ\gear\food\data\FoodCan_100g_white_damage.rvmat","DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"}},{0.3,{"DZ\gear\food\data\FoodCan_100g_damage.rvmat","DZ\gear\food\data\FoodCan_100g_white_damage.rvmat","DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"}},{0.0,{"DZ\gear\food\data\FoodCan_100g_destruct.rvmat","DZ\gear\food\data\FoodCan_100g_white_destruct.rvmat","DZ\gear\food\data\FoodCan_100g_content_destruct.rvmat"}}};
				};
			};
		};
	};
	
	class DadaRaw_BigButter: DadaRaw_Base
	{
		scope = 2;
		displayName = "Big Butter";
		descriptionShort = "Big chunk of butter";
		model = "\dz\gear\food\Rice.p3d";
		debug_ItemCategory = 6;
		weight = 1;
		canBeSplit = 1;
		itemSize[] = {1,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\DadaFoodCan_BigButter_co.paa"};
		varQuantityInit = 250;
		varQuantityMin = 0;
		varQuantityMax = 250;
		absorbency = 0.9;
		rotationFlags = 63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\rice.rvmat"}},{0.7,{"DZ\gear\food\data\rice.rvmat"}},{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},{0.3,{"DZ\gear\food\data\rice_damage.rvmat"}},{0.0,{"DZ\gear\food\data\rice_destruct.rvmat"}}};
				};
			};
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
					nutrition_properties[] = {2,128,100,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,32,35,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,128,65,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
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

	class DadaRaw_CheeseBase: DadaRaw_Base
	{
		scope = 0;
		weight = 1;
		canBeSplit = 1;
		interactionWeight = 1;
		quantityBar = 1;
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,128,100,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,32,35,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,128,65,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
	};

	class DadaRaw_Mozza: DadaRaw_CheeseBase
	{
		scope = 2;
		itemSize[] = {2,1};
		displayName = "Mozzarella";
		descriptionShort = "Fresh Mozzarella di bufala";
		model = "Source_Files\DadaFoods\Configs\Food\Raw\data\Mozza.p3d";
		canBeSplit = 1;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\Mozza_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}}};
				};
			};
		};
	};

	class DadaRaw_MontereyJack: DadaRaw_CheeseBase
	{
		scope = 2;
		itemSize[] = {1,2};
		displayName = "Monterey Jack";
		descriptionShort = "MontereyJack";
		model = "Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseBlock.p3d";
		canBeSplit = 1;
		weight = 1;
		varQuantityInit = 300;
		varQuantityMin = 0;
		varQuantityMax = 300;
		hiddenSelections[] = {"cs_raw","camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseWrap_ca.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}}};
				};
			};
		};
	};

	class Snack_ColorBase;
	class DadaRaw_CheddarCurds: DadaRaw_CheeseBase
	{
		scope = 2;
		model = "\DZ\gear\food\salty_crackers.p3d";
		displayName = "Fromage Skouik Skouik";
		descriptionShort = "Le meilleur fromage à mettre dans vos poutines maison!";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\DadaCheddarCurds_co.paa"};
	};
	class DadaRaw_PumpkinSeeds: Snack_ColorBase
	{
		scope = 2;
		model = "\DZ\gear\food\salty_crackers.p3d";
		displayName = "Pumpkin Seeds";
		descriptionShort = "Roasted pumpkin seeds.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\Dada_PumpkinSeeds_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 250;
			water = 8;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class DadaRaw_FreshGoatCheese: DadaRaw_CheeseBase
	{
		scope = 2;
		itemSize[] = {2,1};
		displayName = "Goat Cheese";
		descriptionShort = "Fresh Goat Cheese, baaah-ter on bread";
		model = "Source_Files\DadaFoods\Configs\Food\Raw\data\FreshGoatCheese.p3d";
		canBeSplit = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\DadaFreshGoatCheese_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}}};
				};
			};
		};
	};
	class DadaRaw_Feta: DadaRaw_CheeseBase
	{
		scope = 2;
		itemSize[] = {1,2};
		displayName = "Feta Cheese";
		descriptionShort = "Feta Cheese";
		model = "Source_Files\DadaFoods\Configs\Food\Raw\data\Feta.p3d";
		canBeSplit = 1;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\Mozza_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}}};
				};
			};
		};
	};
	class DadaRaw_VanillaChocoSwirl: DadaRaw_Base
	{
		scope = 2;
		itemSize[] = {1,2};
		displayName = "Vanilla & Chocolate Ice Cream";
		descriptionShort = "Don't eat it too fast! you are gonna get a brainfreeze";
		model = "Source_Files\DadaFoods\Configs\Food\Raw\data\IScream.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\IScreamVanillaChoco_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,128,100,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,32,35,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,128,65,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\IScream.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Raw\data\IScream.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Raw\data\IScream.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Raw\data\IScream.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\IScream.rvmat"}}};
				};
			};
		};
	};
	class DadaRaw_VanillaIceCream: DadaRaw_VanillaChocoSwirl
	{
		scope = 2;
		displayName = "Vanilla Ice cream";
		descriptionShort = "Because life is exciting enough already";
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\IScreamVanilla_co.paa"};
	};

	class DadaRaw_ChocoIScream: DadaRaw_VanillaIceCream
	{
		scope = 2;
		displayName = "Chocolate Ice cream";
		descriptionShort = "Chocolate chunks ice cream";
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\IScreamChoco_co.paa"};
	};

	class DadaRaw_FrozenYogurt: DadaRaw_VanillaIceCream
	{
		scope = 2;
		displayName = "Frozen Yogurt";
		descriptionShort = "frozen yogurt";
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\FrozenYogurt_co.paa"};
	};

	class PowderedMilk: Edible_Base
	{
		canBeSplit = 1;
	};
	class Honey: Edible_Base
	{
		canBeSplit = 1;
		weight = 1;
	};
	class Marmalade: Edible_Base
	{
		canBeSplit = 1;
		weight = 1;
	};
	class Rice: Edible_Base
	{
		canBeSplit = 1;
		weight = 1;
	};

	class DadaRaw_Yogourt: FoodCan_100g_ColorBase
	{
		scope = 2;
		itemSize[] = {2,1};
		displayName = "Yogurt";
		descriptionShort = "Yogurt cup";
		varQuantityInit = 75;
		varQuantityMin = 0;
		varQuantityMax = 75;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\Yogourt_co.paa"};
	};

	class DadaRaw_Yogourt_Opened: DadaRaw_Base
	{
		scope = 2;
		itemSize[] = {2,1};
		weight = 1;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 75;
		varQuantityMin = 0;
		varQuantityMax = 75;
		displayName = "Yogurt";
		descriptionShort = "Yogurt cup";
		canBeSplit = 1;
		model = "\dz\gear\food\FoodCan_100g_open.p3d";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\Yogourt_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2,128,100,1,0};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,32,35,1,0,16,1,9};
					cooking_properties[] = {0,0};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {2,128,65,1,0};
					cooking_properties[] = {70,30,80};
				};
			};
			class FruitStageTransitions;
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Food\Raw\data\CheeseColor.rvmat"}}};
				};
			};
		};
	};

	class DadaRaw_Jerky: Snack_ColorBase
	{
		scope = 2;
		model = "\DZ\gear\food\salty_chips.p3d";
		displayName = "Jerky";
		descriptionShort = "Dried meat strips";
		debug_ItemCategory = 6;
		rotationFlags = 1;
		weight = 10;
		itemSize[] = {2,2};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\DadaRaw_Jerky_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 333;
			water = 15;
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