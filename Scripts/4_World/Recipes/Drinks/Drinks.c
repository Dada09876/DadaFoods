class CraftDadaDrink_FreshMilk extends Craft_DadaTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Fresh Milk";
		
		m_MinQuantityIngredient[0] = 38;//-1 = disable check
		m_MinQuantityIngredient[1] = 250;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"PowderedMilk");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -262;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_FreshMilk");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables

		ItemBase ingredient1;
		if (Class.CastTo(ingredient1, ingredients[1]))
		{
			
			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 200)
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

class CraftDadaDrink_MilkBottle extends Craft_DadaTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Milk Bottle";
		
		m_MinQuantityIngredient[0] = 76;//-1 = disable check
		m_MinQuantityIngredient[1] = 500;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"PowderedMilk");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -138;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddQuantity[1] = -850;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_MilkBottle");//add results here

		m_ResultSetQuantity[0] = 1000;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables

		ItemBase ingredient1;
		if (Class.CastTo(ingredient1, ingredients[1]))
		{
			
			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 200)
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

class CraftDadaDrink_MilkCarton extends Craft_DadaTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Milk Carton";
	
		m_MinQuantityIngredient[0] = 76;//-1 = disable check
		m_MinQuantityIngredient[1] = 500;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"PowderedMilk");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -138;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddQuantity[1] = -850;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_MilkCarton");//add results here

		m_ResultSetQuantity[0] = 1000;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables

		ItemBase ingredient1;
		if (Class.CastTo(ingredient1, ingredients[1]))
		{
			
			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 200)
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

class CraftDadaDrink_MilkGallon extends Craft_DadaTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Milk Gallon";
		
		m_MinQuantityIngredient[0] = 200;//-1 = disable check
		m_MinQuantityIngredient[1] = 2000;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"PowderedMilk");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -200;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddQuantity[1] = -3400;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_MilkGallon");//add results here

		m_ResultSetQuantity[0] = 4000;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables

		ItemBase ingredient1;
		if (Class.CastTo(ingredient1, ingredients[1]))
		{
			
			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 200)
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

class CraftDadaDrink_MilkShake extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft MilkShake";
		
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
        InsertIngredient(0,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
    
		m_IngredientAddQuantity[0] = -159;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
        InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
    
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;//true = destroy, false = do nothing
		
		//result1
		AddResult("DadaDrink_MilkShake");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}
};

class CraftDadaDrink_CurdsAndWhey extends Craft_DadaTempStageTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Curds and Whey";
		
		m_MinQuantityIngredient[0] = 200;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
	
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaSpawned_Yeast");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_CurdsAndWhey");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}
};

class CraftDadaDrink_Coffee extends Craft_DadaTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Coffee";

		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaCoffeePacket");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_Coffee");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables

		ItemBase ingredient1;
		if (Class.CastTo(ingredient1, ingredients[1]))
		{
			
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

class CraftDadaDrink_MilkCoffee extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Milk Coffee";

		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaDrink_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCoffee");
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
		
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_MilkCoffee");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}
};

class CraftDadaDrink_MilkCoffee1 extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Milk Coffee";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaCoffeePacket");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
		
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_MilkCoffee");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}
};

class CraftDadaDrink_MilkCoffeeArt extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Creamer design";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_MilkCoffee");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCoffeeArt");//you can insert multiple ingredients this way
        
		m_IngredientAddQuantity[0] = -200;// 0 = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_MilkCoffeeArt");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}
};

class CraftDadaDrink_MilkCoffeeArt1 extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Creamer design";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaCoffeePacket");//you can insert multiple ingredients this way
        
		m_IngredientAddQuantity[0] = -200;// 0 = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_MilkCoffeeArt");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}
};


class CraftDadaDrink_GreenTea extends Craft_DadaTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Green Tea";

		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_GreenTea");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaGreenTeaPacket");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_GreenTea");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}
	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables

		ItemBase ingredient1;
		if (Class.CastTo(ingredient1, ingredients[1]))
		{
			
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

class CraftDadaDrink_BlackTea extends Craft_DadaTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Black Tea";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_BlackTea");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaBlackTeaPacket");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w

		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDrink_BlackTea");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables

		ItemBase ingredient1;
		if (Class.CastTo(ingredient1, ingredients[1]))
		{
			
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