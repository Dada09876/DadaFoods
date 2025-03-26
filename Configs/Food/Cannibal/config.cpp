////////////////////////////////////////////////////////////////////
//DeRap: Configs\Food\Cannibal\config.bin
//Produced from mikero's Dos Tools Dll version 9.93
//https://mikero.bytex.digital/Downloads
//'now' is Tue Feb 04 16:40:51 2025 : 'file' last modified on Sat Jan 18 22:45:02 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Cannibal
	{
		units[] = {"DadaCannibal_Base","DadaCannibal_EyeballSoup","DadaCannibal_EntrailsSpaghetti","DadaCannibal_Jerky","DadaCannibal_WasteBread"};
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
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Bowl_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Base_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"};
		displayName = "$STR_HumanSteakMeat0";
		descriptionShort = "$STR_HumanSteakMeat1";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\bowl.p3d";
		debug_ItemCategory = 6;
		weight = 2;
		interactionWeight = 1;
		itemSize[] = {2,3};
		varQuantityInit = 125;
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
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,50,50,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,25,25,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,300,50,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,250,100,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,250,0,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
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
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Bowl_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EyeballSoup_rotten_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 50;
			water = 100;
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
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Bowl_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_EntrailSpaghetti_rotten_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	
	class Snack_ColorBase;
	class DadaCannibal_Jerky: Snack_ColorBase
	{
		scope = 2;
		model = "\DZ\gear\food\salty_chips.p3d";
		displayName = "Hooman Jerky";
		descriptionShort = "Dried human flesh strips";
		debug_ItemCategory = 6;
		rotationFlags = 1;
		weight = 10;
		itemSize[] = {2,2};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_Jerky_co.paa"};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 100;
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

	class DadaCannibal_WasteBread: DadaCannibal_Base
	{
		scope = 2;
		weight = 2;
		interactionWeight = 1;
		quantityBar = 1;
		canBeSplit = 1;
		inventorySlot[] = {"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8"};
		itemSize[] = {3,2};
		displayName = "Simple Round Dough";
		descriptionShort = "A round, plain dough. Should be baked before consuming... but I guess no one can stop you if you don't.";
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\RoundDough.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"}},{0.7,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"}},{0.5,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"}},{0.3,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"}},{0,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 100;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
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

class DadaCannibal_RawFoodCan_STAGham: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Reconstituted Meat";
		descriptionShort = "Our ham will make you smile, or else";
		color = "STAGham";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGham_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_STAGham: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Reconstituted Meat";
		descriptionShort = "Our ham will make you smile, or else";
		color = "STAGham";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGham_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_STAGham_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Reconstituted Meat";
		descriptionShort = "Our ham will make you smile, or else";
		color = "STAGham";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGham_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 350;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

class Dada_RawFoodCan_LSSPAM: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "SPAM";
		descriptionShort = "An ESPENLock staple";
		color = "LSSPAM";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_LS-SPAM_co.paa"};
	};
	class Dada_PreservedFoodCan_LSSPAM: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "SPAM";
		descriptionShort = "An ESPENLock staple";
		color = "LSSPAM";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_LS-SPAM_co.paa"};
	};
	class Dada_PreservedFoodCan_LSSPAM_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "SPAM";
		descriptionShort = "An ESPENLock staple";
		color = "LSSPAM";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_LS-SPAM_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 350;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

class Dada_RawFoodCan_Ketchup: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		color = "Ketchup";
		displayName = "Ketchup";
		descriptionShort = "Just put it on everithing you eat already";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Ketchup_co.paa"};
	};
	class Dada_PreservedFoodCan_Ketchup: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Ketchup";
		descriptionShort = "Just put it on everithing you eat already";
		color = "Ketchup";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Ketchup_co.paa"};
	};
	class Dada_PreservedFoodCan_Ketchup_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Ketchup";
		descriptionShort = "Just put it on everithing you eat already";
		color = "Ketchup";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Ketchup_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 350;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

	class Dada_RawFoodCan_DicedTomatoes: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Diced Tomatoes";
		descriptionShort = "Start your tomato sauce from scratch... Almost";
		color = "DicedTomatoes";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_DicedTomatoes_co.paa"};
	};
	class Dada_PreservedFoodCan_DicedTomatoes: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Diced Tomatoes";
		descriptionShort = "Start your tomato sauce from scratch... Almost";
		color = "DicedTomatoes";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_DicedTomatoes_co.paa"};
	};
	class Dada_PreservedFoodCan_DicedTomatoes_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Diced Tomatoes";
		descriptionShort = "Start your tomato sauce from scratch... Almost";
		color = "DicedTomatoes";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_DicedTomatoes_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 350;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

class Dada_RawFoodCan_HomemadeChili: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Homemade Chili";
		descriptionShort = "The Original Bear Valley Chili Recipe";
		color = "HomemadeChili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_HomemadeChili_co.paa"};
	};
	class Dada_PreservedFoodCan_HomemadeChili: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Homemade Chili";
		descriptionShort = "The Original Bear Valley Chili Recipe";
		color = "HomemadeChili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_HomemadeChili_co.paa"};
	};
	class Dada_PreservedFoodCan_HomemadeChili_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Homemade Chili";
		descriptionShort = "The Original Bear Valley Chili Recipe";
		color = "HomemadeChili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_HomemadeChili_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 350;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

class Dada_RawFoodCan_ESPENChunkySoup: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Chunky Soup";
		descriptionShort = "ESPENLock Beef and Vegetable soup, as chunky as ever";
		color = "ESPENChunkySoup";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_ESPENChunkySoup_co.paa"};
	};
	class Dada_PreservedFoodCan_ESPENChunkySoup: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Chunky Soup";
		descriptionShort = "ESPENLock Beef and Vegetable soup, as chunky as ever";
		color = "ESPENChunkySoup";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_ESPENChunkySoup_co.paa"};
	};
	class Dada_PreservedFoodCan_ESPENChunkySoup_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Chunky Soup";
		descriptionShort = "ESPENLock Beef and Vegetable soup, as chunky as ever";
		color = "ESPENChunkySoup";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_ESPENChunkySoup_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 350;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

class Dada_RawFoodCan_STAGchili: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "STAG Chili";
		descriptionShort = "The best chili ever made";
		color = "STAGchili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGchili_co.paa"};
	};
	class Dada_PreservedFoodCan_STAGchili: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "STAG Chili";
		descriptionShort = "The best chili ever made";
		color = "STAGchili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGchili_co.paa"};
	};
	class Dada_PreservedFoodCan_STAGchili_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "STAG Chili";
		descriptionShort = "The best chili ever made";
		color = "STAGchili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGchili_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 350;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
};
