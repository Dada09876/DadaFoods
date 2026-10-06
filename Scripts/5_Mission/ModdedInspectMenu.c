modded class InspectMenuNew
{
    override static void UpdateItemInfoFoodStage(Widget root_widget, EntityAI item)
    {
        Edible_Base food_item = Edible_Base.Cast(item);
        if (food_item && food_item.GetFoodStage())
        {
            FoodStage food_stage = food_item.GetFoodStage();
            FoodStageType food_stage_type = food_stage.GetFoodStageType();

            if (food_stage_type == FoodStage.PRESERVED)
            {
                WidgetTrySetText(root_widget, "ItemFoodStageWidget", "Preserved", Colors.COLOR_PRESERVED);
                return;
            }
        }

        super.UpdateItemInfoFoodStage(root_widget, item);
    }
};