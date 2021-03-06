/**
 * ExileClient_gui_xm8_slide_apps_onOpen
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display","_killDeathRatio","_killDeathRatioControl","_popTabsValue","_popTabs","_respectValue","_respect",'_newControl'];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
if (ExileClientPlayerDeaths < 1) then 
{
	_killDeathRatio = ExileClientPlayerKills;
}
else 
{
	_killDeathRatio = [ExileClientPlayerKills / ExileClientPlayerDeaths, 2] call ExileClient_util_math_round;
};
_killDeathRatioControl = _display displayCtrl 4057;
_killDeathRatioControl ctrlSetTooltip format ["%1 Kills / %2 Deaths", ExileClientPlayerKills, ExileClientPlayerDeaths];
_killDeathRatioControl ctrlSetStructuredText parseText (format ["<t color='#00b2cd' font='OrbitronLight' size='1.6' valign='middle' align='center' shadow='0'><br/><br/><br/><t font='OrbitronMedium' size='3.5' color='#ffffff'>%1</t><br/>K/D</t>", _killDeathRatio]);
_popTabsValue = (player getVariable ["ExileLocker", 0]);
if (_popTabsValue > 999) then
{
	_popTabsValue = format ["%1k", floor (_popTabsValue / 1000)];
};
_popTabs = _display displayCtrl 4058;
_popTabs ctrlSetTooltip format["You have %1 Pop Tabs in your locker", (player getVariable ["ExileLocker", 0])];
_popTabs ctrlSetStructuredText parseText (format ["<t color='#00b2cd' font='OrbitronLight' size='1.6' valign='middle' align='center' shadow='0'><br/><br/><br/><t font='OrbitronMedium' size='3.5' color='#ffffff'>%1</t><br/>POP TABS</t>", _popTabsValue]);
_respectValue = ExileClientPlayerScore;
if (_respectValue > 999) then
{
	_respectValue = format ["%1k", floor (_respectValue / 1000)];
};
_respect = _display displayCtrl 4059;
_respect ctrlSetTooltip format["%1", ExileClientPlayerScore];
_respect ctrlSetStructuredText parseText (format ["<t color='#00b2cd' font='OrbitronLight' size='1.6' valign='middle' align='center' shadow='0'><br/><br/><br/><t font='OrbitronMedium' size='3.5' color='#ffffff'>%1</t><br/>RESPECT</t>", _respectValue]);

updateScratchieText = {
	_this ctrlSetText "(berechnung) Rubbellose...";
	[_this] spawn {
		sleep 5;
		_this select 0 ctrlSetText (format ["%1 Rubbellose", missionNamespace getVariable ["scratchieCount", 0]]);
	};
};

_newControl = _display displayCtrl 5009;
_newControl ctrlSetTooltip format["Rubbellos 200 poptabs"];
//_newControl ctrlSetText "Rubbellos Kaufen";
_newControl ctrlSetEventHandler ["ButtonClick", "['buy',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];"];

_newControl = _display displayCtrl 5010;
_newControl ctrlSetTooltip format["Felicitations, vous avez gagne!"];
//_newControl ctrlSetText "Preis abholen";
_newControl ctrlSetEventHandler ["ButtonClick", "['get',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];"];


_newControl = _display displayCtrl 5008;
_newControl ctrlSetText " ";
_newControl ctrlSetEventHandler ["ButtonClick", "['use',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2]; _this select 0 call updateScratchieText"]; 

['',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];
_newControl call updateScratchieText;

_newControl = _display displayCtrl 5004;
_newControl ctrlSetTooltip format["Server Regeln lesen..."];
//_newControl ctrlSetText "test";
_newControl ctrlSetEventHandler ["ButtonClick", "execVM'ExAdClient\XM8\Apps\test\test.sqf';"];

_newControl = _display displayCtrl 5005;
_newControl ctrlSetTooltip format["Read the server rules..."];
//_newControl ctrlSetText "Server Rules";
_newControl ctrlSetEventHandler ["ButtonClick", "execVM'ExAdClient\XM8\Apps\rules\rules.sqf';"];

_newControl = _display displayCtrl 5011;
//_newControl ctrlSetText "Player Scan";
_newControl ctrlSetEventHandler ["ButtonClick", "execVM'ExAdClient\XM8\Apps\playerScan\playerScan.sqf';"];

_newControl = _display displayCtrl 5012;
//_newControl ctrlSetText "Selfie";
_newControl ctrlSetEventHandler ["ButtonClick", "execVM'ExAdClient\XM8\Apps\selfie\selfie.sqf';"];

_newControl = _display displayCtrl 5007;
_newControl ctrlSetTooltip format["Bambi Bike..."];

_newControl = _display displayCtrl 5013;
//_newControl ctrlSetText "Attach light";
_newControl ctrlSetEventHandler ["ButtonClick", "execVM'ExAdClient\XM8\Apps\AttachChemApp\attachChemLight.sqf';"];