 [] execVM "R3F_LOG\init.sqf"; 
 [] execVM "IgiLoad\IgiLoadInit.sqf";
 
 [] execVM "custom\acd_TB\run.sqf";
 [] execVM "custom\info\init.sqf"; 
 [] execVM "custom\statusBar\statusbar.sqf"; 
 [] execVM "custom\animals\deleteanimals.sqf";
 [] execVM "custom\watercrate\watercrate.sqf"; 
 [] execVM "custom\money\takegive_poptab_init.sqf";
 [] execVM "custom\base\config.sqf"; 
 null =[] execVM "custom\bla.sqf"; 
 if(hasInterface) then
 {
 [] execVM "custom\service\service_point.sqf"; 
 };

JohnO_fnc_repairWheels = compileFinal preprocessFileLineNumbers "custom\repair\JohnO_fnc_repairWheels.sqf";
JohnO_fnc_repairchopper = compileFinal preprocessFileLineNumbers "custom\repair\JohnO_fnc_repairchopper.sqf";
JohnO_fnc_repairchopperhalf = compileFinal preprocessFileLineNumbers "custom\repair\JohnO_fnc_repairchopperhalf.sqf";
JohnO_fnc_vehicleRepairCar = compile preprocessFileLineNumbers "custom\repair\JohnO_fnc_vehicleRepairCar.sqf";
