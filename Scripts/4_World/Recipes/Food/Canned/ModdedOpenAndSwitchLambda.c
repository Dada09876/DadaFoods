modded class OpenAndSwitchLambda
{
	override void CopyOldPropertiesToNew(notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);

		Edible_Base source = Edible_Base.Cast(old_item);
		Edible_Base target = Edible_Base.Cast(new_item);

		if (!source || !target)
			return;

        if (source.IsFoodPreserved())
        { 
            target.TransferAgents(source.GetAgents());
            target.SetTemperature(source.GetTemperature());
            target.SetPredatorDerived(source.IsPredatorDerived());
        }

		if (!source.IsFoodPreserved())
			return;

		FoodStageType previousStage = source.GetFoodStage().GetPreviousFoodStageType();

		if (previousStage == FoodStageType.BAKED || previousStage == FoodStageType.BOILED || previousStage == FoodStageType.DRIED)
		{
            target.GetFoodStage().SetFoodStageType(previousStage);
        }

        else if (previousStage == FoodStageType.RAW)
        {
            int randomStage = Math.RandomInt(0, 3);

            switch (randomStage)
            {
                case 0:
                    target.GetFoodStage().SetFoodStageType(FoodStageType.BAKED);
                    break;

                case 1:
                    target.GetFoodStage().SetFoodStageType(FoodStageType.BOILED);
                    break;

                case 2:
                    target.GetFoodStage().SetFoodStageType(FoodStageType.DRIED);
                    break;
            }
        }
    }
};