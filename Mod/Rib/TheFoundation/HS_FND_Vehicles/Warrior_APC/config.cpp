class CfgPatches {
    class HS_FND_Warrior_GOC {
        requiredAddons[] = {"A3_Armor_F_Beta", "HS_Core_FND"};
        requiredVersion = 0.1;
        units[] = {"HS_FND_IFV_Warrior_GOC"};
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
    /*extern*/ class I_APC_tracked_03_cannon_F;

    class HS_FND_IFV_Base: I_APC_tracked_03_cannon_F {
        author = "Helix Studios";
        scope = 1;
        scopeCurator = 1;
        class EventHandlers;
        textureList[] = {"IND", 1};
        class TextureSources {
            class GOC {
                displayName = "GOC Camo";
                author = "Helix Studios";
                textures[] = {"\HS_FND_Vehicles\Warrior_APC\Data\F_APC_Warrior_ext_1.paa", "\HS_FND_Vehicles\Warrior_APC\Data\F_APC_Warrior_ext_2.paa", "\HS_FND_Vehicles\Warrior_APC\Data\F_APC_Warrior_camonet.paa", "\HS_FND_Vehicles\Warrior_APC\Data\F_APC_Cage.paa"};
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

    class HS_FND_IFV_Warrior_GOC: HS_FND_IFV_Base {
        _generalMacro = "HS_FND_IFV_Warrior_GOC";
        scope = 2;
        scopeCurator = 2;
        displayName = "[GOC] IFV Tracked Warrior";
        faction = "HS_GOC_Fac";
        editorSubcategory = "HS_APC";
        editorPreview = "\HS_FND_Vehicles\Warrior_APC\Data\IFV_Preview.jpg";
        textureList[] = {"GOC", 1};
        side = 1;
        crew = "B_Crew_F";
        typicalCargo[] = {"B_Crew_F"};
        hiddenSelectionsTextures[] = {
            "\HS_FND_Vehicles\Warrior_APC\Data\F_APC_Warrior_ext_1.paa", 
            "\HS_FND_Vehicles\Warrior_APC\Data\F_APC_Warrior_ext_2.paa",  
            "\HS_FND_Vehicles\Warrior_APC\Data\F_APC_Warrior_camonet.paa", 
            "\HS_FND_Vehicles\Warrior_APC\Data\F_APC_Cage.paa"
        };        
    };

};