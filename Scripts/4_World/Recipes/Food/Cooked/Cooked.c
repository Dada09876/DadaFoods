class CraftDadaBread_Base extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Dough";
	
		//conditions
		m_MinQuantityIngredient[0] = 35;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_Flour");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -35;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaSpawned_Yeast");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		
		//result1
		AddResult("DadaBread_RoundDough");//add results here

		m_ResultSetFullQuantity[0] = 250;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaBread_Pita extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Flat Bread";
		
		//conditions
		m_MinQuantityIngredient[0] = 125;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -250;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		InsertIngredient(1,"Hatchet");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
	
		//result1
		AddResult("DadaBread_Pita");//add results here

		m_ResultSetQuantity[0] = 250;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (
	}
};

class CraftDadaBread_Loaf extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Loaf";

		m_MinQuantityIngredient[0] = 125;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -250;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
	
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		InsertIngredient(1,"Hatchet");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
	
		//result1
		AddResult("DadaBread_Loaf");//add results here

		m_ResultSetQuantity[0] = 250;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaBread_Baguette extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Baguette";
		
		m_MinQuantityIngredient[0] = 125;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -250;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		InsertIngredient(1,"Hatchet");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
	
		//result1
		AddResult("DadaBread_Baguette");//add results here

		m_ResultSetQuantity[0] = 250;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;
	}
};

class CraftDadaBread_Pasta extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Raw Pasta";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -250;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		InsertIngredient(1,"Hatchet");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
	
		//result1
		AddResult("DadaBread_Pasta");//add results here

		m_ResultSetQuantity[0] = 250;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaBread_Pizza extends Craft_DadaTempStage_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Pizza Bianca";
		
		m_MinQuantityIngredient[0] = 125;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -250;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		InsertIngredient(1,"Hatchet");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		
		//result1
		AddResult("DadaBread_Pizza");//add results here

		m_ResultSetQuantity[0] = 250;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;
	}
};

class CraftDadaDish_Spaghetti extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Spaghetti";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Spaghetti");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;
	}
};

class CraftDadaDish_Cannelloni extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Cannelloni";

		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
	
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Cannelloni");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;//-1 = do nothing
	}
};

class CraftDadaDish_Bowties extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Bowties";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way

		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Bowties");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Lasagna extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Lasagna";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Lasagna");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Rigatoni extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Rigatoni";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
	
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Rigatoni");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaBread_PizzaMarinara extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Pizza Marinara";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pizza");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -125;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaBread_PizzaBase");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaBread_PizzaMargherita extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Make Pizza Margherita";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"DadaBread_PizzaBase");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -125;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaRaw_Mozza");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaBread_PizzaMargherita");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_GroundMeat extends Craft_DadaTemp1Stage1_BaseRecipe
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
		InsertIngredient(0,"Hatchet");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
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
		InsertIngredient(1,"ReindeerSteakMeat");//you can insert multiple ingredients this way

		//result1
		AddResult("DadaDish_GroundMeat");//add results here

		m_ResultSetQuantity[0] = 65;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_MashedPotatoes extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Mashed Potatoes";
		
		//conditions
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(0,"MeatTenderizer");//you can insert multiple ingredients this way
		InsertIngredient(0,"Hatchet");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaDish_MashedPotatoes");//add results here

		m_ResultSetQuantity[0] = 65;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_MashedPotatoes1 extends Craft_Dada_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Mashed Potatoes";

		//conditions
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(0,"MeatTenderizer");//you can insert multiple ingredients this way
		InsertIngredient(0,"Hatchet");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
	
		//ingredient 2
		InsertIngredient(1,"PotatoSeed");//you can insert multiple ingredients this way
	
		//result1
		AddResult("DadaDish_MashedPotatoes");//add results here

		m_ResultSetQuantity[0] = 65;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_MashedPotatoes2 extends Craft_DadaTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Mashed Potatoes";

		//conditions
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"PotatoSeed");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
	
		//result1
		AddResult("DadaDish_MashedPotatoes");//add results here

		m_ResultSetQuantity[0] = 130;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_MashedPotatoes3 extends Craft_Dada_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Mashed Potatoes";

		//conditions
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"PotatoSeed");//you can insert multiple ingredients this way
	
		//ingredient 2
		InsertIngredient(1,"PotatoSeed");//you can insert multiple ingredients this way
	
		//result1
		AddResult("DadaDish_MashedPotatoes");//add results here

		m_ResultSetQuantity[0] = 130;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_MashedPotatoes4 extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Mashed Potatoes";

		//conditions
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"Potato");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
	
		//result1
		AddResult("DadaDish_MashedPotatoes");//add results here

		m_ResultSetQuantity[0] = 130;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaSoup_ChickenBroth extends Craft_DadaTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Broth";
		
		//conditions
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MinQuantityIngredient[1] = 375;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bone");//you can insert multiple ingredients this way

		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
	
		m_IngredientAddQuantity[1] = -1000;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSoup_ChickenBroth");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
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

class CraftDadaSoup_ChickenBroth1 extends Craft_DadaTempStageTemp1Liquid1_BaseRecipe
{
	
	override void Init()
	{
		super.Init();
		m_Name = "Craft Broth";
		
		//conditions
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 375;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Lard");//you can insert multiple ingredients this way
	
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddQuantity[1] = -1000;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSoup_ChickenBroth");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
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
			FoodStage foodStage0 = ingredient0.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage0.IsFoodBurned() || foodStage0.IsFoodRotten())
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

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaSoup_ChickenNoodleSoup extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Chicken and Noodles Soup";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 125;//-1 = disable check

		//-----------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
		InsertIngredient(0,"ChickenBreastMeat" );//you can insert multiple ingredients this way
		/*
		InsertIngredient(0,"srpChickenleg" );//you can insert multiple ingredients this way
		*/
		
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaSoup_ChickenBroth");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaSoup_ChickenNoodleSoup");

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Chili extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Chili";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDish_GroundMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BakedBeansCan_Opened");
		
		
		//ingredient 2
		InsertIngredient(1,"BakedBeansCan_Opened");
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Chili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Chili1 extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Chili";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BakedBeansCan");
		
		//ingredient 2
		InsertIngredient(1,"BakedBeansCan_Opened");
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Chili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Chili2 extends Craft_DadaTempStageTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Chili";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDish_GroundMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BakedBeansCan_Opened");
		
		//ingredient 2
		InsertIngredient(1,"BakedBeansCan");
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes");
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili");
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili");
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Chili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Chili3 extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Chili";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BakedBeansCan");
		
		//ingredient 2
		InsertIngredient(1,"BakedBeansCan");
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes");
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili");
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili");
		
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Chili");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaSoup_Gravy extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Gravy";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_Flour");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -20;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaSoup_ChickenBroth");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSoup_Gravy");

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_MushroomCream extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Mushroom cream";
		
		//conditions
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MushroomBase");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"MushroomBase");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_Gravy");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaSoup_MushroomCream");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_SauteedMushrooms extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Sauteed Mushrooms";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MushroomBase");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"MushroomBase");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaDish_SauteedMushrooms");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Pancakes extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Pancakes";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = false;//true = destroy, false = do nothing
		
		//result1
        AddResult("DadaBread_Pancakes");//add results here
    
		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Pie extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Pie";

		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -125;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
        InsertIngredient(1,"Apple");//you can insert multiple ingredients this way
        InsertIngredient(1,"Plum");//you can insert multiple ingredients this way
        InsertIngredient(1,"Pear");//you can insert multiple ingredients this way
        InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
        InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way
       	InsertIngredient(1,"SlicedPumpkin");//you can insert multiple ingredients this way
        InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
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
		InsertIngredient(1,"ReindeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"RabbitLegMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(1,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(1,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"ChubFilletMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"HerringFilletMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"MullowayFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDish_MashedPotatoes");
		InsertIngredient(1,"DadaDish_Chili");
		InsertIngredient(1,"DadaDish_GroundMeat");
		InsertIngredient(1,"DadaDish_Rabbit");
		InsertIngredient(1,"DadaSoup_ClamChowder");
		InsertIngredient(1,"DadaDish_Sausage");
		InsertIngredient(1,"DadaSoup_SauteedMushrooms");
		InsertIngredient(1,"DadaSoup_MushroomCream");
		InsertIngredient(1,"DadaDish_ShepherdsPie");
		InsertIngredient(1,"DadaDish_PulledPork");
		InsertIngredient(1,"Dada_RawFoodCan_Colorbase");
		InsertIngredient(1,"Dada_PreservedFoodCan_Colorbase_Opened");

		//result1
		AddResult("DadaDish_Pie");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Pie1 extends Craft_DadaTempStageTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Pie";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -1;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Marmalade");//you can insert multiple ingredients this way
		InsertIngredient(1,"PeachesCan");//you can insert multiple ingredients this way
		InsertIngredient(1,"BakedBeansCan");
		InsertIngredient(1,"TacticalBaconCan");//you can insert multiple ingredients this way
		InsertIngredient(1,"SardinesCan");
        	InsertIngredient(1,"TunaCan");//you can insert multiple ingredients this way
        	InsertIngredient(1,"FoodCan_250g_ColorBase");//you can insert multiple ingredients this way
		InsertIngredient(1,"FoodCan_100g_ColorBase");
		InsertIngredient(1,"Dada_PreservedFoodCan_Colorbase");
        	InsertIngredient(1,"UnknownFoodCan");//you can insert multiple ingredients this way
		InsertIngredient(1,"PotatoSeed");//you can insert multiple ingredients this wa
		
		//result1
		AddResult("DadaDish_Pie");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaSoup_TomatoSauce extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Tomato Sauce";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaSoup_TomatoSauce");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaSoup_TomatoSoup extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Tomato Soup";

		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaSoup_ChickenBroth");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSoup_TomatoSoup");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_MacaroniAndCheese extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Macaroni And Cheese Bowl";

		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRaw_CheeseBase");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_CurdsAndWhey");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_MacaroniAndCheese");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_ShepardsPie extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Shepard's Pie";

		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
	
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDish_MashedPotatoes");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaDish_GroundMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_ShepherdsPie");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_PulledPork extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Pulled Pork";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaSoup_Gravy");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_RawFoodCan_Ketchup");
		InsertIngredient(0,"Dada_PreservedFoodCan_Ketchup_Opened");
		InsertIngredient(0,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"PigSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"BoarSteakMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_PulledPork");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Sausage extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Sausage";
		
		m_MinQuantityIngredient[0] = 150;//-1 = disable check
		m_MinQuantityIngredient[1] = 30;//-1 = disable check
		
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Guts");//you can insert multiple ingredients this way

		//ingredient 2
		InsertIngredient(1,"DadaDish_GroundMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Sausage");//add results here

		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultReplacesIngredient[0] = 1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}
};

class CraftDadaDish_Pie2 extends Craft_DadaTempStageTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Mold Into Pie";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -250;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		
		//ingredient 2
        InsertIngredient(1,"BakedBeansCan_Opened");
		InsertIngredient(1,"PeachesCan_Opened");
		InsertIngredient(1,"TacticalBaconCan_Opened");
		InsertIngredient(1,"SardinesCan_Opened");
		InsertIngredient(1,"TunaCan_Opened");
		InsertIngredient(1,"FoodCan_250g_Opened_ColorBase");
		InsertIngredient(1,"UnknownFoodCan_Opened");
		InsertIngredient(1,"FoodCan_100g_Opened_ColorBase");
		
		//result1
		AddResult("DadaDish_Pie");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaSoup_Ragout extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Ragout";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSoup_ChickenBroth");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSoup_Ragout");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaSoup_Ragout1 extends Craft_DadaTempStageTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Ragout";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSoup_ChickenBroth");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSoup_Ragout");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};


class CraftDadaDish_Gumbo extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Gumbo";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MouflonSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BoarSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"DeerSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"PigSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"WolfSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BearSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CowSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"SheepSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"FoxSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"ChickenBreastMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"ReindeerSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_RawFoodCan_STAGham");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_STAGham_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_LSSPAM");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_LSSPAM_Opened");
		InsertIngredient(0,"Dada_RawFoodCan_Paella");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella_Opened");
		InsertIngredient(0,"Dada_RawFoodCan_Quail");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Quail_Opened");

		//ingredient 2
		InsertIngredient(1,"DadaRawRice");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Gumbo");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Gumbo1 extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Gumbo";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"TunaCanDuck");//you can insert multi
		InsertIngredient(0,"TacticalBaconCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"UnknownFoodCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_STAGham");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_LSSPAM");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Quail");//you can insert multi
		InsertIngredient(0,"TacticalBaconCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"UnknownFoodCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"TunaCanDuck_Opened");//you can insert multi

		//ingredient 2
		InsertIngredient(1,"DadaRawRice");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Gumbo");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Gumbo2 extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Gumbo";
	
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"TunaCanDuck");//you can insert multi
		InsertIngredient(0,"TacticalBaconCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"UnknownFoodCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_STAGham");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_LSSPAM");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Quail");//you can insert multi
		
		//ingredient 2
		InsertIngredient(1,"Rice");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Gumbo");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Gumbo3 extends Craft_DadaTempStageTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Gumbo";
	
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MouflonSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BoarSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"DeerSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"PigSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"WolfSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BearSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CowSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"SheepSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"FoxSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"ChickenBreastMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"ReindeerSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_RawFoodCan_STAGham");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_STAGham_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_LSSPAM");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_LSSPAM_Opened");
		InsertIngredient(0,"Dada_RawFoodCan_Paella");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella_Opened");
		InsertIngredient(0,"Dada_RawFoodCan_Quail");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Quail_Opened");
		
		//ingredient 2
		InsertIngredient(1,"Rice");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Gumbo");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};


class CraftDadaDish_SeafoodGumbo extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Seafood Gumbo";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(0,"WalleyePollockFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"SteelheadTroutFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_RawFoodCan_Paella");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_Crab");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Crab_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_Clam");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Clam_Opened");//you can insert multi
		
		//ingredient 2
		InsertIngredient(1,"DadaRawRice");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_SeafoodGumbo");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};



class CraftDadaDish_SeafoodGumbo1 extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Seafood Gumbo";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"SardinesCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"TunaCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Crab");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Clam");//you can insert multiple ingredients this way
		InsertIngredient(0,"BakedBeansCanFishEggs");//you can insert multiple ingredients this way
		InsertIngredient(0,"SardinesCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"TunaCan_Opened");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"Rice");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_SeafoodGumbo");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_SeafoodGumbo2 extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Seafood Gumbo";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"SardinesCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"TunaCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Crab");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Clam");//you can insert multiple ingredients this way
		InsertIngredient(0,"BakedBeansCanFishEggs");//you can insert multiple ingredients this way
		InsertIngredient(0,"SardinesCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"TunaCan_Opened");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"DadaRawRice");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_SeafoodGumbo");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_SeafoodGumbo3 extends Craft_DadaTempStageTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Seafood Gumbo";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(0,"WalleyePollockFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"SteelheadTroutFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_RawFoodCan_Paella");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_Crab");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Crab_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_Clam");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Clam_Opened");//you can insert multi
		
		//ingredient 2
		InsertIngredient(1,"Rice");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_SeafoodGumbo");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaSoup_TomatoSauce1 extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Tomato Sauce";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(0,"MeatTenderizer");//you can insert multiple ingredients this way
		InsertIngredient(0,"Hatchet");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaSoup_TomatoSauce");//add results here

		m_ResultSetQuantity[0] = 65;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Fries extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Fries";
		
		//conditions
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check

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
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaDish_Fries");//add results here

		m_ResultSetQuantity[0] = 65;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Fries1 extends Craft_DadaTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Fries";

		//conditions
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
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
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
	
		//ingredient 2
		InsertIngredient(1,"PotatoSeed");//you can insert multiple ingredients this way
	
		//result1
		AddResult("DadaDish_Fries");//add results here

		m_ResultSetQuantity[0] = 65;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_FriteSauce extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Frite Sauce";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDish_Fries");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		
		//ingredient 2
		InsertIngredient(1,"DadaSoup_Gravy");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_FriteSauce");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaDish_Poutine extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Poutine";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDish_FriteSauce");//you can insert multiple ingredients this way
	
		//ingredient 2
		InsertIngredient(1,"DadaRaw_CheddarCurds");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Poutine");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};


class CraftDadaDish_Rabbit extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Rabbit Confit";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
	
		//ingredient 2
		InsertIngredient(1,"DadaSoup_Gravy");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaDish_Rabbit");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaSoup_ClamChowder extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Clam Chowder";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"MullowayFilletMeat");
		InsertIngredient(0,"Dada_RawFoodCan_Clam");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Clam_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_Crab");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Crab_Opened");//you can insert multi
	
		//ingredient 2
		InsertIngredient(1,"DadaSoup_Gravy");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSoup_ClamChowder");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

class CraftDadaSoup_ClamChowder1 extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Clam Chowder";
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Dada_PreservedFoodCan_Clam");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Crab");//you can insert multi
	
		//ingredient 2
		InsertIngredient(1,"DadaSoup_Gravy");//you can insert multiple ingredients this way
		
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSoup_ClamChowder");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}
};

