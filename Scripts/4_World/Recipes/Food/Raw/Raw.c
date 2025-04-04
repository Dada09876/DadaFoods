class CraftDadaRaw_Salad extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Salad";

		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
	
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way
        InsertIngredient(0,"GreenBellPepper");//you can insert multiple ingredients this way
        InsertIngredient(0,"Zucchini");//you can insert multiple ingredients this way

		//ingredient 2
        InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
        InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way

		//result1
		AddResult("DadaRaw_Salad");//add results here

		m_ResultSetQuantity[0] = 150;//-1 = do nothing
	}
};


class CraftDadaRaw_TomatoSalad extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Tomato Salad";

		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
	
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way

		//ingredient 2
        InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way

		//result1
		AddResult("DadaRaw_TomatoSalad");//add results here

		m_ResultSetQuantity[0] = 150;//-1 = do nothing
	}
};

class CraftDadaRaw_Rice extends Craft_DadaTempTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Rice";
		
		m_MinQuantityIngredient[0] = 30;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Rice");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -75;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_Rice");//add results here

		m_ResultSetQuantity[0] = 150;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C
			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 70)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < 50 || ingredient1.GetTemperature() > 200)
			{
				return false;
			}
			
			if (ingredient1.GetLiquidType() == LIQUID_NONE || ingredient1.GetLiquidType() == GROUP_LIQUID_BLOOD || ingredient1.GetLiquidType() == LIQUID_SALINE || ingredient1.GetLiquidType() == LIQUID_VODKA || ingredient1.GetLiquidType() == LIQUID_BEER || ingredient1.GetLiquidType() == LIQUID_GASOLINE || ingredient1.GetLiquidType() == LIQUID_DIESEL || ingredient1.GetLiquidType() == LIQUID_DISINFECTANT || ingredient1.GetLiquidType() == LIQUID_SOLUTION)
			{
				return false;
			}
			// by this point we know the 2 ingredients are both good temperatures and have good food stages
			return true;
		}
		// initial ingredients are wrong, false
   		return false;
   	}
};


class CraftDadaRaw_PokeBowl extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Poke Bowl";
	
		m_MinQuantityIngredient[0] = 150;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaRaw_Rice");//you can insert multiple ingredients this way

		//ingredient 2
		InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
        InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way
		InsertIngredient(1,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(1,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
        InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(1,"WalleyePollockFilletMeat");
        InsertIngredient(1,"SteelheadTroutFilletMeat");
		
		//result1
		AddResult("DadaRaw_PokeBowl");//add results here

		m_ResultSetQuantity[0] = 275;//-1 = do nothing
	}
};

class CraftDadaRaw_CerealCrunchin_Frosties extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Cereal Bowl";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"BoxCerealCrunchin");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaSpawned_BoxCerealCrunchin_Frosties");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -125;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_CerealCrunchin_Frosties");//add results here

		m_ResultSetQuantity[0] = 250;//-1 = do nothing
	}
};	

class CraftDadaRawCerealCrunchin_Nesquik extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Chocolate Cereal Bowl";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_BoxCerealCrunchin_Nesquik");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -125;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRawCerealCrunchin_Nesquik");//add results here

		m_ResultSetQuantity[0] = 150;//-1 = do nothing
	}
};	

class CraftDadaRaw_CerealCrunchin_Kosmostar extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Kosmostar Cereal Bowl";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable chec
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_BoxCerealCrunchin_Kosmostar");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -125;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_CerealCrunchin_Kosmostar");//add results here

		m_ResultSetQuantity[0] = 150;//-1 = do nothing
	}
};	

class CraftDadaRaw_SushiMaki extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Maki";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaRaw_Rice");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -75;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(1,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
        InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(1,"WalleyePollockFilletMeat");
        InsertIngredient(1,"SteelheadTroutFilletMeat");
		
		//result1
		AddResult("DadaRaw_SushiMaki");//add results here

		m_ResultSetQuantity[0] = 75;//-1 = do nothing
	}
};	

class CraftDadaRaw_SushiOnigiri extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Onigiri";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaRaw_Rice");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -75;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(1,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
        InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(1,"WalleyePollockFilletMeat");
        InsertIngredient(1,"SteelheadTroutFilletMeat");
		
		//result1
		AddResult("DadaRaw_SushiOnigiri");//add results here

		m_ResultSetQuantity[0] = 75;//-1 = do nothing
	}
};	

class CraftDadaRaw_SmallButter extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft little bit of butter";
		
		m_MinQuantityIngredient[0] = 150;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(0,"Lard");//you can insert multiple ingredients this way
    
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"Lard");//you can insert multiple ingredient
    
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = false;//true = destroy, false = do nothing
		
		//result1
		AddResult("DadaRaw_SmallButter");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}
};	

class CraftDadaRaw_BigButter extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft big chunk of butter";

		m_MinQuantityIngredient[0] = 300;//-1 = disable check
		m_MinQuantityIngredient[1] = 300;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
        InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(0,"Lard");//you can insert multiple ingredient
    
		m_IngredientAddQuantity[0] = -600;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"Lard");//you can insert multiple ingredient
    
		m_IngredientAddQuantity[1] = -600;// 0 = do nothing
		m_IngredientDestroy[1] = false;//true = destroy, false = do nothing
		
		//result1
		AddResult("DadaRaw_BigButter");//add results here

		m_ResultSetQuantity[0] = 600;//-1 = do nothing
	}
};	

class CraftDadaRaw_Yogourt extends Craft_DadaTempStageTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Yogurt";
		
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 25;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
	
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaSpawned_Yeast");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_Yogourt");//add results here

		m_ResultSetQuantity[0] = 150;//-1 = do nothing
	}
};	

class CraftFreshCheese_Mozza extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Mozzarella";
		
		m_MinQuantityIngredient[0] = 150;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_CurdsAndWhey");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BurlapSack");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCheeseMold");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -400;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		
		//result1
		AddResult("DadaRaw_Mozza");//add results here

		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)


		AddResult ("DadaDrink_Whey");

		m_ResultSetFullQuantity[1] = true;//true = set full quantity, false = do nothing
		m_ResultInheritsHealth[1] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};	

class CraftFreshCheese_CheddarCurds extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Cheddar Curds";
		
		m_MinQuantityIngredient[0] = 150;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaDrink_CurdsAndWhey");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BurlapSack");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCheeseMold");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -400;// 0 = do nothin
		m_IngredientDestroy[1] = -1;// false = do nothing
		
		//result1
		AddResult("DadaRaw_CheddarCurds");//add results here

		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)

		AddResult ("DadaDrink_Whey");

		m_ResultSetFullQuantity[1] = true;//true = set full quantity, false = do nothing
		m_ResultInheritsHealth[1] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};	

class CraftFreshCheese_Goat extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Goat Cheese";
		
		m_MinQuantityIngredient[0] = 150;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
	
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_CurdsAndWhey");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BurlapSack");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCheeseMold");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -400;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		
		//result1
		AddResult("DadaRaw_FreshGoatCheese");//add results here

		m_ResultSetQuantity[0] = 100;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)

		AddResult ("DadaDrink_Whey");

		m_ResultSetFullQuantity[1] = true;//true = set full quantity, false = do nothing
		m_ResultInheritsHealth[1] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};	

class CraftFreshCheese_Feta extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Feta Cheese";
		
		m_MinQuantityIngredient[0] = 150;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
	
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_CurdsAndWhey");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BurlapSack");//you can insert multiple ingredients this way
		InsertIngredient(1,"BurlapSack_Black");//you can insert multiple ingredients this way
		InsertIngredient(1,"BurlapSack_Skull");//you can insert multiple ingredients this way
		InsertIngredient(1,"BurlapSack_White");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCheeseMold");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -400;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		
		//result1
		AddResult("DadaRaw_Feta");//add results here

		m_ResultSetQuantity[0] = 100;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		
		AddResult ("DadaDrink_Whey");

		m_ResultSetFullQuantity[1] = true;//true = set full quantity, false = do nothing
		m_ResultInheritsHealth[1] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};	

class CraftDadaRaw_FrozenYogurt extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Frozen Yogurt";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaRaw_Yogourt_Opened");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -75;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaRaw_Yogourt_Opened");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -75;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_FrozenYogurt");//add results here

		m_ResultSetQuantity[0] = 150;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;

		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C
			if (ingredient0.GetTemperature() < -100 || ingredient0.GetTemperature() > 15)
			{
				return false;
			}
			FoodStage foodStage0 = ingredient0.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage0.IsFoodBurned() || foodStage0.IsFoodRotten())
			{
				return false;
			}

			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < -100 || ingredient1.GetTemperature() > 15)
			{
				return false;
			}
			FoodStage foodStage1 = ingredient1.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage1.IsFoodBurned() || foodStage1.IsFoodRotten())
			{
				return false;
			}
			// by this point we know the 2 ingredients are both good temperatures and have good food stages
			return true;
		}
		// initial ingredients are wrong, false
   		return false;
   	}
};	

class CraftDadaRaw_FrozenYogurt1 extends Craft_Dada_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Frozen Yogurt";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaRaw_Yogourt");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -75;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaRaw_Yogourt");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -75;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_FrozenYogurt");//add results here

		m_ResultSetQuantity[0] = 150;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};	

class CraftDadaRaw_FrozenYogurt2 extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Frozen Yogurt";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaRaw_Yogourt_Opened");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -75;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaRaw_Yogourt");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -75;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_FrozenYogurt");//add results here

		m_ResultSetQuantity[0] = 150;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;

		if (Class.CastTo(ingredient0, ingredients[0]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C
			if (ingredient0.GetTemperature() < -100 || ingredient0.GetTemperature() > 15)
			{
				return false;
			}
			FoodStage foodStage0 = ingredient0.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage0.IsFoodBurned() || foodStage0.IsFoodRotten())
			{
				return false;
			}
			// by this point we know the 2 ingredients are both good temperatures and have good food stages
			return true;
		}
		// initial ingredients are wrong, false
   		return false;
   	}
};	

class CraftDadaRaw_VanillaChocoSwirl extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Vanilla & Chocolate Ice Cream";
		
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
	
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_VanillaChocoSwirl");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C
			if (ingredient0.GetTemperature() < -100 || ingredient0.GetTemperature() > 15)
			{
				return false;
			}
			FoodStage foodStage0 = ingredient0.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage0.IsFoodBurned() || foodStage0.IsFoodRotten())
			{
				return false;
			}

			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < -100|| ingredient1.GetTemperature() > 15)
			{
				return false;
			}
			FoodStage foodStage1 = ingredient1.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage1.IsFoodBurned() || foodStage1.IsFoodRotten())
			{
				return false;
			}
			// by this point we know the 2 ingredients are both good temperatures and have good food stages
			return true;
		}
		// initial ingredients are wrong, false
   		return false;
   	}
};	

class CraftDadaRaw_VanillaIceCream extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Vanilla Ice Cream";
		
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
	
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
	
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_VanillaIceCream");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C
			if (ingredient0.GetTemperature() < -100 || ingredient0.GetTemperature() > 15)
			{
				return false;
			}
			FoodStage foodStage0 = ingredient0.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage0.IsFoodBurned() || foodStage0.IsFoodRotten())
			{
				return false;
			}

			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < -100 || ingredient1.GetTemperature() > 15)
			{
				return false;
			}
			FoodStage foodStage1 = ingredient1.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage1.IsFoodBurned() || foodStage1.IsFoodRotten())
			{
				return false;
			}
			// by this point we know the 2 ingredients are both good temperatures and have good food stages
			return true;
		}
		// initial ingredients are wrong, false
   		return false;
   	}
};	

class CraftDadaRaw_ChocoIScream extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Chocolate Ice Cream";
		
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
	
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_ChocoIScream");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C
			if (ingredient0.GetTemperature() < -100 || ingredient0.GetTemperature() > 15)
			{
				return false;
			}
			FoodStage foodStage0 = ingredient0.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage0.IsFoodBurned() || foodStage0.IsFoodRotten())
			{
				return false;
			}

			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < -100 || ingredient1.GetTemperature() > 15)
			{
				return false;
			}
			FoodStage foodStage1 = ingredient1.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage1.IsFoodBurned() || foodStage1.IsFoodRotten())
			{
				return false;
			}
			// by this point we know the 2 ingredients are both good temperatures and have good food stages
			return true;
		}
		// initial ingredients are wrong, false
   		return false;
   	}
};

class CraftDadaRaw_PumpkinSeeds extends Craft_Dada_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft roasted pumpkin seeds";
		
		m_MinQuantityIngredient[0] = 20;//-1 = disable check
		m_MinQuantityIngredient[1] = 20;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"PumpkinSeeds");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"PumpkinSeeds");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaRaw_PumpkinSeeds");//add results here

		m_ResultSetQuantity[0] = 50;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};	

class CraftDadaRaw_Jerky extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Jerky";
	
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"KitchenKnife");//you can insert multiple ingredients this way
		InsertIngredient(0,"SteakKnife");//you can insert multiple ingredients this way
        InsertIngredient(0,"StoneKnife");//you can insert multiple ingredients this way
        InsertIngredient(0,"BoneKnife");//you can insert multiple ingredients this way
        InsertIngredient(0,"HandSaw");//you can insert multiple ingredients this way
        InsertIngredient(0,"Hacksaw");//you can insert multiple ingredients this way
        InsertIngredient(0,"Sickle");//you can insert multiple ingredients this way
        InsertIngredient(0,"Cleaver");//you can insert multiple ingredients this way
        InsertIngredient(0,"CombatKnife");//you can insert multiple ingredients this way
        InsertIngredient(0,"HuntingKnife");//you can insert multiple ingredients this way
        InsertIngredient(0,"Machete");//you can insert multiple ingredients this way
        InsertIngredient(0,"Sword");//you can insert multiple ingredients this way
        InsertIngredient(0,"KukriKnife");//you can insert multiple ingredients this way
        InsertIngredient(0,"FangeKnife");//you can insert multiple ingredients this way
        InsertIngredient(0,"CrudeMachete");//you can insert multiple ingredients this way
        InsertIngredient(0,"OrientalMachete");//you can insert multiple ingredients this w
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing

	
		//ingredient 2
		InsertIngredient(1,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MouflonSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"BoarSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"PigSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"DeerSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"WolfSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"BearSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"CowSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"SheepSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"FoxSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"ChickenBreastMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"RabbitLegMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"ReindeerSteakMeat");//you can insert multiple ingredients this wayç
		
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaRaw_Jerky");//add results here

		m_ResultSetQuantity[0] = 90;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient1;

		if (Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
			{
				return false;
			}
			FoodStage foodStage1 = ingredient1.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage1.IsFoodBurned() || foodStage1.IsFoodRotten() || foodStage1.IsFoodRaw() || foodStage1.IsFoodBaked() || foodStage1.IsFoodBoiled())
			{
				return false;
			}
			// by this point we know the 2 ingredients are both good temperatures and have good food stages
			return true;
		}
		// initial ingredients are wrong, false
   		return false;
   	}
};