// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_CLIPBOARD_MAC

// mouse support caksoylar/zmk/feat/mouse-keys-3.2
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

// TODO: test if this works, if not  then change these in
// miryoku_kludge_mousekeyspr.h
//
// Both mouse movement and scrolling have independently configurable
// acceleration profiles with three parameters: delay before movement, time to
// max speed and the acceleration exponent. The exponent is usually set to 0 for
// constant speed, 1 for uniform acceleration or 2 for uniform jerk.
#define U_MOUSE_MOVE_MAX 2500
#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 1500
#define U_MOUSE_MOVE_DELAY 0
