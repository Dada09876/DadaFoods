class DadaRaw_Base : Edible_Base
{
	
	override bool CanBeCooked()
	{
		return false;
	}		
	override bool IsFruit()
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
	}
};

class DadaRaw_Salad : DadaRaw_Base
{
};

class DadaRaw_TomatoSalad: DadaRaw_Base
{
};

class DadaRaw_Rice : DadaRaw_Base
{
};

class DadaRaw_PokeBowl : DadaRaw_Base
{
};


class DadaRaw_CerealCrunchin: DadaRaw_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEatMeat);
		AddAction(ActionDrinkCookingPot);
	};	
};

class DadaRaw_CerealCrunchin_Kids: DadaRaw_CerealCrunchin
{
};

class DadaRaw_CerealCrunchin_Frosties: DadaRaw_CerealCrunchin
{	
};

class DadaRaw_CerealCrunchin_Kosmostar: DadaRaw_CerealCrunchin
{
};

class DadaRaw_SushiMaki: DadaRaw_Base
{
};

class DadaRaw_SushiOnigiri: DadaRaw_SushiMaki
{
};

class DadaRaw_SmallButter_Opened: DadaRaw_Base
{
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !GetIsFrozen() && !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatSmallCan);
	}
	
	override bool IsOpen()
	{
		return false;
	}

	override bool CanBeCooked()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}
};

class DadaRaw_SmallButter: Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("DadaRaw_SmallButter_Opened");
	}
		
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionOpen);
	}
	
	override bool IsOpen()
	{
		return false;
	}
	
	override float GetQuantityNormalizedScripted()
	{
		return 1.0;
	}
};

class DadaRaw_BigButter: Rice
{
	override bool IsFruit()
	{
		return true;
	}

	override bool CanBeCooked()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
};

class DadaRaw_Mozza: DadaRaw_Base
{
	override bool IsFruit()
	{
		return true;
	}

	override bool CanBeCooked()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}	

   override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatSmallCan);
		RemoveAction(ActionEatMeat);
	}
	
	override bool IsOpen()
	{
		return false;
	}
};

class DadaRaw_MontereyJack: DadaRaw_Base
{
	override bool IsFruit()
	{
		return true;
	}

	override bool CanBeCooked()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}

   override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatSmallCan);
		RemoveAction(ActionEatMeat);
	}
	
	override bool IsOpen()
	{
		return false;
	}
};

class DadaRaw_FreshGoatCheese: DadaRaw_Base
{
	override bool IsFruit()
	{
		return true;
	}

	override bool CanBeCooked()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}
   override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatSmallCan);
		RemoveAction(ActionEatMeat);
	}
	
	override bool IsOpen()
	{
		return false;
	}
};

class DadaRaw_Feta: DadaRaw_Base
{
	override bool IsFruit()
	{
		return true;
	}

	override bool CanBeCooked()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}
   override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatSmallCan);
		RemoveAction(ActionEatMeat);
	}
	
	override bool IsOpen()
	{
		return false;
	}
};

class DadaRaw_VanillaChocoSwirl: DadaRaw_Base
{
	override bool IsFruit()
	{
		return true;
	}

	override bool CanBeCooked()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}
   override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatFruit);
		RemoveAction(ActionEatMeat);
	}

	override bool IsOpen()
	{
		return false;
	}
};

class DadaRaw_VanillaIceCream: DadaRaw_VanillaChocoSwirl 
{
};

class DadaRaw_ChocoIScream: DadaRaw_VanillaChocoSwirl
{
};

class DadaRaw_FrozenYogurt: DadaRaw_VanillaChocoSwirl
{
};

class DadaRaw_CheddarCurds: DadaRaw_Base
{
};

class DadaRaw_Yogourt: Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("DadaRaw_Yogourt_Opened");
	}
		
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionOpen);
	}
	
	override bool IsOpen()
	{
		return false;
	}
	
	override float GetQuantityNormalizedScripted()
	{
		return 1.0;
	}
};

class DadaRaw_Yogourt_Opened: DadaRaw_Base
{
	override bool IsFruit()
	{
		return true;
	}

	override bool CanBeCooked()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}	
   override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatSmallCan);
		RemoveAction(ActionEatMeat);
	}
	
	override bool IsOpen()
	{
		return false;
	}
};
