class CfgPatches
{
	class HS_Drones_F
	{
		addonRootClass="A3_Drones_F";
		requiredAddons[]=
		{
			"A3_Drones_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"HS_SCP_UAV_01_F"

		};
		weapons[]={};
	};
};
class CfgVehicles
{
    class Bag_Base;
    class UAV_01_base_F;
    class HS_SCP_UAV_01_F: UAV_01_base_F
	{
		author="Schlopp";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		_generalMacro="HS_SCP_UAV_01_F";
		scope=2;
		side=1;
		faction="HS_SCP_Fac";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		displayName="Darter";
		accuracy=0.5;
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"HS_UAV_backpack_SCP"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_SCP_Veh\HS_Darter\Data\HS_SCP_UAV_01_CO.paa",
		};
		textureList[]=
		{
			"Standard",
			1
		};
	};
};