// override the plugin recipe manager class
modded class PluginRecipesManagerBase extends PluginBase
{    
  // override the register recipes method
  override void RegisterRecipies()
  {
    // call super so the "vanilla" code is called first
    super.RegisterRecipies();
    // an example of registering a recipe you created

    // PROCESSING

    /*
    RegisterRecipe(new CraftsrpSaltBag);
    RegisterRecipe(new CraftsrpCheeseMold);
    RegisterRecipe(new RepairsrpCheeseMold);
    */


    // FOOD COOKED
    RegisterRecipe(new CraftDadaBread_Base);
    RegisterRecipe(new CraftDadaBread_Pita);
    RegisterRecipe(new CraftDadaBread_Loaf);
    RegisterRecipe(new CraftDadaBread_Baguette);
    RegisterRecipe(new CraftDadaBread_Pasta);
    RegisterRecipe(new CraftDadaBread_Pizza);
    RegisterRecipe(new CraftDadaDish_Spaghetti);
    RegisterRecipe(new CraftDadaDish_Cannelloni);
    RegisterRecipe(new CraftDadaDish_Bowties);
    RegisterRecipe(new CraftDadaDish_Lasagna);
    RegisterRecipe(new CraftDadaDish_Rigatoni);
    RegisterRecipe(new CraftDadaBread_PizzaBase);
    RegisterRecipe(new CraftDadaDish_GroundMeat);
    RegisterRecipe(new CraftDadaDish_MashedPotatoes);
    RegisterRecipe(new CraftDadaDish_MashedPotatoes1);
    RegisterRecipe(new CraftDadaSoup_ChickenBroth);
    RegisterRecipe(new CraftDadaSoup_ChickenBroth1);
    RegisterRecipe(new CraftDadaSoup_ChickenNoodleSoup);
    RegisterRecipe(new CraftDadaDish_Chili);
    RegisterRecipe(new CraftDadaSoup_Gravy);
    RegisterRecipe(new CraftDadaDish_Gumbo);
    RegisterRecipe(new CraftDadaDish_MushroomCream);
    RegisterRecipe(new CraftDadaDish_SauteedMushrooms);
    RegisterRecipe(new CraftDadaDish_Pancakes);
    RegisterRecipe(new CraftDadaDish_Pie);
    RegisterRecipe(new CraftDadaDish_Pie1);
    RegisterRecipe(new CraftDadaDish_Pie2);
    RegisterRecipe(new CraftDadaSoup_Ragout);
    RegisterRecipe(new CraftDadaDish_SeafoodGumbo);
    RegisterRecipe(new CraftDadaSoup_TomatoSauce);
    RegisterRecipe(new CraftDadaSoup_TomatoSoup);
    RegisterRecipe(new CraftDadaDish_MacaroniAndCheese);
    RegisterRecipe(new CraftDadaDish_ShepardsPie);
    RegisterRecipe(new CraftDadaDish_PulledPork);


    // FOOD CANNED

    RegisterRecipe(new Craft_OpenCan);
    RegisterRecipe(new Craft_SealCan);
    RegisterRecipe(new Craft_Dada_RawFoodCan_LSVeggies);
    RegisterRecipe(new Craft_Dada_RawFoodCan_STAGham);
    RegisterRecipe(new Craft_Dada_RawFoodCan_ESPENChunkySoup);
    RegisterRecipe(new Craft_Dada_RawFoodCan_LSSPAM);
    RegisterRecipe(new Craft_Dada_RawFoodCan_STAGchili);
    RegisterRecipe(new Craft_Dada_RawFoodCan_ESPENMacnCheese);
    RegisterRecipe(new Craft_Dada_RawFoodCan_DicedTomatoes);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Ketchup);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Paella);
    RegisterRecipe(new Craft_Dada_RawFoodCan_PumpkinPuree);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Quail);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Relish);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Samosa);
    RegisterRecipe(new Craft_Dada_RawFoodCan_HomemadeChili);
    RegisterRecipe(new Craft_Dada_RawFoodCan_HomemadePumpkinPuree);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Crab);
    RegisterRecipe(new Craft_Dada_RawFoodCan_Clam);

    // FOOD RAW

    /*
    RegisterRecipe(new CraftsrpChips_PumpkinSeeds);
    RegisterRecipe(new Craft_Chips_Jerky);
    RegisterRecipe(new CraftsrpFoodCan_SmallButter);
    RegisterRecipe(new CraftsrpFoodCan_BigButter);
    RegisterRecipe(new CraftsrpYogourt);
    RegisterRecipe(new CraftsrpDrink_CurdsAndWhey);
    RegisterRecipe(new CraftsrpBoxCereal_Kosmostars);
    RegisterRecipe(new CraftsrpBoxCereal_Crisps);
    RegisterRecipe(new CraftsrpBoxCereal_Paulies);
    RegisterRecipe(new CraftsrpBoxCereal_Kids);
    RegisterRecipe(new CraftsrpBoxCereal_Frosties);
    RegisterRecipe(new CraftsrpRawCerealCrunchin_Frosties);
    RegisterRecipe(new CraftsrpRawCerealCrunchin_Kids);
    RegisterRecipe(new CraftsrpRawCerealCrunchin_Kosmostar);
    RegisterRecipe(new CraftsrpRawPokeBowl);
    RegisterRecipe(new CraftsrpRawRice);
    RegisterRecipe(new CraftsrpRawSalad);
    RegisterRecipe(new CraftsrpRawTomatoSalad);
    RegisterRecipe(new CraftFreshCheese_Mozza);
    RegisterRecipe(new CraftFreshCheese_CheddarCurds);
    RegisterRecipe(new CraftFreshCheese_Feta);
    RegisterRecipe(new CraftFreshCheese_Goat);
    RegisterRecipe(new CraftsrpSushi);
    RegisterRecipe(new CraftsrpFrozenYogurt);
    RegisterRecipe(new CraftsrpIScream);
    */


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
    RegisterRecipe(new CraftDadaDrink_MilkCoffeeArt);
    RegisterRecipe(new CraftDadaDrink_BlackTea);
    RegisterRecipe(new CraftDadaDrink_GreenTea);
    RegisterRecipe(new CraftDadaDrink_MilkShake);

    
    // CANNIBAL

    /*
    RegisterRecipe(new CraftsrpChips_MutantFood_SkinJerky);
    RegisterRecipe(new CraftsrpStew_MutantFood_EyeballSoup);
    RegisterRecipe(new CraftsrpStew_MutantFood_EntrailSpaghetti);
    */

   // MISCELLANEOUS

    /*
    RegisterRecipe(new CraftCatalanosMenu);
    RegisterRecipe(new CraftsrpKidsMenu);
    RegisterRecipe(new CraftsrpCharcoalTabs);
    */
  };
};