modded class MainMenu extends UIScriptedMenu
{
    protected ImageWidget     m_Dada_Logo;

    override Widget Init()
    {

        Widget layoutRoot = super.Init();
        Print("[SYSTEM] Main Menu Logo Loaded.");

        m_Dada_Logo = ImageWidget.Cast(layoutRoot.FindAnyWidget("Cadre_logo"));

        Print("[SYSTEM] Setting the logo image.");
        m_Dada_Logo.LoadImageFile(0,"set:PartyOn_Ghost_Icons image:Vinyl");

        return layoutRoot;
    }
}

/*
modded class InGameMenu
{
    protected Widget    m_DivingSplashlWidget;
    protected ImageWidget    m_SplashLogo;
    override Widget Init()
    {
        super.Init();
        PlayerBase m_player = PlayerBase.Cast(GetGame().GetPlayer());
        if(m_player && m_player.IsAdmiralSwimming() && !m_player.GetDisableDivingMode()) 
        {
            if(!m_DivingSplashlWidget)
            {
                m_DivingSplashlWidget = GetGame().GetWorkspace().CreateWidgets("AdmiralsDivingMod/Scripts/Data/Layout/SplashGUI.layout",layoutRoot);
            }
            m_SplashLogo = ImageWidget.Cast(m_DivingSplashlWidget.FindAnyWidget("SplashLogo"));
            if(m_SplashLogo)
            {
                m_SplashLogo.Show(true);
            }
        }

        return layoutRoot;
    }
}*/