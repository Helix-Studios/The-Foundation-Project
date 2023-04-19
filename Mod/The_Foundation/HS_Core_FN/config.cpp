class CfgPatches 
{ 
  class HS_Core_FND
	{
		author = "Schlopp";
		name = "The Foundation";
		requiredAddons[] =
		{
			"A3_Data_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class cfgFactionClasses 
{ 
    class HS_SCP_Fac
    { 
        displayName = "SCP Foundation"; 
        priority = 2; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        flag = "\HS_Core_FN\FN_UI\Map\Markers\Flags\scp_ca.paa"; //Custom Flag 
        icon = "\HS_Core_FN\FN_UI\Map\Markers\Flags\scp_ca.paa"; //Custom Icon 
    };
	class HS_CI_Fac
    { 
        displayName = "Chaos Insurgency"; 
        priority = 2
        side = 0;
        flag = "\HS_Core_FN\FN_UI\Map\Markers\Flags\ci_ca.paa";
        icon = "\HS_Core_FN\FN_UI\Map\Markers\Flags\ci_ca.paa";
    };
	class HS_GOC_Fac
    { 
        displayName = "Global Occult Coalition "; 
        priority = 2;
        side = 2; 
		flag = "\HS_Core_FN\FN_UI\Map\Markers\Flags\goc_ca.paa";
        icon = "\HS_Core_FN\FN_UI\Map\Markers\Flags\goc_ca.paa";
    };
};

class CfgEditorSubcategories
{
	class HS_CAR
	{
		displayName="Cars";
	};
	class HS_Trucks
	{
		displayName="Trucks";
	};
	class HS_TANK
	{
		displayName="Tanks";
	};
	class HS_APC
	{
		displayName="APCs";
	};
	class HS_Drone
	{
		displayName="Drones";
	};
	class HS_ART
	{
		displayName="Artillery";
	};
	class HS_AA
	{
		displayName="Anti-Air";
	};
	class HS_PLN
	{
		displayName="Planes";
	};
	class HS_HEL
	{
		displayName="Helicopters";
	};
	class HS_MEN
	{
		displayName="Men";
	};
	// SCP Classes
	class HS_SCP_SECURITY
	{
		displayName="Security";
	};
	class HS_SCP_MTF
	{
		displayName="Mobile Task Force";
	};
	class HS_SCP_TRT
	{
		displayName="Tactical Response Team";
	};
	class HS_SCP_CONTAINMENT
	{
		displayName="Containment Specialists";
	};
	class HS_SCP_PERS
	{
		displayName="Personnel";
	};
};