class CraftDadaBread_Base extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Dough";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 35;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_Flour");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -35;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"DadaSpawned_Yeast");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaBread_Base");//add results here

		m_ResultSetFullQuantity[0] = true;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{  
	// define my variables 
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && vessel.GetTemperature())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[1]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 50);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaBread_Pita extends RecipeBase
{
	override void Init()
	{
		m_Name = "Mold Into Flat Bread";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaBread_Pita");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 50;//-1 = do nothing
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
	ItemBase vessel = ItemBase.Cast(ingredients[0]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (vessel && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[0]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[0]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaBread_Loaf extends RecipeBase
{
	override void Init()
	{
		m_Name = "Mold Into Loaf";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaBread_Loaf");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 50;//-1 = do nothing
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
	ItemBase vessel = ItemBase.Cast(ingredients[0]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (vessel && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[0]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[0]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaBread_Baguette extends RecipeBase
{
	override void Init()
	{
		m_Name = "Mold Into Baguette";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaBread_Baguette");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 50;//-1 = do nothing
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
	ItemBase vessel = ItemBase.Cast(ingredients[0]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (vessel && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[0]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[0]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaBread_Pasta extends RecipeBase
{
	override void Init()
	{
		m_Name = "Mold Into Raw Pasta";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaBread_Pasta");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 50;//-1 = do nothing
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
	ItemBase vessel = ItemBase.Cast(ingredients[0]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (vessel && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[0]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[0]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaBread_Pizza extends RecipeBase
{
	override void Init()
	{
		m_Name = "Mold Into Pizza Dough";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(1,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = -1;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaBread_Pizza");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 50;//-1 = do nothing
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
	ItemBase vessel = ItemBase.Cast(ingredients[0]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (vessel && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[0]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[0]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Spaghetti extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Spaghetti dish";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Spaghetti");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Cannelloni extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Cannelloni dish";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Cannelloni");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Bowties extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Bowties dish";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Bowties");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Lasagna extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Lasagna dish";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Lasagna");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Rigatoni extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Rigatoni";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Rigatoni");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaBread_PizzaBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Pizza Marinara";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pizza");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaBread_PizzaBase");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 250;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_GroundMeat extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Ground Meat";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(0,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
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
		/*
		InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
		InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
		*/



		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_GroundMeat");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
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
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (vessel && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 70 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_MashedPotatoes extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Mashed Potatoes";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(0,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
		
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_MashedPotatoes");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
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
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (vessel && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_MashedPotatoes1 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Mashed Potatoes";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Hammer");//you can insert multiple ingredients this way
		InsertIngredient(0,"MeatTenderizer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"PotatoSeed");//you can insert multiple ingredients this way
		
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_MashedPotatoes");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
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
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (vessel && vessel.GetTemperature())

	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 50);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaSoup_ChickenBroth extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Broth";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 375;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Bone");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = 0; // -1 = do nothing
		m_IngredientAddQuantity[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -1000;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaSoup_ChickenBroth");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && vessel.GetTemperature() && vessel.IsLiquidContainer())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}
	
   // check if item has right Liquid in it
	if (Class.CastTo(vessel,ingredients[1]))
    {
		if (vessel.GetLiquidType() == LIQUID_GROUP_WATER)
		{
			return true;
		}
	  return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaSoup_ChickenBroth1 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Broth";
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
		
		m_MinQuantityIngredient[1] = 375;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Lard");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = 0; // -1 = do nothing
		m_IngredientAddQuantity[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -1000;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaSoup_ChickenBroth");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.IsLiquidContainer())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if item has right FoodStage
	if (Class.CastTo(item,ingredients[1]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 50 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}
	
   // check if item has right Liquid in it
	if (Class.CastTo(vessel,ingredients[1]))
    {
		if (vessel.GetLiquidType() == LIQUID_GROUP_WATER)
		{
			return true;
		}
	  return false;
	}

   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaSoup_ChickenNoodleSoup extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Chicken and Noodles Soup";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 125;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
		InsertIngredient(0,"ChickenBreastMeat" );//you can insert multiple ingredients this way
		/*
		InsertIngredient(0,"srpChickenleg" );//you can insert multiple ingredients this way
		*/
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"DadaSoup_ChickenBroth");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaSoup_ChickenNoodleSoup");

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Chili extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Chili";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
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
		//ingredient 1
		InsertIngredient(0,"DadaDish_GroundMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BakedBeansCan_Opened");
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -125;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"BakedBeansCan_Opened");
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -125;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Chili");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 300;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaSoup_Gravy extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Gravy";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
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
		InsertIngredient(0,"DadaSpawned_Flour");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -20;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"DadaSoup_ChickenBroth");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaSoup_Gravy");

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_MushroomCream extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Mushroom cream";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
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
		InsertIngredient(0,"MushroomBase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"MushroomBase");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_Gravy");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_MushroomCream");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 250;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_SauteedMushrooms extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Sauteed Mushrooms";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
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
		InsertIngredient(0,"MushroomBase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"MushroomBase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_SauteedMushrooms");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 250;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Pancakes extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Pancakes";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
        AddResult("DadaDish_Pancakes");//add results here
    
		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Pie extends RecipeBase
{
	override void Init()
	{
		m_Name = "Mold Into Pie";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -250;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
        InsertIngredient(1,"Apple");//you can insert multiple ingredients this way
        InsertIngredient(1,"Plum");//you can insert multiple ingredients this way
        InsertIngredient(1,"Pear");//you can insert multiple ingredients this way
        InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
        InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way
        InsertIngredient(1,"SlicedPumpkin");//you can insert multiple ingredients this way
        InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
        InsertIngredient(1,"SambucusBerry");//you can insert multiple ingredients this way
        InsertIngredient(1,"CaninaBerry");//you can insert multiple ingredients this way
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
        /*
		InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        InsertIngredient(1,"SRP_FoodCanRaw_Colorbase");//you can insert multiple ingredients this way
        InsertIngredient(1,"SRP_FoodCanPreserved_Colorbase");//you can insert multiple ingredients this way
        InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
        InsertIngredient(1,"BakedBeansCanFishEggs");//you can insert multiple ingredients this wa
        InsertIngredient(1,"TunaCanCaviar");//you can insert multiple ingredients this way
		*/



		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Pie");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Pie1 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Mold Into Pie";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
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
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
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
		InsertIngredient(1,"PotatoSeed");//you can insert multiple ingredients this way
        /*
		InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        InsertIngredient(1,"SRP_FoodCanRaw_Colorbase");//you can insert multiple ingredients this way
        InsertIngredient(1,"SRP_FoodCanPreserved_Colorbase");//you can insert multiple ingredients this way
        InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
        InsertIngredient(1,"BakedBeansCanFishEggs");//you can insert multiple ingredients this wa
        InsertIngredient(1,"TunaCanCaviar");//you can insert multiple ingredients this way
		*/



		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Pie");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{      
    if (ingredients[0])
		{
      Edible_Base bread = Edible_Base.Cast( ingredients[0] );
      if (bread)
      {
        return (bread.IsFoodBaked() || bread.IsFoodRaw() || bread.IsFoodDried() || bread.IsFoodBoiled());
      }
    }
    return false;
	}
	
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaSoup_TomatoSauce extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Tomato Sauce";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaSoup_TomatoSauce");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 250;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaSoup_TomatoSoup extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Tomato Soup";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
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
		InsertIngredient(0,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"DadaSoup_ChickenBroth");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaSoup_TomatoSoup");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_MacaroniAndCheese extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Macaroni And Cheese Bowl";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
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
		InsertIngredient(0,"DadaBread_Pasta");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRaw_CheeseBase");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_CurdsAndWhey");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_Whey");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_MacaroniAndCheese");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_ShepardsPie extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Shepard's Pie";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
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
		InsertIngredient(0,"DadaDish_MashedPotatoes");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"DadaDish_GroundMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_ShepardsPie");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_PulledPork extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Pulled Pork";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
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
		InsertIngredient(0,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaSoup_Gravy");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_RawFoodCan_Ketchup");
		InsertIngredient(0,"Dada_PreservedFoodCan_Ketchup_Opened");
		InsertIngredient(0,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"PigSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"BoarSteakMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_PulledPork");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Sausage extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Sausage";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Guts");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"DadaDish_GroundMeat");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Sausage");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Pie2 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Mold Into Pie";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 60;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaBread_Base");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -250;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
        InsertIngredient(1,"BakedBeansCan_Opened");
		InsertIngredient(1,"PeachesCan_Opened");
		InsertIngredient(1,"TacticalBaconCan_Opened");
		InsertIngredient(1,"SardinesCan_Opened");
		InsertIngredient(1,"TunaCan_Opened");
		InsertIngredient(1,"FoodCan_250g_Opened_ColorBase");
		InsertIngredient(1,"UnknownFoodCan_Opened");
		InsertIngredient(1,"FoodCan_100g_Opened_ColorBase");

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Pie");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[1]);
	ItemBase vessel = ItemBase.Cast(ingredients[0]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[1]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[0]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[0]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaSoup_Ragout extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Ragout";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
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
		InsertIngredient(0,"DadaSoup_ChickenBroth");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -150;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_DicedTomatoes");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_DicedTomatoes_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_STAGchili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_STAGchili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_RawFoodCan_HomemadeChili");//you can insert multiple ingredients this way
		InsertIngredient(1,"Dada_PreservedFoodCan_HomemadeChili_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaSoup_TomatoSauce");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaSoup_Ragout");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class CraftDadaDish_Gumbo extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Gumbo";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		m_MaxQuantityIngredient[1] = 500;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"TacticalBaconCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"UnknownFoodCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MouflonSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BoarSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"DeerSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"PigSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BakedBeansCanFishEggs_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"WolfSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"BearSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CowSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"SheepSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"FoxSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"ChickenBreastMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"ReindeerSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"TunaCanDuck_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_STAGham");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_STAGham_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_LSSPAM");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_LSSPAM_Opened");
		InsertIngredient(0,"Dada_RawFoodCan_Paella");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella_Opened");
		InsertIngredient(0,"Dada_RawFoodCan_Quail");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Quail_Opened");

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"Rice");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRawRice");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Gumbo");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_SeafoodGumbo extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Seafood Gumbo";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		m_MaxQuantityIngredient[1] = 500;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(0,"SardinesCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"TunaCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"WalleyePollockFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"SteelheadTroutFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_RawFoodCan_Paella");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_Crab");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Crab_Opened");//you can insert multi
		InsertIngredient(0,"Dada_RawFoodCan_Clam");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Clam_Opened");//you can insert multi
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"Rice");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRawRice");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_SeafoodGumbo");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && item.GetFoodStage() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried() || item.GetFoodStage().IsFoodBaked() || item.GetFoodStage().IsFoodBoiled());
		if (itemStage)
		{
			return true;
		}
		return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_Gumbo1 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Gumbo";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		m_MaxQuantityIngredient[1] = 500;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"TunaCanDuck");//you can insert multi
		InsertIngredient(0,"TacticalBaconCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"UnknownFoodCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_STAGham");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_LSSPAM");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella");//you can insert multi
		InsertIngredient(0,"Dada_PreservedFoodCan_Quail");//you can insert multi

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"Rice");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRawRice");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_Gumbo");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

class CraftDadaDish_SeafoodGumbo1 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Seafood Gumbo";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 60;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 150;//-1 = disable check
		m_MaxQuantityIngredient[1] = 500;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"SardinesCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"TunaCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Paella");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Crab");//you can insert multiple ingredients this way
		InsertIngredient(0,"Dada_PreservedFoodCan_Clam");//you can insert multiple ingredients this way
		InsertIngredient(0,"BakedBeansCanFishEggs");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values 
		
		//ingredient 2
		InsertIngredient(1,"Rice");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRawRice");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -150;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDish_SeafoodGumbo");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 275;//-1 = do nothing
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
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && item.GetTemperature() && vessel.GetTemperature() && vessel.GetFoodStage())

	// check if item has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 150);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if item has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

   // check if item has right FoodStage
	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}
	
   return false;
   }

   	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};