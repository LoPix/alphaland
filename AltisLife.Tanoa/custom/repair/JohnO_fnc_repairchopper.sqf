/**
 * ExileClient_object_vehicle_repair
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicle","_availableHitpoints","_fixable","_equippedMagazines"];
_vehicle = _this select 0;
if (ExileClientPlayerIsInCombat) exitWith
{
	[
	    "ErrorTitleAndText", 
	    ["Whoops", "You are in combat!"]
	] call ExileClient_gui_toaster_addTemplateToast;
};
if (ExilePlayerInSafezone) exitWith
{
 	[
	    "ErrorTitleAndText", 
	    ["Whoops", "Please leave the safezone first!"]
	] call ExileClient_gui_toaster_addTemplateToast;
};
if (vehicle player isEqualTo _vehicle) exitWith 
{
	[
	    "ErrorTitleAndText", 
	    ["No..", "Are you serious?"]
    ] call ExileClient_gui_toaster_addTemplateToast;
};
_availableHitpoints = (getAllHitPointsDamage _vehicle) select 0;
{
	if((_vehicle getHitPointDamage _x) > 0)exitWith
	{
		_fixable = "potato";
	};
}
forEach _availableHitpoints;

if (isNil "_fixable") exitWith 
{
	[
		"InfoTitleAndText", 
		["Repair Info", "This vehicle is already fully repaired"]
	] call ExileClient_gui_toaster_addTemplateToast;
}; 
if (!local _vehicle) then
{
	[
		"InfoTitleAndText", 
		["Repair Info", "Get in the driver seat first"]
	] call ExileClient_gui_toaster_addTemplateToast;
}
else 
{
	_equippedMagazines = magazines player;
	if ("Exile_Item_Foolbox" in _equippedMagazines) then
	{	
		if ("Exile_Item_Wrench" in _equippedMagazines) then
		{
			if ("Exile_Item_DuctTape" in _equippedMagazines) then
			{
				if ("Exile_Item_JunkMetal" in _equippedMagazines) then
				{
					if ("Exile_Item_MetalPole" in _equippedMagazines) then
					{
						if ("Exile_Item_MetalScrews" in _equippedMagazines) then
						{
							if ("Exile_Item_MetalWire" in _equippedMagazines) then
							{	
								if ("Exile_Item_OilCanister" in _equippedMagazines) then
								{
				
									player playMove "AinvPknlMstpSnonWnonDr_medic3";	
									player playMove "AinvPknlMstpSnonWnonDr_medic3";	
									sleep 20;
									if (_vehicle isKindOf "car")  then
									{	
										{
											_vehicle setHitPointDamage [_x,0];
										}	forEach _repairable;
									}						
									else
									{
										_vehicle setDamage 0;
									};	
									player removeItem "Exile_Item_DuctTape";
									player removeItem "Exile_Item_JunkMetal";
									player removeItem "Exile_Item_MetalPole";
									player removeItem "Exile_Item_DuctTape";
									player removeItem "Exile_Item_MetalScrews";
									player removeItem "Exile_Item_MetalWire";
									player removeItem "Exile_Item_OilCanister";
									["SuccessTitleAndText",["Repair Info", "Vehicle repaired"]] call ExileClient_gui_toaster_addTemplateToast;
								}
								else
								{
									[
										"InfoTitleAndText", 
										["Repair Info", "You need an oil canister"]
									] call ExileClient_gui_toaster_addTemplateToast;
								};	
							}
							else
							{
								[
									"InfoTitleAndText", 
									["Repair Info", "You need metal wire"]
								] call ExileClient_gui_toaster_addTemplateToast;
							};		
						}
						else
						{
							[
								"InfoTitleAndText", 
								["Repair Info", "You need metal screws"]
							] call ExileClient_gui_toaster_addTemplateToast;
						};	
					}
					else
					{
						[
							"InfoTitleAndText", 
							["Repair Info", "You need a metal pole"]
						] call ExileClient_gui_toaster_addTemplateToast;
					};		
								
				}
				else
				{
					[
						"InfoTitleAndText", 
						["Repair Info", "You need junkmetal"]
					] call ExileClient_gui_toaster_addTemplateToast;
				};
			}
			else 
			{
				[
					"InfoTitleAndText", 
					["Repair Info", "You need duct tape"]
				] call ExileClient_gui_toaster_addTemplateToast;
			};
		}
		else
		{
			[
				"InfoTitleAndText", 
				["Repair Info", "You need a wrench"]
			] call ExileClient_gui_toaster_addTemplateToast;
		};	
	}
	else
	{
		[
			"InfoTitleAndText", 
			["Repair Info", "You need a fool box"]
		] call ExileClient_gui_toaster_addTemplateToast;
	};
	
};
true