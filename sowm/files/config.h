#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const char* term[]		= 	{"st",             			0};
const char* firefox[]	=	{"firefox",        			0};
const char* nnn[]		=	{"st", "-e", "nnn",			0};
const char* rootnnn[]	=	{"st", "-e", "ssu", "nnn",	0};
const char* cmus[]		=	{"st", "-e", "cmus",		0};
const char* scrot[]		=	{"scrot",          			0};

const char* voldown[] = {"amixer", "sset", "PCM", "2db-",	0};
const char* volup[]   = {"amixer", "sset", "PCM", "2db+",	0};
const char* volmute[] = {"amixer", "sset", "PCM", "toggle",	0};

static struct key keys[] = {
    {MOD,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD,		XK_p,      run, {.com = scrot}},
    {MOD,		XK_Return, run, {.com = term}},
    {MOD,		XK_b,      run, {.com = firefox}},
    {MOD,		XK_n,      run, {.com = nnn}},
    {MOD|ShiftMask,	XK_n,      run, {.com = rootnnn}},
    {MOD,		XK_m,      run, {.com = cmus}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
