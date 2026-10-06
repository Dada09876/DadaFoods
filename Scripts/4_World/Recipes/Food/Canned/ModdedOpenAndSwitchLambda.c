modded class OpenAndSwitchLambda
{
	override void CopyOldPropertiesToNew(notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);

		Edible_Base source = Edible_Base.Cast(old_item);
		Edible_Base target = Edible_Base.Cast(new_item);

		if (!source || !target)
			return;

		if (!source.IsFoodPreserved())
			return;

		FoodStageType previousStage = source.GetFoodStage().GetPreviousFoodStageType();

		if (previousStage == FoodStageType.BAKED || previousStage == FoodStageType.BOILED || previousStage == FoodStageType.DRIED)
		{
            target.GetFoodStage().SetFoodStageType(previousStage);
        }
	}
};