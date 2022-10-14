class CfgPatches
{
	class HS_SPC_Headwear
	{
		units[]=
		{
			"HS_SCP_Mod"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class H_Cap_red;
	class H_MilCap_oucamo;
	class H_HelmetHBK_base_F;
    class H_HelmetHBK_headset_base_F;
    class H_HelmetHBK_ear_base_F;
    class H_HelmetHBK_chops_base_F;
    class H_HelmetSpecB;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};

    //-----Helmets (Black)-----//

	class HS_ECH_B: H_HelmetB
	{
		author="Schlopp";
		displayName="Enhanced Combat Helmet (Black)";
		picture="\HS_SCP\HS_Headwear\data\Icons\icon_H_OGA_Helmet_ca.paa";
		model="A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_ECH_B_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=20;
			allowedSlots[]={901,605};
			uniformModel="A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};

	class HS_LCH_B: H_HelmetB
	{
		author="Schlopp";
		displayName="Light Combat Helmet (Black)";
		picture="\HS_SCP\HS_Headwear\data\Icons\icon_H_OGA_Helmet_ca.paa";
		model="A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_ECH_B_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=15;
			allowedSlots[]={901,605};
			uniformModel="A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};

	 class HS_AMH_B: H_HelmetHBK_base_F
    {
        author="Schlopp";
        scope=2;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (Black)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_B_co.paa"
        };
    };

    class HS_AMH_Headset_B: H_HelmetHBK_headset_base_F
    {
        author="Schlopp";
        scope=2;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (Black, Headset)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_B_co.paa"
        };
    };

    class HS_AMH_Chops_B: H_HelmetHBK_chops_base_F
    {
        author="Schlopp";
        scope=2;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (Black, Chops)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_B_co.paa"
        };
    };

    class HS_AMH_EarProtectors_B: H_HelmetHBK_ear_base_F
    {
        author="Schlopp";
        scope=2;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (Black, Ear Protectors)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_B_co.paa"
        };
    };

	//-----Helmets (Colored)-----//

	 class HS_AMH_BT: H_HelmetHBK_base_F
    {
        author="Schlopp";
        scope=0;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (Black, Tan)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_BT_co.paa"
        };
    };

    class HS_AMH_Headset_BT: H_HelmetHBK_headset_base_F
    {
        author="Schlopp";
        scope=0;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (Black, Tan, Headset)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_BT_co.paa"
        };
    };

    class HS_AMH_Chops_BT: H_HelmetHBK_chops_base_F
    {
        author="Schlopp";
        scope=0;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (Black, Tan, Chops)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_BT_co.paa"
        };
    };

    class HS_AMH_EarProtectors_BT: H_HelmetHBK_ear_base_F
    {
        author="Schlopp";
        scope=0;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (Black, Tan, Ear Protectors)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_BT_co.paa"
        };
    };

	//

	class HS_AMH_W: H_HelmetHBK_base_F
    {
        author="Schlopp";
        scope=2;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (White)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_W_co.paa"
        };
    };

    class HS_AMH_Headset_W: H_HelmetHBK_headset_base_F
    {
        author="Schlopp";
        scope=2;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (White, Headset)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_W_co.paa"
        };
    };

    class HS_AMH_Chops_W: H_HelmetHBK_chops_base_F
    {
        author="Schlopp";
        scope=2;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (White, Chops)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_W_co.paa"
        };
    };

    class HS_AMH_EarProtectors_W: H_HelmetHBK_ear_base_F
    {
        author="Schlopp";
        scope=2;
        picture="\HS_SCP\HS_Headwear\data\Icons\icon_Headgear_ECH_CA.paa";
        displayName="Advanced Modular Helmet (White, Ear Protectors)";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Headwear\data\HS_AMH_Helmet_W_co.paa"
        };
    };

	

	//-----Caps (Foundation)-----//

	class HS_Patrol_Cap_SCP: H_MilCap_oucamo
	{
		scope=2;
		scopeCurator=2;
		author="Schlopp";
		_generalMacro="HS_Patrol_Cap_SCP";
		displayName="Patrol Cap (SCP)";
		picture="\HS_SCP\HS_Headwear\data\Icons\icon_H_Cap_patrol_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Patrol_Cap_SCP_co.paa"
		};
	};

	class HS_Cap_SCP: H_Cap_red
	{
		author="Schlopp";
		_generalMacro="HS_Cap_SCP";
		displayName="Cap (SCP)";
		picture="\HS_SCP\HS_Headwear\data\Icons\icon_H_Cap_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Cap_SCP_co.paa"
		};
	};
	class H_PASGT_basic_black_F;
    class HS_Basic_Helmet_Olive_CI: H_PASGT_basic_black_F
    {
        author = "Schlopp";
        _generalMacro = "HS_Basic_Helmet_Olive_CI";
        scope = 2;
        displayName = "Basic Helmet (Chaos Insurgency)";
        picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_PASGT_basic_black_CA.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\HS_SCP\HS_Headwear\data\HS_Basic_Helmet_Olive_CI.paa"
        };
    };
	class HS_Basic_Helmet_Blue_GOC: H_PASGT_basic_black_F
    {
        author = "Schlopp";
        _generalMacro = "HS_Basic_Helmet_Blue_GOC";
        scope = 2;
        displayName = "Basic Helmet (GOC)";
        picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_PASGT_basic_black_CA.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\HS_SCP\HS_Headwear\data\HS_Basic_Helmet_Blue_GOC.paa"
        };
    };
    class HS_Basic_Helmet_Black: H_PASGT_basic_black_F
    {
        author = "Schlopp";
        _generalMacro = "HS_Basic_Helmet_Black";
        scope = 2;
        displayName = "Basic Helmet (Black)";
        picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_PASGT_basic_black_CA.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\HS_SCP\HS_Headwear\data\HS_Basic_Helmet_Black.paa"
        };
    };
};
class cfgGlasses
{	
	class None;
	class G_Balaclava_TI_blk_F;
	class HS_Balaclava_B: G_Balaclava_TI_blk_F
	{
		author="Schlopp";
		displayName="Balaclava (Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Balaclava_B_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Balaclava_cloth.rvmat"
		};
	};
	class HS_Balaclava_G_B: G_Balaclava_TI_blk_F
	{
		author="Schlopp";
		_generalMacro="HS_Balaclava_G_B";
		scope = 0;
		displayName="Balaclava (Black, Goggles)";
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Balaclava_B_co.paa",
			"\HS_SCP\HS_Headwear\data\HS_Combat_Goggles_B_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Balaclava_cloth.rvmat"
		};
		identityTypes[]={};
		mass=10;
		DLC="Expansion";
	};
	class HS_Balaclava_W: G_Balaclava_TI_blk_F
	{
		author="Schlopp";
		displayName="Balaclava (White)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Balaclava_W_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Balaclava_cloth.rvmat"
		};
	};
	class HS_Balaclava_G_W: G_Balaclava_TI_blk_F
	{
		author="Schlopp";
		_generalMacro="HS_Balaclava_G_W";
		scope = 0;
		displayName="Balaclava (White, Goggles)";
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Balaclava_W_co.paa",
			"\HS_SCP\HS_Headwear\data\HS_Combat_Goggles_W_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Balaclava_cloth.rvmat"
		};
		identityTypes[]={};
		mass=10;
		DLC="Expansion";
	};
	class HS_Combat_Goggles_B: None
	{
		author="Schlopp";
		scope = 0;
		_generalMacro="HS_Combat_Goggles_B";
		displayname="Combat Goggles (Black)";
		model="\A3\characters_f_beta\heads\glasses\g_combat";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Combat_Goggles_B_co.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			300,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			50,
			"G_NATO_SF",
			300,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			50,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	class HS_Combat_Goggles_W: None
	{
		author="Schlopp";
		scope = 0;
		_generalMacro="HS_Combat_Goggles_W";
		displayname="Combat Goggles (White)";
		model="\A3\characters_f_beta\heads\glasses\g_combat";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Headwear\data\HS_Combat_Goggles_W_co.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			300,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			50,
			"G_NATO_SF",
			300,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			50,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
    class G_Bandanna_blk;
	class HS_Bandanna_Skull_W: G_Bandanna_blk
    {
        author = "Schlopp";
        displayName = "Bandana (White, Skull)";
		
        hiddenSelectionsTextures[] = 
		{ 
		"\HS_SCP\HS_Headwear\data\HS_Bandanna_Skull_W_co.paa"
		};
    };
};
class cfgMods
{
	author="Schlopp";
	timepacked="1475811069";
};