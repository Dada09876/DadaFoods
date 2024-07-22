modded class InGameMenu
{
    protected Widget    DadaFoodsLogoOverview;
    protected ImageWidget    DadaFoodsLogoPlacement;
    
    override Widget Init()
    {
        super.Init();

            if(!DadaFoodsLogoOverview)
            {
                DadaFoodsLogoOverview = GetGame().GetWorkspace().CreateWidgets("Source_Files\DadaFoods\SplashGUI.layout",layoutRoot);
            }
            DadaFoodsLogoPlacement = ImageWidget.Cast(DadaFoodsLogoOverview.FindAnyWidget("SplashLogo"));
            if(DadaFoodsLogoPlacement)
            {
                DadaFoodsLogoPlacement.Show(true);
            }

        return layoutRoot;
    }
}