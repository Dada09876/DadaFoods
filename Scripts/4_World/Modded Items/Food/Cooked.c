class DadaSoup_Base extends Edible_Base
{
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
	
class DadaDish_Base: DadaSoup_Base
{
override void SetActions()
	{
		super.SetActions();
		
		//AddAction(ActionWashHandsItemContinuous);
		RemoveAction(ActionDrinkCookingPot);
        AddAction(ActionEatMeat);
	}
};

class DadaBread_Base: DadaDish_Base
{};

class DadaSoup_ChickenBroth: DadaSoup_Base{};
class DadaSoup_ChickenNoodleSoup: DadaSoup_Base{};
class DadaSoup_TomatoSoup: DadaSoup_Base{};
class DadaSoup_Ragout: DadaSoup_Base{};
class DadaSoup_TomatoSauce: DadaSoup_Base{};
class DadaSoup_Gravy: DadaSoup_Base{};
class DadaSoup_ClamChowder: DadaSoup_Base{};
class DadaSoup_MushroomCream: DadaSoup_Base{};

class DadaDish_MashedPotatoes: DadaDish_Base{};
class DadaDish_Chili: DadaDish_Base{};
class DadaDish_Pie: DadaDish_Base{};
class DadaDish_Gumbo: DadaDish_Base{};
class DadaDish_SeafoodGumbo: DadaDish_Base{};
class DadaDish_GroundMeat: DadaDish_Base{};
class DadaDish_Rabbit: DadaDish_Base{};
class DadaDish_Spaghetti: DadaDish_Base{};
class DadaDish_Cannelloni: DadaDish_Base{};
class DadaDish_Bowties: DadaDish_Base{};
class DadaDish_Lasagna: DadaDish_Base{};
class DadaDish_Sausage: DadaDish_Base{};
class DadaDish_SauteedMushrooms: DadaDish_Base{};
class DadaDish_MacaroniAndCheese: DadaDish_Base{};
class DadaDish_ShepherdsPie: DadaDish_Base{};
class DadaDish_PulledPork: DadaDish_Base{};
class DadaDish_Rigatoni: DadaDish_Base{};

class DadaBread_Pita: DadaBread_Base{};
class DadaBread_Loaf: DadaBread_Base{};
class DadaBread_Baguette: DadaBread_Base{};
class DadaBread_Pasta: DadaBread_Base{};
class DadaBread_Pizza: DadaBread_Base{};
class DadaBread_PizzaBase: DadaBread_Base{};
class DadaBread_Pancakes: DadaBread_Base{};
class DadaBread_Brioche: DadaBread_Base{};