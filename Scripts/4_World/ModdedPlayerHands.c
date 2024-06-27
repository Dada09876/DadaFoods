modded class ModItemRegisterCallbacks

{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded (pType, pBehavior);
        pType.AddItemInHandsProfileIK("DadaDrink_MilkCarton","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/water_bottle.anm");
        pType.AddItemInHandsProfileIK("DadaDrink_MilkBottle","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/water_bottle.anm");
        pType.AddItemInHandsProfileIK("DadaDrink_Coffee","dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi",pBehavior,"dz/anims/anm/player/ik/gear/GasLight.anm");
        pType.AddItemInHandsProfileIK("DadaDrink_MilkCoffee","dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi",pBehavior,"dz/anims/anm/player/ik/gear/GasLight.anm");
        pType.AddItemInHandsProfileIK("DadaDrink_MilkCoffeeArt","dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi",pBehavior,"dz/anims/anm/player/ik/gear/GasLight.anm");
        pType.AddItemInHandsProfileIK("DadaDrink_BlackTea","dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi",pBehavior,"dz/anims/anm/player/ik/gear/GasLight.anm");
        pType.AddItemInHandsProfileIK("DadaDrink_GreenTea","dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi",pBehavior,"dz/anims/anm/player/ik/gear/GasLight.anm");
        pType.AddItemInHandsProfileIK("DadaDrink_FreshMilk","dz/anims/workspaces/player/player_main/props/player_main_1h_sodacan.asi",pBehavior,"dz/anims/anm/player/ik/gear/soda_can.anm");	
        /*pType.AddItemInHandsProfileIK("srpYogourt","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/foodcan100g.anm");	
        pType.AddItemInHandsProfileIK("srpFoodCan_SmallButter","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/foodcan100g.anm");
        pType.AddItemInHandsProfileIK("srpFoodCan_SmallButter_Opened","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/foodcan100g.anm");
        pType.AddItemInHandsProfileIK("srpDrink_CurdsAndWhey","dz/anims/workspaces/player/player_main/props/player_main_1h_sodacan.asi",pBehavior,"dz/anims/anm/player/ik/gear/soda_can.anm");
        pType.AddItemInHandsProfileIK("srpFoodCan_BigButter","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/rice.anm");	
        pType.AddItemInHandsProfileIK("srpMontereyJack","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/rice.anm");	
        pType.AddItemInHandsProfileIK("srpMozza", "dz/anims/workspaces/player/player_main/props/player_main_1h_fruit.asi",pBehavior,"dz/anims/anm/player/ik/gear/apple.anm");
        pType.AddItemInHandsProfileIK("srpFreshGoatCheese","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/banana.anm");
        pType.AddItemInHandsProfileIK("srpFrozenYogurt","dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi",pBehavior,"dz/anims/anm/player/ik/gear/GasLight.anm");*/
        pType.AddItemInHandsProfileIK("DadaDrink_MilkShake","dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi",pBehavior,"dz/anims/anm/player/ik/gear/GasLight.anm");
       /* pType.AddItemInHandsProfileIK("crab_claw", "dz/anims/workspaces/player/player_main/props/player_main_1h_fruit.asi", pBehavior,"dz/anims/anm/player/ik/gear/apple.anm");
        pType.AddItemInHandsProfileIK("srpTinyCarvingBlock", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/gear/cleaning_kit_wood.anm");*/
        pType.AddItemInHandsProfileIK("Dada_RawFoodCan_Colorbase","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/food_can_opened.anm");
        pType.AddItemInHandsProfileIK("Dada_PreservedFoodCan_Colorbase","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/food_can.anm");
        pType.AddItemInHandsProfileIK("Dada_PreservedFoodCan_Colorbase_Opened","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/food_can_opened.anm");

        pType.AddItemInHandsProfileIK("Dada_RawFoodCan_Clam","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/sardines.anm");
        pType.AddItemInHandsProfileIK("Dada_PreservedFoodCan_Clam","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/sardines.anm");
        pType.AddItemInHandsProfileIK("Dada_PreservedFoodCan_Clam_Opened","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/sardines.anm");

        pType.AddItemInHandsProfileIK("Dada_RawFoodCan_Crab","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/sardines.anm");
        pType.AddItemInHandsProfileIK("Dada_PreservedFoodCan_Crab","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/sardines.anm");
        pType.AddItemInHandsProfileIK("Dada_PreservedFoodCan_Crab_Opened","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/sardines.anm");
        pType.AddItemInHandsProfileIK("DadaDish_Sausage","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/arrow_hunting.anm");
        pType.AddItemInHandsProfileIK("DadaBread_Baguette","dz/anims/workspaces/player/player_main/player_main_1h.asi",pBehavior,"dz/anims/anm/player/ik/gear/Nails_box.anm");
    };

    override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterTwoHanded (pType, pBehavior);
        pType.AddItemInHandsProfileIK("DadaSoup_Base", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
        pType.AddItemInHandsProfileIK("DadaDish_Base", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
        pType.AddItemInHandsProfileIK("DadaBread_Base", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
        pType.AddItemInHandsProfileIK("DadaBread_Pizza", "dz/anims/workspaces/player/player_main/player_main_2h.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/BatteryTruck.anm");
        pType.AddItemInHandsProfileIK("DadaBread_PizzaBase", "dz/anims/workspaces/player/player_main/player_main_2h.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/BatteryTruck.anm");
        pType.AddItemInHandsProfileIK("DadaBread_PizzaMargherita", "dz/anims/workspaces/player/player_main/player_main_2h.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/BatteryTruck.anm"); 
    };

    override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterHeavy (pType, pBehavior);
        pType.AddItemInHandsProfileIK("DadaDrink_MilkGallon","dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi",pBehavior,"dz/anims/anm/player/ik/two_handed/BaseRadio.anm"); 
       /* pType.AddItemInHandsProfileIK("srpLargeCarvingBlock", "dz/anims/workspaces/player/player_main/props/player_main_heavy_generator.asi",pBehavior, "dz/anims/anm/player/ik/heavy/generator.anm");
        pType.AddItemInHandsProfileIK("srpXtraLargeCarvingBlock", "dz/anims/workspaces/player/player_main/props/player_main_heavy_generator.asi",pBehavior, "dz/anims/anm/player/ik/heavy/generator.anm");
        pType.AddItemInHandsProfileIK("srpGinormousCarvingBlock", "dz/anims/workspaces/player/player_main/player_main_heavy.asi",pBehavior, "dz/anims/anm/player/ik/heavy/metal_sheet.anm");*/
    };
};