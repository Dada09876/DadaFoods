#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Crafting
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DadaFoods"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;

    //CHEESE

	class srpCheeseMold: Inventory_Base
	{
		scope = 2;
		displayName = "Cheese Mold";
		descriptionShort = "Sturdier tool than burlap to drain cheeses.";
		model = "\Source_Files\FoodModding\Food\Cheese\textures_models\CheeseMold.p3d";
		weight = 1000;
		itemSize[] = {3,3};
		inventorySlot[] = {"CheeseMold1"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\Source_Files\FoodModding\Food\Cheese\textures_models\CheeseMold_co.paa"};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3200;
					healthLevels[] = {{1,{"DZ\gear\cooking\data\cooking_pot.rvmat"}},{0.7,{"DZ\gear\cooking\data\cooking_pot.rvmat"}},{0.5,{"DZ\gear\cooking\data\cooking_pot_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\cooking_pot_damage.rvmat"}},{0,{"DZ\gear\cooking\data\cooking_pot_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class handleRotate
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
		soundImpactType = "metal";
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

class srpCheesePress: Inventory_Base
	{
		scope = 2;
		displayName = "CheesePress";
		descriptionShort = "A press for crafting different cheeses";
		model = "Source_Files\FoodModding\Food\Cheese\textures_models\CheeseTable.p3d";
		itemSize[] = {5,5};
		overrideDrawArea = 8;
		useEntityHierarchy = "true";
		attachments[] = {"srpCheeseMold1","srpMilkGallon","srpYeast"};
		physLayer = "item_large";
		rotationFlags = 2;
		heavyItem = 1;
		weight = 3000;
		itemBehaviour = 0;
		destroyOnEmpty = 0;
		carveNavmesh = 0;
		canBeDigged = 0;
		allowOwnedCargoManipulation = 1;
		class GUIInventoryAttachmentsProps
		{
			class Liquids
			{
				name = "Liquid Containers";
				description = "";
				attachmentSlots[] = {"srpMilkGallon"};
				icon = "set:dayz_inventory image:barrel";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"\Source_Files\FoodModding\Food\Cheese\textures_models\srp_table2.rvmat"}},{0.7,{"Source_Files\FoodModding\Food\Cheese\textures_models\srp_table2.rvmat"}},{0.5,{"Source_Files\FoodModding\Food\Cheese\textures_models\srp_table2.rvmat"}},{0,{"Source_Files\FoodModding\Food\Cheese\textures_models\srp_table2.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	};
};