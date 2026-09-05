#define _ARMA_

class CfgPatches
{
	class DadaFoods_Configs_Foodstage
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DadaFoods"};
	};
};
class CfgVehicles
{
    class Lard;
    class SaltChunk: Lard
    {
        scope = 2;
    };
};