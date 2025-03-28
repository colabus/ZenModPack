enum ZenRPCs
{
	WRITE_NOTE = 33761990,
	SEND_WRITTEN_NOTE,
	RECEIVE_WRITTEN_NOTE,
	RECEIVE_NOTE_DATE,
	RECEIVE_GRAVE_RPC,
	ANTI_COMBAT_LOG_RPC,
	ANTI_COMBAT_LOG_MSG_RPC,
	AUTORUN,
	PLAY_SOUND,
	ZEN_SPLIT_ITEM,
	SHOVE_RPC
}

enum ZenMenus
{
	PLAYER_MESSAGE = 43761990,
	SPLIT_GUI,
	NOTE_GUI,
	POLL_GUI,
	RAID_ALARM_GUI
}

class ZenConstants
{
	static const int SHOVE_STUN_SECONDS = 5; // How many seconds to stunlock the player when shoved
}