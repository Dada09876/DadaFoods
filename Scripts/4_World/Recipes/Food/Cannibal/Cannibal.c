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
		m_Name = "Craft Hooman Jerky";
	
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
	
		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		
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

class CraftDadaWasteBread_Baguette extends Craft_DadaTempStage_BaseRecipe
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

class CraftDadaWasteBread_Pasta extends Craft_DadaTempStage_BaseRecipe
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

class CraftDadaWasteBread_Pizza extends Craft_DadaTempStage_BaseRecipe
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

class CraftDadaWasteBread_PizzaBase extends 

class CraftDadaCannibalDish_Rigatoni extends 

class CraftDadaCannibalDish_Chili extends 

class CraftDadaCannibalDish_Pie extends 

class CraftDadaCannibalSoup_TomatoSoup extends 

class CraftDadaCannibalSoup_Ragout extends 

class CraftDadaCannibalDish_GroundMeat extends 

class CraftDadaCannibalSoup_TomatoSauce extends 

class CraftDadaCannibalDish_Spaghetti extends 

class CraftDadaCannibalDish_Cannelloni extends 

class CraftDadaCannibalDish_Bowties extends 

class CraftDadaCannibalDish_Lasagna extends 

class CraftDadaCannibalDish_PulledPork extends 

class CraftDadaCannibalDish_Sausage extends 

class CraftDadaCannibalDrink_MilkShake extends 