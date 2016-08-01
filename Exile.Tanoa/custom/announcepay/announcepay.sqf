	_playerUID = getPlayerUID player;
        {
            _flag = _x;
            _buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
            if (_playerUID in _buildRights) then
            {
			_nextDueDate = _flag getVariable ["ExileTerritoryMaintenanceDue", [0, 0, 0, 0, 0]];
			_name = _flag getVariable ["ExileTerritoryName", ""];
			_dueDate = format 
			[
				"%3/%2/%1",
				_nextDueDate select 0,
				_nextDueDate select 1,
				_nextDueDate select 2
			];			
			 ["InfoTitleAndText",[format["Territorium Zahlung fällig am <t color='#DD2626'>%1</t>",_dueDate,_name]]] call ExileClient_gui_toaster_addTemplateToast;
			 ["ErrorTitleAndText",[format["Base Info 3 Tage vor Ablauf bezahlen!"]]] call ExileClient_gui_toaster_addTemplateToast;			 
            };
        }
        forEach (allMissionObjects "Exile_Construction_Flag_Static");