class CfgPatches {
    class reload_repack_turret_magazines {
        name = "Reload Repack Turret Magazines";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.20;
        requiredAddons[] = {"A3_Data_F_Decade_Loadorder"};
        author = "Ampersand";
        authors[] = {"Ampersand"};
        authorUrl = "https://github.com/ampersand38/reload-repack-turret-magazines";
    };
};

class CfgFunctions {
    class rrtm {	//tag
        class reload_repack_turret_magazines {	//category
            file  = "\rrtm";
            class postInit {
                //file  = "\z\rrtm\addons\reload-repack-turret-magazines\fnc_postInit.sqf";
                postInit = 1;
            };
            class reloadTurret {
                //file  = "z\rrtm\addons\reload-repack-turret-magazines\fnc_reloadTurret.sqf";
            };
            class monitorMagazines {
                //file  = "z\rrtm\addons\reload-repack-turret-magazines\fnc_monitorMagazines.sqf";
            };
        };
    };
};
