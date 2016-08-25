/*
player radar script made by Shix http://www.exilemod.com/profile/4566-shix/
This script allows to scan their are for any near by players
Made for XM8 Apps http://www.exilemod.com/topic/9040-updated-xm8-apps/
*/

///////////////////////////
//CONFIG
/////////////////////////
_cooldownTime = 900; //cool down time on script in seconds (15 * 60 = 900) AKA 15 MINS

_onlyScanforXM8Online = false; //only scan for people who have the 8G network online true =  yes false = no

_scanDistance = 1500; //area sround player to scan in meters

///////////////////////////
//CONFIG END
/////////////////////////
if(isNil "LastUsedCheck")then
{
  LastUsedCheck = 0;
};

if((LastUsedCheck == 0) || (diag_tickTime - LastUsedCheck > _cooldownTime)) then
{
  if ("ItemRadio" in (assigneditems player)) then
  {  

    player unassignItem "itemRadio";
    player removeItem "itemRadio";
    
	["InfoTitleAndText",["Commencing scan..."]] call ExileClient_gui_toaster_addTemplateToast;	
  
    uiSleep 5;

	["InfoTitleAndText",["Triangulating active XM8 positions..."]] call ExileClient_gui_toaster_addTemplateToast;
   
    uiSleep 5;

	["InfoTitleAndText",["Calculating data and processing..."]] call ExileClient_gui_toaster_addTemplateToast;
    
    uiSleep 5;

    _display = (findDisplay 24015) closeDisplay 0;

    _playersNearby = 0;
    _playerPos = getPos player;
    {
        _playerSelected = _x;
        _playerSelectedPos = getPos _playerSelected;
        if(_onlyScanforXM8Online) then
        {
            if ((_playerSelected getVariable ["ExileXM8IsOnline", false]) isEqualTo true) then
            {
                if(_playerPos distance _playerSelectedPos <= _scanDistance) then
                {
                    if (!(_playerSelected in units group player) || (!alive _playerSelected)) then
                    {  
                        _playersNearby = _playersNearby + 1;
                    }; 
                };
            };
        }
        else
        {
            if (_playerPos distance _playerSelectedPos <= _scanDistance) then
            {
              if (!(_playerSelected in units group player) || (!alive _playerSelected)) then
              {  
                _playersNearby = _playersNearby + 1;
              };  
            };
        };
    } forEach allPlayers - [player];

    LastUsedCheck = diag_tickTime;
    ['SuccessTitleAndText',[format['Found %1 active signals in your area ',_playersNearby]]] call ExileClient_gui_toaster_addTemplateToast;
    uiSleep 3;

  }
  else
  {
    ["ErrorTitleAndText", ["Whoops", "You require a Radio"]] call ExileClient_gui_toaster_addTemplateToast;
  }; 

}
else
{
  ["ErrorTitleAndText", ["Whoops", "Your XM8 Scan function is cooling down"]] call ExileClient_gui_toaster_addTemplateToast;
};