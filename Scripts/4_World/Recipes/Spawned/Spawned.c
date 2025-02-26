class CraftBoxCerealCrunchin extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Cereal Box";

		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BoxCerealCrunchin");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BoxCerealCrunchin");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("BoxCerealCrunchin");//add results here
	}
};

class CraftDadaSpawned_BoxCerealCrunchin_Kosmostar extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Stars Cereal Box";
		
		//conditions
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BoxCerealCrunchin");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BoxCerealCrunchin");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSpawned_BoxCerealCrunchin_Kosmostar");//add results here
	}
};

class CraftDadaSpawned_BoxCerealCrunchin_Frosties extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Corn Flakes Cereal Box";

		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BoxCerealCrunchin");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BoxCerealCrunchin");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSpawned_BoxCerealCrunchin_Frosties");//add results here
	}
};

class CraftDadaSpawned_BoxCerealCrunchin_Nesquik extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Nesquik Cereal Box";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BoxCerealCrunchin");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BoxCerealCrunchin");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSpawned_BoxCerealCrunchin_Nesquik");//add results here
	}
};

/*class CraftDadaSpawned_Coffee extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Coffee Bag";
	
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BoxCerealCrunchin_Coffee");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BoxCerealCrunchin_Coffee");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
	
		//result1
		AddResult("DadaSpawned_Coffee");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}
};


class CraftDadaSpawned_GreenTea extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Green Tea Bag";
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
	
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BoxCerealCrunchin_Coffee");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BoxCerealCrunchin_Coffee");//you can insert multiple ingredients this way

		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSpawned_GreenTea");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}
};


class CraftDadaSpawned_BlackTea extends Craft_DadaTempTemp1_BaseRecipe
{
	override void Init()
	{
		super.Init();
		m_Name = "Craft Black Tea Bag";
		
		//conditions

		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		
		//ingredient 1
		InsertIngredient(0,"BoxCerealCrunchin_Coffee");//you can insert multiple ingredients this way
	
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		
		//ingredient 2
		InsertIngredient(1,"BoxCerealCrunchin_Coffee");//you can insert multiple ingredients this way
		//2x full plant material = 1 serving of tea/coffee

		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		
		//result1
		AddResult("DadaSpawned_BlackTea");//add results here

		m_ResultSetQuantity[0] = 125;//-1 = do nothing
	}
};*/
