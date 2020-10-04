# ifndef COMMON_LANG_IDS_ENGINE_HEADER
# define COMMON_LANG_IDS_ENGINE_HEADER

# include "..\\Params.h"

# define SOFTWARE_REG_KEY			L"SOFTWARE" L"\\" COMPANY L"\\" KEY_PATH L"\\"
# define SETTINGS_KEY				L"Settings" L"\\"

# define INC_VALUE_ID(X)			SETTINGS_ID_BASE+X
# define INC_FLOAT_ID(X)			SETTINGS_ID_BASE+SETTINGS_N_VAR+X
# define INC_STRING_ID(X)			SETTINGS_ID_BASE+SETTINGS_N_VAR+SETTINGS_N_FLOAT+X

# define SETTINGS_ID_BASE			1100

# define SETTINGS_N_VAR				3
# define SETTINGS_N_FLOAT			0
# define SETTINGS_N_STRING			0

// DWord:
# define PLAY_END_SOUND				0
# define SHOW_NOTIFICATIONS			1
# define SHOW_SPLASH				2

// Float:
// String:

// String Table:
# define IDS_MAIN_WINDOW_CLASS		1051
# define IDS_MAIN_WINDOW_TITLE		1052
# define IDS_SPLASH_WINDOW_CLASS	1053
# define IDS_SPLASH_WINDOW_TITLE	1054

# define IDS_W_REG_FAIL				1003
# define IDS_W_CREATE_FAIL			1004
# define IDS_NOTIFICATION			1005
# define IDS_WARNING				1006
# define IDS_ERROR					1007
# define IDS_W_UL_FAIL				1008
# define IDS_BM_LOAD_FAIL			1009
# define IDS_THREAD_FAIL			1010
# define IDS_FILE_NOT_FOUND			1011
# define IDS_FILE_ACCESS_FAIL		1012

# define IDS_EXIT					1013
# define IDS_ABOUT					1014
# define IDS_NOTIFICATION_ID		1015
# define IDS_NOTIFICATION_TITLE		1016
# define IDS_NOTIFICATION_BEGIN		1017
# define IDS_NOTIFICATION_END		1018
# define IDS_NOTIFICATION_FINISHED	1019

# endif // COMMON_LANG_IDS_ENGINE_HEADER
