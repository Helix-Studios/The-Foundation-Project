class CfgPatches {
    class HS_FND_Otokar_GOC {
        requiredAddons[] = {"A3_Armor_F_Beta", "HS_Core_FND"};
        requiredVersion = 0.1;
        units[] = {"HS_FND_APC_Otokar_GOC"};
        weapons[] = {""};
    };
};

class cfgFactionClasses {
    /*extern*/ class HS_GOC_Fac;
};

class CfgEditorSubcategories {
    /*extern*/ class HS_APC;
};

class CfgVehicles {
    /*extern*/ class O_APC_Wheeled_02_rcws_v2_F;

    class HS_FND_APC_Base: O_APC_Wheeled_02_rcws_v2_F {
        author = "Helix Studios";
        scope = 1;
        scopeCurator = 1;
        class EventHandlers;
        textureList[] = {"OPF",1};
        class TextureSources {
            class GOC {
                displayName = "GOC Camo";
                author = "Helix Studios";
                textures[] = {"\HS_SCP_Veh\Otokar_APC\Data\F_APC_Wheeled_Ext_1.paa", "\HS_SCP_Veh\Otokar_APC\Data\F_APC_Wheeled_Ext_2.paa", "\HS_SCP_Veh\Otokar_APC\Data\F_APC_Turret.paa", "\HS_SCP_Veh\Otokar_APC\Data\F_APC_Camonet.paa", "\HS_SCP_Veh\Otokar_APC\Data\F_APC_Cage.paa"};
            };
        };
        class TransportItems {
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 3;
            };
        };
        class TransportWeapons {};
        class TransportMagazines {};
    };

    class HS_FND_APC_Otokar_GOC: HS_FND_APC_Base {
        _generalMacro = "HS_APC_Otokar_GOC";
        scope = 2;
        scopeCurator = 2;
        displayName = "[GOC] APC Wheeled Otokar";
        faction = "HS_GOC_Fac";
        editorSubcategory = "HS_APC";
        editorPreview = "\HS_SCP_Veh\Otokar_APC\Data\APC_Preview.jpg";
        side = 2;
        crew = "B_Crew_F";     
        textureList[] = {"GOC", 1};
        hiddenSelections[] = {"camo1", "camo2", "camo3", "CamoNet", "CamoSlat"};
        hiddenSelectionsTextures[] = {
            "\HS_SCP_Veh\Otokar_APC\Data\F_APC_Wheeled_Ext_1.paa", 
            "\HS_SCP_Veh\Otokar_APC\Data\F_APC_Wheeled_Ext_2.paa", 
            "\HS_SCP_Veh\Otokar_APC\Data\F_APC_Turret.paa", 
            "\HS_SCP_Veh\Otokar_APC\Data\F_APC_Camonet.paa", 
            "\HS_SCP_Veh\Otokar_APC\Data\F_APC_Cage.paa" 
        };
    };
};