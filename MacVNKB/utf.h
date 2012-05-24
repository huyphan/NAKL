/*----------------------------------------------------------------------------*/
/*  utf.h                                                                     */
/*----------------------------------------------------------------------------*/
/*  copyright         : (C) 2002 by Dao Hai Lam                               */
/*                      VISC Software & Security Consultant Company           */
/*                      Hall 3, Quang Trung Software City                     */
/*                      Tan Chanh Hiep Ward, District 12,                     */
/*                      Ho Chi Minh city, VIETNAM                             */
/*  website           : http://www.visc-network.com                           */
/*  email             : lam@visc-network.com                                  */
/*  last modify       : Thu, 18 Apr 2002 22:00:33 +0700                       */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*   This program is free software; you can redistribute it and/or modify     */
/*   it under the terms of the GNU General Public License as published by     */
/*   the Free Software Foundation; either version 2 of the License, or        */
/*   (at your option) any later version.                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#ifndef __VK_UTF_H
#define __VK_UTF_H

#define	utf_A		0x0041
#define	utf_A1		0x00C1
#define	utf_A2		0x00C0
#define	utf_A3		0x1EA2
#define	utf_A4		0x00C3
#define	utf_A5		0x1EA0
#define	utf_a		0x0061
#define	utf_a1		0x00E1
#define	utf_a2		0x00E0
#define	utf_a3		0x1EA3
#define	utf_a4		0x00E3
#define	utf_a5		0x1EA1
#define	utf_A6		0x00C2
#define	utf_A61		0x1EA4
#define	utf_A62		0x1EA6
#define	utf_A63		0x1EA8
#define	utf_A64		0x1EAA
#define	utf_A65		0x1EAC
#define	utf_a6		0x00E2
#define	utf_a61		0x1EA5
#define	utf_a62		0x1EA7
#define	utf_a63		0x1EA9
#define	utf_a64		0x1EAB
#define	utf_a65		0x1EAD
#define	utf_A8		0x0102
#define	utf_A81		0x1EAE
#define	utf_A82		0x1EB0
#define	utf_A83		0x1EB2
#define	utf_A84		0x1EB4
#define	utf_A85		0x1EB6
#define	utf_a8		0x0103
#define	utf_a81		0x1EAF
#define	utf_a82		0x1EB1
#define	utf_a83		0x1EB3
#define	utf_a84		0x1EB5
#define	utf_a85		0x1EB7
#define	utf_E		0x0045
#define	utf_E1		0x00C9
#define	utf_E2		0x00C8
#define	utf_E3		0x1EBA
#define	utf_E4		0x1EBC
#define	utf_E5		0x1EB8
#define	utf_e		0x0065
#define	utf_e1		0x00E9
#define	utf_e2		0x00E8
#define	utf_e3		0x1EBB
#define	utf_e4		0x1EBD
#define	utf_e5		0x1EB9
#define	utf_E6		0x00CA
#define	utf_E61		0x1EBE
#define	utf_E62		0x1EC0
#define	utf_E63		0x1EC2
#define	utf_E64		0x1EC4
#define	utf_E65		0x1EC6
#define	utf_e6		0x00EA
#define	utf_e61		0x1EBF
#define	utf_e62		0x1EC1
#define	utf_e63		0x1EC3
#define	utf_e64		0x1EC5
#define	utf_e65		0x1EC7
#define	utf_O		0x004F
#define	utf_O1		0x00D3
#define	utf_O2		0x00D2
#define	utf_O3		0x1ECE
#define	utf_O4		0x00D5
#define	utf_O5		0x1ECC
#define	utf_o		0x006F
#define	utf_o1		0x00F3
#define	utf_o2		0x00F2
#define	utf_o3		0x1ECF
#define	utf_o4		0x00F5
#define	utf_o5		0x1ECD
#define	utf_O6		0x00D4
#define	utf_O61		0x1ED0
#define	utf_O62		0x1ED2
#define	utf_O63		0x1ED4
#define	utf_O64		0x1ED6
#define	utf_O65		0x1ED8
#define	utf_o6		0x00F4
#define	utf_o61		0x1ED1
#define	utf_o62		0x1ED3
#define	utf_o63		0x1ED5
#define	utf_o64		0x1ED7
#define	utf_o65		0x1ED9
#define	utf_O7		0x01A0
#define	utf_O71		0x1EDA
#define	utf_O72		0x1EDC
#define	utf_O73		0x1EDE
#define	utf_O74		0x1EE0
#define	utf_O75		0x1EE2
#define	utf_o7		0x01A1
#define	utf_o71		0x1EDB
#define	utf_o72		0x1EDD
#define	utf_o73		0x1EDF
#define	utf_o74		0x1EE1
#define	utf_o75		0x1EE3
#define	utf_U		0x0055
#define	utf_U1		0x00DA
#define	utf_U2		0x00D9
#define	utf_U3		0x1EE6
#define	utf_U4		0x0168
#define	utf_U5		0x1EE4
#define	utf_u		0x0075
#define	utf_u1		0x00FA
#define	utf_u2		0x00F9
#define	utf_u3		0x1EE7
#define	utf_u4		0x0169
#define	utf_u5		0x1EE5
#define	utf_U7		0x01AF
#define	utf_U71		0x1EE8
#define	utf_U72		0x1EEA
#define	utf_U73		0x1EEC
#define	utf_U74		0x1EEE
#define	utf_U75		0x1EF0
#define	utf_u7		0x01B0
#define	utf_u71		0x1EE9
#define	utf_u72		0x1EEB
#define	utf_u73		0x1EED
#define	utf_u74		0x1EEF
#define	utf_u75		0x1EF1
#define	utf_Y		0x0059
#define	utf_Y1		0x00DD
#define	utf_Y2		0x1EF2
#define	utf_Y3		0x1EF6
#define	utf_Y4		0x1EF8
#define	utf_Y5		0x1EF4
#define	utf_y		0x0079
#define	utf_y1		0x00FD
#define	utf_y2		0x1EF3
#define	utf_y3		0x1EF7
#define	utf_y4		0x1EF9
#define	utf_y5		0x1EF5
#define	utf_I		0x0049
#define	utf_I1		0x00CD
#define	utf_I2		0x00CC
#define	utf_I3		0x1EC8
#define	utf_I4		0x0128
#define	utf_I5		0x1ECA
#define	utf_i		0x0069
#define	utf_i1		0x00ED
#define	utf_i2		0x00EC
#define	utf_i3		0x1EC9
#define	utf_i4		0x0129
#define	utf_i5		0x1ECB
#define	utf_D		0x0044
#define	utf_D9		0x0110
#define	utf_d		0x0064
#define	utf_d9		0x0111
#define	utf_vnd		0x20AB
/*----------------------------------------------------------------------------*/
#define	utf_W		0x0057
#define	utf_w		0x0077
#define	utf_S		0x0053
#define	utf_s		0x0073
#define	utf_F		0x0046
#define	utf_f		0x0066
#define	utf_R		0x0052
#define	utf_r		0x0072
#define	utf_X		0x0058
#define	utf_x		0x0078
#define	utf_J		0x004A
#define	utf_j		0x006A
/*----------------------------------------------------------------------------*/
typedef struct {
	ushort c;
	ushort r1;
	ushort r2;
} vietcode_t;
/*----------------------------------------------------------------------------*/
typedef struct {
	long level;
	ushort modifier;
	vietcode_t *code;
} modifier_t;
/*----------------------------------------------------------------------------*/
#include "telex-standard.h"
/*----------------------------------------------------------------------------*/
vietcode_t code_z[] =
{
	{ utf_A1,	utf_A },				//	A' => A
	{ utf_A2,	utf_A },				//	A` => A
	{ utf_A3,	utf_A },				//	A? => A
	{ utf_A4,	utf_A },				//	A~ => A
	{ utf_A5,	utf_A },				//	A. => A
    
	{ utf_A61,	utf_A6 },				//	A^' => A^
	{ utf_A62,	utf_A6 },				//	A^` => A^
	{ utf_A63,	utf_A6 },				//	A^? => A^
	{ utf_A64,	utf_A6 },				//	A^~ => A^
	{ utf_A65,	utf_A6 },				//	A^. => A^
    
	{ utf_A81,	utf_A8 },				//	A(' => A(
	{ utf_A82,	utf_A8 },				//	A(` => A(
	{ utf_A83,	utf_A8 },				//	A(? => A(
	{ utf_A84,	utf_A8 },				//	A(~ => A(
	{ utf_A85,	utf_A8 },				//	A(. => A(
    
	{ utf_E1,	utf_E },				//	E' => E
	{ utf_E2,	utf_E },				//	E` => E
	{ utf_E3,	utf_E },				//	E? => E
	{ utf_E4,	utf_E },				//	E~ => E
	{ utf_E5,	utf_E },				//	E. => E
    
	{ utf_E61,	utf_E6 },				//	E^' => E^
	{ utf_E62,	utf_E6 },				//	E^` => E^
	{ utf_E63,	utf_E6 },				//	E^? => E^
	{ utf_E64,	utf_E6 },				//	E^~ => E^
	{ utf_E65,	utf_E6 },				//	E^. => E^
    
	{ utf_O1,	utf_O },				//	O' => O
	{ utf_O2,	utf_O },				//	O` => O
	{ utf_O3,	utf_O },				//	O? => O
	{ utf_O4,	utf_O },				//	O~ => O
	{ utf_O5,	utf_O },				//	O. => O
    
	{ utf_O61,	utf_O6 },				//	O^' => O^
	{ utf_O62,	utf_O6 },				//	O^` => O^
	{ utf_O63,	utf_O6 },				//	O^? => O^
	{ utf_O64,	utf_O6 },				//	O^~ => O^
	{ utf_O65,	utf_O6 },				//	O^. => O^
    
	{ utf_O71,	utf_O7 },				//	O+' => O+
	{ utf_O72,	utf_O7 },				//	O+` => O+
	{ utf_O73,	utf_O7 },				//	O+? => O+
	{ utf_O74,	utf_O7 },				//	O+~ => O+
	{ utf_O75,	utf_O7 },				//	O+. => O+
    
	{ utf_U1,	utf_U },				//	U' => U
	{ utf_U2,	utf_U },				//	U` => U
	{ utf_U3,	utf_U },				//	U? => U
	{ utf_U4,	utf_U },				//	U~ => U
	{ utf_U5,	utf_U },				//	U. => U
    
	{ utf_U71,	utf_U7 },				//	U+' => U+
	{ utf_U72,	utf_U7 },				//	U+` => U+
	{ utf_U73,	utf_U7 },				//	U+? => U+
	{ utf_U74,	utf_U7 },				//	U+~ => U+
	{ utf_U75,	utf_U7 },				//	U+. => U+
    
	{ utf_I1,	utf_I },				//	I' => I
	{ utf_I2,	utf_I },				//	I` => I
	{ utf_I3,	utf_I },				//	I? => I
	{ utf_I4,	utf_I },				//	I~ => I
	{ utf_I5,	utf_I },				//	I. => I
    
	{ utf_Y1,	utf_Y },				//	Y' => Y
	{ utf_Y2,	utf_Y },				//	Y` => Y
	{ utf_Y3,	utf_Y },				//	Y? => Y
	{ utf_Y4,	utf_Y },				//	Y~ => Y
	{ utf_Y5,	utf_Y },				//	Y. => Y
    
	{ utf_a1,	utf_a },				//	A' => A
	{ utf_a2,	utf_a },				//	A` => A
	{ utf_a3,	utf_a },				//	A? => A
	{ utf_a4,	utf_a },				//	A~ => A
	{ utf_a5,	utf_a },				//	A. => A
    
	{ utf_a61,	utf_a6 },				//	A^' => A^
	{ utf_a62,	utf_a6 },				//	A^` => A^
	{ utf_a63,	utf_a6 },				//	A^? => A^
	{ utf_a64,	utf_a6 },				//	A^~ => A^
	{ utf_a65,	utf_a6 },				//	A^. => A^
    
	{ utf_a81,	utf_a8 },				//	A(' => A(
	{ utf_a82,	utf_a8 },				//	A(` => A(
	{ utf_a83,	utf_a8 },				//	A(? => A(
	{ utf_a84,	utf_a8 },				//	A(~ => A(
	{ utf_a85,	utf_a8 },				//	A(. => A(
    
	{ utf_e1,	utf_e },				//	E' => E
	{ utf_e2,	utf_e },				//	E` => E
	{ utf_e3,	utf_e },				//	E? => E
	{ utf_e4,	utf_e },				//	E~ => E
	{ utf_e5,	utf_e },				//	E. => E
    
	{ utf_e61,	utf_e6 },				//	E^' => E^
	{ utf_e62,	utf_e6 },				//	E^` => E^
	{ utf_e63,	utf_e6 },				//	E^? => E^
	{ utf_e64,	utf_e6 },				//	E^~ => E^
	{ utf_e65,	utf_e6 },				//	E^. => E^
    
	{ utf_o1,	utf_o },				//	O' => O
	{ utf_o2,	utf_o },				//	O` => O
	{ utf_o3,	utf_o },				//	O? => O
	{ utf_o4,	utf_o },				//	O~ => O
	{ utf_o5,	utf_o },				//	O. => O
    
	{ utf_o61,	utf_o6 },				//	O^' => O^
	{ utf_o62,	utf_o6 },				//	O^` => O^
	{ utf_o63,	utf_o6 },				//	O^? => O^
	{ utf_o64,	utf_o6 },				//	O^~ => O^
	{ utf_o65,	utf_o6 },				//	O^. => O^
    
	{ utf_o71,	utf_o7 },				//	O+' => O+
	{ utf_o72,	utf_o7 },				//	O+` => O+
	{ utf_o73,	utf_o7 },				//	O+? => O+
	{ utf_o74,	utf_o7 },				//	O+~ => O+
	{ utf_o75,	utf_o7 },				//	O+. => O+
    
	{ utf_u1,	utf_u },				//	U' => U
	{ utf_u2,	utf_u },				//	U` => U
	{ utf_u3,	utf_u },				//	U? => U
	{ utf_u4,	utf_u },				//	U~ => U
	{ utf_u5,	utf_u },				//	U. => U
    
	{ utf_u71,	utf_u7 },				//	U+' => U+
	{ utf_u72,	utf_u7 },				//	U+` => U+
	{ utf_u73,	utf_u7 },				//	U+? => U+
	{ utf_u74,	utf_u7 },				//	U+~ => U+
	{ utf_u75,	utf_u7 },				//	U+. => U+
    
	{ utf_i1,	utf_i },				//	I' => I
	{ utf_i2,	utf_i },				//	I` => I
	{ utf_i3,	utf_i },				//	I? => I
	{ utf_i4,	utf_i },				//	I~ => I
	{ utf_i5,	utf_i },				//	I. => I
    
	{ utf_y1,	utf_y },				//	Y' => Y
	{ utf_y2,	utf_y },				//	Y` => Y
	{ utf_y3,	utf_y },				//	Y? => Y
	{ utf_y4,	utf_y },				//	Y~ => Y
	{ utf_y5,	utf_y },				//	Y. => Y
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_sign[] =
{
	{ utf_d9,	utf_vnd },				// dd => VND sign
	{ utf_vnd,	utf_d9 },				// VND sign => dd
	{ 0 }
};
/*----------------------------------------------------------------------------*/
modifier_t telex[] =
{
#ifdef VK_USE_EXTSTROKE
#ifdef VK_USE_PROSTROKE
	{0, '[', (vietcode_t *)utf_u7},
	{0, ']', (vietcode_t *)utf_o7},
	{0, '{', (vietcode_t *)utf_U7},
	{0, '}', (vietcode_t *)utf_O7},
	{0, 'w', (vietcode_t *)utf_u7},
	{0, 'W', (vietcode_t *)utf_U7},
#else
	{0, ']', (vietcode_t *)utf_u7},
	{0, '[', (vietcode_t *)utf_o7},
	{0, '}', (vietcode_t *)utf_U7},
	{0, '{', (vietcode_t *)utf_O7},
	{0, 'w', (vietcode_t *)utf_u7},
	{0, 'W', (vietcode_t *)utf_U7},
#endif
#endif
	{1, 'A', code_A},
	{1, 'a', code_a},
	{1, 'E', code_E},
	{1, 'e', code_e},
	{1, 'O', code_O},
	{1, 'o', code_o},
	{1, 'W', code_W},
	{1, 'w', code_w},
	{1, 'D', code_D},
	{1, 'd', code_d},
	{1, '_', code_sign},
	{2, 'S', code_S},
	{2, 's', code_s},
	{2, 'F', code_F},
	{2, 'f', code_f},
	{2, 'R', code_R},
	{2, 'r', code_r},
	{2, 'X', code_X},
	{2, 'x', code_x},
	{2, 'J', code_J},
	{2, 'j', code_j},
	{2, 'Z', code_z},
	{2, 'z', code_z},
	{0, 0, 0}
};
/*----------------------------------------------------------------------------*/
vietcode_t code_6[] =
{
	{ utf_A,	utf_A6 },				//	A => A^
	{ utf_A1,	utf_A61 },				//	A' => A^'
	{ utf_A2,	utf_A62 },				//	A` => A^`
	{ utf_A3,	utf_A63 },				//	A? => A^?
	{ utf_A4,	utf_A64 },				//	A~ => A^~
	{ utf_A5,	utf_A65 },				//	A. => A^.
	{ utf_A6,	utf_A, '6' },			//	A^ => A6
	{ utf_A61,	utf_A1, '6' },			//	A^' => A'6
	{ utf_A62,	utf_A2, '6' },			//	A^` => A`6
	{ utf_A63,	utf_A3, '6' },			//	A^? => A?6
	{ utf_A64,	utf_A4, '6' },			//	A^~ => A~6
	{ utf_A65,	utf_A5, '6' },			//	A^. => A.6
	{ utf_A8,	utf_A6 },				//	A( => A^
	{ utf_A81,	utf_A61 },				//	A(' => A^'
	{ utf_A82,	utf_A62 },				//	A(` => A^`
	{ utf_A83,	utf_A63 },				//	A(? => A^?
	{ utf_A84,	utf_A64 },				//	A(~ => A^~
	{ utf_A85,	utf_A65 },				//	A(. => A^.
    
	{ utf_a,	utf_a6 },				//	a => a^
	{ utf_a1,	utf_a61 },				//	a' => a^'
	{ utf_a2,	utf_a62 },				//	a` => a^`
	{ utf_a3,	utf_a63 },				//	a? => a^?
	{ utf_a4,	utf_a64 },				//	a~ => a^~
	{ utf_a5,	utf_a65 },				//	a. => a^.
	{ utf_a6,	utf_a, '6' },			//	a^ => a6
	{ utf_a61,	utf_a1, '6' },			//	a^' => a'6
	{ utf_a62,	utf_a2, '6' },			//	a^` => a`6
	{ utf_a63,	utf_a3, '6' },			//	a^? => a?6
	{ utf_a64,	utf_a4, '6' },			//	a^~ => a~6
	{ utf_a65,	utf_a5, '6' },			//	a^. => a.6
	{ utf_a8,	utf_a6 },				//	a( => a^
	{ utf_a81,	utf_a61 },				//	a(' => a^'
	{ utf_a82,	utf_a62 },				//	a(` => a^`
	{ utf_a83,	utf_a63 },				//	a(? => a^?
	{ utf_a84,	utf_a64 },				//	a(~ => a^~
	{ utf_a85,	utf_a65 },				//	a(. => a^.
    
	{ utf_E,	utf_E6 },				//	E => E^
	{ utf_E1,	utf_E61 },				//	E' => E^'
	{ utf_E2,	utf_E62 },				//	E` => E^`
	{ utf_E3,	utf_E63 },				//	E? => E^?
	{ utf_E4,	utf_E64 },				//	E~ => E^~
	{ utf_E5,	utf_E65 },				//	E. => E^.
	{ utf_E6,	utf_E, '6' },			//	E^ => E6
	{ utf_E61,	utf_E1, '6' },			//	E^' => E'6
	{ utf_E62,	utf_E2, '6' },			//	E^` => E`6
	{ utf_E63,	utf_E3, '6' },			//	E^? => E?6
	{ utf_E64,	utf_E4, '6' },			//	E^~ => E~6
	{ utf_E65,	utf_E5, '6' },			//	E^. => E.6
    
	{ utf_e,	utf_e6 },				//	e => e^
	{ utf_e1,	utf_e61 },				//	e' => e^'
	{ utf_e2,	utf_e62 },				//	e` => e^`
	{ utf_e3,	utf_e63 },				//	e? => e^?
	{ utf_e4,	utf_e64 },				//	e~ => e^~
	{ utf_e5,	utf_e65 },				//	e. => e^.
	{ utf_e6,	utf_e, '6' },			//	e^ => e6
	{ utf_e61,	utf_e1, '6' },			//	e^' => e'6
	{ utf_e62,	utf_e2, '6' },			//	e^` => e`6
	{ utf_e63,	utf_e3, '6' },			//	e^? => e?6
	{ utf_e64,	utf_e4, '6' },			//	e^~ => e~6
	{ utf_e65,	utf_e5, '6' },			//	e^. => e.6
    
	{ utf_O,	utf_O6 },				//	O => O^
	{ utf_O1,	utf_O61 },				//	O' => O^'
	{ utf_O2,	utf_O62 },				//	O` => O^`
	{ utf_O3,	utf_O63 },				//	O? => O^?
	{ utf_O4,	utf_O64 },				//	O~ => O^~
	{ utf_O5,	utf_O65 },				//	O. => O^.
	{ utf_O6,	utf_O, '6' },			//	O^ => O6
	{ utf_O61,	utf_O1, '6' },			//	O^' => O'6
	{ utf_O62,	utf_O2, '6' },			//	O^` => O`6
	{ utf_O63,	utf_O3, '6' },			//	O^? => O?6
	{ utf_O64,	utf_O4, '6' },			//	O^~ => O~6
	{ utf_O65,	utf_O5, '6' },			//	O^. => O.6
	{ utf_O7,	utf_O6 },				//	O+ => O^
	{ utf_O71,	utf_O61 },				//	O+' => O^'
	{ utf_O72,	utf_O62 },				//	O+` => O^`
	{ utf_O73,	utf_O63 },				//	O+? => O^?
	{ utf_O74,	utf_O64 },				//	O+~ => O^~
	{ utf_O75,	utf_O65 },				//	O+. => O^.
    
	{ utf_o,	utf_o6 },				//	o => o^
	{ utf_o1,	utf_o61 },				//	o' => o^'
	{ utf_o2,	utf_o62 },				//	o` => o^`
	{ utf_o3,	utf_o63 },				//	o? => o^?
	{ utf_o4,	utf_o64 },				//	o~ => o^~
	{ utf_o5,	utf_o65 },				//	o. => o^.
	{ utf_o6,	utf_o, '6' },			//	o^ => o6
	{ utf_o61,	utf_o1, '6' },			//	o^' => o'6
	{ utf_o62,	utf_o2, '6' },			//	o^` => o`6
	{ utf_o63,	utf_o3, '6' },			//	o^? => o?6
	{ utf_o64,	utf_o4, '6' },			//	o^~ => o~6
	{ utf_o65,	utf_o5, '6' },			//	o^. => o.6
	{ utf_o7,	utf_o6 },				//	o+ => o^
	{ utf_o71,	utf_o61 },				//	o+' => o^'
	{ utf_o72,	utf_o62 },				//	o+` => o^`
	{ utf_o73,	utf_o63 },				//	o+? => o^?
	{ utf_o74,	utf_o64 },				//	o+~ => o^~
	{ utf_o75,	utf_o65 },				//	o+. => o^.
	{ 0 },
};
/*----------------------------------------------------------------------------*/
vietcode_t code_7[] =
{
	{ utf_O,	utf_O7 },				//	O => O+
	{ utf_O1,	utf_O71 },				//	O' => O+'
	{ utf_O2,	utf_O72 },				//	O` => O+`
	{ utf_O3,	utf_O73 },				//	O? => O+?
	{ utf_O4,	utf_O74 },				//	O~ => O+~
	{ utf_O5,	utf_O75 },				//	O. => O+.
	{ utf_O6,	utf_O7 },				//	O^ => O+
	{ utf_O61,	utf_O71 },				//	O^' => O+'
	{ utf_O62,	utf_O72 },				//	O^` => O+`
	{ utf_O63,	utf_O73 },				//	O^? => O+?
	{ utf_O64,	utf_O74 },				//	O^~ => O+~
	{ utf_O65,	utf_O75 },				//	O^. => O+.
	{ utf_O7,	utf_O, '7' },			//	O+ => O7
	{ utf_O71,	utf_O1, '7' },			//	O+' => O'7
	{ utf_O72,	utf_O2, '7' },			//	O+` => O`7
	{ utf_O73,	utf_O3, '7' },			//	O+? => O?7
	{ utf_O74,	utf_O4, '7' },			//	O+~ => O~7
	{ utf_O75,	utf_O5, '7' },			//	O+. => O.7
    
	{ utf_o,	utf_o7 },				//	o => o+
	{ utf_o1,	utf_o71 },				//	o' => o+'
	{ utf_o2,	utf_o72 },				//	o` => o+`
	{ utf_o3,	utf_o73 },				//	o? => o+?
	{ utf_o4,	utf_o74 },				//	o~ => o+~
	{ utf_o5,	utf_o75 },				//	o. => o+.
	{ utf_o6,	utf_o7 },				//	o^ => o+
	{ utf_o61,	utf_o71 },				//	o^' => o+'
	{ utf_o62,	utf_o72 },				//	o^` => o+`
	{ utf_o63,	utf_o73 },				//	o^? => o+?
	{ utf_o64,	utf_o74 },				//	o^~ => o+~
	{ utf_o65,	utf_o75 },				//	o^. => o+.
	{ utf_o7,	utf_o, '7' },			//	o+ => o7
	{ utf_o71,	utf_o1, '7' },			//	o+' => o'7
	{ utf_o72,	utf_o2, '7' },			//	o+` => o`7
	{ utf_o73,	utf_o3, '7' },			//	o+? => o?7
	{ utf_o74,	utf_o4, '7' },			//	o+~ => o~7
	{ utf_o75,	utf_o5, '7' },			//	o+. => o.7
    
	{ utf_U,	utf_U7 },				//	U => U+
	{ utf_U1,	utf_U71 },				//	U' => U+'
	{ utf_U2,	utf_U72 },				//	U` => U+`
	{ utf_U3,	utf_U73 },				//	U? => U+?
	{ utf_U4,	utf_U74 },				//	U~ => U+~
	{ utf_U5,	utf_U75 },				//	U. => U+.
	{ utf_U7,	utf_U, '7' },			//	U+ => U7
	{ utf_U71,	utf_U1, '7' },			//	U+' => U'7
	{ utf_U72,	utf_U2, '7' },			//	U+` => U`7
	{ utf_U73,	utf_U3, '7' },			//	U+? => U?7
	{ utf_U74,	utf_U4, '7' },			//	U+~ => U~7
	{ utf_U75,	utf_U5, '7' },			//	U+. => U.7
    
	{ utf_u,	utf_u7 },				//	u => u+
	{ utf_u1,	utf_u71 },				//	u' => u+'
	{ utf_u2,	utf_u72 },				//	u` => u+`
	{ utf_u3,	utf_u73 },				//	u? => u+?
	{ utf_u4,	utf_u74 },				//	u~ => u+~
	{ utf_u5,	utf_u75 },				//	u. => u+.
	{ utf_u7,	utf_u, '7' },			//	u+ => u7
	{ utf_u71,	utf_u1, '7' },			//	u+' => u'7
	{ utf_u72,	utf_u2, '7' },			//	u+` => u`7
	{ utf_u73,	utf_u3, '7' },			//	u+? => u?7
	{ utf_u74,	utf_u4, '7' },			//	u+~ => u~7
	{ utf_u75,	utf_u5, '7' },			//	u+. => u.7
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_8[] =
{
	{ utf_A,	utf_A8 },				//	A => A(
	{ utf_A1,	utf_A81 },				//	A' => A('
	{ utf_A2,	utf_A82 },				//	A` => A(`
	{ utf_A3,	utf_A83 },				//	A? => A(?
	{ utf_A4,	utf_A84 },				//	A~ => A(~
	{ utf_A5,	utf_A85 },				//	A. => A(.
	{ utf_A6,	utf_A8 },				//	A^ => A(
	{ utf_A61,	utf_A81 },				//	A^' => A('
	{ utf_A62,	utf_A82 },				//	A^` => A(`
	{ utf_A63,	utf_A83 },				//	A^? => A(?
	{ utf_A64,	utf_A84 },				//	A^~ => A(~
	{ utf_A65,	utf_A85 },				//	A^. => A(.
	{ utf_A8,	utf_A, '8' },			//	A( => A8
	{ utf_A81,	utf_A1, '8' },			//	A(' => A'8
	{ utf_A82,	utf_A2, '8' },			//	A(` => A`8
	{ utf_A83,	utf_A3, '8' },			//	A(? => A?8
	{ utf_A84,	utf_A4, '8' },			//	A(~ => A~8
	{ utf_A85,	utf_A5, '8' },			//	A(. => A.8
    
	{ utf_a,	utf_a8 },				//	a => a(
	{ utf_a1,	utf_a81 },				//	a' => a('
	{ utf_a2,	utf_a82 },				//	a` => a(`
	{ utf_a3,	utf_a83 },				//	a? => a(?
	{ utf_a4,	utf_a84 },				//	a~ => a(~
	{ utf_a5,	utf_a85 },				//	a. => a(.
	{ utf_a6,	utf_a8 },				//	a^ => a(
	{ utf_a61,	utf_a81 },				//	a^' => a('
	{ utf_a62,	utf_a82 },				//	a^` => a(`
	{ utf_a63,	utf_a83 },				//	a^? => a(?
	{ utf_a64,	utf_a84 },				//	a^~ => a(~
	{ utf_a65,	utf_a85 },				//	a^. => a(.
	{ utf_a8,	utf_a, '8' },			//	a( => a8
	{ utf_a81,	utf_a1, '8' },			//	a(' => a'8
	{ utf_a82,	utf_a2, '8' },			//	a(` => a`8
	{ utf_a83,	utf_a3, '8' },			//	a(? => a?8
	{ utf_a84,	utf_a4, '8' },			//	a(~ => a~8
	{ utf_a85,	utf_a5, '8' },			//	a(. => a.8
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_9[] =
{
	{ utf_D,	utf_D9 },				//	D => -D
	{ utf_D9,	utf_D, '9' },			//	-D => D9
	{ utf_d,	utf_d9 },				//	d => -d
	{ utf_d9,	utf_d, '9' },			//	-d => d9
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_1[] =
{
	{ utf_A,	utf_A1 },				//	A => A'
	{ utf_A1,	utf_A, '1' },			//	A' => A1
	{ utf_A2,	utf_A1 },				//	A` => A'
	{ utf_A3,	utf_A1 },				//	A? => A'
	{ utf_A4,	utf_A1 },				//	A~ => A'
	{ utf_A5,	utf_A1 },				//	A. => A'
    
	{ utf_A6,	utf_A61 },				//	A^ => A^'
	{ utf_A61,	utf_A6, '1' },			//	A^' => A^1
	{ utf_A62,	utf_A61 },				//	A^` => A^'
	{ utf_A63,	utf_A61 },				//	A^? => A^'
	{ utf_A64,	utf_A61 },				//	A^~ => A^'
	{ utf_A65,	utf_A61 },				//	A^. => A^'
    
	{ utf_A8,	utf_A81 },				//	A( => A('
	{ utf_A81,	utf_A8, '1' },			//	A(' => A(1
	{ utf_A82,	utf_A81 },				//	A(` => A('
	{ utf_A83,	utf_A81 },				//	A(? => A('
	{ utf_A84,	utf_A81 },				//	A(~ => A('
	{ utf_A85,	utf_A81 },				//	A(. => A('
    
	{ utf_E,	utf_E1 },				//	E => E'
	{ utf_E1,	utf_E, '1' },			//	E' => E1
	{ utf_E2,	utf_E1 },				//	E` => E'
	{ utf_E3,	utf_E1 },				//	E? => E'
	{ utf_E4,	utf_E1 },				//	E~ => E'
	{ utf_E5,	utf_E1 },				//	E. => E'
    
	{ utf_E6,	utf_E61 },				//	E^ => E^'
	{ utf_E61,	utf_E6, '1' },			//	E^' => E^1
	{ utf_E62,	utf_E61 },				//	E^` => E^'
	{ utf_E63,	utf_E61 },				//	E^? => E^'
	{ utf_E64,	utf_E61 },				//	E^~ => E^'
	{ utf_E65,	utf_E61 },				//	E^. => E^'
    
	{ utf_O,	utf_O1 },				//	O => O'
	{ utf_O1,	utf_O, '1' },			//	O' => O1
	{ utf_O2,	utf_O1 },				//	O` => O'
	{ utf_O3,	utf_O1 },				//	O? => O'
	{ utf_O4,	utf_O1 },				//	O~ => O'
	{ utf_O5,	utf_O1 },				//	O. => O'
    
	{ utf_O6,	utf_O61 },				//	O^ => O^'
	{ utf_O61,	utf_O6, '1' },			//	O^' => O^1
	{ utf_O62,	utf_O61 },				//	O^` => O^'
	{ utf_O63,	utf_O61 },				//	O^? => O^'
	{ utf_O64,	utf_O61 },				//	O^~ => O^'
	{ utf_O65,	utf_O61 },				//	O^. => O^'
    
	{ utf_O7,	utf_O71 },				//	O+ => O+'
	{ utf_O71,	utf_O7, '1' },			//	O+' => O+1
	{ utf_O72,	utf_O71 },				//	O+` => O+'
	{ utf_O73,	utf_O71 },				//	O+? => O+'
	{ utf_O74,	utf_O71 },				//	O+~ => O+'
	{ utf_O75,	utf_O71 },				//	O+. => O+'
    
	{ utf_U,	utf_U1 },				//	U => U'
	{ utf_U1,	utf_U, '1' },			//	U' => U1
	{ utf_U2,	utf_U1 },				//	U` => U'
	{ utf_U3,	utf_U1 },				//	U? => U'
	{ utf_U4,	utf_U1 },				//	U~ => U'
	{ utf_U5,	utf_U1 },				//	U. => U'
    
	{ utf_U7,	utf_U71 },				//	U+ => U+'
	{ utf_U71,	utf_U7, '1' },			//	U+' => U+1
	{ utf_U72,	utf_U71 },				//	U+` => U+'
	{ utf_U73,	utf_U71 },				//	U+? => U+'
	{ utf_U74,	utf_U71 },				//	U+~ => U+'
	{ utf_U75,	utf_U71 },				//	U+. => U+'
    
	{ utf_I,	utf_I1 },				//	I => I'
	{ utf_I1,	utf_I, '1' },			//	I' => I1
	{ utf_I2,	utf_I1 },				//	I` => I'
	{ utf_I3,	utf_I1 },				//	I? => I'
	{ utf_I4,	utf_I1 },				//	I~ => I'
	{ utf_I5,	utf_I1 },				//	I. => I'
    
	{ utf_Y,	utf_Y1 },				//	Y => Y'
	{ utf_Y1,	utf_Y, '1' },			//	Y' => Y1
	{ utf_Y2,	utf_Y1 },				//	Y` => Y'
	{ utf_Y3,	utf_Y1 },				//	Y? => Y'
	{ utf_Y4,	utf_Y1 },				//	Y~ => Y'
	{ utf_Y5,	utf_Y1 },				//	Y. => Y'
    
	{ utf_a,	utf_a1 },				//	a => a'
	{ utf_a1,	utf_a, '1' },			//	a' => a1
	{ utf_a2,	utf_a1 },				//	a` => a'
	{ utf_a3,	utf_a1 },				//	a? => a'
	{ utf_a4,	utf_a1 },				//	a~ => a'
	{ utf_a5,	utf_a1 },				//	a. => a'
    
	{ utf_a6,	utf_a61 },				//	a^ => a^'
	{ utf_a61,	utf_a6, '1' },			//	a^' => a^1
	{ utf_a62,	utf_a61 },				//	a^` => a^'
	{ utf_a63,	utf_a61 },				//	a^? => a^'
	{ utf_a64,	utf_a61 },				//	a^~ => a^'
	{ utf_a65,	utf_a61 },				//	a^. => a^'
    
	{ utf_a8,	utf_a81 },				//	a( => a('
	{ utf_a81,	utf_a8, '1' },			//	a(' => a(1
	{ utf_a82,	utf_a81 },				//	a(` => a('
	{ utf_a83,	utf_a81 },				//	a(? => a('
	{ utf_a84,	utf_a81 },				//	a(~ => a('
	{ utf_a85,	utf_a81 },				//	a(. => a('
    
	{ utf_e,	utf_e1 },				//	e => e'
	{ utf_e1,	utf_e, '1' },			//	e' => e1
	{ utf_e2,	utf_e1 },				//	e` => e'
	{ utf_e3,	utf_e1 },				//	e? => e'
	{ utf_e4,	utf_e1 },				//	e~ => e'
	{ utf_e5,	utf_e1 },				//	e. => e'
    
	{ utf_e6,	utf_e61 },				//	e^ => e^'
	{ utf_e61,	utf_e6, '1' },			//	e^' => e^1
	{ utf_e62,	utf_e61 },				//	e^` => e^'
	{ utf_e63,	utf_e61 },				//	e^? => e^'
	{ utf_e64,	utf_e61 },				//	e^~ => e^'
	{ utf_e65,	utf_e61 },				//	e^. => e^'
    
	{ utf_o,	utf_o1 },				//	o => o'
	{ utf_o1,	utf_o, '1' },			//	o' => o1
	{ utf_o2,	utf_o1 },				//	o` => o'
	{ utf_o3,	utf_o1 },				//	o? => o'
	{ utf_o4,	utf_o1 },				//	o~ => o'
	{ utf_o5,	utf_o1 },				//	o. => o'
    
	{ utf_o6,	utf_o61 },				//	o^ => o^'
	{ utf_o61,	utf_o6, '1' },			//	o^' => o^1
	{ utf_o62,	utf_o61 },				//	o^` => o^'
	{ utf_o63,	utf_o61 },				//	o^? => o^'
	{ utf_o64,	utf_o61 },				//	o^~ => o^'
	{ utf_o65,	utf_o61 },				//	o^. => o^'
    
	{ utf_o7,	utf_o71 },				//	o+ => o+'
	{ utf_o71,	utf_o7, '1' },			//	o+' => o+1
	{ utf_o72,	utf_o71 },				//	o+` => o+'
	{ utf_o73,	utf_o71 },				//	o+? => o+'
	{ utf_o74,	utf_o71 },				//	o+~ => o+'
	{ utf_o75,	utf_o71 },				//	o+. => o+'
    
	{ utf_u,	utf_u1 },				//	u => u'
	{ utf_u1,	utf_u, '1' },			//	u' => u1
	{ utf_u2,	utf_u1 },				//	u` => u'
	{ utf_u3,	utf_u1 },				//	u? => u'
	{ utf_u4,	utf_u1 },				//	u~ => u'
	{ utf_u5,	utf_u1 },				//	u. => u'
    
	{ utf_u7,	utf_u71 },				//	u+ => u+'
	{ utf_u71,	utf_u7, '1' },			//	u+' => u+1
	{ utf_u72,	utf_u71 },				//	u+` => u+'
	{ utf_u73,	utf_u71 },				//	u+? => u+'
	{ utf_u74,	utf_u71 },				//	u+~ => u+'
	{ utf_u75,	utf_u71 },				//	u+. => u+'
    
	{ utf_i,	utf_i1 },				//	i => i'
	{ utf_i1,	utf_i, '1' },			//	i' => i1
	{ utf_i2,	utf_i1 },				//	i` => i'
	{ utf_i3,	utf_i1 },				//	i? => i'
	{ utf_i4,	utf_i1 },				//	i~ => i'
	{ utf_i5,	utf_i1 },				//	i. => i'
    
	{ utf_y,	utf_y1 },				//	y => Y'
	{ utf_y1,	utf_y, '1' },			//	y' => y1
	{ utf_y2,	utf_y1 },				//	y` => y'
	{ utf_y3,	utf_y1 },				//	y? => y'
	{ utf_y4,	utf_y1 },				//	y~ => y'
	{ utf_y5,	utf_y1 },				//	y. => y'
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_2[] =
{
	{ utf_A,	utf_A2 },				//	A => A`
	{ utf_A1,	utf_A2 },				//	A' => A`
	{ utf_A2,	utf_A, '2' },			//	A` => AF
	{ utf_A3,	utf_A2 },				//	A? => A`
	{ utf_A4,	utf_A2 },				//	A~ => A`
	{ utf_A5,	utf_A2 },				//	A. => A`
    
	{ utf_A6,	utf_A62 },				//	A^ => A^`
	{ utf_A61,	utf_A62 },				//	A^' => A^`
	{ utf_A62,	utf_A6, '2' },		//	A^` => A^F
	{ utf_A63,	utf_A62 },				//	A^? => A^`
	{ utf_A64,	utf_A62 },				//	A^~ => A^`
	{ utf_A65,	utf_A62 },				//	A^. => A^`
    
	{ utf_A8,	utf_A82 },				//	A( => A(`
	{ utf_A81,	utf_A82 },				//	A(' => A(`
	{ utf_A82,	utf_A8, '2' },		//	A(` => A(F
	{ utf_A83,	utf_A82 },				//	A(? => A(`
	{ utf_A84,	utf_A82 },				//	A(~ => A(`
	{ utf_A85,	utf_A82 },				//	A(. => A(`
    
	{ utf_E,	utf_E2 },				//	E => E`
	{ utf_E1,	utf_E2 },				//	E' => E`
	{ utf_E2,	utf_E, '2' },			//	E` => EF
	{ utf_E3,	utf_E2 },				//	E? => E`
	{ utf_E4,	utf_E2 },				//	E~ => E`
	{ utf_E5,	utf_E2 },				//	E. => E`
    
	{ utf_E6,	utf_E62 },				//	E^ => E^`
	{ utf_E61,	utf_E62 },				//	E^' => E^`
	{ utf_E62,	utf_E6, '2' },		//	E^` => E^F
	{ utf_E63,	utf_E62 },				//	E^? => E^`
	{ utf_E64,	utf_E62 },				//	E^~ => E^`
	{ utf_E65,	utf_E62 },				//	E^. => E^`
    
	{ utf_O,	utf_O2 },				//	O => O`
	{ utf_O1,	utf_O2 },				//	O' => O`
	{ utf_O2,	utf_O, '2' },			//	O` => OF
	{ utf_O3,	utf_O2 },				//	O? => O`
	{ utf_O4,	utf_O2 },				//	O~ => O`
	{ utf_O5,	utf_O2 },				//	O. => O`
    
	{ utf_O6,	utf_O62 },				//	O^ => O^`
	{ utf_O61,	utf_O62 },				//	O^' => O^`
	{ utf_O62,	utf_O6, '2' },		//	O^` => O^F
	{ utf_O63,	utf_O62 },				//	O^? => O^`
	{ utf_O64,	utf_O62 },				//	O^~ => O^`
	{ utf_O65,	utf_O62 },				//	O^. => O^`
    
	{ utf_O7,	utf_O72 },				//	O+ => O+`
	{ utf_O71,	utf_O72 },				//	O+' => O+`
	{ utf_O72,	utf_O7, '2' },		//	O+` => O+F
	{ utf_O73,	utf_O72 },				//	O+? => O+`
	{ utf_O74,	utf_O72 },				//	O+~ => O+`
	{ utf_O75,	utf_O72 },				//	O+. => O+`
    
	{ utf_U,	utf_U2 },				//	U => U`
	{ utf_U1,	utf_U2 },				//	U' => U`
	{ utf_U2,	utf_U, '2' },			//	U` => UF
	{ utf_U3,	utf_U2 },				//	U? => U`
	{ utf_U4,	utf_U2 },				//	U~ => U`
	{ utf_U5,	utf_U2 },				//	U. => U`
    
	{ utf_U7,	utf_U72 },				//	U+ => U+`
	{ utf_U71,	utf_U72 },				//	U+' => U+`
	{ utf_U72,	utf_U7, '2' },		//	U+` => U+F
	{ utf_U73,	utf_U72 },				//	U+? => U+`
	{ utf_U74,	utf_U72 },				//	U+~ => U+`
	{ utf_U75,	utf_U72 },				//	U+. => U+`
    
	{ utf_I,	utf_I2 },				//	I => I`
	{ utf_I1,	utf_I2 },				//	I' => I`
	{ utf_I2,	utf_I, '2' },			//	I` => IF
	{ utf_I3,	utf_I2 },				//	I? => I`
	{ utf_I4,	utf_I2 },				//	I~ => I`
	{ utf_I5,	utf_I2 },				//	I. => I`
    
	{ utf_Y,	utf_Y2 },				//	Y => Y`
	{ utf_Y1,	utf_Y2 },				//	Y' => Y`
	{ utf_Y2,	utf_Y, '2' },			//	Y` => YF
	{ utf_Y3,	utf_Y2 },				//	Y? => Y`
	{ utf_Y4,	utf_Y2 },				//	Y~ => Y`
	{ utf_Y5,	utf_Y2 },				//	Y. => Y`
    
	{ utf_a,	utf_a2 },				//	a => a`
	{ utf_a1,	utf_a2 },				//	a' => a`
	{ utf_a2,	utf_a, '2' },			//	a` => af
	{ utf_a3,	utf_a2 },				//	a? => a`
	{ utf_a4,	utf_a2 },				//	a~ => a`
	{ utf_a5,	utf_a2 },				//	a. => a`
    
	{ utf_a6,	utf_a62 },				//	a^ => a^`
	{ utf_a61,	utf_a62 },				//	a^' => a^`
	{ utf_a62,	utf_a6, '2' },		//	a^` => a^f
	{ utf_a63,	utf_a62 },				//	a^? => a^`
	{ utf_a64,	utf_a62 },				//	a^~ => a^`
	{ utf_a65,	utf_a62 },				//	a^. => a^`
    
	{ utf_a8,	utf_a82 },				//	a( => a(`
	{ utf_a81,	utf_a82 },				//	a(' => a(`
	{ utf_a82,	utf_a8, '2' },		//	a(` => a(f
	{ utf_a83,	utf_a82 },				//	a(? => a(`
	{ utf_a84,	utf_a82 },				//	a(~ => a(`
	{ utf_a85,	utf_a82 },				//	a(. => a(`
    
	{ utf_e,	utf_e2 },				//	e => e`
	{ utf_e1,	utf_e2 },				//	e' => e`
	{ utf_e2,	utf_e, '2' },			//	e` => ef
	{ utf_e3,	utf_e2 },				//	e? => e`
	{ utf_e4,	utf_e2 },				//	e~ => e`
	{ utf_e5,	utf_e2 },				//	e. => e`
    
	{ utf_e6,	utf_e62 },				//	e^ => e^`
	{ utf_e61,	utf_e62 },				//	e^' => e^`
	{ utf_e62,	utf_e6, '2' },		//	e^` => e^f
	{ utf_e63,	utf_e62 },				//	e^? => e^`
	{ utf_e64,	utf_e62 },				//	e^~ => e^`
	{ utf_e65,	utf_e62 },				//	e^. => e^`
    
	{ utf_o,	utf_o2 },				//	o => o`
	{ utf_o1,	utf_o2 },				//	o' => o`
	{ utf_o2,	utf_o, '2' },			//	o` => of
	{ utf_o3,	utf_o2 },				//	o? => o`
	{ utf_o4,	utf_o2 },				//	o~ => o`
	{ utf_o5,	utf_o2 },				//	o. => o`
    
	{ utf_o6,	utf_o62 },				//	o^ => o^`
	{ utf_o61,	utf_o62 },				//	o^' => o^`
	{ utf_o62,	utf_o6, '2' },		//	o^` => o^f
	{ utf_o63,	utf_o62 },				//	o^? => o^`
	{ utf_o64,	utf_o62 },				//	o^~ => o^`
	{ utf_o65,	utf_o62 },				//	o^. => o^`
    
	{ utf_o7,	utf_o72 },				//	o+ => o+`
	{ utf_o71,	utf_o72 },				//	o+' => o+`
	{ utf_o72,	utf_o7, '2' },		//	o+` => o+f
	{ utf_o73,	utf_o72 },				//	o+? => o+`
	{ utf_o74,	utf_o72 },				//	o+~ => o+`
	{ utf_o75,	utf_o72 },				//	o+. => o+`
    
	{ utf_u,	utf_u2 },				//	u => u`
	{ utf_u1,	utf_u2 },				//	u' => u`
	{ utf_u2,	utf_u, '2' },			//	u` => uf
	{ utf_u3,	utf_u2 },				//	u? => u`
	{ utf_u4,	utf_u2 },				//	u~ => u`
	{ utf_u5,	utf_u2 },				//	u. => u`
    
	{ utf_u7,	utf_u72 },				//	u+ => u+`
	{ utf_u71,	utf_u72 },				//	u+' => u+`
	{ utf_u72,	utf_u7, '2' },		//	u+` => u+f
	{ utf_u73,	utf_u72 },				//	u+? => u+`
	{ utf_u74,	utf_u72 },				//	u+~ => u+`
	{ utf_u75,	utf_u72 },				//	u+. => u+`
    
	{ utf_i,	utf_i2 },				//	i => i`
	{ utf_i1,	utf_i2 },				//	i' => i`
	{ utf_i2,	utf_i, '2' },			//	i` => if
	{ utf_i3,	utf_i2 },				//	i? => i`
	{ utf_i4,	utf_i2 },				//	i~ => i`
	{ utf_i5,	utf_i2 },				//	i. => i`
    
	{ utf_y,	utf_y2 },				//	y => Y`
	{ utf_y1,	utf_y2 },				//	y' => y`
	{ utf_y2,	utf_y, '2' },			//	y` => yf
	{ utf_y3,	utf_y2 },				//	y? => y`
	{ utf_y4,	utf_y2 },				//	y~ => y`
	{ utf_y5,	utf_y2 },				//	y. => y`
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_3[] =
{
	{ utf_A,	utf_A3 },				//	A => A?
	{ utf_A1,	utf_A3 },				//	A' => A?
	{ utf_A2,	utf_A3 },				//	A` => A?
	{ utf_A3,	utf_A, '3' },			//	A? => AR
	{ utf_A4,	utf_A3 },				//	A~ => A?
	{ utf_A5,	utf_A3 },				//	A. => A?
    
	{ utf_A6,	utf_A63 },				//	A^ => A^?
	{ utf_A61,	utf_A63 },				//	A^' => A^?
	{ utf_A62,	utf_A63 },				//	A^` => A^?
	{ utf_A63,	utf_A6, '3' },			//	A^? => A^R
	{ utf_A64,	utf_A63 },				//	A^~ => A^?
	{ utf_A65,	utf_A63 },				//	A^. => A^?
    
	{ utf_A8,	utf_A83 },				//	A( => A(?
	{ utf_A81,	utf_A83 },				//	A(' => A(?
	{ utf_A82,	utf_A83 },				//	A(` => A(?
	{ utf_A83,	utf_A8, '3' },			//	A(? => A(R
	{ utf_A84,	utf_A83 },				//	A(~ => A(?
	{ utf_A85,	utf_A83 },				//	A(. => A(?
    
	{ utf_E,	utf_E3 },				//	E => E?
	{ utf_E1,	utf_E3 },				//	E' => E?
	{ utf_E2,	utf_E3 },				//	E` => E?
	{ utf_E3,	utf_E, '3' },			//	E? => ER
	{ utf_E4,	utf_E3 },				//	E~ => E?
	{ utf_E5,	utf_E3 },				//	E. => E?
    
	{ utf_E6,	utf_E63 },				//	E^ => E^?
	{ utf_E61,	utf_E63 },				//	E^' => E^?
	{ utf_E62,	utf_E63 },				//	E^` => E^?
	{ utf_E63,	utf_E6, '3' },			//	E^? => E^R
	{ utf_E64,	utf_E63 },				//	E^~ => E^?
	{ utf_E65,	utf_E63 },				//	E^. => E^?
    
	{ utf_O,	utf_O3 },				//	O => O?
	{ utf_O1,	utf_O3 },				//	O' => O?
	{ utf_O2,	utf_O3 },				//	O` => O?
	{ utf_O3,	utf_O, '3' },			//	O? => OR
	{ utf_O4,	utf_O3 },				//	O~ => O?
	{ utf_O5,	utf_O3 },				//	O. => O?
    
	{ utf_O6,	utf_O63 },				//	O^ => O^?
	{ utf_O61,	utf_O63 },				//	O^' => O^?
	{ utf_O62,	utf_O63 },				//	O^` => O^?
	{ utf_O63,	utf_O6, '3' },			//	O^? => O^R
	{ utf_O64,	utf_O63 },				//	O^~ => O^?
	{ utf_O65,	utf_O63 },				//	O^. => O^?
    
	{ utf_O7,	utf_O73 },				//	O+ => O+?
	{ utf_O71,	utf_O73 },				//	O+' => O+?
	{ utf_O72,	utf_O73 },				//	O+` => O+?
	{ utf_O73,	utf_O7, '3' },			//	O+? => O+R
	{ utf_O74,	utf_O73 },				//	O+~ => O+?
	{ utf_O75,	utf_O73 },				//	O+. => O+?
    
	{ utf_U,	utf_U3 },				//	U => U?
	{ utf_U1,	utf_U3 },				//	U' => U?
	{ utf_U2,	utf_U3 },				//	U` => U?
	{ utf_U3,	utf_U, '3' },			//	U? => UR
	{ utf_U4,	utf_U3 },				//	U~ => U?
	{ utf_U5,	utf_U3 },				//	U. => U?
    
	{ utf_U7,	utf_U73 },				//	U+ => U+?
	{ utf_U71,	utf_U73 },				//	U+' => U+?
	{ utf_U72,	utf_U73 },				//	U+` => U+?
	{ utf_U73,	utf_U7, '3' },			//	U+? => U+R
	{ utf_U74,	utf_U73 },				//	U+~ => U+?
	{ utf_U75,	utf_U73 },				//	U+. => U+?
    
	{ utf_I,	utf_I3 },				//	I => I?
	{ utf_I1,	utf_I3 },				//	I' => I?
	{ utf_I2,	utf_I3 },				//	I` => I?
	{ utf_I3,	utf_I, '3' },			//	I? => IR
	{ utf_I4,	utf_I3 },				//	I~ => I?
	{ utf_I5,	utf_I3 },				//	I. => I?
    
	{ utf_Y,	utf_Y3 },				//	Y => Y?
	{ utf_Y1,	utf_Y3 },				//	Y' => Y?
	{ utf_Y2,	utf_Y3 },				//	Y` => Y?
	{ utf_Y3,	utf_Y, '3' },			//	Y? => YR
	{ utf_Y4,	utf_Y3 },				//	Y~ => Y?
	{ utf_Y5,	utf_Y3 },				//	Y. => Y?
	
	{ utf_a,	utf_a3 },				//	a => a?
	{ utf_a1,	utf_a3 },				//	a' => a?
	{ utf_a2,	utf_a3 },				//	a` => a?
	{ utf_a3,	utf_a, '3' },			//	a? => ar
	{ utf_a4,	utf_a3 },				//	a~ => a?
	{ utf_a5,	utf_a3 },				//	a. => a?
    
	{ utf_a6,	utf_a63 },				//	a^ => a^?
	{ utf_a61,	utf_a63 },				//	a^' => a^?
	{ utf_a62,	utf_a63 },				//	a^` => a^?
	{ utf_a63,	utf_a6, '3' },			//	a^? => a^r
	{ utf_a64,	utf_a63 },				//	a^~ => a^?
	{ utf_a65,	utf_a63 },				//	a^. => a^?
    
	{ utf_a8,	utf_a83 },				//	a( => a(?
	{ utf_a81,	utf_a83 },				//	a(' => a(?
	{ utf_a82,	utf_a83 },				//	a(` => a(?
	{ utf_a83,	utf_a8, '3' },			//	a(? => a(r
	{ utf_a84,	utf_a83 },				//	a(~ => a(?
	{ utf_a85,	utf_a83 },				//	a(. => a(?
    
	{ utf_e,	utf_e3 },				//	e => e?
	{ utf_e1,	utf_e3 },				//	e' => e?
	{ utf_e2,	utf_e3 },				//	e` => e?
	{ utf_e3,	utf_e, '3' },			//	e? => er
	{ utf_e4,	utf_e3 },				//	e~ => e?
	{ utf_e5,	utf_e3 },				//	e. => e?
    
	{ utf_e6,	utf_e63 },				//	e^ => e^?
	{ utf_e61,	utf_e63 },				//	e^' => e^?
	{ utf_e62,	utf_e63 },				//	e^` => e^?
	{ utf_e63,	utf_e6, '3' },			//	e^? => e^r
	{ utf_e64,	utf_e63 },				//	e^~ => e^?
	{ utf_e65,	utf_e63 },				//	e^. => e^?
    
	{ utf_o,	utf_o3 },				//	o => o?
	{ utf_o1,	utf_o3 },				//	o' => o?
	{ utf_o2,	utf_o3 },				//	o` => o?
	{ utf_o3,	utf_o, '3' },			//	o? => or
	{ utf_o4,	utf_o3 },				//	o~ => o?
	{ utf_o5,	utf_o3 },				//	o. => o?
    
	{ utf_o6,	utf_o63 },				//	o^ => o^?
	{ utf_o61,	utf_o63 },				//	o^' => o^?
	{ utf_o62,	utf_o63 },				//	o^` => o^?
	{ utf_o63,	utf_o6, '3' },			//	o^? => o^r
	{ utf_o64,	utf_o63 },				//	o^~ => o^?
	{ utf_o65,	utf_o63 },				//	o^. => o^?
    
	{ utf_o7,	utf_o73 },				//	o+ => o+?
	{ utf_o71,	utf_o73 },				//	o+' => o+?
	{ utf_o72,	utf_o73 },				//	o+` => o+?
	{ utf_o73,	utf_o7, '3' },			//	o+? => o+r
	{ utf_o74,	utf_o73 },				//	o+~ => o+?
	{ utf_o75,	utf_o73 },				//	o+. => o+?
    
	{ utf_u,	utf_u3 },				//	u => u?
	{ utf_u1,	utf_u3 },				//	u' => u?
	{ utf_u2,	utf_u3 },				//	u` => u?
	{ utf_u3,	utf_u, '3' },			//	u? => ur
	{ utf_u4,	utf_u3 },				//	u~ => u?
	{ utf_u5,	utf_u3 },				//	u. => u?
    
	{ utf_u7,	utf_u73 },				//	u+ => u+?
	{ utf_u71,	utf_u73 },				//	u+' => u+?
	{ utf_u72,	utf_u73 },				//	u+` => u+?
	{ utf_u73,	utf_u7, '3' },			//	u+? => u+r
	{ utf_u74,	utf_u73 },				//	u+~ => u+?
	{ utf_u75,	utf_u73 },				//	u+. => u+?
    
	{ utf_i,	utf_i3 },				//	i => i?
	{ utf_i1,	utf_i3 },				//	i' => i?
	{ utf_i2,	utf_i3 },				//	i` => i?
	{ utf_i3,	utf_i, '3' },			//	i? => ir
	{ utf_i4,	utf_i3 },				//	i~ => i?
	{ utf_i5,	utf_i3 },				//	i. => i?
    
	{ utf_y,	utf_y3 },				//	y => y?
	{ utf_y1,	utf_y3 },				//	y' => y?
	{ utf_y2,	utf_y3 },				//	y` => y?
	{ utf_y3,	utf_y, '3' },			//	y? => yr
	{ utf_y4,	utf_y3 },				//	y~ => y?
	{ utf_y5,	utf_y3 },				//	y. => y?
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_4[] =
{
	{ utf_A,	utf_A4 },				//	A => A~
	{ utf_A1,	utf_A4 },				//	A' => A~
	{ utf_A2,	utf_A4 },				//	A` => A~
	{ utf_A3,	utf_A4 },				//	A? => A~
	{ utf_A4,	utf_A, '4' },			//	A~ => AX
	{ utf_A5,	utf_A4 },				//	A. => A~
    
	{ utf_A6,	utf_A64 },				//	A^ => A^~
	{ utf_A61,	utf_A64 },				//	A^' => A^~
	{ utf_A62,	utf_A64 },				//	A^` => A^~
	{ utf_A63,	utf_A64 },				//	A^? => A^~
	{ utf_A64,	utf_A6, '4' },		//	A^~ => A^X
	{ utf_A65,	utf_A64 },				//	A^. => A^~
    
	{ utf_A8,	utf_A84 },				//	A( => A(~
	{ utf_A81,	utf_A84 },				//	A(' => A(~
	{ utf_A82,	utf_A84 },				//	A(` => A(~
	{ utf_A83,	utf_A84 },				//	A(? => A(~
	{ utf_A84,	utf_A8, '4' },		//	A(~ => A(X
	{ utf_A85,	utf_A84 },				//	A(. => A(~
    
	{ utf_E,	utf_E4 },				//	E => E~
	{ utf_E1,	utf_E4 },				//	E' => E~
	{ utf_E2,	utf_E4 },				//	E` => E~
	{ utf_E3,	utf_E4 },				//	E? => E~
	{ utf_E4,	utf_E, '4' },			//	E~ => EX
	{ utf_E5,	utf_E4 },				//	E. => E~
    
	{ utf_E6,	utf_E64 },				//	E^ => E^~
	{ utf_E61,	utf_E64 },				//	E^' => E^~
	{ utf_E62,	utf_E64 },				//	E^` => E^~
	{ utf_E63,	utf_E64 },				//	E^? => E^~
	{ utf_E64,	utf_E6, '4' },		//	E^~ => E^X
	{ utf_E65,	utf_E64 },				//	E^. => E^~
    
	{ utf_O,	utf_O4 },				//	O => O~
	{ utf_O1,	utf_O4 },				//	O' => O~
	{ utf_O2,	utf_O4 },				//	O` => O~
	{ utf_O3,	utf_O4 },				//	O? => O~
	{ utf_O4,	utf_O, '4' },			//	O~ => OX
	{ utf_O5,	utf_O4 },				//	O. => O~
    
	{ utf_O6,	utf_O64 },				//	O^ => O^~
	{ utf_O61,	utf_O64 },				//	O^' => O^~
	{ utf_O62,	utf_O64 },				//	O^` => O^~
	{ utf_O63,	utf_O64 },				//	O^? => O^~
	{ utf_O64,	utf_O6, '4' },		//	O^~ => O^X
	{ utf_O65,	utf_O64 },				//	O^. => O^~
    
	{ utf_O7,	utf_O74 },				//	O+ => O+~
	{ utf_O71,	utf_O74 },				//	O+' => O+~
	{ utf_O72,	utf_O74 },				//	O+` => O+~
	{ utf_O73,	utf_O74 },				//	O+? => O+~
	{ utf_O74,	utf_O7, '4' },		//	O+~ => O+X
	{ utf_O75,	utf_O74 },				//	O+. => O+~
    
	{ utf_U,	utf_U4 },				//	U => U~
	{ utf_U1,	utf_U4 },				//	U' => U~
	{ utf_U2,	utf_U4 },				//	U` => U~
	{ utf_U3,	utf_U4 },				//	U? => U~
	{ utf_U4,	utf_U, '4' },			//	U~ => UX
	{ utf_U5,	utf_U4 },				//	U. => U~
    
	{ utf_U7,	utf_U74 },				//	U+ => U+~
	{ utf_U71,	utf_U74 },				//	U+' => U+~
	{ utf_U72,	utf_U74 },				//	U+` => U+~
	{ utf_U73,	utf_U74 },				//	U+? => U+~
	{ utf_U74,	utf_U7, '4' },		//	U+~ => U+X
	{ utf_U75,	utf_U74 },				//	U+. => U+~
    
	{ utf_I,	utf_I4 },				//	I => I~
	{ utf_I1,	utf_I4 },				//	I' => I~
	{ utf_I2,	utf_I4 },				//	I` => I~
	{ utf_I3,	utf_I4 },				//	I? => I~
	{ utf_I4,	utf_I, '4' },			//	I~ => IX
	{ utf_I5,	utf_I4 },				//	I. => I~
    
	{ utf_Y,	utf_Y4 },				//	Y => Y~
	{ utf_Y1,	utf_Y4 },				//	Y' => Y~
	{ utf_Y2,	utf_Y4 },				//	Y` => Y~
	{ utf_Y3,	utf_Y4 },				//	Y? => Y~
	{ utf_Y4,	utf_Y, '4' },			//	Y~ => YX
	{ utf_Y5,	utf_Y4 },				//	Y. => Y~
    
	{ utf_a,	utf_a4 },				//	a => a~
	{ utf_a1,	utf_a4 },				//	a' => a~
	{ utf_a2,	utf_a4 },				//	a` => a~
	{ utf_a3,	utf_a4 },				//	a? => a~
	{ utf_a4,	utf_a, '4' },			//	a~ => ax
	{ utf_a5,	utf_a4 },				//	a. => a~
    
	{ utf_a6,	utf_a64 },				//	a^ => a^~
	{ utf_a61,	utf_a64 },				//	a^' => a^~
	{ utf_a62,	utf_a64 },				//	a^` => a^~
	{ utf_a63,	utf_a64 },				//	a^? => a^~
	{ utf_a64,	utf_a6, '4' },		//	a^~ => a^x
	{ utf_a65,	utf_a64 },				//	a^. => a^~
    
	{ utf_a8,	utf_a84 },				//	a( => a(~
	{ utf_a81,	utf_a84 },				//	a(' => a(~
	{ utf_a82,	utf_a84 },				//	a(` => a(~
	{ utf_a83,	utf_a84 },				//	a(? => a(~
	{ utf_a84,	utf_a8, '4' },		//	a(~ => a(x
	{ utf_a85,	utf_a84 },				//	a(. => a(~
    
	{ utf_e,	utf_e4 },				//	e => e~
	{ utf_e1,	utf_e4 },				//	e' => e~
	{ utf_e2,	utf_e4 },				//	e` => e~
	{ utf_e3,	utf_e4 },				//	e? => e~
	{ utf_e4,	utf_e, '4' },			//	e~ => ex
	{ utf_e5,	utf_e4 },				//	e. => e~
    
	{ utf_e6,	utf_e64 },				//	e^ => e^~
	{ utf_e61,	utf_e64 },				//	e^' => e^~
	{ utf_e62,	utf_e64 },				//	e^` => e^~
	{ utf_e63,	utf_e64 },				//	e^? => e^~
	{ utf_e64,	utf_e6, '4' },		//	e^~ => e^x
	{ utf_e65,	utf_e64 },				//	e^. => e^~
    
	{ utf_o,	utf_o4 },				//	o => o~
	{ utf_o1,	utf_o4 },				//	o' => o~
	{ utf_o2,	utf_o4 },				//	o` => o~
	{ utf_o3,	utf_o4 },				//	o? => o~
	{ utf_o4,	utf_o, '4' },			//	o~ => ox
	{ utf_o5,	utf_o4 },				//	o. => o~
    
	{ utf_o6,	utf_o64 },				//	o^ => o^~
	{ utf_o61,	utf_o64 },				//	o^' => o^~
	{ utf_o62,	utf_o64 },				//	o^` => o^~
	{ utf_o63,	utf_o64 },				//	o^? => o^~
	{ utf_o64,	utf_o6, '4' },		//	o^~ => o^x
	{ utf_o65,	utf_o64 },				//	o^. => o^~
    
	{ utf_o7,	utf_o74 },				//	o+ => o+~
	{ utf_o71,	utf_o74 },				//	o+' => o+~
	{ utf_o72,	utf_o74 },				//	o+` => o+~
	{ utf_o73,	utf_o74 },				//	o+? => o+~
	{ utf_o74,	utf_o7, '4' },		//	o+~ => o+x
	{ utf_o75,	utf_o74 },				//	o+. => o+~
    
	{ utf_u,	utf_u4 },				//	u => u~
	{ utf_u1,	utf_u4 },				//	u' => u~
	{ utf_u2,	utf_u4 },				//	u` => u~
	{ utf_u3,	utf_u4 },				//	u? => u~
	{ utf_u4,	utf_u, '4' },			//	u~ => ux
	{ utf_u5,	utf_u4 },				//	u. => u~
    
	{ utf_u7,	utf_u74 },				//	u+ => u+~
	{ utf_u71,	utf_u74 },				//	u+' => u+~
	{ utf_u72,	utf_u74 },				//	u+` => u+~
	{ utf_u73,	utf_u74 },				//	u+? => u+~
	{ utf_u74,	utf_u7, '4' },		//	u+~ => u+x
	{ utf_u75,	utf_u74 },				//	u+. => u+~
    
	{ utf_i,	utf_i4 },				//	i => i~
	{ utf_i1,	utf_i4 },				//	i' => i~
	{ utf_i2,	utf_i4 },				//	i` => i~
	{ utf_i3,	utf_i4 },				//	i? => i~
	{ utf_i4,	utf_i, '4' },			//	i~ => ix
	{ utf_i5,	utf_i4 },				//	i. => i~
    
	{ utf_y,	utf_y4 },				//	y => Y~
	{ utf_y1,	utf_y4 },				//	y' => y~
	{ utf_y2,	utf_y4 },				//	y` => y~
	{ utf_y3,	utf_y4 },				//	y? => y~
	{ utf_y4,	utf_y, '4' },			//	y~ => yx
	{ utf_y5,	utf_y4 },				//	y. => y~
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_5[] =
{
	{ utf_A,	utf_A5 },				//	A => A.
	{ utf_A1,	utf_A5 },				//	A' => A.
	{ utf_A2,	utf_A5 },				//	A` => A.
	{ utf_A3,	utf_A5 },				//	A? => A.
	{ utf_A4,	utf_A5 },				//	A~ => A.
	{ utf_A5,	utf_A, '5' },			//	A. => AJ
    
	{ utf_A6,	utf_A65 },				//	A^ => A^.
	{ utf_A61,	utf_A65 },				//	A^' => A^.
	{ utf_A62,	utf_A65 },				//	A^` => A^.
	{ utf_A63,	utf_A65 },				//	A^? => A^.
	{ utf_A64,	utf_A65 },				//	A^~ => A^.
	{ utf_A65,	utf_A6, '5' },		//	A^. => A^J
    
	{ utf_A8,	utf_A85 },				//	A( => A(.
	{ utf_A81,	utf_A85 },				//	A(' => A(.
	{ utf_A82,	utf_A85 },				//	A(` => A(.
	{ utf_A83,	utf_A85 },				//	A(? => A(.
	{ utf_A84,	utf_A85 },				//	A(~ => A(.
	{ utf_A85,	utf_A8, '5' },		//	A(. => A(J
    
	{ utf_E,	utf_E5 },				//	E => E.
	{ utf_E1,	utf_E5 },				//	E' => E.
	{ utf_E2,	utf_E5 },				//	E` => E.
	{ utf_E3,	utf_E5 },				//	E? => E.
	{ utf_E4,	utf_E5 },				//	E~ => E.
	{ utf_E5,	utf_E, '5' },			//	E. => EJ
    
	{ utf_E6,	utf_E65 },				//	E^ => E^.
	{ utf_E61,	utf_E65 },				//	E^' => E^.
	{ utf_E62,	utf_E65 },				//	E^` => E^.
	{ utf_E63,	utf_E65 },				//	E^? => E^.
	{ utf_E64,	utf_E65 },				//	E^~ => E^.
	{ utf_E65,	utf_E6, '5' },		//	E^. => E^J
    
	{ utf_O,	utf_O5 },				//	O => O.
	{ utf_O1,	utf_O5 },				//	O' => O.
	{ utf_O2,	utf_O5 },				//	O` => O.
	{ utf_O3,	utf_O5 },				//	O? => O.
	{ utf_O4,	utf_O5 },				//	O~ => O.
	{ utf_O5,	utf_O, '5' },			//	O. => OJ
    
	{ utf_O6,	utf_O65 },				//	O^ => O^.
	{ utf_O61,	utf_O65 },				//	O^' => O^.
	{ utf_O62,	utf_O65 },				//	O^` => O^.
	{ utf_O63,	utf_O65 },				//	O^? => O^.
	{ utf_O64,	utf_O65 },				//	O^~ => O^.
	{ utf_O65,	utf_O6, '5' },		//	O^. => O^J
    
	{ utf_O7,	utf_O75 },				//	O+ => O+.
	{ utf_O71,	utf_O75 },				//	O+' => O+.
	{ utf_O72,	utf_O75 },				//	O+` => O+.
	{ utf_O73,	utf_O75 },				//	O+? => O+.
	{ utf_O74,	utf_O75 },				//	O+~ => O+.
	{ utf_O75,	utf_O7, '5' },		//	O+. => O+J
    
	{ utf_U,	utf_U5 },				//	U => U.
	{ utf_U1,	utf_U5 },				//	U' => U.
	{ utf_U2,	utf_U5 },				//	U` => U.
	{ utf_U3,	utf_U5 },				//	U? => U.
	{ utf_U4,	utf_U5 },				//	U~ => U.
	{ utf_U5,	utf_U, '5' },			//	U. => UJ
    
	{ utf_U7,	utf_U75 },				//	U+ => U+.
	{ utf_U71,	utf_U75 },				//	U+' => U+.
	{ utf_U72,	utf_U75 },				//	U+` => U+.
	{ utf_U73,	utf_U75 },				//	U+? => U+.
	{ utf_U74,	utf_U75 },				//	U+~ => U+.
	{ utf_U75,	utf_U7, '5' },		//	U+. => U+J
    
	{ utf_I,	utf_I5 },				//	I => I.
	{ utf_I1,	utf_I5 },				//	I' => I.
	{ utf_I2,	utf_I5 },				//	I` => I.
	{ utf_I3,	utf_I5 },				//	I? => I.
	{ utf_I4,	utf_I5 },				//	I~ => I.
	{ utf_I5,	utf_I, '5' },			//	I. => IJ
    
	{ utf_Y,	utf_Y5 },				//	Y => Y.
	{ utf_Y1,	utf_Y5 },				//	Y' => Y.
	{ utf_Y2,	utf_Y5 },				//	Y` => Y.
	{ utf_Y3,	utf_Y5 },				//	Y? => Y.
	{ utf_Y4,	utf_Y5 },				//	Y~ => Y.
	{ utf_Y5,	utf_Y, '5' },			//	Y. => YJ
    
	{ utf_a,	utf_a5 },				//	a => a.
	{ utf_a1,	utf_a5 },				//	a' => a.
	{ utf_a2,	utf_a5 },				//	a` => a.
	{ utf_a3,	utf_a5 },				//	a? => a.
	{ utf_a4,	utf_a5 },				//	a~ => a.
	{ utf_a5,	utf_a, '5' },			//	a. => aj
    
	{ utf_a6,	utf_a65 },				//	a^ => a^.
	{ utf_a61,	utf_a65 },				//	a^' => a^.
	{ utf_a62,	utf_a65 },				//	a^` => a^.
	{ utf_a63,	utf_a65 },				//	a^? => a^.
	{ utf_a64,	utf_a65 },				//	a^~ => a^.
	{ utf_a65,	utf_a6, '5' },		//	a^. => a^j
    
	{ utf_a8,	utf_a85 },				//	a( => a(.
	{ utf_a81,	utf_a85 },				//	a(' => a(.
	{ utf_a82,	utf_a85 },				//	a(` => a(.
	{ utf_a83,	utf_a85 },				//	a(? => a(.
	{ utf_a84,	utf_a85 },				//	a(~ => a(.
	{ utf_a85,	utf_a8, '5' },		//	a(. => a(j
    
	{ utf_e,	utf_e5 },				//	e => e.
	{ utf_e1,	utf_e5 },				//	e' => e.
	{ utf_e2,	utf_e5 },				//	e` => e.
	{ utf_e3,	utf_e5 },				//	e? => e.
	{ utf_e4,	utf_e5 },				//	e~ => e.
	{ utf_e5,	utf_e, '5' },			//	e. => ej
    
	{ utf_e6,	utf_e65 },				//	e^ => e^.
	{ utf_e61,	utf_e65 },				//	e^' => e^.
	{ utf_e62,	utf_e65 },				//	e^` => e^.
	{ utf_e63,	utf_e65 },				//	e^? => e^.
	{ utf_e64,	utf_e65 },				//	e^~ => e^.
	{ utf_e65,	utf_e6, '5' },		//	e^. => e^j
    
	{ utf_o,	utf_o5 },				//	o => o.
	{ utf_o1,	utf_o5 },				//	o' => o.
	{ utf_o2,	utf_o5 },				//	o` => o.
	{ utf_o3,	utf_o5 },				//	o? => o.
	{ utf_o4,	utf_o5 },				//	o~ => o.
	{ utf_o5,	utf_o, '5' },			//	o. => oj
    
	{ utf_o6,	utf_o65 },				//	o^ => o^.
	{ utf_o61,	utf_o65 },				//	o^' => o^.
	{ utf_o62,	utf_o65 },				//	o^` => o^.
	{ utf_o63,	utf_o65 },				//	o^? => o^.
	{ utf_o64,	utf_o65 },				//	o^~ => o^.
	{ utf_o65,	utf_o6, '5' },		//	o^. => o^j
    
	{ utf_o7,	utf_o75 },				//	o+ => o+.
	{ utf_o71,	utf_o75 },				//	o+' => o+.
	{ utf_o72,	utf_o75 },				//	o+` => o+.
	{ utf_o73,	utf_o75 },				//	o+? => o+.
	{ utf_o74,	utf_o75 },				//	o+~ => o+.
	{ utf_o75,	utf_o7, '5' },		//	o+. => o+j
    
	{ utf_u,	utf_u5 },				//	u => u.
	{ utf_u1,	utf_u5 },				//	u' => u.
	{ utf_u2,	utf_u5 },				//	u` => u.
	{ utf_u3,	utf_u5 },				//	u? => u.
	{ utf_u4,	utf_u5 },				//	u~ => u.
	{ utf_u5,	utf_u, '5' },			//	u. => uj
    
	{ utf_u7,	utf_u75 },				//	u+ => u+.
	{ utf_u71,	utf_u75 },				//	u+' => u+.
	{ utf_u72,	utf_u75 },				//	u+` => u+.
	{ utf_u73,	utf_u75 },				//	u+? => u+.
	{ utf_u74,	utf_u75 },				//	u+~ => u+.
	{ utf_u75,	utf_u7, '5' },		//	u+. => u+j
    
	{ utf_i,	utf_i5 },				//	i => i.
	{ utf_i1,	utf_i5 },				//	i' => i.
	{ utf_i2,	utf_i5 },				//	i` => i.
	{ utf_i3,	utf_i5 },				//	i? => i.
	{ utf_i4,	utf_i5 },				//	i~ => i.
	{ utf_i5,	utf_i, '5' },			//	i. => ij
    
	{ utf_y,	utf_y5 },				//	y => Y.
	{ utf_y1,	utf_y5 },				//	y' => y.
	{ utf_y2,	utf_y5 },				//	y` => y.
	{ utf_y3,	utf_y5 },				//	y? => y.
	{ utf_y4,	utf_y5 },				//	y~ => y.
	{ utf_y5,	utf_y, '5' },			//	y. => yj
	{ 0 }
};
/*----------------------------------------------------------------------------*/
modifier_t vni[] =
{
	{1, '6', code_6},
	{1, '7', code_7},
	{1, '8', code_8},
	{1, '9', code_9},
	{1, '_', code_sign},
	{2, '1', code_1},
	{2, '2', code_2},
	{2, '3', code_3},
	{2, '4', code_4},
	{2, '5', code_5},
	{2, '0', code_z},
	{0, 0, 0}
};
/*----------------------------------------------------------------------------*/
modifier_t viqr[] =
{
	{1, '^', code_6},
	{1, '+', code_7},
	{1, '*', code_7},
	{1, '(', code_8},
	{1, 'D', code_D},
	{1, 'd', code_d},
	{1, '_', code_sign},
	{2, '\'', code_1},
	{2, '`', code_2},
	{2, '?', code_3},
	{2, '~', code_4},
	{2, '.', code_5},
	{2, '=', code_z},
	{0, 0, 0}
};
/*----------------------------------------------------------------------------*/
modifier_t *modes[] = { vni, telex, viqr };
/*----------------------------------------------------------------------------*/
ushort UTF16[] = {
	utf_A,  utf_A1,  utf_A2,  utf_A3,  utf_A4,  utf_A5,
	utf_A6, utf_A61, utf_A62, utf_A63, utf_A64, utf_A65,
	utf_A8, utf_A81, utf_A82, utf_A83, utf_A84, utf_A85,
	utf_E,  utf_E1,  utf_E2,  utf_E3,  utf_E4,  utf_E5,
	utf_E6, utf_E61, utf_E62, utf_E63, utf_E64, utf_E65,
	utf_O,  utf_O1,  utf_O2,  utf_O3,  utf_O4,  utf_O5,
	utf_O6, utf_O61, utf_O62, utf_O63, utf_O64, utf_O65,
	utf_O7, utf_O71, utf_O72, utf_O73, utf_O74, utf_O75,
	utf_U,  utf_U1,  utf_U2,  utf_U3,  utf_U4,  utf_U5,
	utf_U7, utf_U71, utf_U72, utf_U73, utf_U74, utf_U75,
	utf_I,  utf_I1,  utf_I2,  utf_I3,  utf_I4,  utf_I5,
	utf_Y,  utf_Y1,  utf_Y2,  utf_Y3,  utf_Y4,  utf_Y5,
	utf_D9,
	utf_a,  utf_a1,  utf_a2,  utf_a3,  utf_a4,  utf_a5,
	utf_a6, utf_a61, utf_a62, utf_a63, utf_a64, utf_a65,
	utf_a8, utf_a81, utf_a82, utf_a83, utf_a84, utf_a85,
	utf_e,  utf_e1,  utf_e2,  utf_e3,  utf_e4,  utf_e5,
	utf_e6, utf_e61, utf_e62, utf_e63, utf_e64, utf_e65,
	utf_o,  utf_o1,  utf_o2,  utf_o3,  utf_o4,  utf_o5,
	utf_o6, utf_o61, utf_o62, utf_o63, utf_o64, utf_o65,
	utf_o7, utf_o71, utf_o72, utf_o73, utf_o74, utf_o75,
	utf_u,  utf_u1,  utf_u2,  utf_u3,  utf_u4,  utf_u5,
	utf_u7, utf_u71, utf_u72, utf_u73, utf_u74, utf_u75,
	utf_i,  utf_i1,  utf_i2,  utf_i3,  utf_i4,  utf_i5,
	utf_y,  utf_y1,  utf_y2,  utf_y3,  utf_y4,  utf_y5,
	utf_d9,
	utf_vnd,
	0
};
/*----------------------------------------------------------------------------*/

char *UTF8[] = {
    "A","Á","À","Ả","Ã","Ạ",
    "Â","Ấ","Ầ","Ẩ","Ẫ","Ậ",
    "Ă","Ắ","Ằ","Ẳ","Ẵ","Ặ",
    "E","É","È","Ẻ","Ẽ","Ẹ",
    "Ê","Ế","Ề","Ể","Ễ","Ệ",
    "O","Ó","Ò","Ỏ","Õ","Ọ",
    "Ô","Ố","Ồ","Ổ","Ỗ","Ộ",
    "Ơ","Ớ","Ờ","Ở","Ỡ","Ợ",
    "U","Ú","Ù","Ủ","Ũ","Ụ",
    "Ư","Ứ","Ừ","Ử","Ữ","Ự",
    "I","Í","Ì","Ỉ","Ĩ","Ị",
    "Y","Ý","Ỳ","Ỷ","Ỹ","Ỵ",
    "Đ",
    "a","á","à","ả","ã","ạ",
    "â","ấ","ầ","ẩ","ẫ","ậ",
    "ă","ắ","ằ","ẳ","ẵ","ặ",
    "e","é","è","ẻ","ẽ","ẹ",
    "ê","ế","ề","ể","ễ","ệ",
    "o","ó","ò","ỏ","õ","ọ",
    "ô","ố","ồ","ổ","ỗ","ộ",
    "ơ","ớ","ờ","ở","ỡ","ợ",
    "u","ú","ù","ủ","ũ","ụ",
    "ư","ứ","ừ","ử","ữ","ự",
    "i","í","ì","ỉ","ĩ","ị",
    "y","ý","ỳ","ỷ","ỹ","ỵ",
    "đ",
    "₫"
};

char modifiedChars[] = "aeiouyd";
char vniModifierKeys[] =  "123456789";
char telexModifierKeys[] = "sfrxjaeowd";

ushort vniModifiersMap[] = {
    191, 63, 31, 127, 95,  31, 256
};

ushort telexModifiersMap[] = {
    319, 95, 31, 415, 287, 31, 512
};

char* modifierKeys[] = {
    vniModifierKeys, telexModifierKeys
};

ushort *modifiersMap[] = {
    vniModifiersMap, telexModifiersMap
};

#endif