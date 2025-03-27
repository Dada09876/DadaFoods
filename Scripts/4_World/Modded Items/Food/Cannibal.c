class DadaCannibal_Base extends HumanSteakMeat
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
		AddAction(ActionEatMeat);
		RemoveAction(ActionDrinkCookingPot);

		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
};

class DadaCannibal_RawFoodCan_Colorbase extends DadaCannibal_Base
{};

class DadaCannibal_PreservedFoodCan_Colorbase extends DadaCannibal_Base 
{
  override bool CanDecay()
	{
		return false;
	}
};

class Dada_PreservedFoodCan_Colorbase_Opened: Edible_Base
{
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
};

class DadaCannibal_EyeballSoup extends DadaCannibal_Base
{
	override void SetActions()
	{
	super.SetActions();
	AddAction(ActionDrinkCookingPot);
	}
};

class DadaCannibal_EntrailsSpaghetti extends DadaCannibal_Base
{
};

class DadaCannibal_Jerky extends DadaCannibal_Base
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
};

class DadaCannibal_WasteBread extends DadaCannibal_Base
{
};

class DadaCannibal_RawFoodCan_STAGham extends DadaCannibal_RawFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_STAGham extends DadaCannibal_PreservedFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_STAGham_Opened extends DadaCannibal_PreservedFoodCan_Colorbase_Opened {};

class DadaCannibal_RawFoodCan_LSSPAM extends DadaCannibal_RawFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_LSSPAM extends DadaCannibal_PreservedFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_LSSPAM_Opened extends DadaCannibal_PreservedFoodCan_Colorbase_Opened {};

class DadaCannibal_RawFoodCan_Ketchup extends DadaCannibal_RawFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_Ketchup extends DadaCannibal_PreservedFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_Ketchup_Opened extends DadaCannibal_PreservedFoodCan_Colorbase_Opened {};

class DadaCannibal_RawFoodCan_DicedTomatoes extends DadaCannibal_RawFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_DicedTomatoes extends DadaCannibal_PreservedFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_DicedTomatoes_Opened extends DadaCannibal_PreservedFoodCan_Colorbase_Opened {};

class DadaCannibal_RawFoodCan_HomemadeChili extends DadaCannibal_RawFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_HomemadeChili extends DadaCannibal_PreservedFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_HomemadeChili_Opened extends DadaCannibal_PreservedFoodCan_Colorbase_Opened {};

class DadaCannibal_RawFoodCan_ESPENChunkySoup extends DadaCannibal_RawFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_ESPENChunkySoup extends DadaCannibal_PreservedFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_ESPENChunkySoup_Opened extends DadaCannibal_PreservedFoodCan_Colorbase_Opened {};

class DadaCannibal_RawFoodCan_STAGchili extends DadaCannibal_RawFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_STAGchili extends DadaCannibal_PreservedFoodCan_Colorbase {};
class DadaCannibal_PreservedFoodCan_STAGchili_Opened extends DadaCannibal_PreservedFoodCan_Colorbase_Opened {};

class DadaWasteBread_Pita extends DadaCannibal_Base {};

class DadaWasteBread_Loaf extends DadaCannibal_Base {};

class DadaWasteBread_Baguette extends DadaCannibal_Base {};

class DadaWasteBread_Pasta extends DadaCannibal_Base {};

class DadaWasteBread_Pizza extends DadaCannibal_Base {};

class DadaWasteBread_PizzaBase extends DadaCannibal_Base {};

class DadaCannibalDish_Rigatoni extends DadaCannibal_Base {};

class DadaCannibalDish_Chili extends DadaCannibal_Base {};

class DadaCannibalDish_Pie extends DadaCannibal_Base {};

class DadaCannibalSoup_TomatoSoup extends DadaCannibal_Base {};

class DadaCannibalSoup_Ragout extends DadaCannibal_Base {};

class DadaCannibalDish_GroundMeat extends DadaCannibal_Base {};

class DadaCannibalSoup_TomatoSauce extends DadaCannibal_Base {};

class DadaCannibalDish_Spaghetti extends DadaCannibal_Base {};

class DadaCannibalDish_Cannelloni extends DadaCannibal_Base {};

class DadaCannibalDish_Bowties extends DadaCannibal_Base {};

class DadaCannibalDish_Lasagna extends DadaCannibal_Base {};

class DadaCannibalDish_PulledPork extends DadaCannibal_Base {};

class DadaCannibalDish_Sausage extends DadaCannibal_Base {};

class DadaCannibalDrink_MilkShake extends DadaCannibal_Base 
{
	override void SetActions()
	{
	super.SetActions();
	AddAction(ActionDrinkCookingPot);
	}
};
