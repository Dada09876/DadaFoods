class CraftDadaDrink_FreshMilk extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Fresh Milk";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 10;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"PowderedMilk");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -33;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_FreshMilk");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.IsLiquidContainer()&& vessel.GetTemperature()&& item.GetTemperature())
	
	// check if liquid is water
	if (Class.CastTo(vessel,ingredients[1]))
    {
		if (vessel.GetLiquidType() == LIQUID_WATER  ||  vessel.GetLiquidType() == LIQUID_RIVERWATER)
		{
			return true;
		}
	  return false;
	}

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 70 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
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

class CraftDadaDrink_MilkBottle extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Milk Bottle";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 40;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"PowderedMilk");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -75;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -375;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_MilkBottle");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1000;//-1 = do nothing
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
    if (item && vessel && vessel.IsLiquidContainer()&& vessel.GetTemperature()&& item.GetTemperature())
	
	// check if liquid is water
	if (Class.CastTo(vessel,ingredients[1]))
    {
		if (vessel.GetLiquidType() == LIQUID_WATER  ||  vessel.GetLiquidType() == LIQUID_RIVERWATER)
		{
			return true;
		}
	  return false;
	}

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 70 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
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

class CraftDadaDrink_MilkCarton extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Milk Carton";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 40;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 300;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"PowderedMilk");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -75;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -375;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_MilkCarton");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1000;//-1 = do nothing
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
    if (item && vessel && vessel.IsLiquidContainer()&& vessel.GetTemperature()&& item.GetTemperature())
	
	// check if liquid is water
	if (Class.CastTo(vessel,ingredients[1]))
    {
		if (vessel.GetLiquidType() == LIQUID_WATER  ||  vessel.GetLiquidType() == LIQUID_RIVERWATER)
		{
			return true;
		}
	  return false;
	}

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 70 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
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

class CraftDadaDrink_MilkGallon extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Milk Gallon";
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
		
		m_MinQuantityIngredient[1] = 300;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"PowderedMilk");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -200;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
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
		AddResult("DadaDrink_MilkGallon");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 4000;//-1 = do nothing
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
    if (item && vessel && vessel.IsLiquidContainer()&& vessel.GetTemperature()&& item.GetTemperature())
	
	// check if liquid is water
	if (Class.CastTo(vessel,ingredients[1]))
    {
		if (vessel.GetLiquidType() == LIQUID_WATER  ||  vessel.GetLiquidType() == LIQUID_RIVERWATER)
		{
			return true;
		}
	  return false;
	}

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 70 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
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

class CraftDadaDrink_MilkShake extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft MilkShake";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 0.5;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
        InsertIngredient(0,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
    
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -200;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
        InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
    
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_MilkShake");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.GetTemperature() && vessel.GetFoodStage() && item.GetTemperature() && item.GetFoodStage())

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried());
		if (itemStage)
		{
			return true;
		}
		return false;
	}


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

	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried());
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

class CraftDadaDrink_CurdsAndWhey extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Curds and Whey";
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
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(0,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(0,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(0,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -300;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"DadaSpawned_Yeast");//you can insert multiple ingredients this w

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_CurdsAndWhey");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.GetTemperature()&& item.GetTemperature() && item.GetFoodStage())

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 50);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if item has right FoodStage
	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried());
		if (itemStage)
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

class CraftDadaDrink_Coffee extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Coffee";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
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
		InsertIngredient(0,"DadaSpawned_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaCoffeePacket");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_Coffee");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.IsLiquidContainer()&& vessel.GetTemperature()&& item.GetTemperature())
	
	// check if liquid is water
	if (Class.CastTo(vessel,ingredients[1]))
    {
		if (vessel.GetLiquidType() == LIQUID_WATER  ||  vessel.GetLiquidType() == LIQUID_RIVERWATER)
		{
			return true;
		}
	  return false;
	}

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 70 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
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

class CraftDadaDrink_MilkCoffee extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Milk Coffee";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCoffee");
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_MilkCoffee");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.GetTemperature() && vessel.GetFoodStage() && item.GetTemperature() && item.GetFoodStage())

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 50);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried());
		if (itemStage)
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

class CraftDadaDrink_MilkCoffee1 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Milk Coffee";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaCoffeePacket");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -300;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_MilkCoffee");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.GetTemperature() && vessel.GetFoodStage() && item.GetTemperature())

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 50);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
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

class CraftDadaDrink_MilkCoffeeArt extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Creamer design";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaDrink_MilkCoffee");//you can insert multiple ingredients this way
        InsertIngredient(0,"DadaDrink_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaDrink_MilkCoffeeArt");//you can insert multiple ingredients this way
        
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -200;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_MilkCoffeeArt");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.GetTemperature() && vessel.GetFoodStage() && item.GetTemperature() && item.GetFoodStage())

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 50);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
	  {
        return true;
      }
	  return false;
	}

	if (Class.CastTo(item,ingredients[0]))
    {
		bool itemStage = (item.GetFoodStage().IsFoodRaw() || item.GetFoodStage().IsFoodDried());
		if (itemStage)
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

class CraftDadaDrink_MilkCoffeeArt1 extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Creamer design";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_Coffee");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaCoffeePacket");//you can insert multiple ingredients this way
        
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -200;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"DadaDrink_FreshMilk");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkBottle");//you can insert multiple ingredients this w
        InsertIngredient(1,"DadaDrink_MilkCarton");//you can insert multiple ingredients this w
		InsertIngredient(1,"DadaDrink_MilkGallon");//you can insert multiple ingredients this w

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_MilkCoffeeArt");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.GetTemperature() && vessel.GetFoodStage() && item.GetTemperature())

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 1 && vessel.GetTemperature() < 50);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	if (Class.CastTo(vessel,ingredients[1]))
    {
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried());
		if (vesselStage)
		{
			return true;
		}
		return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
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


class CraftDadaDrink_GreenTea extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Green Tea";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_GreenTea");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaGreenTeaPacket");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_GreenTea");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.IsLiquidContainer()&& vessel.GetTemperature()&& item.GetTemperature())
	
	// check if liquid is water
	if (Class.CastTo(vessel,ingredients[1]))
    {
		if (vessel.GetLiquidType() == LIQUID_WATER  ||  vessel.GetLiquidType() == LIQUID_RIVERWATER)
		{
			return true;
		}
	  return false;
	}

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 70 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
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

class CraftDadaDrink_BlackTea extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Black Tea";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 200;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DadaSpawned_BlackTea");//you can insert multiple ingredients this way
		InsertIngredient(0,"DadaBlackTeaPacket");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Bottle_Base");//you can insert multiple ingredients this w

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -200;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DadaDrink_BlackTea");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
    if (item && vessel && vessel.IsLiquidContainer()&& vessel.GetTemperature()&& item.GetTemperature())
	
	// check if liquid is water
	if (Class.CastTo(vessel,ingredients[1]))
    {
		if (vessel.GetLiquidType() == LIQUID_WATER  ||  vessel.GetLiquidType() == LIQUID_RIVERWATER)
		{
			return true;
		}
	  return false;
	}

	// check if liquid has right temperature  
	if (Class.CastTo(vessel,ingredients[1]))
    {
      bool vesselTemp = (vessel.GetTemperature() > 70 && vessel.GetTemperature() < 150);
      if (vesselTemp)
	  {
        return true;
      }
	  return false;
	}

	// check if ingredient has right temperature  
	if (Class.CastTo(item,ingredients[0]))
    {
      bool itemTemp = (item.GetTemperature() > 1 && item.GetTemperature() < 50);
      if (itemTemp)
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