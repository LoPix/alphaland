/*
	File: rules.sqf
	For exile edited by Repentz
*/
disableSerialization;
[
	"",
	0,
	0.2,
	10,
	0,
	0,
	8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayctrl 2400;
_textSpoiler = _display displayctrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'></t><br />";
_message = _message + "<t align='center' size='2' shadow='0'>Welcome to <a href='http://exile.yw-rp.fr/' color='#d83849'>Exile PVE</a>, Arma 3 Tanoa Exile Custom Server!</t><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#ff9900'>Teamspeak³ IP</t>: write in the chat !ts <br />";
_message = _message + "Click this link to get to our website: <a href= 'http://exile.yw-rp.fr/server-stats/' color='#d83849'>Server Stats</a><br />";
_message = _message + "Click this link to get to our website: <a href= 'http://exile.yw-rp.fr/' color='#d83849'>Website</a><br />";
_message = _message + "Click this link to report a bug: <a href= 'http://exile.yw-rp.fr/forums/forum/exile-bugs/' color='#d83849'>Report a bug</a> This helps us out alot!<br />";
_message = _message + "Click this link for Base registration: <a href= 'http://exile.yw-rp.fr/forums/forum/base-anmeldung-exile/' color='#d83849'>Base registration</a> Without does not go!<br />";
_message = _message + "Click this link to get to our server features: <a href= 'http://exile.yw-rp.fr/server-regeln-exile/features/' color='#d83849'>Server Features</a></t><br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#ff9900'>Info:</t><br />";
_message = _message + "These Mod is an Arma 3 modifications in the alpha phase.<br />";
_message = _message + "It can come to unforeseen play situations, bugs and also server falls.<br />";
_message = _message + "In this connection we refund no vehicles, Loot, Poptabs or score.<br />";
_message = _message + "For more information about Exile, you visit please Exile Mod <a href='http://www.exilemod.com/' color='#d83849'>Forum.</a><br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#ff9900'>Keybinds:</t><br />";
_message = _message + "<t color='#ff9900'>6</t> : XM8<br />";
_message = _message + "<t color='#ff9900'>5</t> : Earplug<br />";
_message = _message + "<t color='#ff9900'>4</t> : Holster and Unholster weapon<br />";
_message = _message + "<t color='#ff9900'>0</t> : auto. run<br />";
_message = _message + "Lock and Unlock vehicles over Custom User Key 1<br />";
_message = _message + "3D Marker over Custom User Key 2<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#d83849'>Rules:</t><br />";
_message = _message + "- This is a PvE sever!<br /><br />";
_message = _message + "- You have to follow the instructions of the admins.<br /><br />";
_message = _message + "- You will find adminsupport at Teamspeak,forum or ingame. There will be no support for vehicles, missing gear, teleporting, healing or repairing.<br /><br />";
_message = _message + "- Trolling, spaming, discrimination or insulting of other players is not allowed and will be punished.<br /><br />";
_message = _message + "- Hacks, cheats and bugusing will be punished with ban!<br /><br />";
_message = _message + "- Entering a base without permission is forbidden.<br /><br />";
_message = _message + "- Taking vehicles or helis in a range of 50m of a base is forbidden.<br /><br />";
_message = _message + "- The deliberate destroying of vehicles is prohibited!<br /><br />";
_message = _message + "- Stealing items out of a base is forbidden.<br /><br />";
_message = _message + "- Missions must be reported in sidechat in a range of 1000m distance on the map.<br /><br />";
_message = _message + "- The markings must removed after the mission again.<br /><br />";
_message = _message + "- The bodies of other players may not be looted, unless it corresponds to the slain player’s request.<br /><br />";
_message = _message + "- Insults for racist statements are punished with Ban.<br /><br />";
_message = _message + "- The building application is to post in the forum under Base application with indication of the residents and the coordinates.<br /><br />";
_message = _message + "- The building application must be approved by the Administration.<br /><br />";
_message = _message + "- Unauthorised bases are deleted without notice.<br /><br />";
_message = _message + "- Only one flag allowed per group.<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#d83849'>Trader respect level:</t><br />";
_message = _message + "- Respect Level 1: 5<br /><br />";
_message = _message + "- Respect Level 2: 7500<br /><br />";
_message = _message + "- Respect Level 3: 12500<br /><br />";
_message = _message + "- Respect Level 4: 17500<br /><br />";
_message = _message + "- Respect Level 5: 22500<br /><br />";
_message = _message + "- Respect Level 6: 27500<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "- Pro Basis max. vehicles!<br /><br />";
_message = _message + "- 1 player = 4 vehicles<br /><br />";
_message = _message + "- 2 player = 5 vehicles<br /><br />";
_message = _message + "- 3 player = 6 vehicles<br /><br />";
_message = _message + "- 4 player = 7 vehicles<br /><br />";
_message = _message + "- Quad bikes, boats, jetskis and karts are not counted!<br /><br />";
_message = _message + "- If the vehicle limit to be exceeded vehicles simply deleted!<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "- Pop Tabs: 50000 | Radius: 15m | 30 parts | Level 1<br /><br />";
_message = _message + "- Pop Tabs: 100000 | Radius: 30m | 50 parts | Level 2<br /><br />";
_message = _message + "- Pop Tabs: 150000 | Radius: 45m | 70 parts | Level 3<br /><br />";
_message = _message + "- Pop Tabs: 200000 | Radius: 60m | 90 parts | Level 4<br /><br />";
_message = _message + "- Pop Tabs: 250000 | Radius: 75m | 110 parts | Level 5<br /><br />";
_message = _message + "- Pop Tabs: 300000 | Radius: 90m | 130 parts | Level 6<br /><br />";
_message = _message + "- Pop Tabs: 350000 | Radius: 105m | 150 parts | Level 7<br /><br />";
_message = _message + "- Pop Tabs: 400000 | Radius: 120m | 170 parts | Level 8<br /><br />";
_message = _message + "- Pop Tabs: 450000 | Radius: 135m | 190 parts | Level 9<br /><br />";
_message = _message + "- Pop Tabs: 500000 | Radius: 150m | 210 parts | Level 10<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "- Server-sided settings Least distance of safe zones and spawn points 1km from all buildings 100m.<br /><br />";
_message = _message + "- Territory payment every 30 days!<br /><br />";
_message = _message + "- Vehicles move every 10 days!<br /><br />";
_message = _message + "Click this link to support us: <a href='http://exile.yw-rp.fr/' color='#ff9900'>Donation</a></t><br /><br />";


//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlcommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
