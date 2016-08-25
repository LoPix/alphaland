params["_display","_slide","_idc"];

_pW = 0.025;
_pH = 0.04;
_leftCol = 0;
_leftColW = 12.8;
_rightCol = _leftCol + _leftColW + 2;
_rightColW = _leftColW + 3;
_margin = 0.2;

_slideClass = "ExAd_Rules";

[_display,_slide,([_slideClass,"backButton"] call ExAd_fnc_getNextIDC),[27 * _pW, 17 * _pH, 6 * _pW, 1 * _pH],'["extraApps", 1] call ExileClient_gui_xm8_slide;',STR_ExAd_VG_APP_BTN_BACK] call ExAd_fnc_createButton;

_newParent = [_display,_slide,([_slideClass,"ctrlGrp"] call ExAd_fnc_getNextIDC),[_leftCol * _pW, 1 * _pH, (_leftColW + _rightCol + 6) * _pW, 16 * _pH]] call ExAd_fnc_createCtrlGrp;
[_display,_newParent,([_slideClass,"strTxt"] call ExAd_fnc_getNextIDC),[_leftCol * _pW, 1.5 * _pH, (_leftColW + _rightCol + 5) * _pW, 15 * _pH],"","PuristaMedium",1,"#ffffff","right",1] call ExAd_fnc_createStructuredText;

true