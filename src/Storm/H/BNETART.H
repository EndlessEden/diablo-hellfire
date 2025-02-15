/****************************************************************************
*
*  bnetart.h
*
*  This file should be included by an application that wants to provide
*  battle.net-specific artwork in its art callback.
*
***/

enum _BATTLENET_ART {
	SNET_ART_BATTLE_BTNS = 0x80000000,
    SNET_ART_BATTLE_CHAT_BKG,
	SNET_ART_BATTLE_GREENLAG,
	SNET_ART_BATTLE_YELLOWLAG,
	SNET_ART_BATTLE_REDLAG,
    SNET_ART_BATTLE_CONNECT_BKG,
    SNET_ART_BATTLE_SELECT_CHNL_BKG,
    SNET_ART_BATTLE_LOGIN_BKG,

    SNET_ART_BATTLE_BADCONNECTION, 
    SNET_ART_BATTLE_WELCOME_AD,

    SNET_ART_BATTLE_LRG_EDIT_POPUP_BKG,
};


enum _BATTLENET_DATA {
	SNET_DATA_BATTLE_LOGODELAY = 0x80000000,	// (DWORD) delay between frames
};

