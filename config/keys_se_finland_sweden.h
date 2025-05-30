/*
 * Localized Keys for Sami Extended Finland-Sweden
 *
 * This file was generated from data with the following license:
 *
 * UNICODE, INC. LICENSE AGREEMENT - DATA FILES AND SOFTWARE
 *
 * See Terms of Use for definitions of Unicode Inc.'s
 * Data Files and Software.
 *
 * NOTICE TO USER: Carefully read the following legal agreement.
 * BY DOWNLOADING, INSTALLING, COPYING OR OTHERWISE USING UNICODE INC.'S
 * DATA FILES ("DATA FILES"), AND/OR SOFTWARE ("SOFTWARE"),
 * YOU UNEQUIVOCALLY ACCEPT, AND AGREE TO BE BOUND BY, ALL OF THE
 * TERMS AND CONDITIONS OF THIS AGREEMENT.
 * IF YOU DO NOT AGREE, DO NOT DOWNLOAD, INSTALL, COPY, DISTRIBUTE OR USE
 * THE DATA FILES OR SOFTWARE.
 *
 * COPYRIGHT AND PERMISSION NOTICE
 *
 * Copyright © 1991-2022 Unicode, Inc. All rights reserved.
 * Distributed under the Terms of Use in https://www.unicode.org/copyright.html.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of the Unicode data files and any associated documentation
 * (the "Data Files") or Unicode software and any associated documentation
 * (the "Software") to deal in the Data Files or Software
 * without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, and/or sell copies of
 * the Data Files or Software, and to permit persons to whom the Data Files
 * or Software are furnished to do so, provided that either
 * (a) this copyright and permission notice appear with all copies
 * of the Data Files or Software, or
 * (b) this copyright and permission notice appear in associated
 * Documentation.
 *
 * THE DATA FILES AND SOFTWARE ARE PROVIDED "AS IS", WITHOUT WARRANTY OF
 * ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT OF THIRD PARTY RIGHTS.
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS INCLUDED IN THIS
 * NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT OR CONSEQUENTIAL
 * DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THE DATA FILES OR SOFTWARE.
 *
 * Except as contained in this notice, the name of a copyright holder
 * shall not be used in advertising or otherwise to promote the sale,
 * use or other dealings in these Data Files or Software without prior
 * written authorization of the copyright holder.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define SE_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ! */
#define SE_EXCLAMATION                                                         \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))
#define SE_EXCL (SE_EXCLAMATION)

/* " */
#define SE_DOUBLE_QUOTES                                                       \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define SE_DQT (SE_DOUBLE_QUOTES)

/* # */
#define SE_HASH                                                                \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define SE_POUND (SE_HASH)

/* $ */
#define SE_DOLLAR                                                              \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define SE_DLLR (SE_DOLLAR)

/* % */
#define SE_PERCENT                                                             \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define SE_PRCNT (SE_PERCENT)

/* & */
#define SE_AMPERSAND                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))
#define SE_AMPS (SE_AMPERSAND)

/* ' */
#define SE_SINGLE_QUOTE                                                        \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))
#define SE_SQT (SE_SINGLE_QUOTE)
#define SE_APOSTROPHE (SE_SINGLE_QUOTE)
#define SE_APOS (SE_SINGLE_QUOTE)

/* ( */
#define SE_LEFT_PARENTHESIS                                                    \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define SE_LPAR (SE_LEFT_PARENTHESIS)

/* ) */
#define SE_RIGHT_PARENTHESIS                                                   \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define SE_RPAR (SE_RIGHT_PARENTHESIS)

/* * */
#define SE_ASTERISK                                                            \
  (RA(LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                          \
                       HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))))
#define SE_ASTRK (SE_ASTERISK)
#define SE_STAR (SE_ASTERISK)

/* + */
#define SE_PLUS                                                                \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))

/* , */
#define SE_COMMA                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))

/* - */
#define SE_MINUS                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))

/* . */
#define SE_PERIOD                                                              \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))
#define SE_DOT (SE_PERIOD)

/* / */
#define SE_SLASH                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define SE_FSLH (SE_SLASH)

/* 0 */
#define SE_N0                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* 1 */
#define SE_N1                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))

/* 2 */
#define SE_N2 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* 3 */
#define SE_N3 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))

/* 4 */
#define SE_N4                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))

/* 5 */
#define SE_N5                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))

/* 6 */
#define SE_N6 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* 7 */
#define SE_N7                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* 8 */
#define SE_N8                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))

/* 9 */
#define SE_N9                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* : */
#define SE_COLON                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* ; */
#define SE_SEMICOLON                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define SE_SEMI (SE_SEMICOLON)

/* < */
#define SE_LESS_THAN                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
// #define SE_LESS_THAN (RA(ZMK_HID_USAGE(HID_USAGE_KEY,
// HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define SE_LT (SE_LESS_THAN)

/* = */
#define SE_EQUAL                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))

/* > */
#define SE_GREATER_THAN                                                        \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))
#define SE_GT (SE_GREATER_THAN)

/* ? */
#define SE_QUESTION                                                            \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define SE_QMARK (SE_QUESTION)

/* @ */
#define SE_AT_SIGN                                                             \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define SE_AT (SE_AT_SIGN)

/* [ */
#define SE_LEFT_BRACKET                                                        \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define SE_LBKT (SE_LEFT_BRACKET)

/* \ */
#define SE_BACKSLASH                                                           \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define SE_BSLH (SE_BACKSLASH)

/* ] */
#define SE_RIGHT_BRACKET                                                       \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define SE_RBKT (SE_RIGHT_BRACKET)

/* ^ */
#define SE_CARET                                                               \
  (RA(LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                          \
                       HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))))

/* _ */
#define SE_UNDERSCORE                                                          \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))
#define SE_UNDER (SE_UNDERSCORE)

/* ` */
#define SE_GRAVE                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* a */
#define SE_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* b */
#define SE_B (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* c */
#define SE_C (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* d */
#define SE_D (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* e */
#define SE_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* f */
#define SE_F (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* g */
#define SE_G (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* h */
#define SE_H (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* i */
#define SE_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* j */
#define SE_J (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* k */
#define SE_K (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* l */
#define SE_L (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* m */
#define SE_M (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* n */
#define SE_N (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* o */
#define SE_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* p */
#define SE_P (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* q */
#define SE_Q (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q)))

/* r */
#define SE_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* s */
#define SE_S (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* t */
#define SE_T (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* u */
#define SE_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* v */
#define SE_V (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* w */
#define SE_W (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W)))

/* x */
#define SE_X (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X)))

/* y */
#define SE_Y (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y)))

/* z */
#define SE_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* { */
#define SE_LEFT_BRACE                                                          \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define SE_LBRC (SE_LEFT_BRACE)

/* | */
#define SE_PIPE                                                                \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))

/* } */
#define SE_RIGHT_BRACE                                                         \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))
#define SE_RBRC (SE_RIGHT_BRACE)

/* ~ */
#define SE_TILDE                                                               \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

/* £ */
#define SE_POUND_SIGN                                                          \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))

/* ¤ */
#define SE_CURRENCY_SIGN                                                       \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define SE_CURREN (SE_CURRENCY_SIGN)

/* § */
#define SE_SECTION                                                             \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))
#define SE_SECT (SE_SECTION)

/* ¨ */
#define SE_UMLAUT                                                              \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

/* ´ */
#define SE_ACUTE                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))

/* µ */
#define SE_MU (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M)))
#define SE_MICRO (SE_MU)

/* ½ */
#define SE_ONE_HALF                                                            \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))
#define SE_FRAC_1_2 (SE_ONE_HALF)

/* á */
#define SE_A_ACUTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* â */
#define SE_A_CIRCUMFLEX                                                        \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A)))
#define SE_A_CIRC (SE_A_CIRCUMFLEX)

/* ä */
#define SE_A_UMLAUT                                                            \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* å */
#define SE_A_RING                                                              \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))

/* æ */
#define SE_AE                                                                  \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))

/* ï */
#define SE_I_UMLAUT (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I)))

/* õ */
#define SE_O_TILDE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O)))

/* ö */
#define SE_O_UMLAUT                                                            \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* ø */
#define SE_O_SLASH                                                             \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))

/* č */
#define SE_C_CARON (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* đ */
#define SE_D_STROKE                                                            \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))

/* ŋ */
#define SE_ENG                                                                 \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))

/* š */
#define SE_S_CARON (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* ŧ */
#define SE_T_STROKE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* ž */
#define SE_Z_CARON                                                             \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))

/* ǥ */
#define SE_G_STROKE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H)))

/* ǧ */
#define SE_G_CARON (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G)))

/* ǩ */
#define SE_K_CARON (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K)))

/* ǯ */
#define SE_EZH_CARON                                                           \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))

/* ʒ */
#define SE_EZH (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z)))

/* ˇ */
#define SE_CARON                                                               \
  (RA(LS(ZMK_HID_USAGE(                                                        \
      HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))))

/* € */
#define SE_EURO                                                                \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
