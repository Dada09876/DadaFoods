////////////////////////////////////////////////////////////////////
//DeRap: Proxy\config.bin
//Produced from mikero's Dos Tools Dll version 9.93
//https://mikero.bytex.digital/Downloads
//'now' is Tue Feb 04 16:40:53 2025 : 'file' last modified on Sat Jan 18 22:45:01 2025
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
	class Slot_DadaCheeseMold1
	{
		name = "DadaCheeseMold1";
		displayName = "Cheese Mold";
		ghostIcon = "set:dayz_inventory image:cookingequipment";
	};
	class Slot_DadaMilkGallon
	{
		name = "DadaMilkGallon";
		displayName = "Milk Gallon";
		ghostIcon = "set:dayz_inventory image:barrel";
	};
	class Slot_DadaYeast
	{
		name = "DadaYeast";
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
		inventorySlot[] = {"DadaCheeseMold1"};
		model = "Source_Files\DadaFoods\Proxy\CheeseMoldProxy.p3d";
	};
	class ProxyMilkGallonProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"DadaMilkGallon"};
		model = "Source_Files\DadaFoods\Proxy\\MilkGallonProxy.p3d";
	};
	class ProxyYeastProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"DadaYeast"};
		model = "Source_Files\DadaFoods\Proxy\YeastProxy.p3d";
	};
};
