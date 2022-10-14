class CfgPatches
{
	class HS_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMusicClasses
{
	class HS_SCP_CB
	{
		displayName = "The Foundation - Containment Breach";
	};
	class HS_SCP_DH
	{
		displayName = "The Foundation - Dollhouse";
	};
	class HS_SCP_OV
	{
		displayName = "The Foundation - Overlord";
	};
	class HS_SCP_SL
	{
		displayName = "The Foundation - Secret Laboratory";
	};
};

class CfgMusic
{
	tracks[]={};
	
	class SCP_BlueFeather
	{
		name = "SCP:CB - Blue Feather";
		sound[] = {"HS_SFX\music\data\Blue_Feather.ogg",1,1};
		theme = "SCP:CB";
		duration = "138";
		musicClass = "HS_SCP_CB";
	};
	class SCP_TheDread
	{
		name = "SCP:CB - The Dread";
		sound[] = {"HS_SFX\music\data\The_Dread.ogg",1,1};
		theme = "SCP:CB";
		duration = "165";
		musicClass = "HS_SCP_CB";
	};
	class SCP_Anxiety
	{
		name = "SCP:CB - Anxiety";
		sound[] = {"HS_SFX\music\data\Anxiety.ogg",1,1};
		theme = "SCP:CB";
		duration = "60";
		musicClass = "HS_SCP_CB";
	};
	class SCP_HeavyContainment
	{
		name = "SCP:CB - Heavy Containment";
		sound[] = {"HS_SFX\music\data\HeavyContainment.ogg",1,1};
		theme = "SCP:CB";
		duration = "165";
		musicClass = "HS_SCP_CB";
	};
	class SCP_Mandeville
	{
		name = "SCP:CB - Mandeville";
		sound[] = {"HS_SFX\music\data\Mandeville.ogg",1,1};
		theme = "SCP:CB";
		duration = "165";
		musicClass = "HS_SCP_CB";
	};
	class SCP_Menu
	{
		name = "SCP:CB - Menu";
		sound[] = {"HS_SFX\music\data\Ending.ogg",1,1};
		theme = "SCP:CB";
		duration = "51";
		musicClass = "HS_SCP_CB";
	};
	class SCP_Ending
	{
		name = "SCP:CB - Ending";
		sound[] = {"HS_SFX\music\data\Ending.ogg",1,1};
		theme = "SCP:CB";
		duration = "16";
		musicClass = "HS_SCP_CB";
	};
	
};
