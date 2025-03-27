modded class OpenAndSwitchLambda
{
	override void CopyOldPropertiesToNew (notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);
		// if the old item was my preseverded cans
		if (old_item.IsInherited(Dada_PreservedFoodCan_Colorbase))
		{
			// set the quantity of the new opened canned to be the same quantity as the sealed can
			new_item.SetQuantity(old_item.GetQuantity());
		}
	}
};

modded class OpenAndSwitchLambda
{
	override void CopyOldPropertiesToNew (notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);
		// if the old item was my preseverded cans
		if (old_item.IsInherited(DadaCannibal_PreservedFoodCan_Colorbase))
		{
			// set the quantity of the new opened canned to be the same quantity as the sealed can
			new_item.SetQuantity(old_item.GetQuantity());
		}
	}
};