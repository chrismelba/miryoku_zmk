// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_MEDIA \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &u_rgb_tog,        &u_rgb_eff,        &u_rgb_hui,        &u_rgb_sai,        &u_rgb_bri,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI SQT,      \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_MEDIA ESC,   &lt U_NAV BSPC,    &lt U_MOUSE DEL,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN TAB,     U_NP,              U_NP
