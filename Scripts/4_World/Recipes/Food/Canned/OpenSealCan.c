class Craft_OpenCan extends Craft_Dada_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "OpenCan";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = 0.01;// value > 0 for roughness, value < 0 for precision

		m_AnywhereInInventory = false;//is this recipe valid even when neither of the items is in hands
		//conditions
		m_MinQuantityIngredient[0] = -1;//-1 = disable check

		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Dada_PreservedFoodCan_Colorbase");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"Sickle");//you can insert multiple ingredients this way
		InsertIngredient(1,"KukriKnife");
		InsertIngredient(1,"FangeKnife");
		InsertIngredient(1,"Hacksaw");
		InsertIngredient(1,"KitchenKnife");
		InsertIngredient(1,"SteakKnife");
		InsertIngredient(1,"StoneKnife");
		InsertIngredient(1,"CombatKnife");
		InsertIngredient(1,"HuntingKnife");
		InsertIngredient(1,"Machete");
		InsertIngredient(1,"CrudeMachete");
		InsertIngredient(1,"OrientalMachete");
		InsertIngredient(1,"AK_Bayonet");
		InsertIngredient(1,"M9A1_Bayonet");
		InsertIngredient(1,"Mosin_Bayonet");
		InsertIngredient(1,"SKS_Bayonet");
		InsertIngredient(1,"CanOpener");
		InsertIngredient(1,"FarmingHoe");
		InsertIngredient(1,"Shovel");
		InsertIngredient(1,"FieldShovel");
		InsertIngredient(1,"Crowbar");
		InsertIngredient(1,"Hammer");
		InsertIngredient(1,"Wrench");
		InsertIngredient(1,"Screwdriver");
		InsertIngredient(1,"BaseballBat");
		InsertIngredient(1,"Pickaxe");
		InsertIngredient(1,"WoodAxe");
		InsertIngredient(1,"FirefighterAxe");
		InsertIngredient(1,"Hatchet");
		InsertIngredient(1,"HandSaw");
		InsertIngredient(1,"Pliers");
		InsertIngredient(1,"Spear");
		InsertIngredient(1,"BoneKnife");
		InsertIngredient(1,"MeatTenderizer");
		InsertIngredient(1,"Cleaver");
		InsertIngredient(1,"Sword");

		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing

		//result1
		//AddResult("");//add results here

		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		if ( player.IsPlacingLocal() )
			return false;

		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		ItemBase can;
		Class.CastTo(can, ingredients[0]);
		ItemBase tool;
		Class.CastTo(tool, ingredients[1]);
		PlayerBase playerPB;
		Class.CastTo(playerPB, player);
		OpenItem.OpenAndSwitch(tool, can, playerPB, specialty_weight);
	}
};

class Craft_SealCan extends Craft_Dada_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Seal Canned Goods";	// action name in game
		
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
	
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		
		//ingredient 1
		InsertIngredient(0,"Pliers");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -10;	// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_Colorbase");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[1] = -1;// -1 = do nothing

		//result 1
		AddResult("Dada_PreservedFoodCan_");	// recipe result

		m_ResultSetQuantity[0] = -1;			// result quantity
	}

  	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		// check to see if the food can is baked or boiled. do not let them can the food if it is not cooked
		Dada_RawFoodCan_Colorbase can;
		if (Class.CastTo(can, ingredients[1]))
		{
			FoodStage foodStage = can.GetFoodStage();
			bool isFoodCooked = foodStage.IsFoodBaked() || foodStage.IsFoodBoiled() || foodStage.IsFoodDried();
			return isFoodCooked;
		}
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Dada_RawFoodCan_Colorbase can;
		if (Class.CastTo(can, ingredients[0]) && results[0])
		{
			results[0].SetQuantity(can.GetQuantity());
		}
		Debug.Log("Dada_RawFoodCanGoods: Recipe Do method called","recipes");
	}
};