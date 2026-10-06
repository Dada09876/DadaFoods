modded class FoodStage
{
	static const int PRESERVED = 7;
	static const int DADA_FOOD_STAGE_COUNT = 8;

	static int m_StagePreservedHash = 0;

	override static string GetFoodStageName(FoodStageType food_stage_type)
	{
		if (food_stage_type == PRESERVED)
			return "Preserved";

		return super.GetFoodStageName(food_stage_type);
	}

	override static int GetFoodStageNameHash(FoodStageType food_stage_type)
	{
		if (food_stage_type == PRESERVED)
		{
			if (m_StagePreservedHash == 0)
				m_StagePreservedHash = "Preserved".Hash();

			return m_StagePreservedHash;
		}

		return super.GetFoodStageNameHash(food_stage_type);
	}
};