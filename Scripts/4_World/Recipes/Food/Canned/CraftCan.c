class Craft_DadaFoodCan_BaseRecipe extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Food Can";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check

		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check

		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------

		//INGREDIENTS
		//ingredient 1
		// InsertIngredient(0,"Tomato");
        // InsertIngredient(0,"GreenBellPepper");
        // InsertIngredient(0,"Zucchini");
        // InsertIngredient(0,"SlicedPumpkin");
        // InsertIngredient(0,"Potato");
        // InsertIngredient(0,"PotatoSeed");

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
        // InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
        // InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        // InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way
        // InsertIngredient(1,"SlicedPumpkin");//you can insert multiple ingredients this way
        // InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
        // InsertIngredient(1,"PotatoSeed");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------

		//result1
		// AddResult("Dada_RawFoodCan_LSVeggies");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 100;//-1 = do nothing
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
		ItemBase ingredient1;
		ItemBase ingredient2;
		if (Class.CastTo(ingredient1, ingredients[0]) && Class.CastTo(ingredient2, ingredients[1]))
		{
			// if the ingredient 1 is cooler than 10C or hotter than 70C
			if (ingredient1.GetTemperature() < 10 || ingredient1.GetTemperature() > 70)
			{
				return false;
			}
			FoodStage foodStage1 = ingredient1.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage1.IsFoodRaw() || foodStage1.IsFoodBurned() || foodStage1.IsFoodRotten())
			{
				return false;
			}

			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient2.GetTemperature() < 10 || ingredient2.GetTemperature() > 70)
			{
				return false;
			}
			FoodStage foodStage2 = ingredient1.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage2.IsFoodRaw() || foodStage2.IsFoodBurned() || foodStage2.IsFoodRotten())
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


class Craft_Dada_RawFoodCan_LSVeggies extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Veggies Can";

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");
        InsertIngredient(0,"GreenBellPepper");
        InsertIngredient(0,"Zucchini");
        InsertIngredient(0,"SlicedPumpkin");
        InsertIngredient(0,"Potato");
        InsertIngredient(0,"PotatoSeed");

		//ingredient 2
        InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
        InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way
        InsertIngredient(1,"SlicedPumpkin");//you can insert multiple ingredients this way
        InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
        InsertIngredient(1,"PotatoSeed");//you can insert multiple ingredients this way

		//result1
		AddResult("Dada_RawFoodCan_LSVeggies");//add results here
	}
};
class Craft_Dada_RawFoodCan_STAGham extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft STAG Ham Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"MouflonSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"BoarSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"PigSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"DeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"WolfSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"BearSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"CowSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"SheepSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"FoxSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(0,"ReindeerSteakMeat");
		InsertIngredient(0,"FoxSteakMeat");

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
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"FoxSteakMeat");

		//result1
		AddResult("Dada_RawFoodCan_STAGham");//add results here
	}
};
class Craft_Dada_RawFoodCan_ESPENChunkySoup extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Chunky Soup";

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");
        InsertIngredient(0,"MouflonSteakMeat");
        InsertIngredient(0,"BoarSteakMeat");
        InsertIngredient(0,"PigSteakMeat");
        InsertIngredient(0,"DeerSteakMeat");
        InsertIngredient(0,"WolfSteakMeat");
        InsertIngredient(0,"BearSteakMeat");
        InsertIngredient(0,"CowSteakMeat");
        InsertIngredient(0,"SheepSteakMeat");
        InsertIngredient(0,"FoxSteakMeat");
        InsertIngredient(0,"ChickenBreastMeat");
        InsertIngredient(0,"RabbitLegMeat");
		InsertIngredient(0,"ReindeerSteakMeat");
        //InsertIngredient(0,"srpChickenleg");
        //InsertIngredient(0,"srpSausage");
        //InsertIngredient(0,"srpStew_GroundBeef");

		//ingredient 2
        InsertIngredient(1,"Tomato");
        InsertIngredient(1,"GreenBellPepper");
        InsertIngredient(1,"Zucchini");
        InsertIngredient(1,"SlicedPumpkin");
        InsertIngredient(1,"Potato");
        InsertIngredient(1,"PotatoSeed");

		//result1
		AddResult("Dada_RawFoodCan_ESPENChunkySoup");//add results here
	}
};
class Craft_Dada_RawFoodCan_LSSPAM extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock SPAM Can";

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"MouflonSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"BoarSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"PigSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"DeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"WolfSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"BearSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"CowSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"SheepSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(0,"ReindeerSteakMeat");
		InsertIngredient(0,"FoxSteakMeat");

		//ingredient 2
        InsertIngredient(1,"GoatSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"MouflonSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BoarSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"PigSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"DeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"WolfSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BearSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"CowSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"FoxSteakMeat");

		//result1
		AddResult("Dada_RawFoodCan_LSSPAM");//add results here
	}
};
class Craft_Dada_RawFoodCan_STAGchili extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft STAG Chili Can";

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GreenBellPepper");

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
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(1,"ReindeerSteakMeat");

		//result1
		AddResult("Dada_RawFoodCan_STAGchili");//add results here
	}
};
class Craft_Dada_RawFoodCan_ESPENMacnCheese extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Mac & Cheese Can";
		//INGREDIENTS
		//ingredient 1
		m_MinQuantityIngredient[0] = 25;//-1 = disable check
		m_MinQuantityIngredient[1] = 25;//-1 = disable check

        InsertIngredient(0,"DadaBread_Pasta");
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing

		//ingredient 2
    	InsertIngredient(1,"DadaRaw_Mozza");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRaw_CheddarCurds");//you can insert multiple ingredients way
		InsertIngredient(1,"DadaRaw_Feta");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRaw_FreshGoatCheese");//you can insert multiple ingredients
		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		//result1
		AddResult("Dada_RawFoodCan_ESPENMacnCheese");//add results here
	}
};
class Craft_Dada_RawFoodCan_DicedTomatoes extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Diced Tomatoes Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way

		//ingredient 2
        InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way

		//result1
		AddResult("Dada_RawFoodCan_DicedTomatoes");//add results here
	}
};
class Craft_Dada_RawFoodCan_Ketchup extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Ketchup Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way
		//ingredient 2
        InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
        InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way

		//result1
		AddResult("Dada_RawFoodCan_Ketchup");//add results here
	}
};
class Craft_Dada_RawFoodCan_Paella extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Paella Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		//InsertIngredient(0,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"Rice");
        InsertIngredient(0,"Dada_Raw_Rice");
		InsertIngredient(0,"WalleyePollockFilletMeat");
		InsertIngredient(0,"SteelheadTroutFilletMeat");

		//ingredient 2
        InsertIngredient(1,"Tomato");
        InsertIngredient(1,"GreenBellPepper");
        InsertIngredient(1,"Zucchini");
        InsertIngredient(1,"SlicedPumpkin");
        InsertIngredient(1,"Potato");
        InsertIngredient(1,"PotatoSeed");
        InsertIngredient(1,"GoatSteakMeat");
        InsertIngredient(1,"MouflonSteakMeat");
        InsertIngredient(1,"BoarSteakMeat");
        InsertIngredient(1,"PigSteakMeat");
        InsertIngredient(1,"DeerSteakMeat");
        InsertIngredient(1,"WolfSteakMeat");
        InsertIngredient(1,"BearSteakMeat");
        InsertIngredient(1,"CowSteakMeat");
        InsertIngredient(1,"SheepSteakMeat");
        InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"FoxSteakMeat");
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");
        InsertIngredient(1,"ChickenBreastMeat");
        InsertIngredient(1,"RabbitLegMeat");
        //InsertIngredient(1,"srpChickenleg");
        //InsertIngredient(1,"srpSausage");
        //InsertIngredient(1,"srpStew_GroundBeef");
        InsertIngredient(1,"CarpFilletMeat");
        InsertIngredient(1,"MackerelFilletMeat");
        InsertIngredient(1,"Bitterlings");
        InsertIngredient(1,"Sardines");
        //InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//result1
		AddResult("Dada_RawFoodCan_Paella");//add results here
	}
};
class Craft_Dada_RawFoodCan_PumpkinPuree extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Pumpkin Puree Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Pumpkin");

		//ingredient 2
        InsertIngredient(1,"Pumpkin");

		//result1
		AddResult("Dada_RawFoodCan_PumpkinPuree");//add results here
	}
};
class Craft_Dada_RawFoodCan_Quail extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Quail Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpChickenleg");//you can insert multiple ingredients this way
		//ingredient 2
        InsertIngredient(1,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
		//result1
		AddResult("Dada_RawFoodCan_Quail");//add results here

	}
};
class Craft_Dada_RawFoodCan_Relish extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Relish Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Zucchini");
		//ingredient 2
        InsertIngredient(1,"GreenBellPepper");
        InsertIngredient(1,"Zucchini");

		//result1
		AddResult("Dada_RawFoodCan_Relish");//add results here
	}
};
class Craft_Dada_RawFoodCan_Samosa extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Samosa filling Can";

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Potato");
        InsertIngredient(0,"PotatoSeed");

		//ingredient 2
        InsertIngredient(1,"GreenBellPepper");
        InsertIngredient(1,"Potato");
        InsertIngredient(1,"PotatoSeed");
        InsertIngredient(1,"GoatSteakMeat");
        InsertIngredient(1,"MouflonSteakMeat");
        InsertIngredient(1,"BoarSteakMeat");
        InsertIngredient(1,"PigSteakMeat");
        InsertIngredient(1,"DeerSteakMeat");
        InsertIngredient(1,"WolfSteakMeat");
        InsertIngredient(1,"BearSteakMeat");
        InsertIngredient(1,"CowSteakMeat");
        InsertIngredient(1,"SheepSteakMeat");
        InsertIngredient(1,"FoxSteakMeat");
        InsertIngredient(1,"ChickenBreastMeat");
        InsertIngredient(1,"RabbitLegMeat");
        //InsertIngredient(1,"srpChickenleg");
        //InsertIngredient(1,"srpSausage");
        //InsertIngredient(1,"srpStew_GroundBeef");
        InsertIngredient(1,"CarpFilletMeat");
        InsertIngredient(1,"MackerelFilletMeat");
        InsertIngredient(1,"Bitterlings");
        InsertIngredient(1,"Sardines");
		InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");

		//result1
		AddResult("Dada_RawFoodCan_Samosa");//add results here
	}
};
class Craft_Dada_RawFoodCan_HomemadeChili extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Homemade Chili Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way
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
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(1,"ReindeerSteakMeat");

		//result1
		AddResult("Dada_RawFoodCan_HomemadeChili");//add results here
	}
};
class Craft_Dada_RawFoodCan_HomemadePumpkinPuree extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Perky Pumpkin Pure Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"SlicedPumpkin");
		//ingredient 2
        InsertIngredient(1,"SlicedPumpkin");

		//result1
		AddResult("Dada_RawFoodCan_HomemadePumpkinPuree");//add results here
	}
};
class Craft_Dada_RawFoodCan_Crab extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Crab Can";
		//INGREDIENTS
		//ingredient 1
        InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		//InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"WalleyePollockFilletMeat");
		InsertIngredient(0,"SteelheadTroutFilletMeat");
		//ingredient 2
        InsertIngredient(1,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(1,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		//InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");
		//result1
		AddResult("Dada_RawFoodCan_Crab");//add results here
	}
};
class Craft_Dada_RawFoodCan_Clam extends Craft_DadaFoodCan_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Clam Can";
		//INGREDIENTS
		//ingredient 1
        //InsertIngredient(0,"SRP_ClamFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		//InsertIngredient(0,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		//InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"WalleyePollockFilletMeat");
		InsertIngredient(0,"SteelheadTroutFilletMeat");
		//ingredient 2
        InsertIngredient(1,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(1,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		//InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");

		//result1
		AddResult("Dada_RawFoodCan_Clam");//add results here
	}
};