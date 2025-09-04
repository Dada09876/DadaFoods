#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Food_Canned
	{
		units[] = {"Dada_RawFoodCan_LSVeggies","Dada_PreservedFoodCan_LSVeggies","Dada_PreservedFoodCan_LSVeggies_Opened","Dada_RawFoodCan_STAGham","Dada_PreservedFoodCan_STAGham","Dada_PreservedFoodCan_STAGham_Opened","Dada_RawFoodCan_ESPENChunkySoup","Dada_PreservedFoodCan_ESPENChunkySoup","Dada_PreservedFoodCan_ESPENChunkySoup_Opened","Dada_RawFoodCan_LSSPAM","Dada_PreservedFoodCan_LSSPAM","Dada_PreservedFoodCan_LSSPAM_Opened","Dada_RawFoodCan_STAGchili","Dada_PreservedFoodCan_STAGchili","Dada_PreservedFoodCan_STAGchili_Opened","Dada_RawFoodCan_ESPENMacnCheese","Dada_PreservedFoodCan_ESPENMacnCheese","Dada_PreservedFoodCan_ESPENMacnCheese_Opened","Dada_RawFoodCan_DicedTomatoes","Dada_PreservedFoodCan_DicedTomatoes","Dada_PreservedFoodCan_DicedTomatoes_Opened","Dada_RawFoodCan_Ketchup","Dada_PreservedFoodCan_Ketchup","Dada_PreservedFoodCan_Ketchup_Opened","Dada_RawFoodCan_Paella","Dada_PreservedFoodCan_Paella","Dada_PreservedFoodCan_Paella_Opened","Dada_RawFoodCan_PumpkinPuree","Dada_PreservedFoodCan_PumpkinPuree","Dada_PreservedFoodCan_PumpkinPuree_Opened","Dada_RawFoodCan_Quail","Dada_PreservedFoodCan_Quail","Dada_PreservedFoodCan_Quail_Opened","Dada_RawFoodCan_Relish","Dada_PreservedFoodCan_Relish","Dada_PreservedFoodCan_Relish_Opened","Dada_RawFoodCan_Samosa","Dada_PreservedFoodCan_Samosa","Dada_PreservedFoodCan_Samosa_Opened","Dada_RawFoodCan_HomemadeChili","Dada_PreservedFoodCan_HomemadeChili","Dada_PreservedFoodCan_HomemadeChili_Opened","Dada_RawFoodCan_HomemadePumpkinPuree","Dada_PreservedFoodCan_HomemadePumpkinPuree","Dada_PreservedFoodCan_HomemadePumpkinPuree_Opened","Dada_RawFoodCan_Crab","Dada_PreservedFoodCan_Crab","Dada_PreservedFoodCan_Crab_Opened","Dada_RawFoodCan_Clam","Dada_PreservedFoodCan_Clam","Dada_PreservedFoodCan_Clam_Opened"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DadaFoods"};
	};
};
class CfgVehicles
{
	class BaseFoodStageTransitions;
	class DadaCanStageTransitions: BaseFoodStageTransitions
	{
		class Raw
		{
			class ToBaked
			{
				transition_to = 2;
				cooking_method = 1;
			};
			class ToBoiled
			{
				transition_to = 3;
				cooking_method = 2;
			};
			class ToDried
			{
				transition_to = 4;
				cooking_method = 3;
			};
			class ToBurned
			{
				transition_to = 5;
				cooking_method = 3;
			};
			class ToRotten
			{
				transition_to = 6;
				cooking_method = 4;
			};
		};
		class Rotten
		{
			class ToBurned
			{
				transition_to = 5;
				cooking_method = 1;
			};
		};
		class Baked
		{
			class ToBaked
			{
				transition_to = 5;
				cooking_method = 1;
			};
			class ToBoiled
			{
				transition_to = 5;
				cooking_method = 2;
			};
			class ToDried
			{
				transition_to = 5;
				cooking_method = 3;
			};
			class ToBurned
			{
				transition_to = 5;
				cooking_method = 3;
			};
			class ToRotten
			{
				transition_to = 6;
				cooking_method = 4;
			};
		};
		class Boiled
		{
			class ToBaked
			{
				transition_to = 5;
				cooking_method = 1;
			};
			class ToBoiled
			{
				transition_to = 5;
				cooking_method = 2;
			};
			class ToDried
			{
				transition_to = 5;
				cooking_method = 3;
			};
			class ToBurned
			{
				transition_to = 5;
				cooking_method = 3;
			};
			class ToRotten
			{
				transition_to = 6;
				cooking_method = 4;
			};
		};
		class Dried
		{
			class ToBaked
			{
				transition_to = 5;
				cooking_method = 1;
			};
			class ToBoiled
			{
				transition_to = 5;
				cooking_method = 2;
			};
			class ToDried
			{
				transition_to = 5;
				cooking_method = 3;
			};
			class ToBurned
			{
				transition_to = 5;
				cooking_method = 3;
			};
			class ToRotten
			{
				transition_to = 6;
				cooking_method = 4;
			};
		};
		class Burned{};
	};

	class Edible_Base;
	class Dada_RawFoodCan_Colorbase: Edible_Base
	{
		scope = 0;
		weight = 2;
		interactionWeight = 1;
		quantityBar = 1;
		canBeSplit = 1;
		displayName = "Canned Food";
		descriptionShort = "Gotta cook it before you eat it!";
		model = "\dz\gear\food\food_can_open.p3d";
		rotationFlags = 63;
		itemSize[] = {1,2};
		varQuantityInit = 300;
		varQuantityMin = 0;
		varQuantityMax = 450;
		isMeleeWeapon = 1;
		inventorySlot[] = {"DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "metal";
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
	class Dada_PreservedFoodCan_Colorbase: Edible_Base
	{
		scope = 0;
		displayName = "Preserved Canned Food";
		descriptionShort = "A can of food that is preserved from spoiling.";
		model = "\dz\gear\food\food_can.p3d";
		rotationFlags = 63;
		itemSize[] = {1,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 450;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "metal";
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
	class Dada_PreservedFoodCan_Colorbase_Opened: Edible_Base
	{
		scope = 0;
		canBeSplit = 1;
		displayName = "Preserved Canned Food Open";
		descriptionShort = "An opened can of preserved food. Who knows how long it has been in there.";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = {1,2};
		weight = 2;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 450;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "metal";
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


	class Dada_RawFoodCan_LSVeggies: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Vegetables Mix";
		descriptionShort = "Keeping things simple";
		color = "LSVeggies";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_LS-Veggies_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,93,44,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,55,16,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,251,26,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,205,67,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,205,8,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,92,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
};
	class Dada_PreservedFoodCan_LSVeggies: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Vegetables Mix";
		descriptionShort = "Keeping things simple";
		color = "LSVeggies";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_LS-Veggies_co.paa"};
	};
	class Dada_PreservedFoodCan_LSVeggies_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Vegetables Mix";
		descriptionShort = "Keeping things simple";
		color = "LSVeggies";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_LS-Veggies_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 251;
			water = 26;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};


	class Dada_RawFoodCan_STAGham: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Reconstituted Meat";
		descriptionShort = "Our ham will make you smile, or else";
		color = "STAGham";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGham_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,83,67,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,42,27,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,583,40,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,500,107,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,500,13,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,83,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
	};
	class Dada_PreservedFoodCan_STAGham: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Reconstituted Meat";
		descriptionShort = "Our ham will make you smile, or else";
		color = "STAGham";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_STAGham_co.paa"};
	};
	class Dada_PreservedFoodCan_STAGham_Opened: Dada_PreservedFoodCan_Colorbase_Opened
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
			energy = 583;
			water = 40;
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
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,88,56,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,49,22,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,417,33,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,353,87,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,353,11,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,88,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
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
			energy = 417;
			water = 33;
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
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,83,67,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,42,27,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,583,40,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,500,107,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,500,13,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,83,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
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
			energy = 583;
			water = 40;
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
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,92,50,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,34,20,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,417,30,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,350,80,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,350,10,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,92,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
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
			energy = 417;
			water = 30;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};


	class Dada_RawFoodCan_ESPENMacnCheese: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "ESPENLock Mac And Cheese";
		descriptionShort = "Tastes like childhood. Pimp it with sausages for a more consistent meal";
		color = "ESPENMacnCheese";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_ESPENMacnCheese_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,114,90,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,61,39,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,220,82,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,189,160,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,189,43,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,84,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
};
	class Dada_PreservedFoodCan_ESPENMacnCheese: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "ESPENLock Mac And Cheese";
		descriptionShort = "Tastes like childhood. Pimp it with sausages for a more consistent meal";
		color = "ESPENMacnCheese";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_ESPENMacnCheese_co.paa"};
	};
	class Dada_PreservedFoodCan_ESPENMacnCheese_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "ESPENLock Mac And Cheese";
		descriptionShort = "Tastes like childhood. Pimp it with sausages for a more consistent meal";
		color = "ESPENMacnCheese";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_ESPENMacnCheese_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 220;
			water = 82;
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
	class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,75,75,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,38,30,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,225,45,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,188,120,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,188,15,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,75,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
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
			energy = 225;
			water = 45;
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
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,84,60,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,47,23,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,238,36,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,197,94,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,197,12,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,84,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
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
			energy = 238;
			water = 36;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};


	class Dada_RawFoodCan_Paella: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Paella";
		descriptionShort = "Tastes like vacations";
		color = "Paella";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Paella_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,99,91,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,45,28,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,380,57,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,329,150,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,313,34,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,98,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
};
	class Dada_PreservedFoodCan_Paella: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Paella";
		descriptionShort = "Tastes like vacations";
		color = "Paella";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Paella_co.paa"};
	};
	class Dada_PreservedFoodCan_Paella_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Paella";
		descriptionShort = "Tastes like vacations";
		color = "Paella";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Paella_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 380;
			water = 57;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};


	class Dada_RawFoodCan_PumpkinPuree: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Pumpkin Purée";
		descriptionShort = "Fill your pie with it or add it to your cat's diet";
		color = "PumpkinPuree";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_PumpkinPuree_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,125,33,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,84,13,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,251,20,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,209,53,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,209,7,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,125,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
};
	class Dada_PreservedFoodCan_PumpkinPuree: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Pumpkin Purée";
		descriptionShort = "Fill your pie with it or add it to your cat's diet";
		color = "PumpkinPuree";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_PumpkinPuree_co.paa"};
	};
	class Dada_PreservedFoodCan_PumpkinPuree_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Pumpkin Purée";
		descriptionShort = "Fill your pie with it or add it to your cat's diet";
		color = "PumpkinPuree";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_PumpkinPuree_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 251;
			water = 20;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};


	class Dada_RawFoodCan_Quail: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Canned Quail";
		descriptionShort = "Fancy poultry";
		color = "Quail";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Quail_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,27,37,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,23,15,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,209,22,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,146,58,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,146,8,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,46,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
};
	class Dada_PreservedFoodCan_Quail: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Canned Quail";
		descriptionShort = "Fancy poultry";
		color = "Quail";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Quail_co.paa"};
	};
	class Dada_PreservedFoodCan_Quail_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Canned Quail";
		descriptionShort = "Fancy poultry";
		color = "Quail";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Quail_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 209;
			water = 22;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};


	class Dada_RawFoodCan_Relish: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Relish Can";
		descriptionShort = "Always cooked and pickled";
		color = "Relish";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Relish_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,166,33,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,33,13,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,333,20,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,266,53,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,266,7,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,166,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
};
	class Dada_PreservedFoodCan_Relish: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Relish Can";
		descriptionShort = "Always cooked and pickled";
		color = "Relish";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Relish_co.paa"};
	};
	class Dada_PreservedFoodCan_Relish_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Relish Can";
		descriptionShort = "Always cooked and pickled";
		color = "Relish";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Relish_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 333;
			water = 20;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};


	class Dada_RawFoodCan_Samosa: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		color = "Samosa";
		displayName = "Samosa Filling Can";
		descriptionShort = "savoury filling";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Samosa_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,92,47,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,55,17,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,456,26,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,383,67,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,383,6,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,92,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
};
	class Dada_PreservedFoodCan_Samosa: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Samosa Filling Can";
		descriptionShort = "savoury filling";
		color = "Samosa";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Samosa_co.paa"};
	};
	class Dada_PreservedFoodCan_Samosa_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Samosa Filling Can";
		descriptionShort = "savoury filling";
		color = "Samosa";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_Samosa_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 458;
			water = 26;
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
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,92,50,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,34,20,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,417,30,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,350,80,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,350,10,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,92,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
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
			energy = 417;
			water = 30;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};


	class Dada_RawFoodCan_HomemadePumpkinPuree: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		color = "HomemadePumpkinPuree";
		displayName = "Homemade Pumpkin Purée";
		descriptionShort = "Made with love";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_HomemadePumpkinPuree_co.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,125,33,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,84,13,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,251,20,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,209,53,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,209,7,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,125,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
};
	class Dada_PreservedFoodCan_HomemadePumpkinPuree: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Homemade Pumpkin Purée";
		descriptionShort = "Made with love";
		color = "HomemadePumpkinPuree";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_HomemadePumpkinPuree_co.paa"};
	};
	class Dada_PreservedFoodCan_HomemadePumpkinPuree_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Homemade Pumpkin Purée";
		descriptionShort = "Made with love";
		color = "HomemadePumpkinPuree";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\can_HomemadePumpkinPuree_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 251;
			water = 20;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};


	class Dada_RawFoodCan_Crab: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Crab Can";
		descriptionShort = "Chunks of drained crab meat.";
		color = "Crab";
		model = "\dz\gear\food\can_sardines_open.p3d";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\DadaCrabCan_co.paa"};
		rotationFlags = 34;
		itemSize[] = {2,1};
		weight = 2.5;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		isMeleeWeapon = 1;
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,25,40,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,12,16,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,180,24,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,153,64,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,138,24,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,48,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Sardines.rvmat"}},{0.7,{"DZ\gear\food\data\Sardines.rvmat"}},{0.5,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.3,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Sardines_destruct.rvmat"}}};
				};
			};
		};
	};
	class Dada_PreservedFoodCan_Crab: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Crab Can";
		descriptionShort = "Chunks of drained crab meat.";
		color = "Crab";
		model = "\dz\gear\food\can_sardines.p3d";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\DadaCrabCan_co.paa"};
		rotationFlags = 34;
		itemSize[] = {2,1};
		weight = 5;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Sardines.rvmat"}},{0.7,{"DZ\gear\food\data\Sardines.rvmat"}},{0.5,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.3,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Sardines_destruct.rvmat"}}};
				};
			};
		};
	};
	class Dada_PreservedFoodCan_Crab_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		displayName = "Crab Can";
		descriptionShort = "Chunks of drained crab meat.";
		scope = 2;
		color = "Crab";
		model = "\dz\gear\food\can_sardines_open.p3d";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\DadaCrabCan_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 180;
			water = 24;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		rotationFlags = 34;
		itemSize[] = {2,1};
		weight = 2.5;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		interactionWeight = 1;
		quantityBar = 1;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Sardines.rvmat"}},{0.7,{"DZ\gear\food\data\Sardines.rvmat"}},{0.5,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.3,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Sardines_destruct.rvmat"}}};
				};
			};
		};
	};
	class Dada_RawFoodCan_Clam: Dada_RawFoodCan_Colorbase
	{
		scope = 2;
		color = "Clam";
		displayName = "Clam Can";
		descriptionShort = "Tender, succulent, medium sized chopped pieces of ocean clams";
		model = "\dz\gear\food\can_sardines_open.p3d";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\DadaClamCan_co.paa"};
		rotationFlags = 34;
		itemSize[] = {2,1};
		weight = 2.5;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		isMeleeWeapon = 1;
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {5,25,40,1,0,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {10,12,16,1,0,"4 +     16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,180,24,1,0};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,153,64,1,0};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,138,24,1,0};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {5,48,0,1,0,16};
					cooking_properties[] = {100,90};
				};
			};
			class FoodStageTransitions: DadaCanStageTransitions{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Sardines.rvmat"}},{0.7,{"DZ\gear\food\data\Sardines.rvmat"}},{0.5,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.3,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Sardines_destruct.rvmat"}}};
				};
			};
		};
	};
	class Dada_PreservedFoodCan_Clam: Dada_PreservedFoodCan_Colorbase
	{
		scope = 2;
		displayName = "Clam Can";
		descriptionShort = "Tender, succulent, medium sized chopped pieces of ocean clams";
		color = "Clam";
		model = "\dz\gear\food\can_sardines.p3d";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\DadaClamCan_co.paa"};
		rotationFlags = 34;
		itemSize[] = {2,1};
		weight = 10;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Sardines.rvmat"}},{0.7,{"DZ\gear\food\data\Sardines.rvmat"}},{0.5,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.3,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Sardines_destruct.rvmat"}}};
				};
			};
		};
	};
	class Dada_PreservedFoodCan_Clam_Opened: Dada_PreservedFoodCan_Colorbase_Opened
	{
		scope = 2;
		displayName = "Clam Can";
		descriptionShort = "Tender, succulent, medium sized chopped pieces of ocean clams";
		color = "Clam";
		model = "\dz\gear\food\can_sardines_open.p3d";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Canned\data\DadaClamCan_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 180;
			water = 24;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		rotationFlags = 34;
		itemSize[] = {2,1};
		weight = 2.5;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		interactionWeight = 1;
		quantityBar = 1;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Sardines.rvmat"}},{0.7,{"DZ\gear\food\data\Sardines.rvmat"}},{0.5,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.3,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Sardines_destruct.rvmat"}}};
				};
			};
		};
	};
};