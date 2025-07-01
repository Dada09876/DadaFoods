class DadaDrinks_ColorBase: Edible_Base
{
	override void SetActions()
	{
		super.SetActions();

		//AddAction(ActionWashHandsItemContinuous);
		AddAction(ActionDrink);
	}
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
};

class DadaDrink_FreshMilk: DadaDrinks_ColorBase{};

class DadaDrink_CurdsAndWhey: DadaDrinks_ColorBase{};

class DadaDrink_Whey: DadaDrinks_ColorBase{};

class DadaDrink_MilkBottle: DadaDrinks_ColorBase{};

class DadaDrink_MilkCarton: DadaDrinks_ColorBase{};

class DadaDrink_MilkGallon: DadaDrinks_ColorBase
{
		override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDrink);
		AddAction(ActionDrinkCookingPot);
	};
};

class DadaDrink_Coffee: DadaDrinks_ColorBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_IMMUNITYBOOST)) //effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier(eModifiers.MDF_IMMUNITYBOOST);
		}

		consumer.GetModifiersManager().ActivateModifier(eModifiers.MDF_IMMUNITYBOOST);
	}
};

class DadaDrink_MilkCoffee: DadaDrinks_ColorBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_IMMUNITYBOOST)) //effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier(eModifiers.MDF_IMMUNITYBOOST);
		}

		consumer.GetModifiersManager().ActivateModifier(eModifiers.MDF_IMMUNITYBOOST);
	}
};

class DadaDrink_MilkCoffeeArt : DadaDrinks_ColorBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_IMMUNITYBOOST)) //effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier(eModifiers.MDF_IMMUNITYBOOST);
		}

		consumer.GetModifiersManager().ActivateModifier(eModifiers.MDF_IMMUNITYBOOST);
	}
};

class DadaDrink_GreenTea: DadaDrinks_ColorBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_IMMUNITYBOOST)) //effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier(eModifiers.MDF_IMMUNITYBOOST);
		}

		consumer.GetModifiersManager().ActivateModifier(eModifiers.MDF_IMMUNITYBOOST);
	}
};

class DadaDrink_BlackTea: DadaDrinks_ColorBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_IMMUNITYBOOST)) //effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier(eModifiers.MDF_IMMUNITYBOOST);
		}

		consumer.GetModifiersManager().ActivateModifier(eModifiers.MDF_IMMUNITYBOOST);
	}
};

class DadaDrink_MilkShake: DadaDrinks_ColorBase{};
