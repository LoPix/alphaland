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
_message = _message + "<t align='center' size='2' shadow='0'>Willkommen bei <a href='http://a3-epoch.bikersworld2.de/' color='#d83849'>Exile PVE</a>, Arma 3 Tanoa Exile Custom Server!</t><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#ff9900'>Teamspeak³ IP</t>: schreibe im Chat !ts<br />";
_message = _message + "Klick auf diesen link, um zu unserer Website zu kommen: <a href= 'http://a3-epoch.bikersworld2.de/server-stats/' color='#d83849'>Server Stats</a><br />";
_message = _message + "Klick auf diesen link, um zu unserer Website zu kommen: <a href= 'http://a3-epoch.bikersworld2.de/' color='#d83849'>Webseite</a><br />";
_message = _message + "Klick auf diesen link, um einen bug zu melden : <a href= 'http://a3-epoch.bikersworld2.de/forums/forum/exile-bugs/' color='#d83849'>Melde einen bug</a> Das hilft uns sehr!<br />";
_message = _message + "Klick auf diesen link, für die Baseanmeldung: <a href= 'http://a3-epoch.bikersworld2.de/forums/forum/base-anmeldung-exile/' color='#d83849'>Baseanmeldung</a> Ohne gehts nicht!<br />";
_message = _message + "Klick auf diesen link, um zu unserer Server Features zu kommen: <a href= 'http://a3-epoch.bikersworld2.de/server-regeln-exile/features/' color='#d83849'>Server Features</a></t><br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#ff9900'>Info:</t><br />";
_message = _message + "Diese Mod ist eine Arma 3 Modifikation in der Alpha-Phase.<br />";
_message = _message + "Es kann zu unvorhergesehenen Spielsituationen, Bugs und auch Serverabstürzen kommen.<br />";
_message = _message + "In diesen Zusammenhang erstatten wir keine Fahrzeuge, Loot, Poptabs oder Score.<br />";
_message = _message + "Für mehr Informationen über Exile, besuchen Sie bitte das Exile Mod <a href='http://www.exilemod.com/' color='#d83849'>Forum.</a><br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#ff9900'>Keybinds:</t><br />";
_message = _message + "<t color='#ff9900'>6</t> : XM8<br />";
_message = _message + "<t color='#ff9900'>5</t> : Ohrenstöpsel<br />";
_message = _message + "<t color='#ff9900'>4</t> : Halftern und Unhalftern Waffe<br />";
_message = _message + "<t color='#ff9900'>0</t> : auto. rennen<br />";
_message = _message + "Sperren und Entsperren von Fahrzeugen über Aktion 1<br />";
_message = _message + "3D Marker über Aktion 2<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#d83849'>Regeln:</t><br />";
_message = _message + "- Dies ist ein PVE Server. Hier wird PVP in welcher Form auch immer nicht geduldet.<br /><br />";
_message = _message + "- Den Anweisungen der Admins ist Folge zu leisten.<br /><br />";
_message = _message + "- Admin Support gibt es im Teamspeak, Forum und ggf. Ingame. Es gibt keinen Support für Fahrzeuge, verschwundenes Equip, teleportieren, heilen, oder reparieren.<br /><br />";
_message = _message + "- Das Trollen anderer Spieler, Spam, Diskriminierungen, oder Beleidigungen haben auf diesem Server nichts verloren und haben entsprechende Konsequenzen zur Folge.<br /><br />";
_message = _message + "- Hacks, Cheats und Bugusing werden mit Ban geahndet.<br /><br />";
_message = _message + "- Das betreten nicht eigener Basen ist ohne Einladung eines Besitzers verboten.<br /><br />";
_message = _message + "- Das entwenden von Fahrzeugen und Helikopter aus dem Bereich (50 m) einer Base ist verboten.<br /><br />";
_message = _message + "- Das absichtliche zerstören von Fahrzeugen ist verboten!<br /><br />";
_message = _message + "- Das stehlen von Items aus Basen ist verboten.<br /><br />";
_message = _message + "- Missionen müssen im Side Chat und auf der Map ab 1000m Entferung angemeldet werden.<br /><br />";
_message = _message + "- Die Markierungen sind nach der Mission wieder zu entfernen.<br /><br />";
_message = _message + "- Die Leichen anderer Spieler dürfen nicht gelootet werden, außer es entspricht dem Wunsch des getöteten Spielers.<br /><br />";
_message = _message + "- Ein gepflegter Umgangston ist Pflicht, Beleidigungen oder rassistische Äußerungen werden mit Ban bestraft.<br /><br />";
_message = _message + "- Der Bauwunsch ist im Forum unter Base Anmeldung mit Angabe der Bewohner und der Koordinaten zu posten.<br /><br />";
_message = _message + "- Keine Gebäude einbauen!<br /><br />";
_message = _message + "- Der Bauwunsch muss von der Administration genehmigt werden.<br /><br />";
_message = _message + "- Nicht genehmigte Basen werden ohne Ankündigung gelöscht.<br /><br />";
_message = _message + "- Pro Gruppe ist nur eine Flage erlaubt das gilt auch für Einzelgänger.<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#d83849'>Händler Respekt Level:</t><br />";
_message = _message + "- Respekt Level 1: 5<br /><br />";
_message = _message + "- Respekt Level 2: 7500<br /><br />";
_message = _message + "- Respekt Level 3: 12500<br /><br />";
_message = _message + "- Respekt Level 4: 17500<br /><br />";
_message = _message + "- Respekt Level 5: 22500<br /><br />";
_message = _message + "- Respekt Level 6: 27500<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "- Pro Basis max. Fahrzeuge!<br /><br />";
_message = _message + "- 1 Spieler = 4 Fahrzeuge<br /><br />";
_message = _message + "- 2 Spieler = 5 Fahrzeuge<br /><br />";
_message = _message + "- 3 Spieler = 6 Fahrzeuge<br /><br />";
_message = _message + "- 4 Spieler = 7 Fahrzeuge<br /><br />";
_message = _message + "- Quadbike, Boote, Jetskis und Karts werden nicht mitgezählt!<br /><br />";
_message = _message + "- Wird das Fahrzeuglimit überschritten werden Fahrzeuge einfach gelöscht!<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "- Pop Tabs: 50000 | Radius: 15m | 30 Bauteile | Level 1<br /><br />";
_message = _message + "- Pop Tabs: 100000 | Radius: 30m | 50 Bauteile | Level 2<br /><br />";
_message = _message + "- Pop Tabs: 150000 | Radius: 45m | 70 Bauteile | Level 3<br /><br />";
_message = _message + "- Pop Tabs: 200000 | Radius: 60m | 90 Bauteile | Level 4<br /><br />";
_message = _message + "- Pop Tabs: 250000 | Radius: 75m | 110 Bauteile | Level 5<br /><br />";
_message = _message + "- Pop Tabs: 300000 | Radius: 90m | 130 Bauteile | Level 6<br /><br />";
_message = _message + "- Pop Tabs: 350000 | Radius: 105m | 150 Bauteile | Level 7<br /><br />";
_message = _message + "- Pop Tabs: 400000 | Radius: 120m | 170 Bauteile | Level 8<br /><br />";
_message = _message + "- Pop Tabs: 450000 | Radius: 135m | 190 Bauteile | Level 9<br /><br />";
_message = _message + "- Pop Tabs: 500000 | Radius: 150m | 210 Bauteile | Level 10<br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "- Serverseitige einstellungen mindestabstand von Safe Zonen und Spawnpunkten 1km<br /><br />";
_message = _message + "- Keine Gebäude einbauen und von sämtlichen Gebäuden 100m abstand halten.<br /><br />";
_message = _message + "- Territorium Miete bezahlen alle 30 Tage!<br /><br />";
_message = _message + "- Fahrzeuge bewegen alle 10 Tage!<br /><br />";
_message = _message + "- Wer die Miete nicht gezahlt oder seine Fahrzeuge nicht bewegt muss sich damit abfinden das die Base und auch alle Fahrzeuge automatisch aus der Datenbank gelöscht werden.<br /><br />";
_message = _message + "Klick auf diesen link, um uns zu unterstützen: <a href='http://a3-epoch.bikersworld2.de/' color='#ff9900'>Spenden</a></t><br /><br />";


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
