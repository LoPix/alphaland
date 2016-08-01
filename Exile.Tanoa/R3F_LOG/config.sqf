/**
 * MAIN CONFIGURATION FILE
 * 
 * English and French comments
 * Commentaires anglais et français
 * 
 * (EN)
 * This file contains the configuration variables of the logistics system.
 * For the configuration of the creation factory, see the file "config_creation_factory.sqf".
 * IMPORTANT NOTE : when a logistics feature is given to an object/vehicle class name, all the classes which inherit
 *                  of the parent/generic class (according to the CfgVehicles) will also have this feature.
 *                  CfgVehicles tree view example : http://madbull.arma.free.fr/A3_stable_1.20.124746_CfgVehicles_tree.html
 * 
 * (FR)
 * Fichier contenant les variables de configuration du système de logistique.
 * Pour la configuration de l'usine de création, voir le fichier "config_creation_factory.sqf".
 * NOTE IMPORTANTE : lorsqu'une fonctionnalité logistique est accordée à un nom de classe d'objet/véhicule, les classes
 *                   héritant de cette classe mère/générique (selon le CfgVehicles) se verront également dotées de cette fonctionnalité.
 *                   Exemple d'arborescence du CfgVehicles : http://madbull.arma.free.fr/A3_stable_1.20.124746_CfgVehicles_tree.html
 */

/**
 * DISABLE LOGISTICS ON OBJECTS BY DEFAULT
 * 
 * (EN)
 * Define if objects and vehicles have logistics features by default,
 * or if it must be allowed explicitely on specific objects/vehicles.
 * 
 * If false : all objects are enabled according to the class names listed in this configuration file
 *            You can disable some objects with : object setVariable ["R3F_LOG_disabled", true];
 * If true :  all objects are disabled by default
 *            You can enable some objects with : object setVariable ["R3F_LOG_disabled", false];
 * 
 * 
 * (FR)
 * Défini si les objets et véhicules disposent des fonctionnalités logistiques par défaut,
 * ou si elles doivent être autorisés explicitement sur des objets/véhicules spécifiques.
 * 
 * Si false : tous les objets sont actifs en accord avec les noms de classes listés dans ce fichier
 *            Vous pouvez désactiver certains objets avec : objet setVariable ["R3F_LOG_disabled", true];
 * Si true :  tous les objets sont inactifs par défaut
 *            Vous pouvez activer quelques objets avec : objet setVariable ["R3F_LOG_disabled", false];
 */
R3F_LOG_CFG_disabled_by_default = false;

/**
 * LOCK THE LOGISTICS FEATURES TO SIDE, FACTION OR PLAYER
 * 
 * (EN)
 * Define the lock mode of the logistics features for an object.
 * An object can be locked to the a side, faction, a player (respawn) or a unit (life).
 * If the object is locked, the player can unlock it according to the
 * value of the config variable R3F_LOG_CFG_unlock_objects_timer.
 * 
 * If "none" : no lock features, everyone can used the logistics features.
 * If "side" : the object is locked to the last side which interacts with it.
 * If "faction" : the object is locked to the last faction which interacts with it.
 * If "player" : the object is locked to the last player which interacts with it. The lock is transmitted after respawn.
 * If "unit" : the object is locked to the last player which interacts with it. The lock is lost when the unit dies.
 * 
 * Note : for military objects (not civilian), the lock is initialized to the object's side.
 * 
 * See also the config variable R3F_LOG_CFG_unlock_objects_timer.
 * 
 * (FR)
 * Défini le mode de verrouillage des fonctionnalités logistics pour un objet donné.
 * Un objet peut être verrouillé pour une side, une faction, un joueur (respawn) ou une unité (vie).
 * Si l'objet est verrouillé, le joueur peut le déverrouiller en fonction de la
 * valeur de la variable de configiration R3F_LOG_CFG_unlock_objects_timer.
 * 
 * Si "none" : pas de verrouillage, tout le monde peut utiliser les fonctionnalités logistiques.
 * Si "side" : l'objet est verrouillé pour la dernière side ayant interagit avec lui.
 * Si "faction" : l'objet est verrouillé pour la dernière faction ayant interagit avec lui.
 * Si "player" : l'objet est verrouillé pour le dernier joueur ayant interagit avec lui. Le verrou est transmis après respawn.
 * Si "unit" : l'objet est verrouillé pour le dernier joueur ayant interagit avec lui. Le verrou est perdu quand l'unité meurt.
 * 
 * Note : pour les objets militaires (non civils), le verrou est initialisé à la side de l'objet.
 * 
 * Voir aussi la variable de configiration R3F_LOG_CFG_unlock_objects_timer.
 */
R3F_LOG_CFG_lock_objects_mode = "none";

/**
 * COUNTDOWN TO UNLOCK AN OBJECT
 * 
 * Define the countdown duration (in seconds) to unlock a locked object.
 * Set to -1 to deny the unlock of objects.
 * See also the config variable R3F_LOG_CFG_lock_objects_mode.
 * 
 * Défini la durée (en secondes) du compte-à-rebours pour déverrouiller un objet.
 * Mettre à -1 pour qu'on ne puisse pas déverrouiller les objets.
 * Voir aussi la variable de configiration R3F_LOG_CFG_lock_objects_mode.
 */
R3F_LOG_CFG_unlock_objects_timer = 30;

/**
 * ALLOW NO GRAVITY OVER GROUND
 * 
 * Define if movable objects with no gravity simulation can be set in height over the ground (no ground contact).
 * The no gravity objects corresponds to most of decoration and constructions items.
 * 
 * Défini si les objets déplaçable sans simulation de gravité peuvent être position en hauteur sans être contact avec le sol.
 * Les objets sans gravité correspondent à la plupart des objets de décors et de construction.
 */
R3F_LOG_CFG_no_gravity_objects_can_be_set_in_height_over_ground = true;

/**
 * LANGUAGE
 * 
 * Automatic language selection according to the game language.
 * New languages can be easily added (read below).
 * 
 * Sélection automatique de la langue en fonction de la langue du jeu.
 * De nouveaux langages peuvent facilement être ajoutés (voir ci-dessous).
 */
R3F_LOG_CFG_language = switch (language) do
{
	case "English":{"en"};
	case "French":{"fr"};
	
	// Feel free to create you own language file named "XX_strings_lang.sqf", where "XX" is the language code.
	// Make a copy of an existing language file (e.g. en_strings_lang.sqf) and translate it.
	// Then add a line with this syntax : case "YOUR_GAME_LANGUAGE":{"LANGUAGE_CODE"};
	// For example :
	
	//case "Czech":{"cz"}; // Not supported. Need your own "cz_strings_lang.sqf"
	//case "Polish":{"pl"}; // Not supported. Need your own "pl_strings_lang.sqf"
	//case "Portuguese":{"pt"}; // Not supported. Need your own "pt_strings_lang.sqf"
	//case "YOUR_GAME_LANGUAGE":{"LANGUAGE_CODE"};  // Need your own "LANGUAGE_CODE_strings_lang.sqf"
	
	default {"en"}; // If language is not supported, use English
};

/**
 * CONDITION TO ALLOW LOGISTICS
 * 
 * (EN)
 * This variable allow to set a dynamic SQF condition to allow/deny all logistics features only on specific clients.
 * The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 * For example you can allow logistics only on few clients having a known game ID by setting the variable to :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 * Or only for the server admin : "serverCommandAvailable "#kick"""
 * The condition is evaluted in real time, so it can use condition depending on the mission progress : "alive officer && taskState task1 == ""Succeeded"""
 * Or to deny logistics in a circular area defined by a marker : "player distance getMarkerPos ""markerName"" > getMarkerSize ""markerName"" select 0"
 * Note that quotes of the strings inside the string condition must be doubled.
 * Note : if the condition depends of the aimed objects/vehicle, you can use the command cursorTarget
 * To allow the logistics to everyone, just set the condition to "true".
 * 
 * (FR)
 * Cette variable permet d'utiliser une condition SQF dynamique pour autoriser ou non les fonctions logistiques sur des clients spécifiques.
 * La variable doit être une CHAINE de caractères délimitée par des guillemets et doit contenir une condition SQF valide qui sera évaluée durant la mission.
 * Par exemple pour autoriser la logistique sur seulement quelques joueurs ayant un ID de jeu connu, la variable peut être défini comme suit :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Ou elle peut se baser sur le nom de profil : "profileName in [""maxime"", ""martin"", ""marc""]"
 * Ou pour n'autoriser que l'admin de serveur : "serverCommandAvailable "#kick"""
 * Les condition sont évaluées en temps réel, et peuvent donc dépendre du déroulement de la mission : "alive officier && taskState tache1 == ""Succeeded"""
 * Ou pour interdire la logistique dans la zone défini par un marqueur circulaire : "player distance getMarkerPos ""markerName"" > getMarkerSize ""markerName"" select 0"
 * Notez que les guillemets des chaînes de caractères dans la chaîne de condition doivent être doublés.
 * Note : si la condition dépend de l'objet/véhicule pointé, vous pouvez utiliser la commande cursorTarget
 * Pour autoriser la logistique chez tout le monde, il suffit de définir la condition à "true".
 */
R3F_LOG_CFG_string_condition_allow_logistics_on_this_client = "true";

/**
 * CONDITION TO ALLOW CREATION FACTORY
 * 
 * (EN)
 * This variable allow to set a dynamic SQF condition to allow/deny the access to the creation factory only on specific clients.
 * The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 * For example you can allow the creation factory only on few clients having a known game ID by setting the variable to :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 * Or only for the server admin : "serverCommandAvailable "#kick"""
 * Note that quotes of the strings inside the string condition must be doubled.
 * Note : if the condition depends of the aimed objects/véhicule, you can use the command cursorTarget
 * Note also that the condition is evaluted in real time, so it can use condition depending on the mission progress :
 * "alive officer && taskState task1 == ""Succeeded"""
 * To allow the creation factory to everyone, just set the condition to "true".
 * 
 * (FR)
 * Cette variable permet d'utiliser une condition SQF dynamique pour rendre accessible ou non l'usine de création sur des clients spécifiques.
 * La variable doit être une CHAINE de caractères délimitée par des guillemets et doit contenir une condition SQF valide qui sera évaluée durant la mission.
 * Par exemple pour autoriser l'usine de création sur seulement quelques joueurs ayant un ID de jeu connu, la variable peut être défini comme suit :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Ou elle peut se baser sur le nom de profil : "profileName in [""maxime"", ""martin"", ""marc""]"
 * Ou pour n'autoriser que l'admin de serveur : "serverCommandAvailable "#kick"""
 * Notez que les guillemets des chaînes de caractères dans la chaîne de condition doivent être doublés.
 * Note : si la condition dépend de l'objet/véhicule pointé, vous pouvez utiliser la commande cursorTarget
 * Notez aussi que les condition sont évaluées en temps réel, et peuvent donc dépendre du déroulement de la mission :
 * "alive officier && taskState tache1 == ""Succeeded"""
 * Pour autoriser l'usine de création chez tout le monde, il suffit de définir la condition à "true".
 */
R3F_LOG_CFG_string_condition_allow_creation_factory_on_this_client = "false";

/*
 ********************************************************************************************
 * BELOW IS THE CLASS NAMES CONFIGURATION / CI-DESSOUS LA CONFIGURATION DES NOMS DE CLASSES *
 ********************************************************************************************
 * 
 * (EN)
 * There are two ways to manage new objects with the logistics system. The first one is to add these objects in the
 * following appropriate lists. The second one is to create a new external file in the /addons_config/ directory,
 * based on /addons_config/TEMPLATE.sqf, and to add a #include below to.
 * The first method is better to add/fix only some various class names.
 * The second method is better to take into account an additional addon.
 * 
 * These variables are based on the inheritance principle according to the CfgVehicles tree.
 * It means that a features accorded to a class name, is also accorded to all child classes.
 * Inheritance tree view : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
 * 
 * (FR)
 * Deux moyens existent pour gérer de nouveaux objets avec le système logistique. Le premier consiste à ajouter
 * ces objets dans les listes appropriées ci-dessous. Le deuxième est de créer un fichier externe dans le répertoire
 * /addons_config/ basé sur /addons_config/TEMPLATE.sqf, et d'ajouter un #include ci-dessous.
 * La première méthode est préférable lorsqu'il s'agit d'ajouter ou corriger quelques classes diverses.
 * La deuxième méthode est préférable s'il s'agit de prendre en compte le contenu d'un addon supplémentaire.
 * 
 * Ces variables sont basées sur le principe d'héritage utilisés dans l'arborescence du CfgVehicles.
 * Cela signifie qu'une fonctionnalité accordée à une classe, le sera aussi pour toutes ses classes filles.
 * Vue de l'arborescence d'héritage : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
 */

/****** LIST OF ADDONS CONFIG TO INCLUDE / LISTE DES CONFIG D'ADDONS A INCLURE ******/
//#include "addons_config\A3_vanilla.sqf"
//#include "addons_config\All_in_Arma.sqf"
//#include "addons_config\R3F_addons.sqf"
//#include "addons_config\YOUR_ADDITIONAL_ADDON.sqf"

/****** TOW WITH VEHICLE / REMORQUER AVEC VEHICULE ******/

/**
 * List of class names of ground vehicles which can tow objects.
 * Liste des noms de classes des véhicules terrestres pouvant remorquer des objets.
 */
R3F_LOG_CFG_can_tow = R3F_LOG_CFG_can_tow +
[
	// e.g. : "MyTowingVehicleClassName1", "MyTowingVehicleClassName2"
	
];

/**
 * List of class names of objects which can be towed.
 * Liste des noms de classes des objets remorquables.
 */
R3F_LOG_CFG_can_be_towed = R3F_LOG_CFG_can_be_towed +
[
	// e.g. : "MyTowableObjectClassName1", "MyTowableObjectClassName2"

];


/****** LIFT WITH VEHICLE / HELIPORTER AVEC VEHICULE ******/

/**
 * List of class names of helicopters which can lift objects.
 * Liste des noms de classes des hélicoptères pouvant héliporter des objets.
 */
R3F_LOG_CFG_can_lift = R3F_LOG_CFG_can_lift +
[

];

/**
 * List of class names of objects which can be lifted.
 * Liste des noms de classes des objets héliportables.
 */
R3F_LOG_CFG_can_be_lifted = R3F_LOG_CFG_can_be_lifted +
[

];


/****** LOAD IN VEHICLE / CHARGER DANS LE VEHICULE ******/

/*
* (EN)
 * This section uses a numeric quantification of capacity and cost of the objets.
 * For example, in a vehicle has a capacity of 100, we will be able to load in 5 objects costing 20 capacity units.
 * The capacity doesn't represent a real volume or weight, but a choice made for gameplay.
 * 
 * (FR)
 * Cette section utilise une quantification numérique de la capacité et du coût des objets.
 * Par exemple, dans un véhicule d'une capacité de 100, nous pouvons charger 5 objets coûtant 20 unités de capacité.
 * La capacité ne représente ni un poids, ni un volume, mais un choix fait pour la jouabilité.
 */

/**
 * List of class names of vehicles or cargo objects which can transport objects.
 * The second element of the nested arrays is the load capacity (in relation with the capacity cost of the objects).
 * 
 * Liste des noms de classes des véhicules ou "objets contenant" pouvant transporter des objets.
 * Le deuxième élément des sous-tableaux est la capacité de chargement (en relation avec le coût de capacité des objets).
 */
R3F_LOG_CFG_can_transport_cargo = R3F_LOG_CFG_can_transport_cargo +
[
	// e.g. : ["MyTransporterClassName1", itsCapacity], ["MyTransporterClassName2", itsCapacity]
	["Exile_Car_Offroad_Red", 80],
	["Exile_Car_Offroad_Beige", 80],
	["Exile_Car_Offroad_White", 80],
	["Exile_Car_Offroad_Blue", 80],
	["Exile_Car_Offroad_DarkRed", 80],
	["Exile_Car_Offroad_BlueCustom", 80],
	["Exile_Car_Offroad_Guerilla01", 80],
	["Exile_Car_Offroad_Guerilla02", 80],
	["Exile_Car_Offroad_Guerilla03", 80],
	["Exile_Car_Offroad_Guerilla04", 80],
	["Exile_Car_Offroad_Guerilla05", 80],
	["Exile_Car_Offroad_Guerilla06", 80],
	["Exile_Car_Offroad_Guerilla07", 80],
	["Exile_Car_Offroad_Guerilla08", 80],
	["Exile_Car_Offroad_Guerilla09", 80],
	["Exile_Car_Offroad_Guerilla10", 80],
	["Exile_Car_Offroad_Guerilla11", 80],
	["Exile_Car_Offroad_Guerilla12", 80],
	["Exile_Car_Offroad_Rusty1", 80],
	["Exile_Car_Offroad_Rusty2", 80],
	["Exile_Car_Offroad_Rusty3", 80],
	["C_Offroad_01_F", 80],	
	["B_GEN_Offroad_01_gen_F", 80],	
	["Exile_Car_Offroad_Armed_Guerilla01", 80],
	["Exile_Car_Offroad_Armed_Guerilla02", 80],
	["Exile_Car_Offroad_Armed_Guerilla03", 80],
	["Exile_Car_Offroad_Armed_Guerilla04", 80],
	["Exile_Car_Offroad_Armed_Guerilla05", 80],
	["Exile_Car_Offroad_Armed_Guerilla06", 80],
	["Exile_Car_Offroad_Armed_Guerilla07", 80],
	["Exile_Car_Offroad_Armed_Guerilla08", 80],
	["Exile_Car_Offroad_Armed_Guerilla09", 80],
	["Exile_Car_Offroad_Armed_Guerilla10", 80],
	["Exile_Car_Offroad_Armed_Guerilla11", 80],
	["Exile_Car_Offroad_Armed_Guerilla12", 80],
	["Exile_Car_Offroad_Repair_Civillian", 80],
	["Exile_Car_Offroad_Repair_Red", 80],
	["Exile_Car_Offroad_Repair_Beige", 80],
	["Exile_Car_Offroad_Repair_White", 80],
	["Exile_Car_Offroad_Repair_Blue", 80],
	["Exile_Car_Offroad_Repair_DarkRed", 80],
	["Exile_Car_Offroad_Repair_BlueCustom", 80],
	["Exile_Car_Offroad_Repair_Guerilla01", 80],
	["Exile_Car_Offroad_Repair_Guerilla02", 80],
	["Exile_Car_Offroad_Repair_Guerilla03", 80],
	["Exile_Car_Offroad_Repair_Guerilla04", 80],
	["Exile_Car_Offroad_Repair_Guerilla05", 80],
	["Exile_Car_Offroad_Repair_Guerilla06", 80],
	["Exile_Car_Offroad_Repair_Guerilla07", 80],
	["Exile_Car_Offroad_Repair_Guerilla08", 80],
	["Exile_Car_Offroad_Repair_Guerilla09", 80],
	["Exile_Car_Offroad_Repair_Guerilla10", 80],
	["Exile_Car_Offroad_Repair_Guerilla11", 80],
	["Exile_Car_Offroad_Repair_Guerilla12", 80],
	["Exile_Car_Hunter", 120],
	["Exile_Car_Strider", 120],
	["Exile_Car_Ifrit", 120],
    ["O_MRAP_02_F", 120],
    ["O_T_MRAP_02_ghex_F", 120],	
    ["B_MRAP_01_F", 120],
    ["B_T_MRAP_01_F", 120],	
    ["I_MRAP_03_F", 120],	
    ["Exile_Car_Ikarus_Blue", 220],
    ["Exile_Car_Ikarus_Red", 220],
    ["Exile_Car_Ikarus_Party", 220],
    ["Exile_Car_SUVXL_Black", 120],
    ["Exile_Car_Ural_Open_Blue", 220],
    ["Exile_Car_Ural_Open_Yellow", 220],
    ["Exile_Car_Ural_Open_Worker", 220],
    ["Exile_Car_Ural_Open_Military", 220],
    ["Exile_Car_Ural_Covered_Blue", 220],
    ["Exile_Car_Ural_Covered_Yellow", 220],
    ["Exile_Car_Ural_Covered_Worker", 220],
    ["Exile_Car_Ural_Covered_Military", 220],
	["Exile_Car_V3S_Open", 220],
	["Exile_Car_V3S_Covered", 220],	
    ["Exile_Car_BRDM2_HQ", 120],
    ["Exile_Car_BTR40_MG_Green", 120],
    ["Exile_Car_BTR40_MG_Camo", 120],
    ["Exile_Car_BTR40_Green", 120],
    ["Exile_Car_BTR40_Camo", 120],
    ["Exile_Car_HMMWV_M134_Green", 120],
    ["Exile_Car_HMMWV_M134_Desert", 120],
    ["Exile_Car_HMMWV_M2_Green", 120],
    ["Exile_Car_HMMWV_M2_Desert", 120],
    ["Exile_Car_HMMWV_MEV_Green", 120],
    ["Exile_Car_HMMWV_MEV_Desert", 120],
    ["Exile_Car_HMMWV_UNA_Green", 120],
    ["Exile_Car_HMMWV_UNA_Desert", 120],	
    ["Exile_Car_Lada_Green", 40],
    ["Exile_Car_Lada_Taxi", 40],
    ["Exile_Car_Lada_Red", 40],
    ["Exile_Car_Lada_White", 40],
    ["Exile_Car_Lada_Hipster", 40],
    ["Exile_Car_Volha_Blue", 40],
    ["Exile_Car_Volha_White", 40],	
    ["Exile_Car_Volha_Black", 40],	
	["O_Truck_02_medical_F", 220],
    ["O_Truck_02_fuel_F", 220],
    ["O_Truck_02_box_F", 220],
    ["O_Truck_03_medical_F", 220],
    ["O_Truck_03_repair_F", 220],	
    ["O_Truck_03_fuel_F", 220],
    ["B_Truck_01_medical_F", 220],	
    ["B_Truck_01_fuel_F", 220],
    ["B_Truck_01_Repair_F", 220],	
	["C_Van_01_box_F", 160],
    ["C_Van_01_transport_F", 160],
	["Exile_Car_Tempest", 220],
	["Exile_Car_HEMMT", 220],
	["B_Truck_01_mover_F", 220],
	["B_T_Truck_01_mover_F", 220],	
	["Exile_Car_Zamak", 180],
	["B_Heli_Transport_03_F", 160],
    ["B_Heli_Transport_03_black_F", 160],	
	["Exile_Car_SUV_Red", 40],
	["Exile_Car_SUV_Black", 40],
	["Exile_Car_SUV_Grey", 40], 							  
	["Exile_Car_SUV_Orange", 40],
	["Exile_Car_SUV_Rusty1", 40],
	["Exile_Car_SUV_Rusty2", 40], 							  
	["Exile_Car_SUV_Rusty3", 40],	
	["Exile_Car_Van_Black", 120],							  
	["Exile_Car_Van_White", 120],
	["Exile_Car_Van_Red", 120],
	["Exile_Car_Van_Guerilla01", 120],
	["Exile_Car_Van_Guerilla02", 120],
	["Exile_Car_Van_Guerilla03", 120],
	["Exile_Car_Van_Guerilla04", 120],
	["Exile_Car_Van_Guerilla05", 120],
	["Exile_Car_Van_Guerilla06", 120],
	["Exile_Car_Van_Guerilla07", 120],
	["Exile_Car_Van_Guerilla08", 120],
	["Exile_Car_Van_Box_Black", 120],
	["Exile_Car_Van_Box_White", 120],
	["Exile_Car_Van_Box_Red", 120],
	["Exile_Car_Van_Box_Guerilla01", 120],
	["Exile_Car_Van_Box_Guerilla02", 120],
	["Exile_Car_Van_Box_Guerilla03", 120],
	["Exile_Car_Van_Box_Guerilla04", 120],
	["Exile_Car_Van_Box_Guerilla05", 120],
	["Exile_Car_Van_Box_Guerilla06", 120],
	["Exile_Car_Van_Box_Guerilla07", 120],
	["Exile_Car_Van_Box_Guerilla08", 120],
	["Exile_Car_Van_Fuel_Black", 80],
	["Exile_Car_Van_Fuel_White", 80],
	["Exile_Car_Van_Fuel_Red", 80],
	["Exile_Car_Van_Fuel_Guerilla01", 80],
	["Exile_Car_Van_Fuel_Guerilla02", 80],
	["Exile_Car_Van_Fuel_Guerilla03", 80],	
	["Exile_Car_Hatchback_Beige", 40],
	["Exile_Car_Hatchback_Green", 40],
	["Exile_Car_Hatchback_Blue", 40],
	["Exile_Car_Hatchback_BlueCustom", 40],
	["Exile_Car_Hatchback_BeigeCustom", 40],
	["Exile_Car_Hatchback_Yellow", 40],
	["Exile_Car_Hatchback_Grey", 40],
	["Exile_Car_Hatchback_Black", 40],
	["Exile_Car_Hatchback_Dark", 40],
	["Exile_Car_Hatchback_Rusty1", 40],
	["Exile_Car_Hatchback_Rusty2", 40],
	["Exile_Car_Hatchback_Rusty3", 40],
	["Exile_Car_Hatchback_Sport_Red", 40],
	["Exile_Car_Hatchback_Sport_Blue", 40],
	["Exile_Car_Hatchback_Sport_Orange", 40],
	["Exile_Car_Hatchback_Sport_White", 40],
	["Exile_Car_Hatchback_Sport_Beige", 40],
	["Exile_Car_Hatchback_Sport_Green", 40],
	["Exile_Chopper_Hummingbird_Green", 80],
	["Exile_Chopper_Hummingbird_Civillian_Blue", 80],
	["Exile_Chopper_Hummingbird_Civillian_Red", 80],
	["Exile_Chopper_Hummingbird_Civillian_ION", 80],
	["Exile_Chopper_Hummingbird_Civillian_BlueLine", 80],
	["Exile_Chopper_Hummingbird_Civillian_Digital", 80],
	["Exile_Chopper_Hummingbird_Civillian_Elliptical", 80],
	["Exile_Chopper_Hummingbird_Civillian_Furious", 80],
	["Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 80],
	["Exile_Chopper_Hummingbird_Civillian_Jeans", 80],
	["Exile_Chopper_Hummingbird_Civillian_Light", 80],
	["Exile_Chopper_Hummingbird_Civillian_Shadow", 80],
	["Exile_Chopper_Hummingbird_Civillian_Sheriff", 80],
	["Exile_Chopper_Hummingbird_Civillian_Speedy", 80],
	["Exile_Chopper_Hummingbird_Civillian_Sunset", 80],
	["Exile_Chopper_Hummingbird_Civillian_Vrana", 80],
	["Exile_Chopper_Hummingbird_Civillian_Wasp", 80],
	["Exile_Chopper_Hummingbird_Civillian_Wave", 80],
	["Exile_Chopper_Hellcat_Green", 120],
	["Exile_Chopper_Hellcat_FIA", 120],
	["Exile_Chopper_Taru_Transport_Black", 160],
	["Exile_Chopper_Taru_CSAT", 160],
	["Exile_Chopper_Taru_Black", 160],
	["Exile_Chopper_Taru_Covered_CSAT", 160],
	["Exile_Chopper_Taru_Covered_Black", 160],
	["Exile_Chopper_Huron_Black", 160],
	["Exile_Chopper_Huron_Green", 160],
	["Exile_Chopper_Taru_Transport_CSAT", 160],
	["Exile_Chopper_Mohawk_FIA", 160],	
	["O_T_VTOL_02_infantry_F", 160],
	["B_T_VTOL_01_infantry_F", 160],
	["B_T_VTOL_01_armed_F", 160],
	["C_Plane_Civil_01_F", 160],	
	["I_C_Plane_Civil_01_F", 160],
	["C_Plane_Civil_01_racing_F", 160],	
	["Exile_Chopper_Orca_CSAT", 120],
	["Exile_Chopper_Orca_Black", 120],
	["Exile_Chopper_Orca_BlackCustom", 120],
	["B_G_Offroad_01_F", 80],
	["C_Offroad_02_unarmed_black_F", 80],
	["C_Offroad_02_unarmed_green_F", 80],
	["C_Offroad_02_unarmed_blue_F", 80],
	["C_Offroad_02_unarmed_orange_F", 80],
	["C_Offroad_02_unarmed_white_F", 80],
	["C_Offroad_02_unarmed_red_F", 80],
	["I_C_Offroad_02_unarmed_olive_F", 80],
	["I_C_Offroad_02_unarmed_brown_F", 80],
	["B_T_LSV_01_armed_F", 120],
	["B_T_LSV_01_unarmed_F", 120],
	["O_T_LSV_02_armed_F", 120],
	["O_T_LSV_02_unarmed_F", 120],	
	["O_Truck_03_transport_F", 220],
	["O_T_Truck_03_transport_ghex_F", 220],	
	["O_Truck_03_covered_F", 220],
	["O_T_Truck_03_covered_ghex_F", 220],	
	["B_Truck_01_box_EPOCH", 80],
	["B_Heli_Transport_01_camo_F", 160],
	["B_Heli_Transport_01_F", 160],
	["I_Truck_02_medical_F", 180],
    ["I_Truck_02_fuel_F", 180],
    ["I_Truck_02_box_F", 180],
	["O_Truck_02_transport_F", 180],
	["C_Truck_02_transport_F", 180],
	["C_Truck_02_covered_F", 180],
	["C_Truck_02_fuel_F", 180],
    ["C_Truck_02_box_F", 180],
	["Exile_Plane_Cessna", 160],
	["Exile_Plane_AN2_Green", 160],	
	["Exile_Plane_AN2_White", 160],	
	["Exile_Plane_AN2_Stripe", 160],	
	["Exile_Car_Golf_Red", 40],
	["Exile_Car_Golf_Black", 40],	
    ["Exile_Car_SUV_Armed_Black", 120],	
	["B_Heli_Attack_01_F", 120],
	["O_Heli_Light_02_v2_F", 160],
	["O_Heli_Light_02_F", 160],
	["I_Heli_light_03_F", 160],
	["O_Heli_Attack_02_F", 160],
	["O_Heli_Attack_02_black_F", 160],
	["B_Heli_Light_01_armed_F", 80],
	["GNT_C185F", 160],
	["Exile_Plane_Ceasar", 160],	
	["Exile_Boat_RubberDuck_CSAT", 90],
	["Exile_Boat_RubberDuck_Digital", 90],
	["Exile_Boat_RubberDuck_Orange", 90],
	["Exile_Boat_RubberDuck_Blue", 90],
	["C_Scooter_Transport_01_F", 90],	
	["Exile_Boat_RubberDuck_Black", 90],
	["Exile_Boat_MotorBoat_Police", 120],
	["Exile_Boat_MotorBoat_Orange", 120],
	["Exile_Boat_MotorBoat_White", 120],
	["I_C_Boat_Transport_02_F", 120],
	["B_G_Boat_Transport_02_F", 120],
	["C_Boat_Transport_02_F", 120],
	["O_G_Boat_Transport_02_F", 120],
	["I_G_Boat_Transport_02_F", 120],	
	["I_Boat_Armed_01_minigun_F", 180],
	["B_Boat_Armed_01_minigun_F", 180],
	["Exile_Boat_SDV_CSAT", 120],
	["Exile_Boat_SDV_Digital", 120],
	["Exile_Boat_SDV_Grey", 120],
	["Exile_Car_ProwlerUnarmed", 120],
	["Exile_Car_ProwlerLight", 120],
	["Exile_Car_QilinUnarmed", 120],
	["O_T_LSV_02_armed_arid_F", 120],
	["O_T_LSV_02_armed_ghex_F", 120],
	["O_T_LSV_02_armed_black_F", 120],
	["B_LSV_01_armed_F", 120],
	["Exile_Car_MB4WD", 120],
	["Exile_Car_MB4WDOpen", 120],
	["Exile_Plane_BlackfishVehicle", 180],
	["Exile_Plane_BlackfishInfantry", 180],
	["O_T_VTOL_02_infantry_hex_F", 180],
	["O_T_VTOL_02_infantry_ghex_F", 180],	
	["O_T_VTOL_02_infantry_grey_F", 180],
	["O_T_VTOL_02_vehicle_hex_F", 180],	
	["O_T_VTOL_02_vehicle_ghex_F", 180],
	["O_T_VTOL_02_vehicle_grey_F", 180],			
	["I_G_Offroad_01_F", 80],
	["Exile_Car_Octavius_White", 40],
	["Exile_Car_Octavius_Black", 40],	
	["Exile_Car_LandRover_Green", 220],
	["Exile_Car_LandRover_Ambulance_Green", 220],
	["Exile_Car_OldTractor_Red", 40],
	["Exile_Car_TowTractor_White", 60],
	["Exile_Car_Tractor_Red", 50],
	["Exile_Car_UAZ_Green", 80],
	["Exile_Car_UAZ_Open_Green", 80],
	["Exile_Chopper_Huey_Green", 120],
	["Exile_Chopper_Huey_Armed_Green", 120]
	//["I_Heli_transport_02_EPOCH", 100],
	//["B_Heli_transport_03_unarmed_EPOCH", 160]	
];

/**
 * List of class names of objects which can be loaded in transport vehicle/cargo.
 * The second element of the nested arrays is the cost capacity (in relation with the capacity of the vehicles).
 * 
 * Liste des noms de classes des objets transportables.
 * Le deuxième élément des sous-tableaux est le coût de capacité (en relation avec la capacité des véhicules).
 */
R3F_LOG_CFG_can_be_transported_cargo = R3F_LOG_CFG_can_be_transported_cargo +
[
	// e.g. : ["MyTransportableObjectClassName1", itsCost], ["MyTransportableObjectClassName2", itsCost]
	["Exile_Bike_QuadBike_Black", 220],
	["Exile_Bike_QuadBike_Blue", 220],
	["Exile_Bike_QuadBike_Red", 220],
	["Exile_Bike_QuadBike_White", 220],
	["Exile_Bike_QuadBike_Nato", 220],
	["Exile_Bike_QuadBike_Csat", 220],
	["Exile_Bike_QuadBike_Fia", 220],
	["Exile_Bike_QuadBike_Guerilla01", 220],
	["Exile_Bike_QuadBike_Guerilla02", 220],		
	["CargoNet_01_box_F", 800],
	["IG_supplyCrate_F", 60],
	["Box_NATO_Wps_F", 40],
	["B_supplyCrate_F", 60],
	["Box_IND_WpsSpecial_F", 40],
	["Land_Box_AmmoOld_F", 40],
	["Box_IND_Support_F", 40],
	["Box_East_Support_F", 40],	
	["Box_NATO_Support_F", 40],	
	["C_supplyCrate_F", 40],
	["C_T_supplyCrate_F", 40],	
	["Box_NATO_AmmoVeh_F", 80],
	["Box_Syndicate_Ammo_F", 40],
	["Box_Syndicate_WpsLaunch_F", 40],
	["Box_Syndicate_Wps_F", 40],
	["Box_NATO_Equip_F", 60],
    ["Box_GEN_Equip_F",	60],	
	["Box_AAF_Equip_F", 60],
    ["Box_AAF_Uniforms_F",	50],
	["Box_CSAT_Uniforms_F", 50],
    ["Box_NATO_Uniforms_F",	50],		
	["Box_T_East_Ammo_F", 40],
	["Box_T_East_Wps_F", 40],
	["Box_T_East_WpsSpecial_F", 40],		
	["Box_T_NATO_Wps_F", 40],	
	["Box_T_NATO_WpsSpecial_F", 40],	
	["Box_NATO_WpsSpecial_F", 40],
	["Box_NATO_Ammo_F", 40],	
	["Box_NATO_AmmoOrd_F", 40],
	["Box_NATO_Grenades_F", 40],
	["Box_NATO_WpsLaunch_F", 40],		
	["Box_East_AmmoVeh_F", 80],
	["Box_IND_AmmoVeh_F", 80],
	["O_supplyCrate_F", 60],
	["I_supplyCrate_F", 60],
	["B_CargoNet_01_ammo_F", 80],
	["O_CargoNet_01_ammo_F", 80],
	["I_CargoNet_01_ammo_F", 80],
	["Land_CargoBox_V1_F", 40],
	["Land_Pod_Heli_Transport_04_covered_F", 530],
	["Land_Pod_Heli_Transport_04_fuel_F", 530],
	["Land_Pod_Heli_Transport_04_box_F", 530],
	["Land_Pod_Heli_Transport_04_repair_F", 530],
	["Land_Pod_Heli_Transport_04_medevac_F", 530],
	["Land_Pod_Heli_Transport_04_bench_F", 530],
	["Land_Pod_Heli_Transport_04_covered_black_F", 530],
	["Land_Pod_Heli_Transport_04_fuel_black_F", 530],
	["Land_Pod_Heli_Transport_04_box_black_F", 530],
	["Land_Pod_Heli_Transport_04_repair_black_F", 530],
	["Land_Pod_Heli_Transport_04_medevac_black_F", 530],
	["Land_Pod_Heli_Transport_04_bench_black_F", 530],   	
	["B_Slingload_01_Cargo_F", 530],
	["B_Slingload_01_Fuel_F", 530],
	["B_Slingload_01_Ammo_F", 530],
	["B_Slingload_01_Medevac_F", 530],
	["B_Slingload_01_Repair_F", 530],	
	["Land_MetalCase_01_large_F", 40],
	["Land_MetalCase_01_small_F", 30],	
	["Exile_Car_Kart_Black", 170],
    ["Exile_Car_Kart_Yellow", 170],
    ["Exile_Car_Kart_White", 170],
    ["Exile_Car_Kart_Orange", 170],
	["Exile_Car_Kart_Blue", 170],
    ["Exile_Car_Kart_Green", 170],
    ["Exile_Car_Kart_Vrana", 170],
    ["Exile_Car_Kart_RedStone", 170],
	["Exile_Car_Kart_BluKing", 170],
	["Exile_Bike_OldBike", 40],
	["Box_IED_Exp_F", 30],
	["Exile_Bike_MountainBike", 40]

];

/****** MOVABLE-BY-PLAYER OBJECTS / OBJETS DEPLACABLES PAR LE JOUEUR ******/

/**
 * List of class names of objects which can be carried and moved by a player.
 * Liste des noms de classes des objets qui peuvent être portés et déplacés par le joueur.
 */
R3F_LOG_CFG_can_be_moved_by_player = R3F_LOG_CFG_can_be_moved_by_player +
[
	// e.g. : "MyMovableObjectClassName1", "MyMovableObjectClassName2"
	"CargoNet_01_box_F",
	"Box_NATO_AmmoVeh_F",
	"B_supplyCrate_F",
	"Box_NATO_Wps_F",
	"C_supplyCrate_F",
	"C_T_supplyCrate_F",
	"IG_supplyCrate_F",
	"Box_IND_AmmoVeh_F",
	"Box_NATO_WpsSpecial_F",
	"Box_NATO_Ammo_F",
	"Box_Syndicate_Ammo_F",
	"Box_Syndicate_WpsLaunch_F",
	"Box_Syndicate_Wps_F",
	"Box_IED_Exp_F",
	"Box_NATO_Equip_F",	
	"Box_GEN_Equip_F",
	"Box_AAF_Equip_F",
	"Box_CSAT_Equip_F",
    "Box_AAF_Uniforms_F",
	"Box_CSAT_Uniforms_F",
	"Box_NATO_Uniforms_F",	
	"Box_T_East_Ammo_F",
	"Box_T_East_Wps_F",
	"Box_T_East_WpsSpecial_F",		
	"Box_T_NATO_Wps_F",	
	"Box_T_NATO_WpsSpecial_F",	
	"Box_NATO_AmmoOrd_F",
	"Box_NATO_Grenades_F",
	"Box_NATO_Support_F",
	"Box_IND_Support_F",
	"Box_East_Support_F",	
	"Box_NATO_WpsLaunch_F",
	"Box_East_AmmoVeh_F",
	"Box_IND_WpsSpecial_F",
	"Land_Box_AmmoOld_F",		
	"O_supplyCrate_F",
	"I_supplyCrate_F",
	"B_CargoNet_01_ammo_F",
	"O_CargoNet_01_ammo_F",
	"I_CargoNet_01_ammo_F",
	"Land_CargoBox_V1_F",
	"Land_MetalCase_01_large_F",
	"Land_MetalCase_01_small_F",
	"B_Slingload_01_Cargo_F",
	"B_Slingload_01_Fuel_F",
	"B_Slingload_01_Ammo_F",
	"B_Slingload_01_Medevac_F",
	"B_Slingload_01_Repair_F",
	"Exile_Bike_OldBike",
	"Exile_Bike_MountainBike",
	"Land_Pod_Heli_Transport_04_covered_F",
	"Land_Pod_Heli_Transport_04_fuel_F",
	"Land_Pod_Heli_Transport_04_box_F",
	"Land_Pod_Heli_Transport_04_repair_F",
	"Land_Pod_Heli_Transport_04_medevac_F",
	"Land_Pod_Heli_Transport_04_bench_F",
	"Land_Pod_Heli_Transport_04_covered_black_F",
	"Land_Pod_Heli_Transport_04_fuel_black_F",
	"Land_Pod_Heli_Transport_04_box_black_F",
	"Land_Pod_Heli_Transport_04_repair_black_F",
	"Land_Pod_Heli_Transport_04_medevac_black_F",
	"Land_Pod_Heli_Transport_04_bench_black_F"
];