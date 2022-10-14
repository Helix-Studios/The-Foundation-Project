class CfgPatches
{
	class HS_Heli_F
	{
		addonRootClass="A3_Air_F";
		requiredAddons[]=
		{
			"A3_Air_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"HS_SCP_Heli_02_1_F",
			"HS_SCP_Heli_02_2_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Helicopter;
    class Heli_Light_02_base_F;
    class Heli_Light_02_unarmed_base_F;
    class O_Heli_Light_02_F;
    class O_Heli_Light_02_unarmed_F;
    class HS_SCP_Heli_02_1_F: O_Heli_Light_02_unarmed_F
    {
    	_generalMacro="HS_SCP_Heli_02_1_F";
		scope=2;
        side=1;
        displayName="PO-30 Orca (unarmed)";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_rockets_CA.paa";
		faction="HS_SCP_Fac";
        editorSubcategory="HS_HEL";
		crew="B_HSSCPFac_Pilot_01";
		accuracy=1.5;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport",
			"CAS_Heli"
		};
		textureList[]=
		{
			"Foundation Standard",
			1
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP_Veh\HS_Heli\Data\HS_Heli_Light_02_ext_CO.paa",
			"\A3\Air_F_Heli\Heli_Light_02\Data\Rockets_CO.paa"
		};
	};
    class HS_SCP_Heli_02_2_F: O_Heli_Light_02_F
    {
    	_generalMacro="HS_SCP_Heli_02_2_F";
		scope=2;
        side=1;
        displayName="PO-30 Orca";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_rockets_CA.paa";
		faction="HS_SCP_Fac";
        editorSubcategory="HS_HEL";
		crew="B_HSSCPFac_Pilot_01";
		accuracy=1.5;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport",
			"CAS_Heli"
		};
		textureList[]=
		{
			"Foundation Standard",
			1
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP_Veh\HS_Heli\Data\HS_Heli_Light_02_ext_CO.paa",
			"\A3\Air_F_Heli\Heli_Light_02\Data\Rockets_CO.paa"
		};
	};
};
