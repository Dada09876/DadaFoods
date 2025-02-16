////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.93
//https://mikero.bytex.digital/Downloads
//'now' is Tue Feb 04 16:40:50 2025 : 'file' last modified on Sat Jan 18 22:45:02 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DadaFoods
	{
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class DadaFoods
	{
		dir = "Source_Files\DadaFoods";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "DadaFoods";
		credits = "";
		author = "Dada";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaFoods\scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaFoods\scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaFoods\scripts\5_Mission"};
			};
		};
	};
};
