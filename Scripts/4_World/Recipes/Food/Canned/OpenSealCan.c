class Craft_OpenCan extends RecipeBase
{	
	override void Init()
	{
		m_Name = "OpenCan";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = 0.01;// value > 0 for roughness, value < 0 for precision
		
		m_AnywhereInInventory = false;//is this recipe valid even when neither of the items is in hands
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
		//ingredient 1
		InsertIngredient(0,"Dada_PreservedFoodCan_Colorbase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
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
		
		m_IngredientAddHealth[1] = -0.5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		//AddResult("");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 0;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
		
		//----------------------------------------------------------------------------------------------------------------------
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
		string newItemName = string.Format("%1_Opened", ingredients[0].GetType()); 
		//DamageTool(tool,player);
	}
};

class Craft_SealCan extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Seal Canned Goods";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"Pliers");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -10;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"Dada_RawFoodCan_Colorbase");//you can insert multiple ingredients this way
    
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		AddResult("Dada_PreservedFoodCan_");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = 1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    // check to see if the food can is baked or boiled. do not let them can the food if it is not cooked
    Dada_RawFoodCan_Colorbase can = Dada_RawFoodCan_Colorbase.Cast(ingredients[1]);
    if (can && (can.IsFoodBaked() || can.IsFoodBoiled() || can.IsFoodDried()))
    {
      return true;    
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Dada_RawFoodCan_Colorbase can = Dada_RawFoodCan_Colorbase.Cast(ingredients[1]);
    if (can && results[0])
    {
      // transfer the quantity properties
      results[0].SetQuantity(can.GetQuantity());
    }
    Debug.Log("Dada_RawFoodCanGoods: Recipe Do method called","recipes");
	}
};