// override the plugin recipe manager class
modded class PluginRecipesManager
{
  // override the register recipes method
  override void RegisterRecipies()
  {
    // call super so the "vanilla" code is called first
    super.RegisterRecipies();
    // an example of registering a recipe you created

    //SPAWNED

    RegisterRecipe(new CraftBoxCerealCrunchin);
    RegisterRecipe(new CraftDadaSpawned_BoxCerealCrunchin_Kosmostar);
    RegisterRecipe(new CraftDadaSpawned_BoxCerealCrunchin_Frosties);
    RegisterRecipe(new CraftDadaSpawned_BoxCerealCrunchin_Nesquik);
    //RegisterRecipe(new CraftDadaSpawned_Coffee);
    //RegisterRecipe(new CraftDadaSpawned_GreenTea);
    //RegisterRecipe(new CraftDadaSpawned_BlackTea);

    // CRAFTING

    /*
    RegisterRecipe(new CraftsrpSaltBag);*/
    RegisterRecipe(new CraftDadaCheeseMold);
    RegisterRecipe(new CraftDadaCheeseMold1);
    RegisterRecipe(new RepairDadaCheeseMold);
    RegisterRecipe(new CraftDadaCoffeePacket);
    RegisterRecipe(new CraftDadaGreenTeaPacket);
    RegisterRecipe(new CraftDadaBlackTeaPacket);



    // FOOD COOKED
    RegisterRecipe(new CraftDadaBread_Base);
    RegisterRecipe(new CraftDadaBread_Pita);
    RegisterRecipe(new CraftDadaBread_Loaf);
    RegisterRecipe(new CraftDadaBread_Baguette);
    RegisterRecipe(new CraftDadaBread_Pasta);
    RegisterRecipe(new CraftDadaBread_Pizza);
    RegisterRecipe(new CraftDadaDish_Spaghetti);
    RegisterRecipe(new CraftDadaDish_Spaghetti1);
    RegisterRecipe(new CraftDadaDish_Spaghetti2);
    RegisterRecipe(new CraftDadaDish_Cannelloni);
    RegisterRecipe(new CraftDadaDish_Cannelloni1);
    RegisterRecipe(new CraftDadaDish_Cannelloni2);
    RegisterRecipe(new CraftDadaDish_Bowties);
    RegisterRecipe(new CraftDadaDish_Bowties1);
    RegisterRecipe(new CraftDadaDish_Bowties2);
    RegisterRecipe(new CraftDadaDish_Lasagna);
    RegisterRecipe(new CraftDadaDish_Lasagna1);
    RegisterRecipe(new CraftDadaDish_Lasagna2);
    RegisterRecipe(new CraftDadaDish_Rigatoni);
    RegisterRecipe(new CraftDadaDish_Rigatoni1);
    RegisterRecipe(new CraftDadaDish_Rigatoni2);
    RegisterRecipe(new CraftDadaBread_PizzaMarinara);
    RegisterRecipe(new CraftDadaBread_PizzaMarinara1);
    RegisterRecipe(new CraftDadaBread_PizzaMarinara2);
    RegisterRecipe(new CraftDadaBread_PizzaMargherita);
    RegisterRecipe(new CraftDadaDish_GroundMeat);
    RegisterRecipe(new CraftDadaDish_MashedPotatoes);
    RegisterRecipe(new CraftDadaDish_MashedPotatoes1);
    RegisterRecipe(new CraftDadaDish_MashedPotatoes2);
    RegisterRecipe(new CraftDadaDish_MashedPotatoes3);
    RegisterRecipe(new CraftDadaDish_MashedPotatoes4);
    RegisterRecipe(new CraftDadaSoup_ChickenBroth);
    RegisterRecipe(new CraftDadaSoup_ChickenBroth1);
    RegisterRecipe(new CraftDadaSoup_ChickenNoodleSoup);
    RegisterRecipe(new CraftDadaDish_Chili);
    RegisterRecipe(new CraftDadaDish_Chili1);
    RegisterRecipe(new CraftDadaDish_Chili2);
    RegisterRecipe(new CraftDadaDish_Chili3);
    RegisterRecipe(new CraftDadaDish_Chili4);
    RegisterRecipe(new CraftDadaDish_Chili5);
    RegisterRecipe(new CraftDadaDish_Chili6);
    RegisterRecipe(new CraftDadaDish_Chili7);
    RegisterRecipe(new CraftDadaDish_Chili8);
    RegisterRecipe(new CraftDadaSoup_Gravy);
    RegisterRecipe(new CraftDadaDish_Gumbo);
    RegisterRecipe(new CraftDadaDish_Gumbo1);
    RegisterRecipe(new CraftDadaDish_Gumbo2);
    RegisterRecipe(new CraftDadaDish_Gumbo3);
    RegisterRecipe(new CraftDadaDish_Gumbo4);
    RegisterRecipe(new CraftDadaDish_Gumbo5);
    RegisterRecipe(new CraftDadaDish_MushroomCream);
    RegisterRecipe(new CraftDadaDish_SauteedMushrooms);
    RegisterRecipe(new CraftDadaDish_Pancakes);
    RegisterRecipe(new CraftDadaDish_Pie);
    RegisterRecipe(new CraftDadaDish_Pie1);
    RegisterRecipe(new CraftDadaDish_Pie2);
    RegisterRecipe(new CraftDadaSoup_Ragout);
    RegisterRecipe(new CraftDadaSoup_Ragout1);
    RegisterRecipe(new CraftDadaSoup_Ragout2);
    RegisterRecipe(new CraftDadaDish_SeafoodGumbo);
    RegisterRecipe(new CraftDadaDish_SeafoodGumbo1);
    RegisterRecipe(new CraftDadaDish_SeafoodGumbo2);
    RegisterRecipe(new CraftDadaDish_SeafoodGumbo3);
    RegisterRecipe(new CraftDadaDish_SeafoodGumbo4);
    RegisterRecipe(new CraftDadaDish_SeafoodGumbo5);
    RegisterRecipe(new CraftDadaSoup_TomatoSauce);
    RegisterRecipe(new CraftDadaSoup_TomatoSauce1);
    RegisterRecipe(new CraftDadaSoup_TomatoSoup);
    RegisterRecipe(new CraftDadaDish_MacaroniAndCheese);
    RegisterRecipe(new CraftDadaDish_ShepardsPie);
    RegisterRecipe(new CraftDadaDish_PulledPork);
    RegisterRecipe(new CraftDadaDish_PulledPork1);
    RegisterRecipe(new CraftDadaDish_PulledPork2);
    RegisterRecipe(new CraftDadaDish_Sausage);
    RegisterRecipe(new CraftDadaDish_Fries);
    RegisterRecipe(new CraftDadaDish_Fries1);
    RegisterRecipe(new CraftDadaDish_FriteSauce);
    RegisterRecipe(new CraftDadaDish_Poutine);
    RegisterRecipe(new CraftDadaDish_Rabbit);
    RegisterRecipe(new CraftDadaSoup_ClamChowder);
    RegisterRecipe(new CraftDadaSoup_ClamChowder1);
    RegisterRecipe(new CraftDadaSoup_ClamChowder2);

    // FOOD CANNED

    RegisterRecipe(new Craft_OpenCan);
    RegisterRecipe(new Craft_SealCan);
    RegisterRecipe(new Craft_Dada_RawFoodCan_LSVeggies);
    RegisterRecipe(new Craft_Dada_RawFoodCan_LSVeggies1);
    RegisterRecipe(new Craft_Dada_RawFoodCan_LSVeggies2);
    RegisterRecipe(new Craft_Dada_RawFoodCan_STAGham);
    RegisterRecipe(new Craft_Dada_RawFoodCan_ESPENChunkySoup);
    RegisterRecipe(new Craft_Dada_RawFoodCan_ESPENChunkySoup1);
    RegisterRecipe(new Craft_Dada_RawFoodCan_LSSPAM);
    RegisterRecipe(new Craft_Dada_RawFoodCan_STAGchili);
    RegisterRecipe(new Craft_Dada_RawFoodCan_ESPENMacnCheese);
    RegisterRecipe(new Craft_Dada_RawFoodCan_DicedTomatoes);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Ketchup);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Paella);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Paella1);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Paella2);
    RegisterRecipe(new Craft_Dada_RawFoodCan_PumpkinPuree);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Quail);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Relish);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Samosa);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Samosa1);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Samosa2);
    RegisterRecipe(new Craft_Dada_RawFoodCan_HomemadeChili);
    RegisterRecipe(new Craft_Dada_RawFoodCan_HomemadePumpkinPuree);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Crab);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Clam);

    // FOOD RAW

    RegisterRecipe(new CraftDadaRaw_PumpkinSeeds);
    RegisterRecipe(new CraftDadaRaw_SmallButter);
    RegisterRecipe(new CraftDadaRaw_BigButter);
    RegisterRecipe(new CraftDadaRaw_Yogourt);
    RegisterRecipe(new CraftDadaRaw_CerealCrunchin_Kosmostar);
    RegisterRecipe(new CraftDadaRawCerealCrunchin_Nesquik);
    RegisterRecipe(new CraftDadaRaw_CerealCrunchin_Frosties);
    RegisterRecipe(new CraftDadaRaw_PokeBowl);
    RegisterRecipe(new CraftDadaRaw_Rice);
    RegisterRecipe(new CraftDadaRaw_Salad);
    RegisterRecipe(new CraftDadaRaw_TomatoSalad);
    RegisterRecipe(new CraftFreshCheese_Mozza);
    RegisterRecipe(new CraftFreshCheese_CheddarCurds);
    RegisterRecipe(new CraftFreshCheese_Feta);
    RegisterRecipe(new CraftFreshCheese_Goat);
    RegisterRecipe(new CraftDadaRaw_SushiMaki);
    RegisterRecipe(new CraftDadaRaw_SushiOnigiri);
    RegisterRecipe(new CraftDadaRaw_FrozenYogurt);
    RegisterRecipe(new CraftDadaRaw_FrozenYogurt1);
    RegisterRecipe(new CraftDadaRaw_FrozenYogurt2);
    RegisterRecipe(new CraftDadaRaw_VanillaChocoSwirl);
    RegisterRecipe(new CraftDadaRaw_VanillaIceCream);
    RegisterRecipe(new CraftDadaRaw_ChocoIScream);
    RegisterRecipe(new CraftDadaRaw_Jerky);


    // FOOD PIZZA TOPPINGS

    /*

    */

    // FOOD SANDWICHES

    /*

    */

    // DRINKS

    RegisterRecipe(new CraftDadaDrink_FreshMilk);
    RegisterRecipe(new CraftDadaDrink_MilkBottle);
    RegisterRecipe(new CraftDadaDrink_MilkCarton);
    RegisterRecipe(new CraftDadaDrink_MilkGallon);
    RegisterRecipe(new CraftDadaDrink_Coffee);
    RegisterRecipe(new CraftDadaDrink_MilkCoffee);
    RegisterRecipe(new CraftDadaDrink_MilkCoffee1);
    RegisterRecipe(new CraftDadaDrink_MilkCoffee2);
    RegisterRecipe(new CraftDadaDrink_MilkCoffeeArt);
    RegisterRecipe(new CraftDadaDrink_MilkCoffeeArt1);
    RegisterRecipe(new CraftDadaDrink_MilkCoffeeArt2);
    RegisterRecipe(new CraftDadaDrink_BlackTea);
    RegisterRecipe(new CraftDadaDrink_GreenTea);
    RegisterRecipe(new CraftDadaDrink_MilkShake);
    RegisterRecipe(new CraftDadaDrink_MilkShake1);
    RegisterRecipe(new CraftDadaDrink_CurdsAndWhey);


    // CANNIBAL


    RegisterRecipe(new CraftDadaCannibal_EntrailsSpaghetti);
    RegisterRecipe(new CraftDadaCannibal_EyeballSoup);
    RegisterRecipe(new CraftDadaCannibal_EyeballSoup1);
    RegisterRecipe(new CraftDadaCannibal_Jerky);
    RegisterRecipe(new CraftDadaCannibal_WasteBread);
    RegisterRecipe(new CraftDadaWasteBread_Pita);
    RegisterRecipe(new CraftDadaWasteBread_Loaf);
    RegisterRecipe(new CraftDadaWasteBread_Baguette);
    RegisterRecipe(new CraftDadaWasteBread_Pasta);
    RegisterRecipe(new CraftDadaWasteBread_Pizza);
    RegisterRecipe(new CraftDadaWasteBread_PizzaBase);
    RegisterRecipe(new CraftDadaWasteBread_PizzaBase1);
    RegisterRecipe(new CraftDadaWasteBread_PizzaBase2);
    RegisterRecipe(new CraftDadaCannibalDish_Spaghetti);
    RegisterRecipe(new CraftDadaCannibalDish_Spaghetti1);
    RegisterRecipe(new CraftDadaCannibalDish_Spaghetti2);
    RegisterRecipe(new CraftDadaCannibalDish_Cannelloni);
    RegisterRecipe(new CraftDadaCannibalDish_Cannelloni1);
    RegisterRecipe(new CraftDadaCannibalDish_Cannelloni2);
    RegisterRecipe(new CraftDadaCannibalDish_Bowties);
    RegisterRecipe(new CraftDadaCannibalDish_Bowties1);
    RegisterRecipe(new CraftDadaCannibalDish_Bowties2);
    RegisterRecipe(new CraftDadaCannibalDish_Lasagna);
    RegisterRecipe(new CraftDadaCannibalDish_Lasagna1);
    RegisterRecipe(new CraftDadaCannibalDish_Lasagna2);
    RegisterRecipe(new CraftDadaCannibalDish_Rigatoni);
    RegisterRecipe(new CraftDadaCannibalDish_Rigatoni1);
    RegisterRecipe(new CraftDadaCannibalDish_Rigatoni2);
    RegisterRecipe(new CraftDadaCannibalDish_PulledPork);
    RegisterRecipe(new CraftDadaCannibalDish_PulledPork1);
    RegisterRecipe(new CraftDadaCannibalDish_PulledPork2);
    RegisterRecipe(new CraftDadaCannibalDish_Sausage);
    RegisterRecipe(new CraftDadaCannibalDish_Chili);
    RegisterRecipe(new CraftDadaCannibalDish_Chili1);
    RegisterRecipe(new CraftDadaCannibalDish_Pie);
    RegisterRecipe(new CraftDadaCannibalSoup_TomatoSoup);
    RegisterRecipe(new CraftDadaCannibalSoup_TomatoSoup1);
    RegisterRecipe(new CraftDadaCannibalSoup_TomatoSoup2);
    RegisterRecipe(new CraftDadaCannibalSoup_TomatoSoup3);
    RegisterRecipe(new CraftDadaCannibalSoup_TomatoSoup4);
    RegisterRecipe(new CraftDadaCannibalSoup_TomatoSoup5);
    RegisterRecipe(new CraftDadaCannibalSoup_Ragout);
    RegisterRecipe(new CraftDadaCannibalSoup_Ragout1);
    RegisterRecipe(new CraftDadaCannibalSoup_Ragout2);
    RegisterRecipe(new CraftDadaCannibalSoup_Ragout3);
    RegisterRecipe(new CraftDadaCannibalSoup_Ragout4);
    RegisterRecipe(new CraftDadaCannibalSoup_Ragout5);
    RegisterRecipe(new CraftDadaCannibalSoup_TomatoSauce);
    RegisterRecipe(new CraftDadaCannibalSoup_TomatoSauce1);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_STAGham);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_LSSPAM);
    RegisterRecipe(new CraftDadaCannibalDish_GroundMeat);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_ESPENChunkySoup);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_ESPENChunkySoup1);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_STAGchili);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_STAGchili1);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_DicedTomatoes);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_DicedTomatoes1);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_Ketchup);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_Ketchup1);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_Ketchup2);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_HomemadeChili);
    RegisterRecipe(new Craft_DadaCannibal_RawFoodCan_HomemadeChili1);

   // CRAFTING

    RegisterRecipe(new CraftDadaCharcoalPiece);
    RegisterRecipe(new CraftDadaCharcoalTabs);
    RegisterRecipe(new CraftDadaBoneMeal);
    RegisterRecipe(new CraftDadaYeast);
  };
};
