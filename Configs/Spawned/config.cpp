#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Food_Spawned
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
	class DadaSpawned_Flour: Edible_Base
	{
		scope = 2;
		displayName = "Flour";
		descriptionShort = "Basic cooking ingredient";
		model = "\dz\gear\food\BoxCereal.p3d";
		canBeSplit = 1;
		weight = 4;debug_ItemCategory = 6;
		rotationFlags = 17;
		itemSize[] = {3,3};
		varQuantityInit = 250;
		varQuantityMin = 0;
		varQuantityMax = 250;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Spawned\data\DadaSpawned_Flour_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Cereal_box.rvmat"}},{0.7,{"DZ\gear\food\data\Cereal_box.rvmat"}},{0.5,{"DZ\gear\food\data\Cereal_box_damage.rvmat"}},{0.3,{"DZ\gear\food\data\Cereal_box_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Cereal_box_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 100;
			water = 0;
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
				class pickup
				{
					soundSet = "BoxCerealCrunchin_pickup_SoundSet";
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
					soundset = "BoxCerealCrunchin_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class DadaSpawned_CerealBase: Edible_Base
	{
		scope = 1;
		displayName = "Cereals";
		descriptionShort = "cereals";
		model = "\dz\gear\food\BoxCereal.p3d";
		canBeSplit = 1;
		weight = 4;debug_ItemCategory = 6;
		rotationFlags = 17;
		itemSize[] = {3,3};
		varQuantityInit = 250;
		varQuantityMin = 0;
		varQuantityMax = 250;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Spawned\data\DadaSpawned_Flour_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Cereal_box.rvmat"}},{0.7,{"DZ\gear\food\data\Cereal_box.rvmat"}},{0.5,{"DZ\gear\food\data\Cereal_box_damage.rvmat"}},{0.3,{"DZ\gear\food\data\Cereal_box_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Cereal_box_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 100;
			water = 0;
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
				class pickup
				{
					soundSet = "BoxCerealCrunchin_pickup_SoundSet";
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
					soundset = "BoxCerealCrunchin_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class DadaSpawned_BoxCerealCrunchin_Frosties: DadaSpawned_CerealBase
	{
		scope = 2;
		displayName = "Corn Flakes";
		descriptionShort = "Cereals";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Spawned\data\DadaSpawned_BoxCerealCrunchin_Frosties_co.paa"};
	};

	class DadaSpawned_BoxCerealCrunchin_Nesquik: DadaSpawned_CerealBase
	{
		scope = 2;
		displayName = "Nesquik";
		descriptionShort = "Cereals";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Spawned\data\DadaSpawned_BoxCerealCrunchin_Nesquik_co.paa"};
	};

	class DadaSpawned_BoxCerealCrunchin_Kosmostar: DadaSpawned_CerealBase
	{
		scope = 2;
		displayName = "Stars";
		descriptionShort = "Cereals";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Spawned\data\DadaSpawned_BoxCerealCrunchin_Kosmostar_co.paa"};
	};
	
    class DadaSpawned_Yeast: Edible_Base
	{
		scope = 2;
		weight = 0.5;
		itemSize[] = {1,2};
		inventorySlot[] = {"DadaYeast"};
		displayName = "Yeast Pack";
		descriptionShort = "Pack of Yeast. Not at all meaty, despite the name...";
		model = "\dz\gear\food\PowderedMilk.p3d";
		canBeSplit = 1;
		debug_ItemCategory = 6;
		rotationFlags = 17;
        hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Spawned\data\DadaSpawned_Yeast_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 20;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

	class PowderedMilk: Edible_Base
	{
		scope = 2;
		canBeSplit = 1;
		displayName = "Powdered Milk";
		descriptionShort = "Oof, that's dry!";
		weight = 1;
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

	class BoxCerealCrunchin: Edible_Base
	{
		canBeSplit = 1;
	};
};