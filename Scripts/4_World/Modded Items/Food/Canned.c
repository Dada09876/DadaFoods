class Dada_RawFoodCan_Colorbase extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}
  
  override bool CanBeCookedOnStick()
	{
		return true;
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

class Dada_PreservedFoodCan_Colorbase extends Edible_Base 
{
  override bool CanDecay()
	{
		return false;
	}
};

class Dada_PreservedFoodCan_Colorbase_Opened: Edible_Base
{
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
	}
};

class Dada_RawFoodCan_LSVeggies extends Dada_RawFoodCan_Colorbase{};
class Dada_PreservedFoodCan_LSVeggies extends Dada_PreservedFoodCan_Colorbase{};
class Dada_PreservedFoodCan_LSVeggies_Opened: Dada_PreservedFoodCan_Colorbase_Opened{};

class Dada_RawFoodCan_STAGham extends Dada_RawFoodCan_Colorbase{};
class Dada_PreservedFoodCan_STAGham extends Dada_PreservedFoodCan_Colorbase{};
class Dada_PreservedFoodCan_STAGham_Opened: Dada_PreservedFoodCan_Colorbase_Opened{};

class Dada_RawFoodCan_ESPENChunkySoup extends Dada_RawFoodCan_Colorbase{};
class Dada_PreservedFoodCan_ESPENChunkySoup extends Dada_PreservedFoodCan_Colorbase{};
class Dada_PreservedFoodCan_ESPENChunkySoup_Opened: Dada_PreservedFoodCan_Colorbase_Opened{};

class Dada_RawFoodCan_LSSPAM extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_LSSPAM extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_LSSPAM_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_STAGchili extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_STAGchili extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_STAGchili_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_DicedTomatoes extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_DicedTomatoes extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_DicedTomatoes_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_ESPENMacnCheese extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_ESPENMacnCheese extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_ESPENMacnCheese_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_Ketchup extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Ketchup extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Ketchup_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_Paella extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Paella extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Paella_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_PumpkinPuree extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_PumpkinPuree extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_PumpkinPuree_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_Quail extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Quail extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Quail_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_Relish extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Relish extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Relish_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_HomemadeChili extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_HomemadeChili extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_HomemadeChili_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_Samosa extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Samosa extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_Samosa_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class Dada_RawFoodCan_HomemadePumpkinPuree extends Dada_RawFoodCan_Colorbase {};
class Dada_PreservedFoodCan_HomemadePumpkinPuree extends Dada_PreservedFoodCan_Colorbase {};
class Dada_PreservedFoodCan_HomemadePumpkinPuree_Opened extends Dada_PreservedFoodCan_Colorbase_Opened {};

class srpClamCan : Edible_Base {};

class srpCrabCan : Edible_Base {};

class srpClamCan_Opened : Edible_Base
{
    override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatSmallCan);
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

class srpCrabCan_Opened : Edible_Base
{
    override void SetActions()
    {
		super.SetActions();
		
		AddAction(ActionEatSmallCan);
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