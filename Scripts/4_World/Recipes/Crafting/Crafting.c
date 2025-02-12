class CraftDadaCharcoalPiece extends Craft_DadaTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		m_Name = "Scrape off burnt parts";
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
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
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Edible_Base");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaCharcoalPiece");//add results here

		m_ResultSetQuantity[0] = 1;//-1 = do nothing
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
			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient2.GetTemperature() < 10 || ingredient2.GetTemperature() > 70)
			{
				return false;
			}
			FoodStage foodStage2 = ingredient1.GetFoodStage();
			// if the food is raw, burnt or rotten
			if (foodStage2.IsFoodRaw() || foodStage2.IsFoodRotten() || foodStage2.IsFoodBaked() || foodStage2.IsFoodBoiled() || foodStage2.IsFoodDried())
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


class CraftDadaCharcoalTabs extends Craft_DadaTemp1Liquid1_BaseRecipe
{
	override void Init()
	{
		m_Name = "Craft Charcoal Pills";
		
		//conditions
		
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaCharcoalPiece");//you can insert multiple ingredients this way
	
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		
		//result1
		AddResult("CharcoalTablets");//add results here

		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultReplacesIngredient[0] = 0;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		// define my variables

		ItemBase ingredient2;
		if (Class.CastTo(ingredient2, ingredients[1]))
		{
			
			// if the ingredient 2 is cooler than 10C or hotter than 70C
			if (ingredient2.GetTemperature() < 50 || ingredient2.GetTemperature() > 100)
			{
				return false;
			}
		
			if (ingredient2.GetLiquidType() == LIQUID_NONE || GROUP_LIQUID_BLOOD || LIQUID_SALINE || LIQUID_VODKA || LIQUID_BEER || LIQUID_GASOLINE || LIQUID_DIESEL || LIQUID_DISINFECTANT || LIQUID_SOLUTION)
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

class CraftDadaCoffeePacket extends Craft_DadaTemp_BaseRecipe
{
	override void Init()
	{
		m_Name = "Make Infusion Packet";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_Coffee");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -60;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Paper");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaCoffeePacket");//add results here

		m_ResultSetQuantity[0] = 50;//-1 = do nothing
	}
};

class CraftDadaGreenTeaPacket extends Craft_DadaTemp_BaseRecipe
{
	override void Init()
	{
		m_Name = "Make Infusion Packet";

		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_GreenTea");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -60;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Paper");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaGreenTeaPacket");//add results here

		m_ResultSetQuantity[0] = 50;//-1 = do nothing
	}
};

class CraftDadaBlackTeaPacket extends Craft_DadaTemp_BaseRecipe
{
	override void Init()
	{
		m_Name = "Make Infusion Packet";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_BlackTea");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -60;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"Paper");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaBlackTeaPacket");//add results here

		m_ResultSetQuantity[0] = 50;//-1 = do nothing
	}
};

class CraftDadaBoneMeal extends Craft_Dada_BaseRecipe
{
	override void Init()
	{
		m_Name = "Craft Bone Meal";
		
		//conditions
		m_MinQuantityIngredient[0] = 10;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bone");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = false;//true = destroy, false = do nothing
		
		//result1
		AddResult("DadaBoneMeal");//add results here

		m_ResultSetQuantity[0] = 300;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{  
		return true
    }

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaCheeseMold1 extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Cheese Mold"; //oink, create proper string

		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 5;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"BurlapSack");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaCheeseMold");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
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

class CraftDadaCheeseMold extends Craft_Dada_BaseRecipe
{
	override void Init()
	{
		m_Name = "Craft Cheese Mold";
		
		//conditions
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Pot");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"BurlapSack");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaCheeseMold");//add results here

		m_ResultSetQuantity[0] = 1;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultReplacesIngredient[0] = 0;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}
};

class RepairDadaCheeseMold extends Craft_Dada_BaseRecipe
{
	override void Init()
	{
		m_Name = "Repair Cheese Mold";
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
	
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaCheeseMold");//you can insert multiple ingredients this way
		
		//ingredient 2
		InsertIngredient(1,"BurlapSack");//you can insert multiple ingredients this way
		
		//result1
		AddResult("DadaCheeseMold");//add results here

		m_ResultSetQuantity[0] = 1;//-1 = do nothing
	}
};