// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_CLIPBOARD_MAC
#define MIRYOKU_KEYBOARD_CORNE

// mouse support caksoylar/zmk/feat/mouse-keys-3.2
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYERS_MOUSE \
U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              &kp KC_SYSTEM_SLEEP,               &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             &kp SQT,              &u_to_U_MOUSE,     &u_to_U_SYM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP


/* #if defined (MIRYOKU_KEYBOARD_CORNE) */
/* #define XXX &none */
/**/
/* #define MIRYOKU_LAYOUTMAPPING_MOUSE( \ */
/*      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \ */
/*      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \ */
/*      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \ */
/*      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \ */
/* ) \ */
/* XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \ */
/* XXX  K10  K11  K12  K13  MK1       K15  K16  K17  K18  K19  XXX \ */
/* XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \ */
/**/
/* #define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3 */
/* #define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4 */
/* #define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8 */
/* #define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9 */
/**/
/* #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27 */
/* #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28 */
/* #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32 */
/* #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33 */
/**/
/* #define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38 */
/* #define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40 */
/**/
/* #endif */
