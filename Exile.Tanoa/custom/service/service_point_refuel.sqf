// Vehicle Service Point (Refuel) by Axe Cop
//reworked for a3 epoch by Halv
//reworked for a3 exile by Atze

private ["_vehicle","_args","_servicePoint","_costs","_updateInterval","_amount","_type","_name","_textMissing"];

_vehicle = _this select 0;
if (!local _vehicle) exitWith { diag_log format["Error: called service_point_refuel.sqf with non-local vehicle: %1", _vehicle] };

_args = _this select 3;
_servicePoint = _args select 0;
_costs = _args select 1;
_updateInterval = _args select 2;
_amount = _args select 3;
_type = typeOf _vehicle;
_name = getText(configFile >> "cfgVehicles" >> _type >> "displayName");
_veh = vehicle player;

if (_wallet < _costs) exitWith {cutText [format["You need %1 Pop tab to Refuel %2", _costs,_name], "PLAIN DOWN"];};
 
if(_costs > 0 && isTradeEnabled)then{
        takegive_poptab = [player,_costs,true];
        publicVariableServer "takegive_poptab";
};

_vehicle engineOn false;

	if ((vehicle player != _vehicle) || (!local _vehicle) || ([0,0,0] distance (velocity _vehicle) > 1)) exitWith {
		_fueled = false;
		['ErrorTitleAndText',[format['Fueling of %1 stopped', _name]]] call call ExileClient_gui_toaster_addTemplateToast;;
	};

		while {(vehicle player == _vehicle) && (local _vehicle)} do {
			if ([0,0,0] distance (velocity _vehicle) > 1) exitWith {
			['ErrorTitleAndText',[format['Refueling of %1 stopped', _name]]] call call ExileClient_gui_toaster_addTemplateToast;;	
			};
			_vehicle setFuel ((Fuel _vehicle)+0.01);
			if (Fuel _vehicle > 0.99) exitWith {
			['SuccessTitleAndText',[format['%1 Refueled', _name]]] call call ExileClient_gui_toaster_addTemplateToast;;			
			};
			sleep _updateInterval;
		};