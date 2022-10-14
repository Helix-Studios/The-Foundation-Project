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
class CfgVehicles
{
	class B_AssaultPack_Base;
	class HS_Compact_Bag_B: B_AssaultPack_Base
	{
		scope=2;
		displayName="Compact Bag (Black)";
		author="Schlopp";
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Compact_B_co.paa"
		};
	};
	class B_kitbag_Base;
	class HS_Kitbag_B: B_kitbag_Base
	{
		scope=2;
		displayName="Kitbag (Black)";
		author="Schlopp";
		model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Kitbag_B_co.paa"
		};
	};
	class B_Carryall_Base;
	class HS_Carryall_B: B_Carryall_Base
	{
		scope=2;
		displayName="Carryall Backpack (Black)";
		author="Schlopp";
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Carryall_B_co.paa"
		};
	};
	class HS_Carrier_Pouch_I: B_Carryall_Base
	{
		scope=2;
		displayName="Carrier Pouch";
		author="Schlopp";
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class B_FieldPack_Base;
    class HS_Fieldpack_B: B_FieldPack_Base
    {
		scope = 2;
        author="Schlopp";
        displayName = "Fieldpack (Black)";
        picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
        hiddenSelectionsTextures[]=
        {
			"\HS_SCP\HS_Gear\data\HS_Fieldpack_B_co.paa"
        };
    };
    class B_Messenger_Base_F;
    class HS_shoulder_bag_SCP: B_Messenger_Base_F
    {
		scope = 2;
        author = "Schlopp";
        _generalMacro = "HS_shoulder_bag_SCP";
        displayName = "Shoulder Bag (SCP)";
        picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
        hiddenSelectionsTextures[] = 
        {
			"\HS_SCP\HS_Gear\data\HS_ShoulderBag_SCP_co.paa"
        };
    };
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class HS_UAV_backpack_SCP: Weapon_Bag_Base
	{
		author="Schlopp";
		mapSize=0.60000002;
		_generalMacro="HS_UAV_backpack_SCP";
		scope=2;
		scopeCurator=2;
		displayName="UAV bag (SCP, Darter)";
		editorCategory="EdCat_Equipment";
		editorSubcategory="HS_Drone";
		faction="HS_SCP_Fac";
		model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Kitbag_B_co.paa"
		};
		maximumLoad=0;
		mass=200;
		class assembleInfo: assembleInfo
		{
			base="";
			displayName="Darter";
			assembleTo="HS_SCP_UAV_01_F";
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class V_DeckCrew_base_F;
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_heavy_base_F;
	class V_CarrierRigKBT_01_light_base_F;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class HS_Modular_Carrier_M_B: Vest_Camo_Base
	{
		scope=2;
		displayName="Carrier Vest (Black)";
		author="Schlopp";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_Modular_Carrier_M_B_co.paa";
		model="A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Carrier_B_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=40;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
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
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
			};
		};
	};
	 class HS_Modular_Carrier_L_B: Vest_Camo_Base
    {
        author = "Schlopp";
        _generalMacro = "HS_Modular_Carrier_L_B";
        scope = 2;
        displayName="Carrier Vest Lite (Black)";
        picture="\HS_SCP\HS_Gear\data\UI\HS_icon_Modular_Carrier_L_B_co.paa";
        model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Gear\data\HS_Carrier_B_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
            containerClass = "Supply120";
            mass = 45;
            hiddenSelections[]={"Camo"};
            hiddenSelectionsTextures[]=
            {
                "\HS_SCP\HS_Gear\data\HS_Carrier_B_co.paa"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
	 class HS_Modular_Carrier_H_B: Vest_Camo_Base
    {
        scope=2;
        author="Schlopp";
        _generalMacro = "HS_Modular_Carrier_H_B";
        displayName="Carrier Vest Heavy (Black)";
        picture="\HS_SCP\HS_Gear\data\UI\HS_icon_Modular_Carrier_H_B_co.paa";
        model="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
        hiddenSelections[]={"Camo1","Camo2"};
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Gear\data\HS_Carrier_B_co.paa",
            "\HS_SCP\HS_Gear\data\HS_Carrier_B_Shoulders_co.paa"
        };
        class ItemInfo: VestItem
        {   uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
            containerClass="Supply140";
            mass=80;
            passThrough=0.30000001;
            hiddenSelections[]={"Camo1","Camo2"};
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=78;
                    PassThrough=0.60000002;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=78;
                    PassThrough=0.60000002;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.60000002;
                };
                class Pelivs
                {
                    hitpointName="HitPelvis";
                    armor=16;
                    passThrough=0.1;
                };
                class Arms
                {
                    hitpointName="HitArms";
                    armor=8;
                    passThrough=0.5;
                };
                class Neck
                {
                    hitpointName="HitNeck";
                    armor=8;
                    passThrough=0.5;
                };
            };
        };
	};
	class HS_Modular_Carrier_M_SCP: Vest_Camo_Base
	{
		scope=2;
		displayName="Carrier Vest (MTF)";
		author="Schlopp";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_Modular_Carrier_M_B_co.paa";
		model="A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Carrier_B_SCP_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=40;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
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
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
			};
		};
	};
	 class HS_Modular_Carrier_L_SCP: Vest_Camo_Base
    {
        author = "Schlopp";
        _generalMacro = "HS_Modular_Carrier_L_B";
        scope = 2;
        displayName="Carrier Vest Lite (MTF)";
        picture="\HS_SCP\HS_Gear\data\UI\HS_icon_Modular_Carrier_L_B_co.paa";
        model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Gear\data\HS_Carrier_B_SCP_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
            containerClass = "Supply120";
            mass = 45;
            hiddenSelections[]={"Camo"};
            hiddenSelectionsTextures[]=
            {
                "\HS_SCP\HS_Gear\data\HS_Carrier_B_co.paa"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
	 class HS_Modular_Carrier_H_SCP: Vest_Camo_Base
    {
        scope=2;
        author="Schlopp";
        _generalMacro = "HS_Modular_Carrier_H_B";
        displayName="Carrier Vest Heavy (MTF)";
        picture="\HS_SCP\HS_Gear\data\UI\HS_icon_Modular_Carrier_H_B_co.paa";
        model="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
        hiddenSelections[]={"Camo1","Camo2"};
        hiddenSelectionsTextures[]=
        {
            "\HS_SCP\HS_Gear\data\HS_Carrier_B_SCP_co.paa",
            "\HS_SCP\HS_Gear\data\HS_Carrier_B_Shoulders_SCP_co.paa"
        };
        class ItemInfo: VestItem
        {   uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
            containerClass="Supply140";
            mass=80;
            passThrough=0.30000001;
            hiddenSelections[]={"Camo1","Camo2"};
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=78;
                    PassThrough=0.60000002;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=78;
                    PassThrough=0.60000002;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.60000002;
                };
                class Pelivs
                {
                    hitpointName="HitPelvis";
                    armor=16;
                    passThrough=0.1;
                };
                class Arms
                {
                    hitpointName="HitArms";
                    armor=8;
                    passThrough=0.5;
                };
                class Neck
                {
                    hitpointName="HitNeck";
                    armor=8;
                    passThrough=0.5;
                };
            };
        };
	};
	class HS_Modular_Carrier_Vest_B: V_CarrierRigKBT_01_base_F
	{
		author="Schlopp";
		scope=2;
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		displayName="Modular Carrier Vest (Black)";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_carrier_vest_b_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Modular_Carrier_Vest_B_co.paa"
		};
	};
	class HS_Modular_Carrier_Lite_B: V_CarrierRigKBT_01_light_base_F
	{
		author="Schlopp";
		scope=2;
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		displayName="Modular Carrier Lite (Black)";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_carrier_vest_b_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Modular_Carrier_Vest_B_co.paa"
		};
	};
	class HS_Modular_Carrier_Vest_Heavy_B: V_CarrierRigKBT_01_heavy_base_F
	{
		author="Schlopp";
		_generalMacro="HS_Modular_Carrier_Vest_Heavy_B";
		scope=2;
		displayName="Modular Carrier Heavy (Black)";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_carrier_vest_b_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Modular_Carrier_Vest_B_co.paa"
		};
	};
	class HS_Kipchak_Vest_B: Vest_Camo_Base
	{
		author="Schlopp";
		scope=2;
		displayName="Kipchak Vest (Black)";
		picture="\HS_SCP\HS_Gear\data\UI\HS_kipchack_vest_b_co.paa";
		model="\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Radio1_hide"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Kipchak_B_co.paa",
			"\HS_SCP\HS_Gear\data\HS_Kipchak_Radio_B_co.paa"
		};
		descriptionShort="$STR_A3_SP_NOARMOR";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Radio1_hide"
			};
			containerClass="Supply160";
			mass=30;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};
	class HS_Kipchak_Vest_Radio_B: Vest_Camo_Base
	{
		author="Schlopp";
		scope=2;
		displayName="Kipchak Vest (Tactical Radio, Black)";
			picture="\HS_SCP\HS_Gear\data\UI\HS_kipchack_vest_b_co.paa";
		model="\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Radio2_hide"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Kipchak_B_co.paa",
			"\HS_SCP\HS_Gear\data\HS_Kipchak_Radio_B_co.paa"
		};
		descriptionShort="$STR_A3_SP_NOARMOR";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo2",
				"Radio2_hide"
			};
			containerClass="Supply160";
			mass=30;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};
	class HS_Carrier_Rig_B: Vest_Camo_Base
	{
		scope=2;
		displayName="Carrier Rig (Black)";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_carrier_vest_b_co.paa";
		model="A3\Characters_F\BLUFOR\equip_b_Vest01";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Carrier_Vest_B_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="A3\Characters_F\BLUFOR\equip_b_Vest01";
			containerClass="Supply120";
			mass=40;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
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
	class HS_Carrier_Lite_B: Vest_Camo_Base
	{
		scope=2;
		displayName="Carrier Lite (Black)";
		picture="\HS_SCP\HS_Gear\data\UI\HS_icon_carrier_vest_b_co.paa";
		model="A3\Characters_F\BLUFOR\equip_b_Vest02";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP\HS_Gear\data\HS_Carrier_Vest_B_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="A3\Characters_F\BLUFOR\equip_b_Vest02";
			containerClass="Supply120";
			mass=40;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
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
	class HS_Gun_belt_base: Vest_Camo_Base
    {
        class ItemInfo;
    };
    class HS_Security_Belt_SCP: HS_Gun_belt_base
    {
        author="Schlopp";
		_generalMacro = "HS_Security_Belt_SCP";
        scope=2;
        displayName="Security Belt (SCP)";
        picture="\HS_SCP\HS_Gear\data\UI\HS_icon_patrol_vest_b_co.paa";
        model="\A3\Characters_F\BLUFOR\equip_b_belt.p3d";
        hiddenSelectionsTextures[]=
        {
         	"\HS_SCP\HS_Gear\data\HS_Pistol_Belt_B_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="\A3\Characters_F\BLUFOR\equip_b_belt.p3d";
            containerClass="Supply50";
            mass=5;
        };
    };
	 class HS_Security_Vest_SCP: Vest_Camo_Base
    {
        author = "Schlopp";
        _generalMacro = "HS_Security_Vest";
        scope = 2;
        picture="\HS_SCP\HS_Gear\data\UI\HS_icon_patrol_vest_b_co.paa";
        displayName = "Security Vest (SCP)";
        model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
        hiddenSelectionsTextures[] = 
        {
            "\HS_SCP\HS_Gear\data\HS_Patrol_Vest_B_co.paa"
        };
        descriptionShort = "Security Vest";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
            containerClass = "Supply80";
            mass = 80;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 25;
                    passThrough = 0.2;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.2;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 25;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
	class HS_TacVest_SCP: V_DeckCrew_base_F
    {
        scope = 2;
        author = "Schlopp";
        displayName = "Tactical Vest (SCP)";
        picture="\HS_SCP\HS_Gear\data\UI\HS_icon_TacVest_B_co.paa";
        hiddenSelectionsTextures[] = 
        {
            "\HS_SCP\HS_Gear\data\HS_Tactical_Vest_SCP_co.paa"
        };
    };
};
class cfgMods
{
	author="Schlopp";
	timepacked="1475811069";
};


