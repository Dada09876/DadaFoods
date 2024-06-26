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
    class BoxCerealCrunchin;
    class DadaSpawned_Flour:BoxCerealCrunchin
	{
		scope = 2;
		itemSize[] = {3,3};
		displayName = "Flour";
		descriptionShort = "Basic cooking ingredient";
		canBeSplit = 1;
		weight = 4;
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 100;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaFoods\Configs\Spawned\data\DadaSpawned_Flour_co.paa"};
	};

    class Edible_Base;
    class DadaSpawned_Yeast: Edible_Base
	{
		scope = 2;
		weight = 0.5;
		itemSize[] = {1,2};
		displayName = "Yeast Pack";
		descriptionShort = "Pack of Yeast, Hope the infection wasn't too bad...";
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
};