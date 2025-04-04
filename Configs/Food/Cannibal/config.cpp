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
		displayName = "Jerky";
		descriptionShort = "Dried meat strips";
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

	class Dada_RawFoodCan_Colorbase;
	class DadaCannibal_RawFoodCan_STAGham: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Reconstituted Meat";
		descriptionShort = "Our ham will make you smile, or else";
		color = "STAGham";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGham_co.paa"};
	};
	class Dada_PreservedFoodCan_Colorbase;
	class DadaCannibal_PreservedFoodCan_STAGham: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Reconstituted Meat";
		descriptionShort = "Our ham will make you smile, or else";
		color = "STAGham";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGham_co.paa"};
	};
	class Dada_PreservedFoodCan_Colorbase_Opened;
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

class DadaCannibal_RawFoodCan_LSSPAM: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "SPAM";
		descriptionShort = "An ESPENLock staple";
		color = "LSSPAM";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_LS-SPAM_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_LSSPAM: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "SPAM";
		descriptionShort = "An ESPENLock staple";
		color = "LSSPAM";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_LS-SPAM_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_LSSPAM_Opened: Dada_PreservedFoodCan_Colorbase_Opened
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

class DadaCannibal_RawFoodCan_Ketchup: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		color = "Ketchup";
		displayName = "Ketchup";
		descriptionShort = "Just put it on everithing you eat already";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Ketchup_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_Ketchup: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Ketchup";
		descriptionShort = "Just put it on everithing you eat already";
		color = "Ketchup";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Ketchup_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_Ketchup_Opened: Dada_PreservedFoodCan_Colorbase_Opened
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

	class DadaCannibal_RawFoodCan_DicedTomatoes: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Diced Tomatoes";
		descriptionShort = "Start your tomato sauce from scratch... Almost";
		color = "DicedTomatoes";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_DicedTomatoes_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_DicedTomatoes: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Diced Tomatoes";
		descriptionShort = "Start your tomato sauce from scratch... Almost";
		color = "DicedTomatoes";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_DicedTomatoes_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_DicedTomatoes_Opened: Dada_PreservedFoodCan_Colorbase_Opened
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

class DadaCannibal_RawFoodCan_HomemadeChili: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Homemade Chili";
		descriptionShort = "The Original Bear Valley Chili Recipe";
		color = "HomemadeChili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_HomemadeChili_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_HomemadeChili: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Homemade Chili";
		descriptionShort = "The Original Bear Valley Chili Recipe";
		color = "HomemadeChili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_HomemadeChili_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_HomemadeChili_Opened: Dada_PreservedFoodCan_Colorbase_Opened
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

class DadaCannibal_RawFoodCan_ESPENChunkySoup: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Chunky Soup";
		descriptionShort = "ESPENLock Beef and Vegetable soup, as chunky as ever";
		color = "ESPENChunkySoup";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_ESPENChunkySoup_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_ESPENChunkySoup: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Chunky Soup";
		descriptionShort = "ESPENLock Beef and Vegetable soup, as chunky as ever";
		color = "ESPENChunkySoup";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_ESPENChunkySoup_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_ESPENChunkySoup_Opened: Dada_PreservedFoodCan_Colorbase_Opened
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

class DadaCannibal_RawFoodCan_STAGchili: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "STAG Chili";
		descriptionShort = "The best chili ever made";
		color = "STAGchili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGchili_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_STAGchili: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "STAG Chili";
		descriptionShort = "The best chili ever made";
		color = "STAGchili";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGchili_co.paa"};
	};
	class DadaCannibal_PreservedFoodCan_STAGchili_Opened: Dada_PreservedFoodCan_Colorbase_Opened
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

class DadaBread_Base;
class DadaWasteBread_Pita: DadaBread_Base
	{
		scope = 2;
		displayName = "Flat Bread";
		descriptionShort = "A flat dough. Should be baked before consuming... but I guess no one can stop you if you don't";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Pita.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"};
	};

	class DadaWasteBread_Loaf: DadaBread_Base
	{
		scope = 2;
		itemSize[] = {3,2};
		displayName = "Bread Loaf";
		descriptionShort = "A loaf of bread. Should be baked before consuming... but I guess no one can stop you if you don't";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\loaf.p3d";
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
	};

	class DadaWasteBread_Baguette: DadaBread_Base
	{
		scope = 2;
		itemSize[] = {3,2};
		displayName = "Baguette";
		descriptionShort = "Baguette du fromage. Should be baked before consuming... but I guess no one can stop you if you don't";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Baguette.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"};
	};

	class DadaWasteBread_Pasta: DadaBread_Base
	{
		scope = 2;
		displayName = "Pasta Dough";
		descriptionShort = "Good, just need the tomato sauce now";
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_rotten_co.paa"};
	};
	
	class DadaWasteBread_Pizza: DadaBread_Base
	{
		scope = 2;
		displayName = "Pizza Bianca";
		descriptionShort = "Good, just need the tomato sauce now...";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat"};
	};

	class DadaWasteBread_PizzaBase: DadaBread_Base
	{
		scope = 2;
		displayName = "Pizza Marinara";
		descriptionShort = "Freshly made pizza, always better with some cheese";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat"};
	};

class DadaDish_Base;
class DadaCannibalDish_Rigatoni: DadaDish_Base
	{
		scope = 2;
		displayName = "Rigatoni";
		descriptionShort = "Freshly made pasta with chicken in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_rotten_co.paa"};
	};

class DadaCannibalDish_Chili: DadaDish_Base
	{
		scope = 2;
		displayName = "Chili";
		descriptionShort = "A chili made popular by Bear Valley's recipe using bear meat.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_rotten_co.paa"};
	};
	class DadaCannibalDish_Pie: DadaDish_Base
	{
		model = "Source_Files\DadaFoods\Configs\Food\Cooked\data\Pie.p3d";
		scope = 2;
		displayName = "Pie";
		descriptionShort = "A pie crafted with love.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cannibal\data\DadaCannibal_WasteBread_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"};
	};

class DadaSoup_Base;
class DadaCannibalSoup_TomatoSoup: DadaSoup_Base
	{
		scope = 2;
		displayName = "Tomato Soup";
		descriptionShort = "Delicious and healthy Roasted Tomato Soup made with freshly roasted tomatoes, caramelized onion, garlic, fresh basil and vegetable broth.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_rotten_co.paa"};
	};
	class DadaCannibalSoup_Ragout: DadaSoup_Base
	{
		scope = 2;
		displayName = "Ragout";
		descriptionShort = "Delicious and healthy Ragout made with vegetable broth and other fresh ingredients.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_rotten_co.paa"};
	};
	class DadaCannibalDish_GroundMeat: DadaDish_Base
	{
		scope = 2;
		itemSize[] = {2,3};
		varQuantityInit = 65;
		varQuantityMin = 0;
		varQuantityMax = 150;
		displayName = "Ground Meat";
		descriptionShort = "Can be used to make a lot of delicious dishes. Oh and also burgers";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGroundMeat_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGroundMeat_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGroundMeat_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGroundMeat_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGroundMeat_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGroundMeat_rotten_co.paa"};
	};
	class DadaCannibalSoup_TomatoSauce: DadaSoup_Base
	{
		scope = 2;
		displayName = "Tomato Sauce";
		descriptionShort = "Tomato sauce, best mixed with other things";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_rotten_co.paa"};
	};

	class DadaCannibalDish_Spaghetti: DadaDish_Base
	{
		scope = 2;
		displayName = "Spaghetti bolognese";
		descriptionShort = "Freshly made pasta in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_rotten_co.paa"};
	};

	class DadaCannibalDish_Cannelloni: DadaDish_Base
	{
		scope = 2;
		displayName = "Cannelloni";
		descriptionShort = "Freshly made pasta in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_rotten_co.paa"};
	};

	class DadaCannibalDish_Bowties: DadaDish_Base
	{
		scope = 2;
		displayName = "Bowties";
		descriptionShort = "Freshly made pasta in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_rotten_co.paa"};
	};

	class DadaCannibalDish_Lasagna: DadaDish_Base
	{
		scope = 2;
		displayName = "Lasagna";
		descriptionShort = "Freshly made pasta in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_rotten_co.paa"};
	};

class DadaCannibalDish_PulledPork: DadaDish_Base
	{
		scope = 2;
		displayName = "Pulled Pork";
		descriptionShort = "Cooked in a delicious barbecue sauce";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_rotten_co.paa"};
	};

class DadaCannibalDish_Sausage: DadaDish_Base
	{
		model = "Source_Files\DadaFoods\Configs\Food\Cooked\data\Sausage.p3d";
		scope = 2;
		weight = 0.5;
		varQuantityInit = 65;
		varQuantityMin = 0;
		varQuantityMax = 150;
		itemSize[] = {2,1};
		displayName = "Sausage";
		descriptionShort = "Better when grilled on the barbecue";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaDish_Sausage_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaDish_Sausage_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaDish_Sausage_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaDish_Sausage_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaDish_Sausage_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaDish_Sausage_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"};
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
	};
	
class DadaDrinks_ColorBase;
class DadaCannibalDrink_MilkShake: DadaDrinks_ColorBase
	{
		scope = 2;
		canBeSplit = 1;
		displayName = "Milkshake";
		descriptionShort = "Shake it like a polaroid picture";
		hiddenSelections[] = {"cs_raw","zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Drinks\data\Milkshake_co.paa","Source_Files\DadaFoods\Configs\Drinks\data\Milkshake_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Drinks\data\MilkCarton.rvmat","Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"};
		model = "Source_Files\DadaFoods\Configs\Drinks\data\Milkshake.p3d";
		weight = 3;
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
