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
	AddAction(ActionDrinkCookingPot);
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

