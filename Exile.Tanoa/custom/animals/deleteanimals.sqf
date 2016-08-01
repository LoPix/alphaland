waitUntil {
	{
		if(agent _x isKindOf "Salema_F" || agent _x isKindOf "Ornate_random_F" || agent _x isKindOf "Mackerel_F" || agent _x isKindOf "Tuna_F" || agent _x isKindOf "Mullet_F" || agent _x isKindOf "CatShark_F") then {deleteVehicle agent _x};
	} forEach agents;
	sleep 10;
	false;
};