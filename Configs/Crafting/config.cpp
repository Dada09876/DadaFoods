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

	class DadaCheeseMold: Inventory_Base
	{
		scope = 2;
		displayName = "Cheese Mold";
		descriptionShort = "Sturdier tool than burlap to drain cheeses.";
		model = "Source_Files\DadaFoods\Configs\Crafting\data\CheeseMold.p3d";
		weight = 1000;
		itemSize[] = {3,3};
		inventorySlot[] = {"DadaCheeseMold1"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Crafting\data\CheeseMold_co.paa"};
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

class DadaCheesePress: Inventory_Base
	{
		scope = 2;
		displayName = "CheesePress";
		descriptionShort = "A press for crafting different cheeses";
		model = "Source_Files\DadaFoods\Configs\Crafting\data\CheeseTable.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Crafting\data\CheeseTable_co.paa"};
		itemSize[] = {5,5};
		overrideDrawArea = 8;
		useEntityHierarchy = "true";
		attachments[] = {"DadaCheeseMold1","DadaMilkGallon","DadaYeast"};
		physLayer = "item_large";
		rotationFlags = 2;
		heavyItem = 1;
		weight = 300;
		itemBehaviour = 0;
		destroyOnEmpty = 0;
		carveNavmesh = 0;
		canBeDigged = 0;
		allowOwnedCargoManipulation = 1;
		class GUIInventoryAttachmentsProps
		{
			class LiquidContainers
			{
				name = "Milk";
				description = "";
				attachmentSlots[] = {"DadaMilkGallon"};
				ghostIcon = "set:dayz_inventory image:barrel";
			};

			class YeastPack
			{
				name = "Yeast";
				description = "";
				attachmentSlots[] = {"DadaYeast"};
				icon = "set:dayz_inventory image:berry";
			};

			class Mold
			{
				name = "Cheese Mold";
				description = "";
				attachmentSlots[] = {"DadaCheeseMold1"};
				icon = "set:dayz_inventory image:cookingequipment";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"Source_Files\DadaFoods\Configs\Crafting\data\CheeseTable.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Crafting\data\CheeseTable.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Crafting\data\CheeseTable.rvmat"}},{0,{"Source_Files\DadaFoods\Configs\Crafting\data\CheeseTable.rvmat"}}};
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