class DadaCannibal_Base extends HumanSteakMeat
{
	override bool IsMutantFood()
	{
    	return true;
  	}
  	override bool CanBeCooked()
 	{
		return true;
 	}		
 	override bool IsMeat()
 	{
		return true;
 	}
	override bool CanBeCookedOnStick()
	{
		return false;
	}
 	override bool CanDecay()
 	{
		return true;
 	}
 	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionForceFeed);
		RemoveAction(ActionEatMeat);
		AddAction(ActionDrinkCookingPot);

		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}

	override FoodStageType GetNextFoodStageType( CookingMethodType cooking_method )
    {
    FoodStageType superStage = super.GetNextFoodStageType(cooking_method);
    if (IsFoodRaw())
    {
    	if (cooking_method == CookingMethodType.BAKING)
    	{
        	superStage = FoodStageType.BAKED;
    	}
	  	if (cooking_method == CookingMethodType.BOILING)
	  	{
        	superStage = FoodStageType.BOILED;
      	}
	  	if (cooking_method == CookingMethodType.DRYING)
		{
        	superStage = FoodStageType.DRIED;
      	}
    }
    return superStage;
    }
};

class DadaCannibal_EyeballSoup extends DadaCannibal_Base
{};

class DadaCannibal_EntrailsSpaghetti extends DadaCannibal_Base
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDrinkCookingPot);
		AddAction(ActionEatMeat);
	}	
};

class DadaCannibal_Jerky extends HumanSteakMeat
{
	override bool CanBeCooked()
	{
		return false;
	}		
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}
	
	override bool IsMeat()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatMeat);
	}
};