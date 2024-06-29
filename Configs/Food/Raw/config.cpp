#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Food_Raw
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DadaFoods"};
	};
};

/*class CfgVehicles
{
    class Edible_Base;
	class DadaRaw_Base: Edible_Base
	{
		scope = 2;
		model = "Source_Files\DadaFoods\Configs\Food\Cooked\data\bowl.p3d";
		weight = 0;
		weightPerQuantityUnit = "2.5";
		canBeSplit = 1;
		interactionWeight = 1;
		quantityBar = 0;
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		itemSize[] = {2,2};
		inventorySlot[] = {"Ingredient","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8"};
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Raw\data\DadaRawBowl_Base_co.paa","Source_Files\DadaFoods\Configs\Food\Raw\data\DadaRawBowl_Base_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 100;
			water = 50;
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
		displayName = "Salad";
		descriptionShort = "Lettuce and dressing, perfect meal for the calorie averse or starter for everyone else";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\RawBowl\textures_models\ceramicbowl_co.paa","Source_Files\FoodModding\Food\RawBowl\textures_models\srpRawSalad_co.paa"};
	};
	class DadaRaw_Rice: DadaRaw_Base
	{
		displayName = "Plain Rice";
		descriptionShort = "It's rice. Not sure what you were hoping for";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\RawBowl\textures_models\ceramicbowl_co.paa","Source_Files\FoodModding\Food\RawBowl\textures_models\srpRawRice_co.paa"};
	};
	class DadaRaw_PokeBowl: DadaRaw_Base
	{
		varQuantityInit = 275;
		varQuantityMin = 0;
		varQuantityMax = 300;
		itemSize[] = {2,3};
		displayName = "Poke Bowl";
		descriptionShort = "Bowl of rice with multiple toppings on it, gotta eat em all!";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\RawBowl\textures_models\ceramicbowl_co.paa","Source_Files\FoodModding\Food\RawBowl\textures_models\srpRawPokeBowl_co.paa"};
	};
	class DadaRaw_TomatoSalad: DadaRaw_Base
	{
		displayName = "Tomato Salad";
		descriptionShort = "Tomato and Mozzarella Salad";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\RawBowl\textures_models\ceramicbowl_co.paa","Source_Files\FoodModding\Food\RawBowl\textures_models\srpRawTomatoSalad_co.paa"};
	};
	class DadaRaw_CerealCrunchin: DadaRaw_Base
	{
		displayName = "Cereal Bowl";
		descriptionShort = "Bowl of cereal";
	};
	class DadaRaw_CerealCrunchin_Kids: DadaRaw_CerealCrunchin
	{
		Color = "Coco";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\RawBowl\textures_models\ceramicbowl_co.paa","Source_Files\FoodModding\Food\RawBowl\textures_models\srpRawCerealCrunchinKids_co.paa"};
	};
	class DadaRaw_CerealCrunchin_Frosties: DadaRaw_CerealCrunchin
	{
		Color = "Frosties";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\RawBowl\textures_models\ceramicbowl_co.paa","Source_Files\FoodModding\Food\RawBowl\textures_models\srpRawCerealCrunchinFrosties_co.paa"};
	};
	class DadaRaw_CerealCrunchin_Kosmostar: DadaRaw_CerealCrunchin
	{
		Color = "Star";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\RawBowl\textures_models\ceramicbowl_co.paa","Source_Files\FoodModding\Food\RawBowl\textures_models\srpRawCerealCrunchinKosmostar_co.paa"};
	};
	class DadaRaw_sushi: DadaRaw_Base
	{
		scope = 2;
		displayName = "Sushi";
		descriptionShort = "Homemade sushi. It looks and smells exactly how you think it does.";
		model = "Survivalists_Food\food\sushi.p3d";
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
		hiddenSelectionsTextures[] = {"Survivalists_Food\food\data\sushi_raw_co.paa"};
		hiddenSelectionsMaterials[] = {"Survivalists_Food\food\data\sushi.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"Survivalists_Food\food\data\sushi.rvmat"}},{0.7,{"Survivalists_Food\food\data\sushi.rvmat"}},{0.5,{"Survivalists_Food\food\data\sushi.rvmat"}},{0.3,{"Survivalists_Food\food\data\sushi.rvmat"}},{0,{"Survivalists_Food\food\data\sushi.rvmat"}}};
				};
			};
		};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
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
    class FoodCan_100g_ColorBase;
	class DadaRaw_SmallButter: FoodCan_100g_ColorBase
	{
		scope = 2;
		itemSize[] = {1,1};
		displayName = "Small Butter";
		descriptionShort = "Just a little bit of butter";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\Source_Files\FoodModding\Food\Cheese\textures_models\srpFoodCan_SmallButter_co.paa"};
	};

	class DadaRaw_SmallButter_Opened: DadaRaw_Base
	{
		debug_ItemCategory = 6;
		model = "\dz\gear\food\FoodCan_100g_open.p3d";
		scope = 2;
		itemSize[] = {1,1};
		weight = 15;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		isMeleeWeapon = 1;
		descriptionShort = "Just a little bit of butter";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\Source_Files\FoodModding\Food\Cheese\textures_models\srpFoodCan_SmallButter_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
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
		weight = 60;
		canBeSplit = 1;
		itemSize[] = {1,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Cheese\textures_models\srpFoodCan_BigButter_co.paa"};
		varQuantityInit = 600;
		varQuantityMin = 0;
		varQuantityMax = 600;
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
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
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
	
	class DadaRaw_Yogourt: DadaRaw_Base
	{
		scope = 2;
		itemSize[] = {2,1};
		displayName = "Yogurt";
		descriptionShort = "Yogurt cup";
		model = "Source_Files\FoodModding\Food\Cheese\textures_models\Yogourt.p3d";
		canBeSplit = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\Source_Files\FoodModding\Food\Cheese\textures_models\Yogourt_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.7,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.5,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.3,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\Yogourt_destruct.rvmat"}}};
				};
			};
		};
	};
	class DadaRaw_Mozza: DadaRaw_Base
	{
		scope = 2;
		itemSize[] = {2,1};
		displayName = "Mozzarella";
		descriptionShort = "Fresh Mozzarella di bufala";
		model = "Source_Files\FoodModding\Food\Cheese\textures_models\Mozza.p3d";
		canBeSplit = 1;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Cheese\textures_models\Mozza_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.7,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.5,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.3,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\Yogourt_destruct.rvmat"}}};
				};
			};
		};
	};
	class DadaRaw_MontereyJack: DadaRaw_Base
	{
		scope = 2;
		itemSize[] = {2,2};
		displayName = "Monterey Jack";
		descriptionShort = "MontereyJack";
		model = "Source_Files\FoodModding\Food\Cheese\textures_models\CheeseBlock.p3d";
		canBeSplit = 1;
		hiddenSelections[] = {"zbytek","camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor_co.paa","Source_Files\FoodModding\Food\Cheese\textures_models\CheeseWrap_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 40;
				healthLevels[] = {{1.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.7,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.5,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.3,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\Yogourt_destruct.rvmat"}}};
			};
		};
	};

	class Snack_ColorBase;
	class DadaRaw_CheddarCurds:Snack_Colorbase
	{
		scope = 2;
		model = "\DZ\gear\food\salty_crackers.p3d";
		displayName = "Fromage Skouik Skouik";
		descriptionShort = "Le meilleur fromage à mettre dans vos poutines maison!";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Cheese\textures_models\srpCheddarCurds_co.paa"};
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

    class Snack_ColorBase;
	class DadaRaw_PumpkinSeeds:Snack_Colorbase
	{
		scope = 2;
		model = "\DZ\gear\food\salty_crackers.p3d";
		displayName = "Pumpkin Seeds";
		descriptionShort = "Roasted pumpkin seeds.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Retextures\textures_models\srpChips_PumpkinSeeds_co.paa"};
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 150;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

	class DadaRaw_FreshGoatCheese: DadaRaw_Base
	{
		scope = 2;
		itemSize[] = {2,1};
		displayName = "Goat Cheese";
		descriptionShort = "Fresh Goat Cheese, baaah-ter on bread";
		model = "Source_Files\FoodModding\Food\Cheese\textures_models\FreshGoatCheese.p3d";
		canBeSplit = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Cheese\textures_models\srpFreshGoatCheese_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.7,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.5,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.3,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\Yogourt_destruct.rvmat"}}};
				};
			};
		};
	};
	class DadaRaw_Feta: DadaRaw_Base
	{
		scope = 2;
		itemSize[] = {1,2};
		displayName = "Feta Cheese";
		descriptionShort = "Feta Cheese";
		model = "Source_Files\FoodModding\Food\Cheese\textures_models\Feta.p3d";
		canBeSplit = 1;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Cheese\textures_models\Feta_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.7,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.5,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.3,{"Source_Files\FoodModding\Food\Cheese\textures_models\CheeseColor.rvmat"}},{0.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\Yogourt_destruct.rvmat"}}};
				};
			};
		};
	};
	class DadaRaw_FrozenYogurt: DadaRaw_Base
	{
		scope = 2;
		itemSize[] = {1,2};
		displayName = "Frozen Yogurt";
		descriptionShort = "Don't eat it too fast! you are gonna get a brainfreeze";
		model = "Source_Files\FoodModding\Food\Cheese\textures_models\IScream.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Cheese\textures_models\FrozenYogurt_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}},{0.7,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}},{0.5,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}},{0.3,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}},{0.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}}};
				};
			};
		};
	};
	class DadaRaw_IceCream: DadaRaw_FrozenYogurt
	{
		scope = 2;
		itemSize[] = {1,2};
		displayName = "Ice cream";
		descriptionShort = "Because life is exciting enough  already";
		model = "Source_Files\FoodModding\Food\Cheese\textures_models\IScream.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Cheese\textures_models\IScream_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}},{0.7,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}},{0.5,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}},{0.3,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}},{0.0,{"Source_Files\FoodModding\Food\Cheese\textures_models\IScream.rvmat"}}};
				};
			};
		};
	};
	class DadaRaw_ChocoIScream: DadaRaw_IceCream
	{
		displayName = "Chocolate Ice cream";
		descriptionShort = "Chocolate chunks ice cream";
		hiddenSelectionsTextures[] = {"Source_Files\FoodModding\Food\Cheese\textures_models\ChocoIScream_co.paa"};
	};
	
    class PowderedMilk: Edible_Base
	{
		canBeSplit = 1;
	};
	class Honey: Edible_Base
	{
		canBeSplit = 1;
	};
	class Marmalade: Edible_Base
	{
		canBeSplit = 1;
	};
	class Rice: Edible_Base
	{
		canBeSplit = 1;
	};
};*/