class CfgPatches
{
	class HS_MRAP_F
	{
		author="Schlopp";
		requiredAddons[]=
		{
			"A3_Soft_F_EPC",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_UI_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"HS_SCP_MRAP_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class MRAP_01_base_F;
    class MRAP_01_gmg_base_F;
    class MRAP_01_hmg_base_F;
    class B_MRAP_01_F;
    class HS_SCP_MRAP_01_F: B_MRAP_01_F
	{
		author="Schlopp";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_MRAP_01_F.jpg";
		_generalMacro="HS_MRAP_01_F";
		scope=2;
		crew="B_HSSCPFac_Security_Guard_Light_01";
        displayName="Hunter";
		typicalCargo[]={};
		side=1;
		faction="HS_SCP_Fac";
        editorSubcategory="HS_CAR";
		unitInfoType="RscUnitInfoNoWeapon";
		threat[]={0.1,0.1,0.1};
		class Turrets
		{
		};
		hiddenSelectionsTextures[]=
		{
		    "\HS_SCP_Veh\HS_MRAP\Data\HS_MRAP_01_base_CO.paa",
			"\HS_SCP_Veh\HS_MRAP\Data\HS_MRAP_01_adds_CO.paa",
			""
		};
	};
};