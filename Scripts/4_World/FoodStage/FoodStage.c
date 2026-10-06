modded class FoodStage
{
	static const int PRESERVED = 7;
	static const int DADA_FOOD_STAGE_COUNT = 8;

	static int m_StagePreservedHash = 0;

	protected FoodStageType m_PreviousFoodStageType;

	override static string GetFoodStageName(FoodStageType food_stage_type)
	{
		if (food_stage_type == PRESERVED)
			return "Preserved";

		return super.GetFoodStageName(food_stage_type);
	}

	override static int GetFoodStageNameHash(FoodStageType food_stage_type)
	{
		if (food_stage_type == PRESERVED)
		{
			if (m_StagePreservedHash == 0)
				m_StagePreservedHash = "Preserved".Hash();

			return m_StagePreservedHash;
		}

		return super.GetFoodStageNameHash(food_stage_type);
	}

	override void SetFoodStageType(FoodStageType food_stage_type)
	{
		FoodStageType stageOld = m_FoodStageType;

		if (food_stage_type == PRESERVED)
		{
			if (stageOld == FoodStageType.BAKED || stageOld == FoodStageType.BOILED || stageOld == FoodStageType.DRIED)
			{m_PreviousFoodStageType = stageOld;}
		}

		m_FoodStageType = food_stage_type;
		OnFoodStageChange(stageOld, food_stage_type);
		GetFoodItem().Synchronize();
	}

	FoodStageType GetPreviousFoodStageType()
	{
		return m_PreviousFoodStageType;
	}

	void SetPreviousFoodStageType(FoodStageType stage_type)
	{
		m_PreviousFoodStageType = stage_type;
	}

	override void SetupFoodStageMapping()
	{
		super.SetupFoodStageMapping();

		string foodType = m_FoodItem.GetType();
		int hashedFood = foodType.Hash();

		map<int, ref map<int, ref array<float>>> foodStagesMap;

		if (!m_EdibleBasePropertiesMap.Find(hashedFood, foodStagesMap))
			return;

		int preservedHash = GetFoodStageNameHash(PRESERVED);

		if (foodStagesMap.Contains(preservedHash))
			return;

		map<int, ref array<float>> stagePropertiesMap = new map<int, ref array<float>>;

		array<float> visual_properties = new array<float>;
		string path = string.Format("CfgVehicles %1 Food FoodStages Preserved visual_properties", foodType);
		g_Game.ConfigGetFloatArray(path, visual_properties);
		stagePropertiesMap.Insert(VISUAL_PROPERTIES_HASH, visual_properties);

		array<float> nutrition_properties = new array<float>;
		path = string.Format("CfgVehicles %1 Food FoodStages Preserved nutrition_properties", foodType);
		g_Game.ConfigGetFloatArray(path, nutrition_properties);
		stagePropertiesMap.Insert(NUTRITION_PROPERTIES_HASH, nutrition_properties);

		array<float> cooking_properties = new array<float>;
		path = string.Format("CfgVehicles %1 Food FoodStages Preserved cooking_properties", foodType);
		g_Game.ConfigGetFloatArray(path, cooking_properties);
		stagePropertiesMap.Insert(COOKING_PROPERTIES_HASH, cooking_properties);

		foodStagesMap.Insert(preservedHash, stagePropertiesMap);
	}

	override void SetupFoodStageTransitionMapping()
	{
		super.SetupFoodStageTransitionMapping();

		string foodType = m_FoodItem.GetType();
		int hashedFood = foodType.Hash();

		map<int, ref map<int, ref array<int>>> foodStagesMap;

		if (!m_EdibleBaseTransitionsMap.Find(hashedFood, foodStagesMap))
			return;

		int preservedHash = GetFoodStageNameHash(PRESERVED);

		if (foodStagesMap.Contains(preservedHash))
			return;

		map<int, ref array<int>> stageTransitionsMap = new map<int, ref array<int>>;

		string config_path = string.Format("CfgVehicles %1 Food FoodStageTransitions Preserved", foodType);

		for (int j = 0; j < g_Game.ConfigGetChildrenCount(config_path); ++j)
		{
			array<int> stageTransition = new array<int>;
			string classCheck;

			g_Game.ConfigGetChildName(config_path, j, classCheck);

			string transition_path = string.Format("%1 %2", config_path, classCheck);

			if (g_Game.ConfigIsExisting(transition_path))
			{
				int transitionClassHash = classCheck.Hash();

				stageTransition.Insert(g_Game.ConfigGetInt(string.Format("%1 transition_to", transition_path)));

				stageTransition.Insert(g_Game.ConfigGetInt(string.Format("%1 cooking_method", transition_path)));

				stageTransitionsMap.Insert(transitionClassHash, stageTransition);

				if (m_FoodStageTransitionKeys.Find(transitionClassHash) == -1)
					m_FoodStageTransitionKeys.Insert(transitionClassHash);
			}
		}

		foodStagesMap.Insert(preservedHash, stageTransitionsMap);
	}

	override FoodStageType GetNextFoodStageType(CookingMethodType cooking_method)
	{
		if (GetFoodStageType() == PRESERVED)
			return m_PreviousFoodStageType;

		return super.GetNextFoodStageType(cooking_method);
	}

	bool IsFoodPreserved()
	{
		return GetFoodStageType() == PRESERVED;
	}
	override void OnStoreSave(ParamsWriteContext ctx)
	{
		super.OnStoreSave(ctx);
		ctx.Write(m_PreviousFoodStageType);
	}

	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		if (!super.OnStoreLoad(ctx, version))
			return false;

		if (!ctx.Read(m_PreviousFoodStageType))
			m_PreviousFoodStageType = FoodStageType.NONE;

		return true;
	}
};