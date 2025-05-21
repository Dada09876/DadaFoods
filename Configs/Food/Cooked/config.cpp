#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Food_Cooked
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
	class DadaDishStageTransitions: BaseFoodStageTransitions
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
	class DadaSoup_Base: Edible_Base
	{
		scope = 1;
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\bowl.p3d";
		weight = 2;
		interactionWeight = 1;
		quantityBar = 1;
		canBeSplit = 1;
		inventorySlot[] = {"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8"};
		itemSize[] = {3,2};
        displayName = "Soup";
		descriptionShort = "Soup.";
		varQuantityInit = 125;
		varQuantityMin = 0;
		varQuantityMax = 300;
		hiddenSelections[] = {"camo","cs_raw"};
		hiddenSelectionsTextures[] = {"\Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBroth_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_rotten_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_burnt_co.paa",};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl.rvmat","\Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0.7,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl.rvmat","\Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0.5,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl_damage.rvmat","\Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0.3,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl_damage.rvmat","\Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}},{0,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl_destruct.rvmat","\Source_Files\DadaFoods\Configs\Drinks\data\Liquid.rvmat"}}};
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

    class DadaDish_Base: DadaSoup_Base
	{
		scope = 1;
        displayName = "Dish";
		descriptionShort = "Dish.";
		hiddenSelectionsTextures[] = {"\Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBroth_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBroth_baked_co.paa"};
	    hiddenSelectionsMaterials[] = {"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Bowl.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"};
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
	};

	class DadaBread_Base: DadaDish_Base
	{
		scope = 2;
		displayName = "Simple Round Dough";
		descriptionShort = "A round, plain dough. Should be baked before consuming... but I guess no one can stop you if you don't.";
		interactionWeight = 1;
		weight = 4;
		quantityBar = 1;
		canBeSplit = 1;
		varQuantityInit = 125;
		varQuantityMin = 0;
		varQuantityMax = 300;
		itemSize[] = {2,3};
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\RoundDough.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_rotten_co.paa"};
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








	class DadaBread_Pita: DadaBread_Base
	{
		scope = 2;
		displayName = "Flat Bread";
		descriptionShort = "A flat dough. Should be baked before consuming... but I guess no one can stop you if you don't";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Pita.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"};
	};

	class DadaBread_Loaf: DadaBread_Base
	{
		scope = 2;
		itemSize[] = {3,2};
		displayName = "Bread Loaf";
		descriptionShort = "A loaf of bread. Should be baked before consuming... but I guess no one can stop you if you don't";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\loaf.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_rotten_co.paa"};
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

	class DadaBread_Baguette: DadaBread_Base
	{
		scope = 2;
		itemSize[] = {3,2};
		displayName = "Baguette";
		descriptionShort = "Baguette du fromage. Should be baked before consuming... but I guess no one can stop you if you don't";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Baguette.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"};
	};

	class DadaBread_Pasta: DadaBread_Base
	{
		scope = 2;
		displayName = "Pasta Dough";
		descriptionShort = "Good, just need the tomato sauce now";
	};
	
	class DadaBread_Pizza: DadaBread_Base
	{
		scope = 2;
		displayName = "Pizza Bianca";
		descriptionShort = "Good, just need the tomato sauce now...";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat"};
	};

	class DadaBread_PizzaBase: DadaBread_Base
	{
		scope = 2;
		displayName = "Pizza Marinara";
		descriptionShort = "Freshly made pizza, always better with some cheese";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaBase_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaBase_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaBase_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaBase_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaBase_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaBase_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat"};
	};

	class DadaBread_PizzaMargherita: DadaBread_Base
	{
		scope = 2;
		displayName = "Pizza Margherita";
		descriptionShort = "Freshly made pizza, which toppings will be chosen?";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaMargherita_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaMargherita_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaMargherita_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaMargherita_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaMargherita_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBread_PizzaMargherita_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Pizza.rvmat"};
	};

	class DadaDish_Rigatoni: DadaDish_Base
	{
		scope = 2;
		displayName = "Rigatoni";
		descriptionShort = "Freshly made pasta with chicken in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRigatoni_rotten_co.paa"};
	};

	class DadaSoup_ChickenBroth: DadaSoup_Base
	{
		scope = 2;
		displayName = "Broth";
		descriptionShort = "Base for a good soup.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBroth_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBroth_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBroth_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBroth_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBroth_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBroth_rotten_co.paa"};
	};

	class DadaDish_MashedPotatoes: DadaDish_Base
	{
		scope = 2;
		displayName = "Mashed Potatoes";
		varQuantityInit = 65;
		varQuantityMin = 0;
		varQuantityMax = 150;
		descriptionShort = "Potatoes beaten into a delicious purée.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMashedPotatoes_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMashedPotatoes_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMashedPotatoes_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMashedPotatoes_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMashedPotatoes_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMashedPotatoes_rotten_co.paa"};
	};
	class DadaDish_Chili: DadaDish_Base
	{
		scope = 2;
		displayName = "Chili";
		descriptionShort = "A chili made popular by Bear Valley's recipe using bear meat.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChili_rotten_co.paa"};
	};
	class DadaDish_Pie: DadaDish_Base
	{
		model = "Source_Files\DadaFoods\Configs\Food\Cooked\data\Pie.p3d";
		scope = 2;
		displayName = "Pie";
		descriptionShort = "A pie crafted with love.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Bread.rvmat"};
	};
	class DadaSoup_ChickenNoodleSoup: DadaSoup_Base
	{
		scope = 2;
		displayName = "Chicken and Noodles Soup";
		descriptionShort = "Comforting soup for when you are sick.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChickenNoodleSoup_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChickenNoodleSoup_baked_co.paa", "Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChickenNoodleSoup_boiled_co.paa", "Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChickenNoodleSoup_dried_co.paa", "Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChickenNoodleSoup_burnt_co.paa", "Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaChickenNoodleSoup_rotten_co.paa"};
	};
	class DadaDish_Gumbo: DadaDish_Base
	{
		scope = 2;
		displayName = "Gumbo";
		descriptionShort = "Spicy ragout.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGumbo_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGumbo_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGumbo_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGumbo_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGumbo_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGumbo_rotten_co.paa"};
	};
	class DadaDish_SeafoodGumbo: DadaDish_Base
	{
		scope = 2;
		displayName = "Seafood Gumbo";
		descriptionShort = "Spicy ragout.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSeafoodGumbo_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSeafoodGumbo_baked_co.paa", "Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSeafoodGumbo_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSeafoodGumbo_dried_co.paa", "Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSeafoodGumbo_burnt_co.paa", "Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSeafoodGumbo_rotten_co.paa"};
	};
	class DadaSoup_TomatoSoup: DadaSoup_Base
	{
		scope = 2;
		displayName = "Tomato Soup";
		descriptionShort = "Delicious and healthy Roasted Tomato Soup made with freshly roasted tomatoes, caramelized onion, garlic, fresh basil and vegetable broth.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSoup_rotten_co.paa"};
	};
	class DadaSoup_Ragout: DadaSoup_Base
	{
		scope = 2;
		displayName = "Ragout";
		descriptionShort = "Delicious and healthy Ragout made with vegetable broth and other fresh ingredients.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRagout_rotten_co.paa"};
	};
	class DadaDish_GroundMeat: DadaDish_Base
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
	class DadaSoup_TomatoSauce: DadaSoup_Base
	{
		scope = 2;
		displayName = "Tomato Sauce";
		descriptionShort = "Tomato sauce, best mixed with other things";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaTomatoSauce_rotten_co.paa"};
	};
	class DadaSoup_Gravy: DadaSoup_Base
	{
		scope = 2;
		displayName = "Gravy";
		descriptionShort = "Sauce Brune.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGravy_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGravy_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGravy_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGravy_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGravy_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaGravy_rotten_co.paa"};
	};

	class DadaDish_Rabbit: DadaDish_Base
	{
		scope = 2;
		displayName = "Rabbit Confit";
		descriptionShort = "Fancy dinner";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRabbitPlate_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRabbitPlate_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRabbitPlate_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRabbitPlate_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRabbitPlate_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaRabbitPlate_rotten_co.paa"};
	};

	class DadaSoup_ClamChowder: DadaSoup_Base
	{
		scope = 2;
		displayName = "Clam Chowder";
		descriptionShort = "Fancy dinner";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaClamChowder_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaClamChowder_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaClamChowder_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaClamChowder_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaClamChowder_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaClamChowder_rotten_co.paa"};
	};

	class DadaDish_Spaghetti: DadaDish_Base
	{
		scope = 2;
		displayName = "Spaghetti bolognese";
		descriptionShort = "Freshly made pasta in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSpaghetti_rotten_co.paa"};
	};

	class DadaDish_Cannelloni: DadaDish_Base
	{
		scope = 2;
		displayName = "Cannelloni";
		descriptionShort = "Freshly made pasta in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaCannelloni_rotten_co.paa"};
	};

	class DadaDish_Bowties: DadaDish_Base
	{
		scope = 2;
		displayName = "Bowties";
		descriptionShort = "Freshly made pasta in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBowties_rotten_co.paa"};
	};

	class DadaDish_Lasagna: DadaDish_Base
	{
		scope = 2;
		displayName = "Lasagna";
		descriptionShort = "Freshly made pasta in a homemade tomato sauce.";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaLasagna_rotten_co.paa"};
	};

	class DadaDish_SauteedMushrooms: DadaDish_Base
	{
		scope = 2;
		displayName = "Sauteed Mushrooms";
		descriptionShort = "Mushrooms braised in a pan";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSauteedMushrooms_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSauteedMushrooms_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSauteedMushrooms_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSauteedMushrooms_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSauteedMushrooms_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaSauteedMushrooms_rotten_co.paa"};
	};

	class DadaSoup_MushroomCream: DadaSoup_Base
	{
		scope = 2;
		displayName = "Mushroom Cream";
		descriptionShort = "Cream of Mushrooms";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMushroomCream_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMushroomCream_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMushroomCream_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMushroomCream_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMushroomCream_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMushroomCream_rotten_co.paa"};
	};

	class DadaDish_MacaroniAndCheese: DadaDish_Base
	{
		scope = 2;
		displayName = "Macaroni & Cheese";
		descriptionShort = "Cheesy and Decadent";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMacaroniAndCheese_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMacaroniAndCheese_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMacaroniAndCheese_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMacaroniAndCheese_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMacaroniAndCheese_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaMacaroniAndCheese_rotten_co.paa"};
	};

	class DadaDish_ShepherdsPie: DadaDish_Base
	{
		scope = 2;
		displayName = "Shepherd's Pie";
		descriptionShort = "Comfort food";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaShepherdsPie_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaShepherdsPie_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaShepherdsPie_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaShepherdsPie_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaShepherdsPie_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaShepherdsPie_rotten_co.paa"};
	};

	class DadaDish_PulledPork: DadaDish_Base
	{
		scope = 2;
		displayName = "Pulled Pork";
		descriptionShort = "Cooked in a delicious barbecue sauce";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPulledPork_rotten_co.paa"};
	};

	class DadaBread_Pancakes: DadaBread_Base
	{
		scope = 2;
		displayName = "Pancake";
		descriptionShort = "freshly made";
		model = "\Source_Files\DadaFoods\Configs\Food\Cooked\data\Pita.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaBreadDough_Base_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Food.rvmat"};
	};

	class DadaDish_Sausage: DadaDish_Base
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

	class DadaDish_Fries: DadaDish_Base
	{
		model = "Source_Files\DadaFoods\Configs\Food\Cooked\data\fries.p3d";
		scope = 2;
		weight = 0.5;
		itemSize[] = {2,1};
		varQuantityInit = 65;
		varQuantityMin = 0;
		varQuantityMax = 150;
		displayName = "Fries";
		descriptionShort = "Crispy and Salty";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaFries_raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaFries_baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaFries_boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaFries_dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaFries_burnt_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaFries_rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Food\Cooked\data\Fries.rvmat"}}};
				};
			};
		};	
	};

	class DadaDish_FriteSauce: DadaDish_Base
	{
		scope = 2;
		displayName = "Frite Sauce";
		descriptionShort = "Fries And Gravy in a Bowl";
		model = "Source_Files\DadaFoods\Configs\Food\Cooked\data\FriteSauce.p3d";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Burned_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat"}},{0.7,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat"}},{0.5,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine_damage.rvmat"}},{0.3,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine_damage.rvmat"}},{0,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine_destruct.rvmat"}}};
				};
			};
		};	
	};

	class DadaDish_Poutine: DadaDish_Base
	{
		scope = 2;
		displayName = "Poutine";
		descriptionShort = "Un Classique Québecois";
		model = "Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.p3d";
		hiddenSelections[] = {"camoGround","cs_raw"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Raw_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Baked_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Boiled_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Dried_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Burned_co.paa","Source_Files\DadaFoods\Configs\Food\Cooked\data\DadaPoutine_Rotten_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat","Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat"}},{0.7,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine.rvmat"}},{0.5,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine_damage.rvmat"}},{0.3,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine_damage.rvmat"}},{0,{"\Source_Files\DadaFoods\Configs\Food\Cooked\data\Poutine_destruct.rvmat"}}};
				};
			};
		};	
	};
};
