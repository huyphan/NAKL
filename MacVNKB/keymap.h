//
//  keymap.h
//  MacVNKB
//
//  Created by Huy Phan on 6/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef MacVNKB_KEYMAP_H 
#define MacVNKB_KEYMAP_H

#define XK_VoidSymbol		0xFF	/* void symbol */

/*
 * TTY Functions, cleverly chosen to map to ascii, for convenience of
 * programming, but could have been arbitrary (at the cost of lookup
 * tables in client code.
 */

#define XK_BackSpace		0x08	/* back space, back char */
#define XK_Tab			0x09
#define XK_Linefeed		0x0A	/* Linefeed, LF */
#define XK_Clear		0x0B
#define XK_Return		0x0D	/* Return, enter */
#define XK_Pause		0x13	/* Pause, hold */
#define XK_Scroll_Lock		0x14
#define XK_Sys_Req		0x15
#define XK_Escape		0x1B
#define XK_Delete		0xFF	/* Delete, rubout */

/* Cursor control & motion */

#define XK_Home			0x50
#define XK_Left			0x51	/* Move left, left arrow */
#define XK_Up			0x52	/* Move up, up arrow */
#define XK_Right		0x53	/* Move right, right arrow */
#define XK_Down			0x54	/* Move down, down arrow */
#define XK_Prior		0x55	/* Prior, previous */
#define XK_Page_Up		0x55
#define XK_Next			0x56	/* Next */
#define XK_Page_Down		0x56
#define XK_End			0x57	/* EOL */
#define XK_Begin		0x58	/* BOL */

/* Special Windows keyboard keys */

#define XK_Win_L		0x5B	/* Left-hand Windows */
#define XK_Win_R		0x5C	/* Right-hand Windows */
#define XK_App			0x5D	/* Menu key */

/* Misc Functions */

#define XK_Select		0x60	/* Select, mark */
#define XK_Print		0x61
#define XK_Execute		0x62	/* Execute, run, do */
#define XK_Insert		0x63	/* Insert, insert here */
#define XK_Undo			0x65	/* Undo, oops */
#define XK_Redo			0x66	/* redo, again */
#define XK_Menu			0x67
#define XK_Find			0x68	/* Find, search */
#define XK_Cancel		0x69	/* Cancel, stop, abort, exit */
#define XK_Help			0x6A	/* Help, ? */
#define XK_Break		0x6B
#define XK_Mode_switch		0x7E	/* Character set switch */
#define XK_script_switch        0x7E  /* Alias for mode_switch */
#define XK_Num_Lock		0x7F

/*
 * Auxilliary Functions; note the duplicate definitions for left and right
 * function keys;  Sun keyboards and a few other manufactures have such
 * function key groups on the left and/or right sides of the keyboard.
 * We've not found a keyboard with more than 35 function keys total.
 */

#define XK_F1			0xBE
#define XK_F2			0xBF
#define XK_F3			0xC0
#define XK_F4			0xC1
#define XK_F5			0xC2
#define XK_F6			0xC3
#define XK_F7			0xC4
#define XK_F8			0xC5
#define XK_F9			0xC6
#define XK_F10			0xC7
#define XK_F11			0xC8
#define XK_L1			0xC8
#define XK_F12			0xC9
#define XK_L2			0xC9
#define XK_F13			0xCA
#define XK_L3			0xCA
#define XK_F14			0xCB
#define XK_L4			0xCB
#define XK_F15			0xCC
#define XK_L5			0xCC
#define XK_F16			0xCD
#define XK_L6			0xCD
#define XK_F17			0xCE
#define XK_L7			0xCE
#define XK_F18			0xCF
#define XK_L8			0xCF
#define XK_F19			0xD0
#define XK_L9			0xD0
#define XK_F20			0xD1
#define XK_L10			0xD1
#define XK_F21			0xD2
#define XK_R1			0xD2
#define XK_F22			0xD3
#define XK_R2			0xD3
#define XK_F23			0xD4
#define XK_R3			0xD4
#define XK_F24			0xD5
#define XK_R4			0xD5
#define XK_F25			0xD6
#define XK_R5			0xD6
#define XK_F26			0xD7
#define XK_R6			0xD7
#define XK_F27			0xD8
#define XK_R7			0xD8
#define XK_F28			0xD9
#define XK_R8			0xD9
#define XK_F29			0xDA
#define XK_R9			0xDA
#define XK_F30			0xDB
#define XK_R10			0xDB
#define XK_F31			0xDC
#define XK_R11			0xDC
#define XK_F32			0xDD
#define XK_R12			0xDD
#define XK_F33			0xDE
#define XK_R13			0xDE
#define XK_F34			0xDF
#define XK_R14			0xDF
#define XK_F35			0xE0
#define XK_R15			0xE0

/* Modifiers */

#define XK_Shift_L		0xE1	/* Left shift */
#define XK_Shift_R		0xE2	/* Right shift */
#define XK_Control_L		0xE3	/* Left control */
#define XK_Control_R		0xE4	/* Right control */
#define XK_Caps_Lock		0xE5	/* Caps lock */
#define XK_Shift_Lock		0xE6	/* Shift lock */

#define XK_Meta_L		0xE7	/* Left meta */
#define XK_Meta_R		0xE8	/* Right meta */
#define XK_Alt_L		0xE9	/* Left alt */
#define XK_Alt_R		0xEA	/* Right alt */
#define XK_Super_L		0xEB	/* Left super */
#define XK_Super_R		0xEC	/* Right super */
#define XK_Hyper_L		0xED	/* Left hyper */
#define XK_Hyper_R		0xEE	/* Right hyper */


#endif
