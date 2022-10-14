class CfgPatches
{
	class HS_EPC_Truck_03_SCP
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
			"HS_SCP_Truck_03_transport_F",
			"HS_SCP_Truck_03_medevac_F",
			"HS_SCP_Truck_03_covered_F",
			"HS_SCP_Truck_03_fuel_F",
			"HS_SCP_Truck_03_ammo_F",
			"HS_SCP_Truck_03_repair_F",
			"HS_SCP_Truck_03_device_F"

		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class O_Truck_03_transport_F;
    class O_Truck_03_repair_F;
    class O_Truck_03_ammo_F;
    class O_Truck_03_fuel_F;
    class O_Truck_03_medical_F;
    class O_Truck_03_device_F;
    class HS_SCP_Truck_03_transport_F: O_Truck_03_transport_F
    {
		scope=2;
		side=1;
		faction="HS_SCP_Fac";
        editorSubcategory="HS_CAR";
		crew="B_HSSCPFac_Security_Guard_Light_01";
		displayName="Tempest Transport";
		model="\A3\Soft_F_EPC\Truck_03\Truck_03_transport_F.p3d";
		picture="\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_transport_CA.paa";
		icon="\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Transport_CA.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP_Veh\HS_Tempest\Data\HS_SCP_Truck_03_ext01_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cargo_CO.paa"
		};
		class TextureSources
		{
			class Standard
			{
				displayName="Foundation Standard";
				author="Schlopp";
				textures[]=
				{
					"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cargo_CO.paa"
				};
				factions[]=
				{
					"HS_SCP_Fac"
				};
			};
		};
		textureList[]=
		{
			"Standard",
			1
		};
    }
	class HS_SCP_Truck_03_covered_F: O_Truck_03_transport_F
    {
		scope=2;
		side=1;
		faction="HS_SCP_Fac";
        editorSubcategory="HS_CAR";   
		crew="B_HSSCPFac_Security_Guard_Light_01";
		displayName="Tempest Transport (Covered)";
		model="\A3\Soft_F_EPC\Truck_03\Truck_03_covered_F.p3d";
		picture="\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_transport_CA.paa";
		icon="\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Transport_CA.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cargo_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cover_CO.paa"  
		};
		class TextureSources
		{
			class Standard
			{
				displayName="Foundation Standard";
				author="Schlopp";
				textures[]=
				{
					"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cargo_CO.paa",
					"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cover_CO.paa"
				};
				factions[]=
				{
					"HS_SCP_Fac"
				};
			};
		};
		textureList[]=
		{
			"Standard",
			1
		};
    }
	 class HS_SCP_Truck_03_fuel_F: O_Truck_03_transport_F
    {
		scope=2;
		side=1;
		faction="HS_SCP_Fac";
        editorSubcategory="HS_CAR";
		crew="B_HSSCPFac_Security_Guard_Light_01";
		displayName="Tempest Fuel";
		model="\A3\Soft_F_EPC\Truck_03\Truck_03_fuel_F.p3d";
		picture="\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_fuel_CA.paa";
		icon="\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Fuel_CA.paa";
		vehicleClass="Support";
		transportFuel=1e+012;
		supplyRadius=20; //Default 10
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_fuel_CO.paa"
		};
		class TextureSources
		{
			class Standard
			{
				displayName="Foundation Standard";
				author="Schlopp";
				textures[]=
				{
					"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_fuel_CO.paa"
				};
				factions[]=
				{
					"HS_SCP_Fac"
				};
			};
		};
		textureList[]=
		{
			"Standard",
			1
		};
    }
	class HS_SCP_Truck_03_ammo_F: O_Truck_03_transport_F
    {
		scope=2;
		side=1;
		faction="HS_SCP_Fac";
        editorSubcategory="HS_CAR";   
		crew="B_HSSCPFac_Security_Guard_Light_01";
		displayName="Tempest Ammo";
		model="\A3\Soft_F_EPC\Truck_03\Truck_03_box_F.p3d";
		picture="\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_box_CA.paa";
		icon="\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_box_CA.paa";
		transportAmmo=1e+012;
		supplyRadius=10;
		vehicleClass="Support";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cargo_CO.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		class TextureSources
		{
			class Standard
			{
				displayName="Foundation Standard";
				author="Schlopp";
				textures[]=
				{
					"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cargo_CO.paa",
                    "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"                               
				};
				factions[]=
				{
					"HS_SCP_Fac"
				};
			};
		};
		textureList[]=
		{
			"Standard",
			1
		};
    }
	class HS_SCP_Truck_03_repair_F: O_Truck_03_transport_F
    {
		scope=2;
		side=1;
		faction="HS_SCP_Fac";
        editorSubcategory="HS_CAR";
		crew="B_HSSCPFac_Containment_Technician_01";
		displayName="Tempest Repair";
		model="\A3\Soft_F_EPC\Truck_03\Truck_03_repair_F.p3d";
		picture="\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_ammo_CA.paa";
		icon="\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_ammo_CA.paa";
		vehicleClass="Support";
		transportRepair=1e+012;
		supplyRadius=10;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ammo_CO.paa"
		};
		class TextureSources
		{
			class Standard
			{
				displayName="Foundation Standard";
				author="Schlopp";
				textures[]=
				{
					"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ammo_CO.paa"
				};
				factions[]=
				{
					"HS_SCP_Fac"
				};
			};
		};
		textureList[]=
		{
			"Standard",
			1
		};
    }
	class HS_SCP_Truck_03_device_F: O_Truck_03_transport_F
    {
		scope=2;
		side=1;
		faction="HS_SCP_Fac";
        editorSubcategory="HS_CAR";   
		crew="B_HSSCPFac_Containment_Technician_01";
		displayName="Tempest Device";
		model="\A3\Soft_F_EPC\Truck_03\Truck_03_device_F.p3d";
		picture="\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_device_CA.paa";
		icon="\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Device_CA.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cargo_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		class TextureSources
		{
			class Standard
			{
				displayName="Foundation Standard";
				author="Schlopp";
				textures[]=
				{
					"\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext01_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_ext02_CO.paa",
			        "\HS_SCP_Veh\HS_Tempest\data\HS_SCP_Truck_03_cargo_CO.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"                             
				};
				factions[]=
				{
					"HS_SCP_Fac"
				};
			};
		};
		textureList[]=
		{
			"Standard",
			1
		};
    }
};