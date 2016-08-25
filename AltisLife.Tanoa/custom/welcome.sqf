
/***********************************************************************************************************************************************/
/***********************************************************************************************************************************************/
/*
/*                                            SCRIPTING BY:        	GR8 [GhostzGamerz.com]
/* 											  EDITED BY:		   	Salutesh
/*                                            VERSION:            	1.0 Toast Edition
/*                                            DATE:            		03 JULY 2016
/*
/***********************************************************************************************************************************************/
/***********************************************************************************************************************************************/


if(isDedicated) exitWith {};

_toastType			= "SuccessTitleAndText"; // Type of the toast where ErrorTitleAndText is red, SuccessTitleAndText is green and InfoTitleAndText is light blue.

_Delay              = 10; // Wait in seconds before the toasting starts after player is ingame.
_FadeIn             = 5; //how long one role should stay on screen. Use value from 0 to 10 where 0 is almost instant transition to next role

_IntroMusic         = true; // Welcome Intro Song During the credits (true or false)

// First example with image
_title             	= "<t color='#FFB418'>Bienvenue sur Exile PVE</t>";				
_shorttext         	= format ["Donnez de votre mieux pour survivre %1",name player];
					
// Second
_title2         	= "<t color='#A0DF3B'>BONNE CHANCE...</t>";
_shorttext2    		= "";

/***********************************************************************************************************************************************/
/***********************************************************************************************************************************************/
/*                                        /!\ DO NOT EDIT BELOW THIS LINE /!\
/***********************************************************************************************************************************************/
/***********************************************************************************************************************************************/
_ms = [];
for "_i" from 1 to 50 do
{
    _t = if (_i!=1) then { format ["_title%1",_i] } else { "_title" };
    _s = if (_i!=1) then { format ["_shorttext%1",_i] } else { "_shorttext" };
    if (!isNil _t or !isNil _s) then
    {
        _at = if (!isNil _t) then { call compile _t } else { "" };
        _as = if (!isNil _s) then { call compile _s } else { "" };
        _ms = _ms + [[_at,_as]];
    }
};
waitUntil{sleep 1; ExileClientPlayerIsSpawned}; 
waitUntil{player == player};
sleep _Delay;
if (_IntroMusic) then { playSound "intro";};
player enableSimulation true;
{
    _t = _x select 0;
    _s = _x select 1;
    _tt = _t;
    _tm = _s;
    _tmc = round (count toArray (_t+_s) / 6 / 2) + 3;
	[_toastType, [_tt, _tm]] call ExileClient_gui_toaster_addTemplateToast;
	sleep (_tmc+_FadeIn+4);
} forEach _ms; 