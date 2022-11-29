// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_MEDIA \
&kp LG(LC(Q)),     &kp LG(LS(N4)),    &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              LSHIFT,            U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
&kp LG(Z),         &kp LG(X),         &kp LG(C),         &kp LG(V),         U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, BSPC), U_LT(U_MOUSE, DEL),U_LT(U_SYM, RET),  U_LT(U_NUM, SPC),  U_LT(U_FUN, TAB),  U_NP,              U_NP


#define MIRYOKU_LAYER_MOUSE \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_0,         U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
&kp LC(LS(TAB)),   &kp LG(W),         &kp LG(L),         &kp LC(TAB),       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
