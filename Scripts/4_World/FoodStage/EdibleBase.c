modded class Edible_Base
{
	void Edible_Base()
	{
		RegisterNetSyncVariableInt("m_FoodStage.m_FoodStageType", FoodStageType.NONE, FoodStage.DADA_FOOD_STAGE_COUNT - 1);
	}

	bool IsFoodPreserved()
	{
		if (GetFoodStage())
			return GetFoodStage().IsFoodPreserved();

		return false;
	}
};
