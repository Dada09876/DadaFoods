modded class Edible_Base
{
	bool IsFoodPreserved()
	{
		if (GetFoodStage())
			return GetFoodStage().IsFoodPreserved();

		return false;
	}
};