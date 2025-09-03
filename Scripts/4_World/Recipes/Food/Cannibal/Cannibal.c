class CraftDadaCannibal_EntrailsSpaghetti extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Entrails Spaghetti";

		m_MinQuantityIngredient[0] = 30;//-1 = disable check
		m_MinQuantityIngredient[1] = 90;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Guts");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -60;// 0 = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibal_EntrailsSpaghetti");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}
};


class CraftDadaCannibal_EyeballSoup extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Human Eyeball Soup";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 90;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibal_EyeballSoup");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C

			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 200)
			{
				return false;
			}

			if (ingredient0.GetLiquidType() == LIQUID_NONE || ingredient0.GetLiquidType() == LIQUID_SALINE || ingredient0.GetLiquidType() == LIQUID_VODKA || ingredient0.GetLiquidType() == LIQUID_BEER || ingredient0.GetLiquidType() == LIQUID_DISINFECTANT || ingredient0.GetLiquidType() == LIQUID_SOLUTION)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
	
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
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

class CraftDadaCannibal_EyeballSoup1 extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Human Eyeball Soup";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BloodBagFull");//you can insert multiple ingredients this way
		InsertIngredient(0,"BloodBagIV");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibal_EyeballSoup");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
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

class CraftDadaCannibal_Jerky extends Craft_DadaTemp1Stage1_BaseRecipe
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
		InsertIngredient(1,"HumanSteakMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaCannibal_Jerky");//add results here

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

class CraftDadaCannibal_WasteBread extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Waste Bread";
		
		m_MinQuantityIngredient[0] = 200;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaBoneMeal");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -500;// 0 = do nothing
		m_IngredientDestroy[0] = false;

		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");
		
		//result1
		AddResult("DadaCannibal_WasteBread");//add results here

		m_ResultSetQuantity[0] = 90;//-1 = do nothing
	}
};

class CraftDadaWasteBread_Pita extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Flat Bread";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaCannibal_WasteBread");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
	
		//result1
		AddResult("DadaWasteBread_Pita");//add results here

		m_ResultSetQuantity[0] = 50;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (
	}
};

class CraftDadaWasteBread_Loaf extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Loaf";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaCannibal_WasteBread");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
	
		//result1
		AddResult("DadaWasteBread_Loaf");//add results here

		m_ResultSetQuantity[0] = 50;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (
	}
};

class CraftDadaWasteBread_Baguette extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Baguette";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaCannibal_WasteBread");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
	
		//result1
		AddResult("DadaWasteBread_Baguette");//add results here

		m_ResultSetQuantity[0] = 50;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (
	}
};

class CraftDadaWasteBread_Pasta extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Raw Pasta";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaCannibal_WasteBread");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
	
		//result1
		AddResult("DadaWasteBread_Pasta");//add results here

		m_ResultSetQuantity[0] = 50;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (
	}
};

class CraftDadaWasteBread_Pizza extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Pizza Dough";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaCannibal_WasteBread");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
	
		//result1
		AddResult("DadaWasteBread_Pizza");//add results here

		m_ResultSetQuantity[0] = 50;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (
	}
};

class CraftDadaWasteBread_PizzaBase extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Pizza Marinara";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaWasteBread_Pizza");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_CannibalDicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalDicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCannibalSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaWasteBread_PizzaBase");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaCannibalDish_Spaghetti extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Spaghetti";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaWasteBread_Pasta");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_CannibalDicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalDicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalSTAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalSTAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalHomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalHomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCannibalSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaCannibalDish_Spaghetti");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;
	}
};

class CraftDadaCannibalDish_Cannelloni extends  Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Cannelloni";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaWasteBread_Pasta");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_CannibalDicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalDicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalSTAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalSTAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalHomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalHomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCannibalSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaCannibalDish_Cannelloni");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaCannibalDish_Bowties extends  Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Bowties";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaWasteBread_Pasta");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_CannibalDicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalDicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalSTAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalSTAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalHomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalHomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCannibalSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaCannibalDish_Bowties");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaCannibalDish_Lasagna extends  Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Lasagna";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaWasteBread_Pasta");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_CannibalDicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalDicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalSTAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalSTAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalHomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalHomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCannibalSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaCannibalDish_Lasagna");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaCannibalDish_Rigatoni extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Rigatoni";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaWasteBread_Pasta");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_CannibalDicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalDicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalSTAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalSTAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_CannibalHomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalHomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCannibalSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaCannibalDish_Rigatoni");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaCannibalDish_PulledPork extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Pulled Pork";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"HumanSteakMeat");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_CannibalDicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalDicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCannibalSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaCannibalDish_PulledPork");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaCannibalDish_Sausage extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Sausage";

		m_MinQuantityIngredient[0] = 30;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Guts");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -60;// 0 = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaCannibalDish_GroundMeat");

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibalDish_Sausage");//add results here

		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultReplacesIngredient[0] = 1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}
};

class CraftDadaCannibalDish_Chili extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Chili";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BloodBagFull");//you can insert multiple ingredients this way
		InsertIngredient(0,"BloodBagIV");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaCannibalDish_GroundMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibalDish_Chili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
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

class CraftDadaCannibalDish_Chili1 extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Chili";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaCannibalDish_GroundMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibalDish_Chili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C

			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 200)
			{
				return false;
			}

			if (ingredient0.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
	
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
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

class CraftDadaCannibalDish_Pie extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Pie";

		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaCannibal_WasteBread");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -250;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
        InsertIngredient(1,"DadaCannibalDish_GroundMeat");//you can insert multiple ingredients this way

		//result1
		AddResult("DadaCannibalDish_Pie");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaCannibalSoup_TomatoSoup extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Tomato Soup";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 90;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_CannibalDicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalDicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCannibalSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibalSoup_TomatoSoup");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C

			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 200)
			{
				return false;
			}

			if (ingredient0.GetLiquidType() == LIQUID_NONE || ingredient0.GetLiquidType() == LIQUID_SALINE || ingredient0.GetLiquidType() == LIQUID_VODKA || ingredient0.GetLiquidType() == LIQUID_BEER || ingredient0.GetLiquidType() == LIQUID_DISINFECTANT || ingredient0.GetLiquidType() == LIQUID_SOLUTION)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
	
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
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

class CraftDadaCannibalSoup_Ragout extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Ragout";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 90;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_CannibalDicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_CannibalDicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaCannibalSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibalSoup_Ragout");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C

			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 200)
			{
				return false;
			}

			if (ingredient0.GetLiquidType() == LIQUID_NONE || ingredient0.GetLiquidType() == LIQUID_SALINE || ingredient0.GetLiquidType() == LIQUID_VODKA || ingredient0.GetLiquidType() == LIQUID_BEER || ingredient0.GetLiquidType() == LIQUID_DISINFECTANT || ingredient0.GetLiquidType() == LIQUID_SOLUTION)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
	
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
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

class CraftDadaCannibalSoup_TomatoSauce extends Craft_DadaTemp1Stage1_BaseRecipe //works
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Tomato Sauce";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BloodBagFull");//you can insert multiple ingredients this way
		InsertIngredient(0,"BloodBagIV");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibalSoup_TomatoSauce");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
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

class CraftDadaCannibalSoup_TomatoSauce1 extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe //works
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Tomato Sauce";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("DadaCannibalSoup_TomatoSauce");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C

			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 200)
			{
				return false;
			}

			if (ingredient0.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
	
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
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

class Craft_DadaCannibal_RawFoodCan_STAGham extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft STAG Ham Can";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"HumanSteakMeat");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");//you can insert multiple ingredients this wa
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalSTAGham");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class Craft_DadaCannibal_RawFoodCan_LSSPAM extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock SPAM Can";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"HumanSteakMeat");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");//you can insert multiple ingredients this wa
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalLSSPAM");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaCannibalDish_GroundMeat extends Craft_DadaTemp1Stage1_BaseRecipe //works
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Ground Meat";
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(0,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");//you can insert multiple ingredients this way

		//result1
		AddResult("DadaCannibalDish_GroundMeat");//add results here

		m_ResultSetQuantity[0] = 65;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class Craft_DadaCannibal_RawFoodCan_ESPENChunkySoup extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe //works
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Chunky Soup";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"BloodBagFull");//you can insert multiple ingredients this way
		InsertIngredient(0,"BloodBagIV");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalESPENChunkySoup");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
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

class Craft_DadaCannibal_RawFoodCan_ESPENChunkySoup1 extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe //works
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Chunky Soup";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalESPENChunkySoup");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
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

			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 200)
			{
				return false;
			}

			if (ingredient0.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
	
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
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

class Craft_DadaCannibal_RawFoodCan_STAGchili extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft STAG Chili Can";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BloodBagFull");//you can insert multiple ingredients this way
		InsertIngredient(0,"BloodBagIV");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaCannibalDish_GroundMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalSTAGchili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
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

class Craft_DadaCannibal_RawFoodCan_STAGchili1 extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft STAG Chili Can";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaCannibalDish_GroundMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalSTAGchili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C

			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 200)
			{
				return false;
			}

			if (ingredient0.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
	
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
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

class Craft_DadaCannibal_RawFoodCan_DicedTomatoes extends Craft_DadaTemp1Stage1_BaseRecipe //works
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Diced Tomatoes Can";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BloodBagFull");//you can insert multiple ingredients this way
		InsertIngredient(0,"BloodBagIV");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalDicedTomatoes");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
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

class Craft_DadaCannibal_RawFoodCan_DicedTomatoes1 extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe //works
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Diced Tomatoes Can";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalDicedTomatoes");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C

			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 200)
			{
				return false;
			}

			if (ingredient0.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
	
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
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

class Craft_DadaCannibal_RawFoodCan_Ketchup extends RecipeBase //works
{
	override void Init()
	{
		m_Name = "Craft Ketchup Can";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------

		//INGREDIENTS
		//ingredient 0
		InsertIngredient(0,"BloodBagIV");//you can insert multiple ingredients this way
		InsertIngredient(0,"BloodBagFull");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 1
		InsertIngredient(1,"BloodBagIV");//you can insert multiple ingredients this way
		InsertIngredient(1,"BloodBagFull");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------

		//result1
		AddResult("Dada_RawFoodCan_CannibalKetchup");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{  
		return true;
    }

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};


class Craft_DadaCannibal_RawFoodCan_Ketchup1 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Ketchup Can";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------

		//INGREDIENTS
		//ingredient 0
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 1
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------

		//result1
		AddResult("Dada_RawFoodCan_CannibalKetchup");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;

		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			if (ingredient0.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}

			if (ingredient1.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}
			// by this point we know the 2 ingredients are both good temperatures and have good food stages
			return true;
		}
		// initial ingredients are wrong, false
   		return false;
   	}
	
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class Craft_DadaCannibal_RawFoodCan_Ketchup2 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Ketchup Can";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------

		//INGREDIENTS
		//ingredient 0
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 1
		InsertIngredient(1,"BloodBagIV");//you can insert multiple ingredients this way
		InsertIngredient(1,"BloodBagFull");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------

		//result1
		AddResult("Dada_RawFoodCan_CannibalKetchup");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;

		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			if (ingredient0.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}

			if (ingredient1.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}
			// by this point we know the 2 ingredients are both good temperatures and have good food stages
			return true;
		}
		// initial ingredients are wrong, false
   		return false;
   	}
	
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class Craft_DadaCannibal_RawFoodCan_HomemadeChili extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft STAG Chili Can";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BloodBagFull");//you can insert multiple ingredients this way
		InsertIngredient(0,"BloodBagIV");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaCannibalDish_GroundMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalSTAGchili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
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

class Craft_DadaCannibal_RawFoodCan_HomemadeChili1 extends Craft_DadaTempLiquidTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft STAG Chili Can";
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bottle_Base");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaCannibalDish_GroundMeat");
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//result1
		AddResult("Dada_RawFoodCan_CannibalSTAGchili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables
		ItemBase ingredient0;
		ItemBase ingredient1;
		if (Class.CastTo(ingredient0, ingredients[0]) && Class.CastTo(ingredient1, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C

			if (ingredient0.GetTemperature() < 10 || ingredient0.GetTemperature() > 200)
			{
				return false;
			}

			if (ingredient0.GetLiquidType() != GROUP_LIQUID_BLOOD)
			{
				return false;
			}


			// if the ingredient 2 is cooler than 10C or hotter than 70C
	
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
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
