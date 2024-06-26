////////////////////////////////////////////////////////////////////
//DeRap: Proxy\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Mar 30 17:52:49 2024 : 'file' last modified on Sat Feb 24 16:27:22 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DadaFoods_Proxy
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DadaFoods"};
	};
};
class CfgSlots
{
	class Slot_srpCheeseMold1
	{
		name = "srpCheeseMold1";
		displayName = "Cheese Mold";
		ghostIcon = "set:dayz_inventory image:cookingequipment";
	};
	class Slot_srpMilkGallon
	{
		name = "srpMilkGallon";
		displayName = "Milk Gallon";
		ghostIcon = "set:dayz_inventory image:barrel";
	};
	class Slot_srpYeast
	{
		name = "srpYeast";
		displayName = "Yeast";
		ghostIcon = "set:dayz_inventory image:berry";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyCheeseMoldProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"srpCheeseMold1"};
		model = "\Source_Files\FoodModding\Proxy\CheeseMoldProxy.p3d";
	};
	class ProxyMilkGallonProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"srpMilkGallon"};
		model = "\Source_Files\FoodModding\Proxy\MilkGallonProxy.p3d";
	};
	class ProxyYeastProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"srpYeast"};
		model = "\Source_Files\FoodModding\Proxy\YeastProxy.p3d";
	};
};
