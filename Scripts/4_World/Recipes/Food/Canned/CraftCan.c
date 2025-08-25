class Craft_Dada_RawFoodCan_LSVeggies extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Veggies Can";

		//INGREDIENTS
		//ingredient 1
			InsertIngredient(0,"Tomato");
        	InsertIngredient(0,"GreenBellPepper");
        	InsertIngredient(0,"Zucchini");
        	InsertIngredient(0,"SlicedPumpkin");
        	InsertIngredient(0,"Potato");

		//ingredient 2
        	InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
       	 	InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        	InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way
        	InsertIngredient(1,"SlicedPumpkin");//you can insert multiple ingredients this way
        	InsertIngredient(1,"Potato");//you can insert multiple ingredients this way
        
		//result1
		m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_LSVeggies");//add results here
	}
};

class Craft_Dada_RawFoodCan_LSVeggies1 extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Veggies Can";

		//INGREDIENTS
		//ingredient 1
        	InsertIngredient(0,"PotatoSeed");

		//ingredient 2
        	InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
        	InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        	InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way
	        InsertIngredient(1,"SlicedPumpkin");//you can insert multiple ingredients this way
        	InsertIngredient(1,"Potato");//you can insert multiple ingredients this way

		//result1
		m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_LSVeggies");//add results here
	}
};

class Craft_Dada_RawFoodCan_LSVeggies2 extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Veggies Can";

		//INGREDIENTS
		//ingredient 1
        	InsertIngredient(0,"PotatoSeed");

		//ingredient 2
        	InsertIngredient(1,"PotatoSeed");//you can insert multiple ingredients this way

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_LSVeggies");//add results here
	}
};

class Craft_Dada_RawFoodCan_STAGham extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft STAG Ham Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"MouflonSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"BoarSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"PigSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"DeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"WolfSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"BearSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"CowSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"SheepSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"FoxSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(0,"ReindeerSteakMeat");
		InsertIngredient(0,"FoxSteakMeat");

		//ingredient 2
        InsertIngredient(1,"GoatSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"MouflonSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BoarSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"PigSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"DeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"WolfSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BearSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"CowSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"SheepSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"FoxSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"FoxSteakMeat");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_STAGham");//add results here
	}
};
class Craft_Dada_RawFoodCan_ESPENChunkySoup extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Chunky Soup";

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");
        InsertIngredient(0,"MouflonSteakMeat");
        InsertIngredient(0,"BoarSteakMeat");
        InsertIngredient(0,"PigSteakMeat");
        InsertIngredient(0,"DeerSteakMeat");
        InsertIngredient(0,"WolfSteakMeat");
        InsertIngredient(0,"BearSteakMeat");
        InsertIngredient(0,"CowSteakMeat");
        InsertIngredient(0,"SheepSteakMeat");
        InsertIngredient(0,"FoxSteakMeat");
        InsertIngredient(0,"ChickenBreastMeat");
        InsertIngredient(0,"RabbitLegMeat");
		InsertIngredient(0,"ReindeerSteakMeat");
        //InsertIngredient(0,"srpChickenleg");
        //InsertIngredient(0,"srpSausage");
        //InsertIngredient(0,"srpStew_GroundBeef");

		//ingredient 2
        InsertIngredient(1,"Tomato");
        InsertIngredient(1,"GreenBellPepper");
        InsertIngredient(1,"Zucchini");
        InsertIngredient(1,"SlicedPumpkin");
        InsertIngredient(1,"Potato");
        InsertIngredient(1,"PotatoSeed");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_ESPENChunkySoup");//add results here
	}
};
class Craft_Dada_RawFoodCan_LSSPAM extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock SPAM Can";

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"MouflonSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"BoarSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"PigSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"DeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"WolfSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"BearSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"CowSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"SheepSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(0,"ReindeerSteakMeat");
		InsertIngredient(0,"FoxSteakMeat");

		//ingredient 2
        InsertIngredient(1,"GoatSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"MouflonSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BoarSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"PigSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"DeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"WolfSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BearSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"CowSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"FoxSteakMeat");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_LSSPAM");//add results here
	}
};
class Craft_Dada_RawFoodCan_STAGchili extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft STAG Chili Can";

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GreenBellPepper");

		//ingredient 2
        InsertIngredient(1,"GoatSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"MouflonSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BoarSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"PigSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"DeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"WolfSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BearSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"CowSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"SheepSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"FoxSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(1,"ReindeerSteakMeat");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_STAGchili");//add results here
	}
};
class Craft_Dada_RawFoodCan_ESPENMacnCheese extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft ESPENLock Mac & Cheese Can";
		//INGREDIENTS
		//ingredient 1
		m_MinQuantityIngredient[0] = 25;//-1 = disable check
		m_MinQuantityIngredient[1] = 25;//-1 = disable check

        InsertIngredient(0,"DadaBread_Pasta");
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing

		//ingredient 2
    	InsertIngredient(1,"DadaRaw_Mozza");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRaw_CheddarCurds");//you can insert multiple ingredients way
		InsertIngredient(1,"DadaRaw_Feta");//you can insert multiple ingredients this way
		InsertIngredient(1,"DadaRaw_FreshGoatCheese");//you can insert multiple ingredients
		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_ESPENMacnCheese");//add results here
	}
};
class Craft_Dada_RawFoodCan_DicedTomatoes extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Diced Tomatoes Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way

		//ingredient 2
        InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_DicedTomatoes");//add results here
	}
};
class Craft_Dada_RawFoodCan_Ketchup extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Ketchup Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way
		//ingredient 2
        InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
        InsertIngredient(1,"GreenBellPepper");//you can insert multiple ingredients this way
        InsertIngredient(1,"Zucchini");//you can insert multiple ingredients this way

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Ketchup");//add results here
	}
};
class Craft_Dada_RawFoodCan_Paella extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Paella Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		//InsertIngredient(0,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        	InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        	InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
        	InsertIngredient(0,"Dada_Raw_Rice");
		InsertIngredient(0,"WalleyePollockFilletMeat");
		InsertIngredient(0,"SteelheadTroutFilletMeat");

		//ingredient 2
        	InsertIngredient(1,"Tomato");
        	InsertIngredient(1,"GreenBellPepper");
       	 	InsertIngredient(1,"Zucchini");
        	InsertIngredient(1,"SlicedPumpkin");
        	InsertIngredient(1,"Potato");
        	InsertIngredient(1,"GoatSteakMeat");
        	InsertIngredient(1,"MouflonSteakMeat");
        	InsertIngredient(1,"BoarSteakMeat");
        	InsertIngredient(1,"PigSteakMeat");
        	InsertIngredient(1,"DeerSteakMeat");
        	InsertIngredient(1,"WolfSteakMeat");
        	InsertIngredient(1,"BearSteakMeat");
        	InsertIngredient(1,"CowSteakMeat");
        	InsertIngredient(1,"SheepSteakMeat");
        	InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"FoxSteakMeat");
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");
        	InsertIngredient(1,"ChickenBreastMeat");
        	InsertIngredient(1,"RabbitLegMeat");
        	//InsertIngredient(1,"srpChickenleg");
        	//InsertIngredient(1,"srpSausage");
        	//InsertIngredient(1,"srpStew_GroundBeef");
        	InsertIngredient(1,"CarpFilletMeat");
        	InsertIngredient(1,"MackerelFilletMeat");
        	InsertIngredient(1,"Bitterlings");
        	InsertIngredient(1,"Sardines");
        	//InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Paella");//add results here
	}
};

class Craft_Dada_RawFoodCan_Paella1 extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Paella Can";
		//INGREDIENTS
		//ingredient 1
        	InsertIngredient(0,"Rice");
		InsertIngredient(0,"PotatoSeed");

		//ingredient 2
        	InsertIngredient(1,"Tomato");
        	InsertIngredient(1,"GreenBellPepper");
       	 	InsertIngredient(1,"Zucchini");
        	InsertIngredient(1,"SlicedPumpkin");
        	InsertIngredient(1,"Potato");
        	InsertIngredient(1,"GoatSteakMeat");
        	InsertIngredient(1,"MouflonSteakMeat");
        	InsertIngredient(1,"BoarSteakMeat");
        	InsertIngredient(1,"PigSteakMeat");
        	InsertIngredient(1,"DeerSteakMeat");
        	InsertIngredient(1,"WolfSteakMeat");
        	InsertIngredient(1,"BearSteakMeat");
        	InsertIngredient(1,"CowSteakMeat");
        	InsertIngredient(1,"SheepSteakMeat");
        	InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"FoxSteakMeat");
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");
        	InsertIngredient(1,"ChickenBreastMeat");
        	InsertIngredient(1,"RabbitLegMeat");
        	//InsertIngredient(1,"srpChickenleg");
        	//InsertIngredient(1,"srpSausage");
        	//InsertIngredient(1,"srpStew_GroundBeef");
        	InsertIngredient(1,"CarpFilletMeat");
        	InsertIngredient(1,"MackerelFilletMeat");
        	InsertIngredient(1,"Bitterlings");
        	InsertIngredient(1,"Sardines");
        	//InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Paella");//add results here
	}
};

class Craft_Dada_RawFoodCan_Paella2 extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Paella Can";
		//INGREDIENTS
		//ingredient 1
        	InsertIngredient(0,"Rice");

		//ingredient 2
        	InsertIngredient(1,"PotatoSeed");
        
		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Paella");//add results here
	}
};

class Craft_Dada_RawFoodCan_PumpkinPuree extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Pumpkin Puree Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Pumpkin");

		//ingredient 2
        InsertIngredient(1,"Pumpkin");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_PumpkinPuree");//add results here
	}
};
class Craft_Dada_RawFoodCan_Quail extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Quail Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(0,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"srpChickenleg");//you can insert multiple ingredients this way
		//ingredient 2
        InsertIngredient(1,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Quail");//add results here

	}
};
class Craft_Dada_RawFoodCan_Relish extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Relish Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Zucchini");
		//ingredient 2
        InsertIngredient(1,"GreenBellPepper");
        InsertIngredient(1,"Zucchini");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Relish");//add results here
	}
};

class Craft_Dada_RawFoodCan_Samosa extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Samosa filling Can";

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Potato");

		//ingredient 2
        InsertIngredient(1,"GreenBellPepper");
        InsertIngredient(1,"Potato");
        InsertIngredient(1,"GoatSteakMeat");
        InsertIngredient(1,"MouflonSteakMeat");
        InsertIngredient(1,"BoarSteakMeat");
        InsertIngredient(1,"PigSteakMeat");
        InsertIngredient(1,"DeerSteakMeat");
        InsertIngredient(1,"WolfSteakMeat");
        InsertIngredient(1,"BearSteakMeat");
        InsertIngredient(1,"CowSteakMeat");
        InsertIngredient(1,"SheepSteakMeat");
        InsertIngredient(1,"FoxSteakMeat");
        InsertIngredient(1,"ChickenBreastMeat");
        InsertIngredient(1,"RabbitLegMeat");
        //InsertIngredient(1,"srpChickenleg");
        //InsertIngredient(1,"srpSausage");
        //InsertIngredient(1,"srpStew_GroundBeef");
        InsertIngredient(1,"CarpFilletMeat");
        InsertIngredient(1,"MackerelFilletMeat");
        InsertIngredient(1,"Bitterlings");
        InsertIngredient(1,"Sardines");
		InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Samosa");//add results here
	}
};

class Craft_Dada_RawFoodCan_Samosa1 extends Craft_DadaTempTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Samosa filling Can";

		//INGREDIENTS
		//ingredient 1
        InsertIngredient(0,"PotatoSeed");

		//ingredient 2
        InsertIngredient(1,"GreenBellPepper");
        InsertIngredient(1,"Potato");
        InsertIngredient(1,"GoatSteakMeat");
        InsertIngredient(1,"MouflonSteakMeat");
        InsertIngredient(1,"BoarSteakMeat");
        InsertIngredient(1,"PigSteakMeat");
        InsertIngredient(1,"DeerSteakMeat");
        InsertIngredient(1,"WolfSteakMeat");
        InsertIngredient(1,"BearSteakMeat");
        InsertIngredient(1,"CowSteakMeat");
        InsertIngredient(1,"SheepSteakMeat");
        InsertIngredient(1,"FoxSteakMeat");
        InsertIngredient(1,"ChickenBreastMeat");
        InsertIngredient(1,"RabbitLegMeat");
        //InsertIngredient(1,"srpChickenleg");
        //InsertIngredient(1,"srpSausage");
        //InsertIngredient(1,"srpStew_GroundBeef");
        InsertIngredient(1,"CarpFilletMeat");
        InsertIngredient(1,"MackerelFilletMeat");
        InsertIngredient(1,"Bitterlings");
        InsertIngredient(1,"Sardines");
		InsertIngredient(1,"ReindeerSteakMeat");
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Samosa");//add results here
	}
};

class Craft_Dada_RawFoodCan_Samosa2 extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Samosa filling Can";

		//INGREDIENTS
		//ingredient 1
        InsertIngredient(0,"PotatoSeed");

		//ingredient 2
        InsertIngredient(1,"PotatoSeed");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Samosa");//add results here
	}
};

class Craft_Dada_RawFoodCan_HomemadeChili extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Homemade Chili Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way
		//ingredient 2
        InsertIngredient(1,"GoatSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"MouflonSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BoarSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"PigSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"DeerSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"WolfSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"BearSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"CowSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"SheepSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"FoxSteakMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"ChickenBreastMeat");//you can insert multiple ingredients this way
        InsertIngredient(1,"RabbitLegMeat");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpChickenleg");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpSausage");//you can insert multiple ingredients this way
        //InsertIngredient(1,"srpStew_GroundBeef");//you can insert multiple ingredients this way
		InsertIngredient(1,"ReindeerSteakMeat");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_HomemadeChili");//add results here
	}
};
class Craft_Dada_RawFoodCan_HomemadePumpkinPuree extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Perky Pumpkin Can";
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"SlicedPumpkin");
		//ingredient 2
        InsertIngredient(1,"SlicedPumpkin");

		//result1
	m_ResultSetQuantity[0] = 300;//-1 = do nothing
		AddResult("Dada_RawFoodCan_HomemadePumpkinPuree");//add results here
	}
};
class Craft_Dada_RawFoodCan_Crab extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Crab Can";

		m_MinQuantityIngredient[0] = 250;//-1 = disable check
		m_MinQuantityIngredient[1] = 250;//-1 = disable check
		//INGREDIENTS
		//ingredient 1
        InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		//InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"WalleyePollockFilletMeat");
		InsertIngredient(0,"SteelheadTroutFilletMeat");
		//ingredient 2
        InsertIngredient(1,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(1,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		//InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");
		//result1
	m_ResultSetQuantity[0] = 1000;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Crab");//add results here
	}
};
class Craft_Dada_RawFoodCan_Clam extends Craft_DadaTempStageTemp1Stage1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Clam Can";

	
		m_MinQuantityIngredient[0] = 250;//-1 = disable check
		m_MinQuantityIngredient[1] = 250;//-1 = disable check
	
		//INGREDIENTS
		//ingredient 1
        //InsertIngredient(0,"SRP_ClamFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(0,"Sardines");//you can insert multiple ingredients this way
		//InsertIngredient(0,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		//InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"WalleyePollockFilletMeat");
		InsertIngredient(0,"SteelheadTroutFilletMeat");
		//ingredient 2
        InsertIngredient(1,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MackerelFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"Bitterlings");//you can insert multiple ingredients this way
		InsertIngredient(1,"Sardines");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		//InsertIngredient(0,"AcanthopagrusFilletMeat");//you can insert multiple ingredients this way
		//InsertIngredient(0,"ChubFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"HerringFilletMeat");//you can insert multiple ingredients this way
        //InsertIngredient(0,"MullowayFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"WalleyePollockFilletMeat");
		InsertIngredient(1,"SteelheadTroutFilletMeat");

		//result1
	m_ResultSetQuantity[0] = 1000;//-1 = do nothing
		AddResult("Dada_RawFoodCan_Clam");//add results here
	}
};
