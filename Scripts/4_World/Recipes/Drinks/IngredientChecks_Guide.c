/*
//What Tree Gave me as a guide for making sure the ingredients have the right temperatures and FoodStages.

// cast ingredient to dadaitem
DadaFoodItemThingy item;
// (take note of the ! here it negates whatever the value is so we are basically saing if the class does not cast, return false)
if (!Class.CastTo(item, ingredient[0]))
{
  return false;
}
// if food is rotten, return false
if (item.IsFoodRotten())
{
   return false;
}
// if food is raw, return false
if (item.IsFoodRaw())
{
   return false;
}
// if food is burnt, return false
if (item.IsFoodBurnt())
{
   return false;
}
// if food is too cold, return false
if (item.GetTemperature() < 1)
{
   return false;
}
// if food is too hot, return false
if (item.GetTemperature() > 50)
{
   return false;
}
// cast ingredient to vessel
Bottle_Base bottle;
if (!Class.CastTo(bottle, ingredient[1]))
{
  return false;
}
// if vessel is too cold, return false
if (bottle.GetTemperature() < 1)
{
   return false;
}
// if vessel is too hot, return false
if (bottle.GetTemperature() > 50)
{
   return false;
}
// check if contents of bottle is actually water
if (bottle.GetLiquidType() != LIQUID_WATER)
{
   return false;
}


//My quick functions for temp, stage and liquid check
override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{ 
	// define my variables 
	ItemBase item = ItemBase.Cast(ingredients[0]);
	ItemBase vessel = ItemBase.Cast(ingredients[1]);

	// Are both conditions fulfilled for the item (bottlebase)
    if (item && vessel && vessel.GetTemperature() && vessel.GetFoodStage() && vessel.IsLiquidContainer())

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
		bool vesselStage = (vessel.GetFoodStage().IsFoodRaw() || vessel.GetFoodStage().IsFoodDried() || vessel.GetFoodStage().IsFoodBaked() || vessel.GetFoodStage().IsFoodBoiled() || vessel.GetFoodStage().IsFoodRotten() || vessel.GetFoodStage().IsFoodBurned());
		if (vesselStage)
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
*/