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
		weight = 2000;
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

	class DadaCharcoalPiece: Inventory_Base
	{
		scope = 2;
		displayName = "Charcoal Piece";
		descriptionShort = "A piece of burnt material";
		model = "\dz\gear\consumables\SmallStone.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Crafting\data\DadaCharcoalPiece_co.paa"};
		animClass = "NoFireClass";
		weight = 50;
		itemSize[] = {1,1};
		rotationFlags = 17;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 12.0;
		varQuantityDestroyOnMin = 1;
		varStackMax = 12.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\stone.rvmat"}},{0.7,{"DZ\gear\consumables\data\stone.rvmat"}},{0.5,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\stone_destruct.rvmat"}}};
				};
			};
		};
	};

	class DadaSaltBag: Inventory_Base
	{
		scope = 2;
		displayName = "Salt Bag";
		descriptionShort = "May be used for salting your dishes or curing foods";
		model = "\dz\gear\consumables\garden_lime.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Crafting\data\SaltBag_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Crafting\data\SaltBag.rvmat"};
		animClass = "NoFireClass";
		weight = 300;
		itemSize[] = {3,5};
		stackedUnit = "g";
		quantityBar = 1;
		varQuantityInit = 12.0;
		varQuantityMin = 0.0;
		varQuantityMax = 12.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Crafting\data\SaltBag.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Crafting\data\SaltBag.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Crafting\data\SaltBag_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Crafting\data\SaltBag_damage.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Crafting\data\SaltBag_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItemLight
				{
					soundSet = "pickUpGardenLimeLight_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpGardenLime_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "gardenlime_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class DadaCoffeePacket: Edible_Base
	{
		scope = 2;
		displayName = "Coffee Infuser Packet";
		descriptionShort = "May be used for making coffee";
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_co.paa"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket.rvmat"};
		model = "\DZ\gear\tools\Heatpack.p3d";
		isMeleeWeapon = 1;
		weight = .5;
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		absorbency = 1;
		itemSize[] = {1,1};
		animClass = "Knife";
		rotationFlags = 17;
		varWetMax = 1.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_damage.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class DadaGreenTeaPacket: Edible_Base
	{
		scope = 2;
		displayName = "Green Tea Packet";
		descriptionShort = "May be used for making green tea";
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Crafting\data\GreenTeaPacket_co.paa"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket.rvmat"};
		model = "\DZ\gear\tools\Heatpack.p3d";
		isMeleeWeapon = 1;
		weight = .5;
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		absorbency = 1;
		itemSize[] = {1,1};
		animClass = "Knife";
		rotationFlags = 17;
		varWetMax = 1.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_damage.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class DadaBlackTeaPacket: Edible_Base
	{
		scope = 2;
		displayName = "Black Tea Packet";
		descriptionShort = "May be used for making black tea";
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Crafting\data\BlackTeaPacket_co.paa"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket.rvmat"};
		model = "\DZ\gear\tools\Heatpack.p3d";
		isMeleeWeapon = 1;
		weight = .5;
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		absorbency = 1;
		itemSize[] = {1,1};
		animClass = "Knife";
		rotationFlags = 17;
		varWetMax = 1.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_damage.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Crafting\data\CoffeePacket_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class GardenLime;
	class DadaBoneMeal: GardenLime
	{
		scope = 2;
		displayName = "Bone Meal";
		descriptionShort = "Pile of Crushed Bones";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Crafting\data\BoneMeal_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaFoods\Configs\Crafting\data\BoneMeal.rvmat"};
		canBeSplit = 1;
		animClass = "NoFireClass";
		weight = 300;
		itemSize[] = {3,5};
		stackedUnit = "g";
		quantityBar = 1;
		varQuantityInit = 5000;
		varQuantityMin = 0.0;
		varQuantityMax = 5000;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"Source_Files\DadaFoods\Configs\Crafting\data\BoneMeal.rvmat"}},{0.7,{"Source_Files\DadaFoods\Configs\Crafting\data\BoneMeal.rvmat"}},{0.5,{"Source_Files\DadaFoods\Configs\Crafting\data\BoneMeal_damage.rvmat"}},{0.3,{"Source_Files\DadaFoods\Configs\Crafting\data\BoneMeal_damage.rvmat"}},{0.0,{"Source_Files\DadaFoods\Configs\Crafting\data\BoneMeal_destruct.rvmat"}}};
				};
			};
		};
		class Horticulture
		{
			TexId = 1;
			AddEnergyToSlot = 1;
			ConsumedQuantity = 250.0;
		};
	};
};