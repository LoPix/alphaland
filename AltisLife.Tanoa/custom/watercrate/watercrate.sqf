//All CREDIT GOES TO ORGINAL OWNERS AND MODIFIERS//
//Random Loot Crates by Darth_Rogue & Chisel (tdwhite)  
//HUGE thanks to deadeye & Robio for helping work out the last bugs!
//////////////////////////////////////////////////////////////////////
// Modified by Tuna to only spawn in water on out skirts of map


//watercrate.sqf

if (isServer) then {
_numberofcrates = 4;  //  Number of crates around the map
_spawnCenter = [7700.61,8021.92,0];
//_spawnCenter = getmarkerpos "center"; // Use this if you want the global center of the map, it's declared in mission.sqm, island specific

_min = 3700; // minimum distance from the center position (Number) in meters

_max = 7000; // maximum distance from the center position (Number) in meters
// _max = 3; // Example : maximum range of spawned crates, to keep them INSIDE the sector B compound

_mindist = 1; // minimum distance from the nearest object (Number) in meters, ie. spawn at least this distance away from anything within x meters..
_water = 2; // water mode (Number)    0: cannot be in water , 1: can either be in water or not , 2: must be in water
_shoremode = 0; // 0: does not have to be at a shore , 1: must be at a shore
_marker = True; // Draw a green circle in which the crate will be spawned randomly
//_markersize = 100; // Radius of the marker in meters

diag_log format['Starting spawncrates.sqf'];

for "_i" from 1 to _numberofcrates do
  {
    _pos = [_spawnCenter,_min,_max,_mindist,_water,800,_shoremode] call BIS_fnc_findSafePos; // find a random location within range

    if (_marker) then {
        _event_marker = createMarker [ format ["loot_marker_%1", _i], _pos];
        _event_marker setMarkerShape "ICON";
		_event_marker setMarkerText "Gear Kiste";
		_event_marker setMarkerType "ExileDiversTraderIcon";		
        _event_marker setMarkerColor "ColorBlue";		
        _event_marker setMarkerAlpha 1;
      
        _pos = [_pos select 0, _pos select 1, 0];
    };    

    diag_log format['Spawncrate %1 : Location %2',_i,_pos];

    _box = "Box_IED_Exp_F" createvehicle _pos;   //create the crate  .. These ARE liftable with chopper like the CH-67 , but will not stay after restarts !
   
    clearMagazineCargoGlobal _box;
    clearWeaponCargoGlobal _box;
    clearItemCargoGlobal _box;
	clearBackpackCargoGlobal _box;
    _box setVariable ["permaLoot",true]; //stay until reset
    _box allowDamage false; // Prevent boxes to explode when spawning
     // Add items to the crate        Ex. 2 + random 2 = possible 4   ///  random 8 possible 1-8 items 
    _box addItemCargoGlobal ["Exile_Item_DuctTape", 1 + (random 1)];
    _box addItemCargoGlobal ["Exile_Item_CarWheel", 1 + (random 1)];	
    _box addItemCargoGlobal ["Exile_Item_JunkMetal",  (random 2)]; 
    _box addItemCargoGlobal ["Exile_Item_MetalPole",  (random 1)];
	_box addItemCargoGlobal ["Exile_Item_MetalBoard",  (random 1)];
	_box addItemCargoGlobal ["Exile_Item_WoodPlank", 20 + (random 10)];
	_box addItemCargoGlobal ["Exile_Item_InstaDoc",  (random 1)];
	_box addItemCargoGlobal ["Exile_Item_Vishpirin", 1 + (random 1)];	
	_box addItemCargoGlobal ["Exile_Item_SeedAstics", 1 + (random 2)];
	_box addItemCargoGlobal ["Exile_Item_Raisins", 1 + (random 2)];	
	_box addItemCargoGlobal ["Exile_Item_Energydrink", 1 + (random 2)];
	_box addItemCargoGlobal ["Exile_Item_PowerDrink", 1 + (random 2)];	
    _box addItemCargoGlobal ["Exile_Item_Bandage", 1 + (random 5)];	

	
    
  }
};