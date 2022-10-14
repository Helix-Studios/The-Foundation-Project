class CfgPatches
{
	class HS_SPC_Uniforms
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
class CfgVehicles
{
	class B_Soldier_F;
	class C_man_1;
	class B_Soldier_03_f;
	class B_Soldier_base_F;
	class C_Uniform_Scientist_01_base_F;
	class HS_Security_Fatigues_01_F: B_Soldier_F
	{
		author="Schlopp";
		_generalMacro="B_soldier_F";
		scope=2;
		displayName="SF W";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="HS_Security_Fatigues";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Fatigues_Security_SCP_co.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class HS_Security_Fatigues_02_F: B_Soldier_F
	{
		author="Schlopp";
		_generalMacro="B_soldier_F";
		scope=2;
		displayName="SF WRS";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="HS_SCP_Camo_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Fatigues_Security_SCP_co.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class HS_Combat_Fatigues_01_B_F: B_Soldier_F
	{
		author="Schlopp";
		_generalMacro="B_soldier_F";
		scope=2;
		displayName="CF B";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="HS_Combat_Fatigues";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Combat_Fatigues_2_B_co.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class HS_Combat_Fatigues_02_B_F: B_Soldier_F
	{
		author="Schlopp";
		_generalMacro="B_soldier_F";
		scope=2;
		displayName="CF B RS";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="HS_Combat_Fatigues_RS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Combat_Fatigues_2_B_co.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class HS_Combat_Uniform_01_B_F: B_Soldier_F
	{
		author="Schlopp";
		_generalMacro="B_soldier_F";
		scope=2;
		displayName="CU B";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="HS_Combat_Fatigues_B";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Combat_Fatigues_1_B_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"VSM_Projecthonor\Data\VSM_ARD.RVMAT"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class HS_Combat_Uniform_02_B_F: B_Soldier_F
	{
		author="Schlopp";
		_generalMacro="B_soldier_F";
		scope=2;
		displayName="CU B RS";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="HS_Combat_Fatigues_B_RS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Combat_Fatigues_1_B_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"VSM_Projecthonor\Data\VSM_ARD.RVMAT"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	 class HS_Security_Officer_Uniform_SCP: B_Soldier_base_F
    {
        author="Schlopp";
        _generalMacro="HS_Security_Officer_Uniform_SCP";
        scope=2;
        picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_Security_Officer_SCP_co.paa";
        model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
        displayName="Security Officer Uniform (SCP)";
        identityTypes[]={"Head_Rangemaster","G_Rangemaster"};
        nakedUniform="U_BasicBody";
        uniformClass="HS_Security_Officer_Uniform_SCP_F";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Uniforms\data\HS_Security_Officer_Uniform_SCP_co.paa"
        };
    };
     class HS_Security_Uniform_SCP: B_Soldier_base_F
    {
        author="Schlopp";
        _generalMacro="HS_Security_Uniform_SCP";
        scope=2;
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_Security_Uniform_SCP_co.paa";
        model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
        displayName="Security Uniform (SCP)";
        identityTypes[]={"Head_Rangemaster","G_Rangemaster"};
        nakedUniform="U_BasicBody";
        uniformClass="HS_Security_Uniform_SCP_F";
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Uniforms\data\HS_Security_Uniform_SCP_co.paa"
        };
    };
	class HS_Scientist_Outfit_SCP: C_Uniform_Scientist_01_base_F
	{
		author="Schlopp";
		_generalMacro="HS_Scientist_Outfit_SCP";
		scope=1;
		model="\a3\Characters_F\Civil\Scientist_01_F.p3d";
		uniformClass="HS_Scientist_Outfit_SCP_F";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Scientist_01_SCP_co.paa",
			"\HS_SCP\HS_Uniforms\data\ID\HS_ID_SCP_L1_co.paa",
			"\HS_SCP\HS_Uniforms\data\HS_Scientist_01_SCP_co.paa"
		};
	};
	class B_CBRN_Man_Oversuit_01_MTP_F;
	class HS_CBRN_Suit_SCP_W: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Schlopp";
		scope=1;
		side=0;
		scopeCurator=0;
		scopeArsenal=2;
 		displayName="CBRN Suit (SCP, White)";
		uniformClass="HS_CBRN_SCP_W";
		identityTypes[]={};
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_CBRN_Suit_SCP_W_co.paa"
		};
		weapons[]={};
		respawnweapons[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]={};
		respawnlinkedItems[]={};
	};
	class HS_CBRN_Suit_SCP_B: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Schlopp";
		scope=1;
		side=0;
		scopeCurator=0;
		scopeArsenal=2;
 		displayName="CBRN Suit (SCP, Black)";
		uniformClass="HS_CBRN_SCP_B";
		identityTypes[]={};
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_CBRN_Suit_SCP_B_co.paa"
		};
		weapons[]={};
		respawnweapons[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]={};
		respawnlinkedItems[]={};
	};
	class HS_CBRN_Suit_SCP_MH: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Schlopp";
		scope=1;
		side=0;
		scopeCurator=0;
		scopeArsenal=2;
 		displayName="CBRN Suit (SCP, Maz Hatters)";
		uniformClass="HS_CBRN_SCP_MH";
		identityTypes[]={};
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_CBRN_Suit_SCP_MH_B_co.paa"
		};
		weapons[]={};
		respawnweapons[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]={};
		respawnlinkedItems[]={};
	};
	class HS_D_Class_Fatigues_Dirty: C_man_1
	{
		author="Schlopp";
		scope=1;
		side=0;
		scopeCurator=0;
		scopeArsenal=2;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_w_worker_F.jpg";
		_generalMacro="HS_D_Class_Fatigues_Dirty";
		model="\A3\characters_F\common\coveralls";
		modelSides[]={3};
		uniformClass="HS_D_Class_Coveralls_Dirty";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_D_Class_Fatigues_Dirty_co.paa"
		};
		displayName="$STR_A3_C_man_w_worker_F0";
	};
	class HS_D_Class_Fatigues: C_man_1
	{
		author="Schlopp";
		scope=0;
		side=0;
		scopeCurator=0;
		scopeArsenal=2;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_w_worker_F.jpg";
		_generalMacro="HS_D_Class_Fatigues";
		model="\A3\characters_F\common\coveralls";
		modelSides[]={3};
		uniformClass="HS_D_Class_Coveralls";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_D_Class_Fatigues_co.paa"
		};
		displayName="$STR_A3_C_man_w_worker_F0";
	};
	class HS_Scientist_Fatigues_SCP: C_man_1
	{
		author="Schlopp";
		scope=0;
		side=0;
		scopeCurator=0;
		scopeArsenal=0;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_w_worker_F.jpg";
		_generalMacro="HS_Scientist_Fatigues_SCP";
		model="\A3\characters_F\common\coveralls";
		modelSides[]={3};
		uniformClass="HS_Scientist_Coveralls";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Scientist_Fatigues_co.paa"
		};
		displayName="$STR_A3_C_man_w_worker_F0";
	};
		class HS_GOC_Fatigues_01_F: B_Soldier_F
	{
		author="Schlopp";
		_generalMacro="B_soldier_F";
		scope=2;
		displayName="GOC B";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="HS_GOC_Fatigues";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Fatigues_GOC_co.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class H_Cap_red;
	class H_MilCap_oucamo;
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_light_base_F;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class HS_Security_Fatigues: Uniform_Base
	{
		scope=2;
		displayName="Security Fatigues (White)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_uniform_w_co.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="HS_Security_Fatigues_01_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class HS_Security_Fatigues_RS: Uniform_Base
	{
		scope=2; 
		displayName="Security Fatigues (White, Rolled Sleeves)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_uniform_w_co.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="HS_Security_Fatigues_02_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class HS_Combat_Fatigues: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (Black)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_uniform_b_co.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="HS_Combat_Fatigues_01_B_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class HS_Combat_Fatigues_RS: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (Black, Rolled Sleeves)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_uniform_b_co.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="HS_Combat_Fatigues_02_B_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class HS_Combat_Fatigues_B: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (Black)";
		author="Schlopp";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_uniform_b_co.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="HS_Combat_Uniform_01_B_F";
			containerClass="Supply30";
			mass=35;
		};
	};
	class HS_Combat_Fatigues_B_RS: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (Black, Rolled Sleeves)";
		author="Schlopp";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_uniform_b_co.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="HS_Combat_Uniform_02_B_F";
			containerClass="Supply30";
			mass=35;
		};
	};
    class HS_Security_Officer_Uniform_SCP_F: Uniform_Base
    {
        author="Schlopp";
        scope=2;
        displayName="Security Officer Uniform (SCP)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_Security_Officer_SCP_co.paa";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="HS_Security_Officer_Uniform_SCP";
            containerClass="Supply60";
            mass=20;
        };
    };
    class HS_Security_Uniform_SCP_F: Uniform_Base
    {
        author="Schlopp";
        scope=2;
        displayName="Security Uniform (SCP)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_Security_Uniform_SCP_co.paa";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="HS_Security_Uniform_SCP";
            containerClass="Supply60";
            mass=20;
        };
    };
	class HS_Scientist_Outfit_SCP_F: Uniform_Base
	{
		author="Schlopp";
		scope=2;
		displayName="Scientist Outfit (SCP, White)";
		picture="\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_C_Uniform_Scientist_01_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
				"\HS_SCP\HS_Uniforms\data\HS_Scientist_01_SCP_co.paa"
		};
		DLC="Enoch";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HS_Scientist_Outfit_SCP";
			containerClass="Supply20";
			mass=20;
		};
	};
	class HS_CBRN_SCP_W: Uniform_Base
	{
		scope=2;
		side=0;
		author="Schlopp";
		displayname="CBRN Suit (SCP, White)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_U_C_CBRN_Suit_01_White_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformmodel="-";
			uniformclass="HS_CBRN_Suit_SCP_W";
			containerclass="Supply40";
			mass=40;
		};
	};
	class HS_CBRN_SCP_B: Uniform_Base
	{
		scope=2;
		side=0;
		author="Schlopp";
		displayname="CBRN Suit (SCP, Black)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_U_C_CBRN_Suit_01_Black_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformmodel="-";
			uniformclass="HS_CBRN_Suit_SCP_B";
			containerclass="Supply40";
			mass=40;
		};
	};
	class HS_CBRN_SCP_MH: Uniform_Base
	{
		scope=2;
		side=0;
		author="Schlopp";
		displayname="CBRN Suit (SCP, Maz Hatters)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_U_C_CBRN_Suit_01_Black_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformmodel="-";
			uniformclass="HS_CBRN_Suit_SCP_MH";
			containerclass="Supply40";
			mass=40;
		};
	};
	class HS_D_Class_Coveralls_Dirty: Uniform_Base
	{
		author="Schlopp";
    	scope=2;
		displayName="D-Class Fatigues (Dirty)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_D_Class_Coveralls_co.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_D_Class_Fatigues_Dirty_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HS_D_Class_Fatigues_Dirty";
			containerClass="Supply30";
			mass=30;
		};
	};
	class HS_D_Class_Coveralls: Uniform_Base
	{
		author="Schlopp";
		scope=0;
		displayName="D-Class Fatigues";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_D_Class_Coveralls_co.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_D_Class_Fatigues_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HS_D_Class_Fatigues";
			containerClass="Supply30";
			mass=30;
		};
	};
	class HS_Scientist_Coveralls: Uniform_Base
	{
		author="Schlopp";
		scope=0;
		displayName="Scientist Fatigues (SCP)";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Uniforms\data\HS_Scientist_Fatigues_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HS_Scientist_Fatigues_SCP";
			containerClass="Supply30";
			mass=30;
		};
	};
	class HS_GOC_Fatigues: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (GOC)";
		picture="\HS_SCP\HS_Uniforms\data\UI\HS_icon_uniform_w_co.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="HS_GOC_Fatigues_01_F";
			containerClass="Supply50";
			mass=50;
		};
	};
};
class cfgMods
{
	author="76561198040446180";
	timepacked="1475811069";
};
