class CfgPatches
{
	class HS_SPC_VestVSM
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
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class HS_FAPC_Operator: ItemCore
	{
		scope=2;
		displayName="Carrier Rig (MTF, Operator)";
		author="Schlopp";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_carrier_vest_b_co.paa";
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear_VSM\data\HS_OGA_Chestrig_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\vsm_battlebelt_multicamtropic.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_DropHolster_OGA_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_serpa.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_OGA_Gear_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_radio_pouch.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_FAPC_OGA_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_Pouches_OGA_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class HS_FAPC_Breacher: ItemCore
	{
		scope=2;
		displayName="Carrier Rig (MTF, Breacher)";
		author="Schlopp";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_carrier_vest_b_co.paa";
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear_VSM\data\HS_OGA_Chestrig_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\vsm_battlebelt_multicamtropic.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_DropHolster_OGA_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_serpa.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_OGA_Gear_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_radio_pouch.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_FAPC_OGA_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_Pouches_OGA_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class HS_FAPC_MG: ItemCore
	{
		scope=2;
		displayName="Carrier Rig (MTF, Gunner)";
		author="Schlopp";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_carrier_vest_b_co.paa";
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_battleBelt",
			"_boxMag",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear_VSM\data\HS_OGA_Chestrig_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\vsm_battlebelt_multicamtropic.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_DropHolster_OGA_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_serpa.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_OGA_Gear_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_radio_pouch.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_FAPC_OGA_co.paa",
			"\HS_SCP\HS_Gear_VSM\data\HS_Pouches_OGA_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_battleBelt",
				"_boxMag",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
};
class cfgMods
{
	author="Schlopp";
	timepacked="1475811069";
};