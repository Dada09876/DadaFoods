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
		RemoveAction(ActionEatMeat);
		AddAction(ActionDrinkCookingPot);

		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
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

	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDrinkCookingPot);
		AddAction(ActionEatMeat);	
	}
};

class DadaCannibal_WasteBread extends DadaCannibal_Base
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDrinkCookingPot);
		AddAction(ActionEatMeat);
	}	
};
