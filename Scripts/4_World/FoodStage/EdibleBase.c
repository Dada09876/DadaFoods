modded class Edible_Base
{
	protected bool m_IsPredatorDerived;

	void Edible_Base()
	{
	if (HasFoodStage())
    	{
        	m_FoodStage = new FoodStage(this);
        	RegisterNetSyncVariableInt("m_FoodStage.m_FoodStageType", FoodStageType.NONE, FoodStage.DADA_FOOD_STAGE_COUNT - 1);
    	}
	}

	bool IsFoodPreserved()
	{
		if (GetFoodStage())
			return GetFoodStage().IsFoodPreserved();

		return false;
	}

	bool IsPredatorDerived()
    {
        return m_IsPredatorDerived;
    }

    void SetPredatorDerived(bool value)
    {
        m_IsPredatorDerived = value;
    }

	override void HandleFoodStageChangeAgents(FoodStageType stageOld, FoodStageType stageNew)
    {
        if (!m_IsPredatorDerived)
        {
            super.HandleFoodStageChangeAgents(stageOld, stageNew);
            return;
        }

        int keepAgentsRnd = 0;

        if (Math.RandomFloat01() <= GameConstants.SALMONELLA_RETENTION_PREDATOR)
            keepAgentsRnd |= eAgents.SALMONELLA;

        switch (stageNew)
        {
            case FoodStageType.BAKED:
            case FoodStageType.BOILED:
            case FoodStageType.DRIED:
                RemoveAllAgentsExcept(keepAgentsRnd|eAgents.BRAIN|eAgents.HEAVYMETAL);
                break;

            case FoodStageType.BURNED:
                RemoveAllAgentsExcept(eAgents.SALMONELLA|eAgents.HEAVYMETAL);
                break;
        }
	}
};
