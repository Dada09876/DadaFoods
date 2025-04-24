modded class DayZGame
{
  protected ref DadaCheesePress_WorkbenchRecipes m_TestWorkbenchRecipes;

  void DayZGame()
  {
    m_TestWorkbenchRecipes = new DadaCheesePress_WorkbenchRecipes();
  }
  DadaCheesePress_WorkbenchRecipes GetIATTestWorkbenchRecipes()
  {
    return m_TestWorkbenchRecipes;
  }
};