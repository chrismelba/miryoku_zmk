// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_MEDIA \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp LS,            U_NA,              U_NA,              U_NA,              U_NA,       \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         U_NA,              &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
&kp LG(Z),         &kp LG(X),         &kp LG(C),         &kp LG(V),         U_RDO,             &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI SQT,      \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_MEDIA ESC,   &lt U_NAV BSPC,    &lt U_MOUSE DEL,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN TAB,     U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,        &kp NUM_0,          U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
&kp LC(TAB),       &kp LG(W),         &kp LG(L),         &kp LC(LS(TAB)),   U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
