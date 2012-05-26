/*----------------------------------------------------------------------------*/
/*  telex-standard.h                                                          */
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
#ifndef __VK_TELEX_STANDARD
#define __VK_TELEX_STANDARD
/*----------------------------------------------------------------------------*/
vietcode_t code_A[] =
{
	{ utf_A,	utf_A6 },				//	A => A^
	{ utf_A1,	utf_A61 },				//	A => A^'
	{ utf_A2,	utf_A62 },				//	A => A^`
	{ utf_A3,	utf_A63 },				//	A => A^?
	{ utf_A4,	utf_A64 },				//	A => A^~
	{ utf_A5,	utf_A65 },				//	A => A^.
	{ utf_A6,	utf_A, utf_A },			//	A^ => AA
	{ utf_A61,	utf_A1, utf_A },		//	A^' => A'A
	{ utf_A62,	utf_A2, utf_A },		//	A^` => A`A
	{ utf_A63,	utf_A3, utf_A },		//	A^? => A?A
	{ utf_A64,	utf_A4, utf_A },		//	A^~ => A~A
	{ utf_A65,	utf_A5, utf_A },		//	A^. => A.A
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
	{ utf_a6,	utf_a, utf_A },			//	a^ => aA
	{ utf_a61,	utf_a1, utf_A },		//	a^' => a'A
	{ utf_a62,	utf_a2, utf_A },		//	a^` => a`A
	{ utf_a63,	utf_a3, utf_A },		//	a^? => a?A
	{ utf_a64,	utf_a4, utf_A },		//	a^~ => a~A
	{ utf_a65,	utf_a5, utf_A },		//	a^. => a.A
	{ utf_a8,	utf_a6 },				//	a( => a^
	{ utf_a81,	utf_a61 },				//	a(' => a^'
	{ utf_a82,	utf_a62 },				//	a(` => a^`
	{ utf_a83,	utf_a63 },				//	a(? => a^?
	{ utf_a84,	utf_a64 },				//	a(~ => a^~
	{ utf_a85,	utf_a65 },				//	a(. => a^.
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_a[] =
{
	{ utf_A,	utf_A6 },				//	A => A^
	{ utf_A1,	utf_A61 },				//	A' => A^'
	{ utf_A2,	utf_A62 },				//	A` => A^`
	{ utf_A3,	utf_A63 },				//	A? => A^?
	{ utf_A4,	utf_A64 },				//	A~ => A^~
	{ utf_A5,	utf_A65 },				//	A. => A^.
	{ utf_A6,	utf_A, utf_a },			//	A^ => Aa
	{ utf_A61,	utf_A1, utf_a },		//	A^' => A'a
	{ utf_A62,	utf_A2, utf_a },		//	A^` => A`a
	{ utf_A63,	utf_A3, utf_a },		//	A^? => A?a
	{ utf_A64,	utf_A4, utf_a },		//	A^~ => A~a
	{ utf_A65,	utf_A5, utf_a },		//	A^. => A.a
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
	{ utf_a6,	utf_a, utf_a },			//	a^ => aa
	{ utf_a61,	utf_a1, utf_a },		//	a^' => a'a
	{ utf_a62,	utf_a2, utf_a },		//	a^` => a`a
	{ utf_a63,	utf_a3, utf_a },		//	a^? => a?a
	{ utf_a64,	utf_a4, utf_a },		//	a^~ => a~a
	{ utf_a65,	utf_a5, utf_a },		//	a^. => a.a
	{ utf_a8,	utf_a6 },				//	a( => a^
	{ utf_a81,	utf_a61 },				//	a(' => a^'
	{ utf_a82,	utf_a62 },				//	a(` => a^`
	{ utf_a83,	utf_a63 },				//	a(? => a^?
	{ utf_a84,	utf_a64 },				//	a(~ => a^~
	{ utf_a85,	utf_a65 },				//	a(. => a^.
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_E[] =
{
	{ utf_E,	utf_E6 },				//	E => E^
	{ utf_E1,	utf_E61 },				//	E' => E^'
	{ utf_E2,	utf_E62 },				//	E` => E^`
	{ utf_E3,	utf_E63 },				//	E? => E^?
	{ utf_E4,	utf_E64 },				//	E~ => E^~
	{ utf_E5,	utf_E65 },				//	E. => E^.
	{ utf_E6,	utf_E, utf_E },			//	E^ => EE
	{ utf_E61,	utf_E1, utf_E },		//	E^' => E'E
	{ utf_E62,	utf_E2, utf_E },		//	E^` => E`E
	{ utf_E63,	utf_E3, utf_E },		//	E^? => E?E
	{ utf_E64,	utf_E4, utf_E },		//	E^~ => E~E
	{ utf_E65,	utf_E5, utf_E },		//	E^. => E.E
	{ utf_e,	utf_e6 },				//	e => e^
	{ utf_e1,	utf_e61 },				//	e' => e^'
	{ utf_e2,	utf_e62 },				//	e` => e^`
	{ utf_e3,	utf_e63 },				//	e? => e^?
	{ utf_e4,	utf_e64 },				//	e~ => e^~
	{ utf_e5,	utf_e65 },				//	e. => e^.
	{ utf_e6,	utf_e, utf_E },			//	e^ => eE
	{ utf_e61,	utf_e1, utf_E },		//	e^' => e'E
	{ utf_e62,	utf_e2, utf_E },		//	e^` => e`E
	{ utf_e63,	utf_e3, utf_E },		//	e^? => e?E
	{ utf_e64,	utf_e4, utf_E },		//	e^~ => e~E
	{ utf_e65,	utf_e5, utf_E },		//	e^. => e.E
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_e[] =
{
	{ utf_E,	utf_E6 },				//	E => E^
	{ utf_E1,	utf_E61 },				//	E' => E^'
	{ utf_E2,	utf_E62 },				//	E` => E^`
	{ utf_E3,	utf_E63 },				//	E? => E^?
	{ utf_E4,	utf_E64 },				//	E~ => E^~
	{ utf_E5,	utf_E65 },				//	E. => E^.
	{ utf_E6,	utf_E, utf_e },			//	E^ => Ee
	{ utf_E61,	utf_E1, utf_e },		//	E^' => E'e
	{ utf_E62,	utf_E2, utf_e },		//	E^` => E`e
	{ utf_E63,	utf_E3, utf_e },		//	E^? => E?e
	{ utf_E64,	utf_E4, utf_e },		//	E^~ => E~e
	{ utf_E65,	utf_E5, utf_e },		//	E^. => E.e
	{ utf_e,	utf_e6 },				//	e => e^
	{ utf_e1,	utf_e61 },				//	e' => e^'
	{ utf_e2,	utf_e62 },				//	e` => e^`
	{ utf_e3,	utf_e63 },				//	e? => e^?
	{ utf_e4,	utf_e64 },				//	e~ => e^~
	{ utf_e5,	utf_e65 },				//	e. => e^.
	{ utf_e6,	utf_e, utf_e },			//	e^ => ee
	{ utf_e61,	utf_e1, utf_e },		//	e^' => e'e
	{ utf_e62,	utf_e2, utf_e },		//	e^` => e`e
	{ utf_e63,	utf_e3, utf_e },		//	e^? => e?e
	{ utf_e64,	utf_e4, utf_e },		//	e^~ => e~e
	{ utf_e65,	utf_e5, utf_e },		//	e^. => e.e
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_O[] =
{
	{ utf_O,	utf_O6 },				//	O => O^
	{ utf_O1,	utf_O61 },				//	O' => O^'
	{ utf_O2,	utf_O62 },				//	O` => O^`
	{ utf_O3,	utf_O63 },				//	O? => O^?
	{ utf_O4,	utf_O64 },				//	O~ => O^~
	{ utf_O5,	utf_O65 },				//	O. => O^.
	{ utf_O6,	utf_O, utf_O },			//	O^ => OO
	{ utf_O61,	utf_O1, utf_O },		//	O^' => O'O
	{ utf_O62,	utf_O2, utf_O },		//	O^` => O`O
	{ utf_O63,	utf_O3, utf_O },		//	O^? => O?O
	{ utf_O64,	utf_O4, utf_O },		//	O^~ => O~O
	{ utf_O65,	utf_O5, utf_O },		//	O^. => O.O
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
	{ utf_o6,	utf_o, utf_O },			//	o^ => oO
	{ utf_o61,	utf_o1, utf_O },		//	o^' => o'O
	{ utf_o62,	utf_o2, utf_O },		//	o^` => o`O
	{ utf_o63,	utf_o3, utf_O },		//	o^? => o?O
	{ utf_o64,	utf_o4, utf_O },		//	o^~ => o~O
	{ utf_o65,	utf_o5, utf_O },		//	o^. => o.O
	{ utf_o7,	utf_o6 },				//	o+ => o^
	{ utf_o71,	utf_o61 },				//	o+' => o^'
	{ utf_o72,	utf_o62 },				//	o+` => o^`
	{ utf_o73,	utf_o63 },				//	o+? => o^?
	{ utf_o74,	utf_o64 },				//	o+~ => o^~
	{ utf_o75,	utf_o65 },				//	o+. => o^.
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_o[] =
{
	{ utf_O,	utf_O6 },				//	O => O^
	{ utf_O1,	utf_O61 },				//	O' => O^'
	{ utf_O2,	utf_O62 },				//	O` => O^`
	{ utf_O3,	utf_O63 },				//	O? => O^?
	{ utf_O4,	utf_O64 },				//	O~ => O^~
	{ utf_O5,	utf_O65 },				//	O. => O^.
	{ utf_O6,	utf_O, utf_o },			//	O^ => Oo
	{ utf_O61,	utf_O1, utf_o },		//	O^' => O'o
	{ utf_O62,	utf_O2, utf_o },		//	O^` => O`o
	{ utf_O63,	utf_O3, utf_o },		//	O^? => O?o
	{ utf_O64,	utf_O4, utf_o },		//	O^~ => O~o
	{ utf_O65,	utf_O5, utf_o },		//	O^. => O.o
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
	{ utf_o6,	utf_o, utf_o },			//	o^ => oo
	{ utf_o61,	utf_o1, utf_o },		//	o^' => o'o
	{ utf_o62,	utf_o2, utf_o },		//	o^` => o`o
	{ utf_o63,	utf_o3, utf_o },		//	o^? => o?o
	{ utf_o64,	utf_o4, utf_o },		//	o^~ => o~o
	{ utf_o65,	utf_o5, utf_o },		//	o^. => o.o
	{ utf_o7,	utf_o6 },				//	o+ => o^
	{ utf_o71,	utf_o61 },				//	o+' => o^'
	{ utf_o72,	utf_o62 },				//	o+` => o^`
	{ utf_o73,	utf_o63 },				//	o+? => o^?
	{ utf_o74,	utf_o64 },				//	o+~ => o^~
	{ utf_o75,	utf_o65 },				//	o+. => o^.
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_D[] =
{
	{ utf_D,	utf_D9 },				//	D => -D
	{ utf_D9,	utf_D, utf_D },			//	-D => DD
	{ utf_d,	utf_d9 },				//	d => -D
	{ utf_d9,	utf_d, utf_D },			//	-d => dD
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_d[] =
{
	{ utf_D,	utf_D9 },				//	D => -D
	{ utf_D9,	utf_D, utf_d },			//	-D => Dd
	{ utf_d,	utf_d9 },				//	d => -d
	{ utf_d9,	utf_d, utf_d },			//	-d => dd
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_W[] =
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
	{ utf_A8,	utf_A, utf_W },			//	A( => AW
	{ utf_A81,	utf_A1, utf_W },		//	A(' => A'W
	{ utf_A82,	utf_A2, utf_W },		//	A(` => A`W
	{ utf_A83,	utf_A3, utf_W },		//	A(? => A?W
	{ utf_A84,	utf_A4, utf_W },		//	A(~ => A~W
	{ utf_A85,	utf_A5, utf_W },		//	A(. => A.W
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
	{ utf_a8,	utf_a, utf_W },			//	a( => aW
	{ utf_a81,	utf_a1, utf_W },		//	a(' => a'W
	{ utf_a82,	utf_a2, utf_W },		//	a(` => a`W
	{ utf_a83,	utf_a3, utf_W },		//	a(? => a?W
	{ utf_a84,	utf_a4, utf_W },		//	a(~ => a~W
	{ utf_a85,	utf_a5, utf_W },		//	a(. => a.W
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
	{ utf_O7,	utf_O, utf_W },			//	O+ => OW
	{ utf_O71,	utf_O1, utf_W },		//	O+' => O'W
	{ utf_O72,	utf_O2, utf_W },		//	O+` => O`W
	{ utf_O73,	utf_O3, utf_W },		//	O+? => O?W
	{ utf_O74,	utf_O4, utf_W },		//	O+~ => O~W
	{ utf_O75,	utf_O5, utf_W },		//	O+. => O.W
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
	{ utf_o7,	utf_o, utf_W },			//	o+ => oW
	{ utf_o71,	utf_o1, utf_W },		//	o+' => o'W
	{ utf_o72,	utf_o2, utf_W },		//	o+` => o`W
	{ utf_o73,	utf_o3, utf_W },		//	o+? => o?W
	{ utf_o74,	utf_o4, utf_W },		//	o+~ => o~W
	{ utf_o75,	utf_o5, utf_W },		//	o+. => o.W
	{ utf_U,	utf_U7 },				//	U => U+
	{ utf_U1,	utf_U71 },				//	U' => U+'
	{ utf_U2,	utf_U72 },				//	U` => U+`
	{ utf_U3,	utf_U73 },				//	U? => U+?
	{ utf_U4,	utf_U74 },				//	U~ => U+~
	{ utf_U5,	utf_U75 },				//	U. => U+.
	{ utf_U7,	utf_U, utf_W },			//	U+ => UW
	{ utf_U71,	utf_U1, utf_W },		//	U+' => U'W
	{ utf_U72,	utf_U2, utf_W },		//	U+` => U`W
	{ utf_U73,	utf_U3, utf_W },		//	U+? => U?W
	{ utf_U74,	utf_U4, utf_W },		//	U+~ => U~W
	{ utf_U75,	utf_U5, utf_W },		//	U+. => U.W
	{ utf_u,	utf_u7 },				//	u => u+
	{ utf_u1,	utf_u71 },				//	u' => u+'
	{ utf_u2,	utf_u72 },				//	u` => u+`
	{ utf_u3,	utf_u73 },				//	u? => u+?
	{ utf_u4,	utf_u74 },				//	u~ => u+~
	{ utf_u5,	utf_u75 },				//	u. => u+.
	{ utf_u7,	utf_u, utf_W },			//	u+ => uW
	{ utf_u71,	utf_u1, utf_W },		//	u+' => u'W
	{ utf_u72,	utf_u2, utf_W },		//	u+` => u`W
	{ utf_u73,	utf_u3, utf_W },		//	u+? => u?W
	{ utf_u74,	utf_u4, utf_W },		//	u+~ => u~W
	{ utf_u75,	utf_u5, utf_W },		//	u+. => u.W
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_w[] =
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
	{ utf_A8,	utf_A, utf_w },			//	A( => Aw
	{ utf_A81,	utf_A1, utf_w },		//	A(' => A'w
	{ utf_A82,	utf_A2, utf_w },		//	A(` => A`w
	{ utf_A83,	utf_A3, utf_w },		//	A(? => A?w
	{ utf_A84,	utf_A4, utf_w },		//	A(~ => A~w
	{ utf_A85,	utf_A5, utf_w },		//	A(. => A.w
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
	{ utf_a8,	utf_a, utf_w },			//	a( => aw
	{ utf_a81,	utf_a1, utf_w },		//	a(' => a'w
	{ utf_a82,	utf_a2, utf_w },		//	a(` => a`w
	{ utf_a83,	utf_a3, utf_w },		//	a(? => a?w
	{ utf_a84,	utf_a4, utf_w },		//	a(~ => a~w
	{ utf_a85,	utf_a5, utf_w },		//	a(. => a.w
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
	{ utf_O7,	utf_O, utf_w },			//	O+ => Ow
	{ utf_O71,	utf_O1, utf_w },		//	O+' => O'w
	{ utf_O72,	utf_O2, utf_w },		//	O+` => O`w
	{ utf_O73,	utf_O3, utf_w },		//	O+? => O?w
	{ utf_O74,	utf_O4, utf_w },		//	O+~ => O~w
	{ utf_O75,	utf_O5, utf_w },		//	O+. => O.w
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
	{ utf_o7,	utf_o, utf_w },			//	o+ => ow
	{ utf_o71,	utf_o1, utf_w },		//	o+' => o'w
	{ utf_o72,	utf_o2, utf_w },		//	o+` => o`w
	{ utf_o73,	utf_o3, utf_w },		//	o+? => o?w
	{ utf_o74,	utf_o4, utf_w },		//	o+~ => o~w
	{ utf_o75,	utf_o5, utf_w },		//	o+. => o.w
	{ utf_U,	utf_U7 },				//	U => U+
	{ utf_U1,	utf_U71 },				//	U' => U+'
	{ utf_U2,	utf_U72 },				//	U` => U+`
	{ utf_U3,	utf_U73 },				//	U? => U+?
	{ utf_U4,	utf_U74 },				//	U~ => U+~
	{ utf_U5,	utf_U75 },				//	U. => U+.
	{ utf_U7,	utf_U, utf_w },			//	U+ => uw
	{ utf_U71,	utf_U1, utf_w },		//	U+' => U'w
	{ utf_U72,	utf_U2, utf_w },		//	U+` => U`w
	{ utf_U73,	utf_U3, utf_w },		//	U+? => U?w
	{ utf_U74,	utf_U4, utf_w },		//	U+~ => U~w
	{ utf_U75,	utf_U5, utf_w },		//	U+. => U.w
	{ utf_u,	utf_u7 },				//	u => u+
	{ utf_u1,	utf_u71 },				//	u' => u+'
	{ utf_u2,	utf_u72 },				//	u` => u+`
	{ utf_u3,	utf_u73 },				//	u? => u+?
	{ utf_u4,	utf_u74 },				//	u~ => u+~
	{ utf_u5,	utf_u75 },				//	u. => u+.
	{ utf_u7,	utf_u, utf_w },			//	u+ => uw
	{ utf_u71,	utf_u1, utf_w },		//	u+' => u'w
	{ utf_u72,	utf_u2, utf_w },		//	u+` => u`w
	{ utf_u73,	utf_u3, utf_w },		//	u+? => u?w
	{ utf_u74,	utf_u4, utf_w },		//	u+~ => u~w
	{ utf_u75,	utf_u5, utf_w },		//	u+. => u.w
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_S[] =
{
	{ utf_A,	utf_A1 },				//	A => A'
	{ utf_A1,	utf_A, utf_S },			//	A' => AS
	{ utf_A2,	utf_A1 },				//	A` => A'
	{ utf_A3,	utf_A1 },				//	A? => A'
	{ utf_A4,	utf_A1 },				//	A~ => A'
	{ utf_A5,	utf_A1 },				//	A. => A'
	{ utf_a,	utf_a1 },				//	a => a'
	{ utf_a1,	utf_a, utf_S },			//	a' => aS
	{ utf_a2,	utf_a1 },				//	a` => a'
	{ utf_a3,	utf_a1 },				//	a? => a'
	{ utf_a4,	utf_a1 },				//	a~ => a'
	{ utf_a5,	utf_a1 },				//	a. => a'

	{ utf_A6,	utf_A61 },				//	A^ => A^'
	{ utf_A61,	utf_A6, utf_S },		//	A^' => A^S
	{ utf_A62,	utf_A61 },				//	A^` => A^'
	{ utf_A63,	utf_A61 },				//	A^? => A^'
	{ utf_A64,	utf_A61 },				//	A^~ => A^'
	{ utf_A65,	utf_A61 },				//	A^. => A^'
	{ utf_a6,	utf_a61 },				//	a^ => a^'
	{ utf_a61,	utf_a6, utf_S },		//	a^' => a^S
	{ utf_a62,	utf_a61 },				//	a^` => a^'
	{ utf_a63,	utf_a61 },				//	a^? => a^'
	{ utf_a64,	utf_a61 },				//	a^~ => a^'
	{ utf_a65,	utf_a61 },				//	a^. => a^'

	{ utf_A8,	utf_A81 },				//	A( => A('
	{ utf_A81,	utf_A8, utf_S },		//	A(' => A(S
	{ utf_A82,	utf_A81 },				//	A(` => A('
	{ utf_A83,	utf_A81 },				//	A(? => A('
	{ utf_A84,	utf_A81 },				//	A(~ => A('
	{ utf_A85,	utf_A81 },				//	A(. => A('
	{ utf_a8,	utf_a81 },				//	a( => a('
	{ utf_a81,	utf_a8, utf_S },		//	a(' => a(S
	{ utf_a82,	utf_a81 },				//	a(` => a('
	{ utf_a83,	utf_a81 },				//	a(? => a('
	{ utf_a84,	utf_a81 },				//	a(~ => a('
	{ utf_a85,	utf_a81 },				//	a(. => a('

	{ utf_E,	utf_E1 },				//	E => E'
	{ utf_E1,	utf_E, utf_S },			//	E' => ES
	{ utf_E2,	utf_E1 },				//	E` => E'
	{ utf_E3,	utf_E1 },				//	E? => E'
	{ utf_E4,	utf_E1 },				//	E~ => E'
	{ utf_E5,	utf_E1 },				//	E. => E'
	{ utf_e,	utf_e1 },				//	e => e'
	{ utf_e1,	utf_e, utf_S },			//	e' => eS
	{ utf_e2,	utf_e1 },				//	e` => e'
	{ utf_e3,	utf_e1 },				//	e? => e'
	{ utf_e4,	utf_e1 },				//	e~ => e'
	{ utf_e5,	utf_e1 },				//	e. => e'

	{ utf_E6,	utf_E61 },				//	E^ => E^'
	{ utf_E61,	utf_E6, utf_S },		//	E^' => E^S
	{ utf_E62,	utf_E61 },				//	E^` => E^'
	{ utf_E63,	utf_E61 },				//	E^? => E^'
	{ utf_E64,	utf_E61 },				//	E^~ => E^'
	{ utf_E65,	utf_E61 },				//	E^. => E^'
	{ utf_e6,	utf_e61 },				//	e^ => e^'
	{ utf_e61,	utf_e6, utf_S },		//	e^' => e^S
	{ utf_e62,	utf_e61 },				//	e^` => e^'
	{ utf_e63,	utf_e61 },				//	e^? => e^'
	{ utf_e64,	utf_e61 },				//	e^~ => e^'
	{ utf_e65,	utf_e61 },				//	e^. => e^'

	{ utf_O,	utf_O1 },				//	O => O'
	{ utf_O1,	utf_O, utf_S },			//	O' => OS
	{ utf_O2,	utf_O1 },				//	O` => O'
	{ utf_O3,	utf_O1 },				//	O? => O'
	{ utf_O4,	utf_O1 },				//	O~ => O'
	{ utf_O5,	utf_O1 },				//	O. => O'
	{ utf_o,	utf_o1 },				//	o => o'
	{ utf_o1,	utf_o, utf_S },			//	o' => oS
	{ utf_o2,	utf_o1 },				//	o` => o'
	{ utf_o3,	utf_o1 },				//	o? => o'
	{ utf_o4,	utf_o1 },				//	o~ => o'
	{ utf_o5,	utf_o1 },				//	o. => o'

	{ utf_O6,	utf_O61 },				//	O^ => O^'
	{ utf_O61,	utf_O6, utf_S },		//	O^' => O^S
	{ utf_O62,	utf_O61 },				//	O^` => O^'
	{ utf_O63,	utf_O61 },				//	O^? => O^'
	{ utf_O64,	utf_O61 },				//	O^~ => O^'
	{ utf_O65,	utf_O61 },				//	O^. => O^'
	{ utf_o6,	utf_o61 },				//	o^ => o^'
	{ utf_o61,	utf_o6, utf_S },		//	o^' => o^S
	{ utf_o62,	utf_o61 },				//	o^` => o^'
	{ utf_o63,	utf_o61 },				//	o^? => o^'
	{ utf_o64,	utf_o61 },				//	o^~ => o^'
	{ utf_o65,	utf_o61 },				//	o^. => o^'

	{ utf_O7,	utf_O71 },				//	O+ => O+'
	{ utf_O71,	utf_O7, utf_S },		//	O+' => O+S
	{ utf_O72,	utf_O71 },				//	O+` => O+'
	{ utf_O73,	utf_O71 },				//	O+? => O+'
	{ utf_O74,	utf_O71 },				//	O+~ => O+'
	{ utf_O75,	utf_O71 },				//	O+. => O+'
	{ utf_o7,	utf_o71 },				//	o+ => o+'
	{ utf_o71,	utf_o7, utf_S },		//	o+' => o+S
	{ utf_o72,	utf_o71 },				//	o+` => o+'
	{ utf_o73,	utf_o71 },				//	o+? => o+'
	{ utf_o74,	utf_o71 },				//	o+~ => o+'
	{ utf_o75,	utf_o71 },				//	o+. => o+'

	{ utf_U,	utf_U1 },				//	U => U'
	{ utf_U1,	utf_U, utf_S },			//	U' => US
	{ utf_U2,	utf_U1 },				//	U` => U'
	{ utf_U3,	utf_U1 },				//	U? => U'
	{ utf_U4,	utf_U1 },				//	U~ => U'
	{ utf_U5,	utf_U1 },				//	U. => U'
	{ utf_u,	utf_u1 },				//	u => u'
	{ utf_u1,	utf_u, utf_S },			//	u' => uS
	{ utf_u2,	utf_u1 },				//	u` => u'
	{ utf_u3,	utf_u1 },				//	u? => u'
	{ utf_u4,	utf_u1 },				//	u~ => u'
	{ utf_u5,	utf_u1 },				//	u. => u'

	{ utf_U7,	utf_U71 },				//	U+ => U+'
	{ utf_U71,	utf_U7, utf_S },		//	U+' => U+S
	{ utf_U72,	utf_U71 },				//	U+` => U+'
	{ utf_U73,	utf_U71 },				//	U+? => U+'
	{ utf_U74,	utf_U71 },				//	U+~ => U+'
	{ utf_U75,	utf_U71 },				//	U+. => U+'
	{ utf_u7,	utf_u71 },				//	u+ => u+'
	{ utf_u71,	utf_u7, utf_S },		//	u+' => u+S
	{ utf_u72,	utf_u71 },				//	u+` => u+'
	{ utf_u73,	utf_u71 },				//	u+? => u+'
	{ utf_u74,	utf_u71 },				//	u+~ => u+'
	{ utf_u75,	utf_u71 },				//	u+. => u+'

	{ utf_I,	utf_I1 },				//	I => I'
	{ utf_I1,	utf_I, utf_S },			//	I' => IS
	{ utf_I2,	utf_I1 },				//	I` => I'
	{ utf_I3,	utf_I1 },				//	I? => I'
	{ utf_I4,	utf_I1 },				//	I~ => I'
	{ utf_I5,	utf_I1 },				//	I. => I'
	{ utf_i,	utf_i1 },				//	i => i'
	{ utf_i1,	utf_i, utf_S },			//	i' => iS
	{ utf_i2,	utf_i1 },				//	i` => i'
	{ utf_i3,	utf_i1 },				//	i? => i'
	{ utf_i4,	utf_i1 },				//	i~ => i'
	{ utf_i5,	utf_i1 },				//	i. => i'

	{ utf_Y,	utf_Y1 },				//	Y => Y'
	{ utf_Y1,	utf_Y, utf_S },			//	Y' => YS
	{ utf_Y2,	utf_Y1 },				//	Y` => Y'
	{ utf_Y3,	utf_Y1 },				//	Y? => Y'
	{ utf_Y4,	utf_Y1 },				//	Y~ => Y'
	{ utf_Y5,	utf_Y1 },				//	Y. => Y'
	{ utf_y,	utf_y1 },				//	y => y'
	{ utf_y1,	utf_y, utf_S },			//	y' => yS
	{ utf_y2,	utf_y1 },				//	y` => y'
	{ utf_y3,	utf_y1 },				//	y? => y'
	{ utf_y4,	utf_y1 },				//	y~ => y'
	{ utf_y5,	utf_y1 },				//	y. => y'
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_s[] =
{
	{ utf_A,	utf_A1 },				//	A => A'
	{ utf_A1,	utf_A, utf_s },			//	A' => As
	{ utf_A2,	utf_A1 },				//	A` => A'
	{ utf_A3,	utf_A1 },				//	A? => A'
	{ utf_A4,	utf_A1 },				//	A~ => A'
	{ utf_A5,	utf_A1 },				//	A. => A'
	{ utf_a,	utf_a1 },				//	a => a'
	{ utf_a1,	utf_a, utf_s },			//	a' => as
	{ utf_a2,	utf_a1 },				//	a` => a'
	{ utf_a3,	utf_a1 },				//	a? => a'
	{ utf_a4,	utf_a1 },				//	a~ => a'
	{ utf_a5,	utf_a1 },				//	a. => a'

	{ utf_A6,	utf_A61 },				//	A^ => A^'
	{ utf_A61,	utf_A6, utf_s },		//	A^' => A^s
	{ utf_A62,	utf_A61 },				//	A^` => A^'
	{ utf_A63,	utf_A61 },				//	A^? => A^'
	{ utf_A64,	utf_A61 },				//	A^~ => A^'
	{ utf_A65,	utf_A61 },				//	A^. => A^'
	{ utf_a6,	utf_a61 },				//	a^ => a^'
	{ utf_a61,	utf_a6, utf_s },		//	a^' => a^s
	{ utf_a62,	utf_a61 },				//	a^` => a^'
	{ utf_a63,	utf_a61 },				//	a^? => a^'
	{ utf_a64,	utf_a61 },				//	a^~ => a^'
	{ utf_a65,	utf_a61 },				//	a^. => a^'

	{ utf_A8,	utf_A81 },				//	A( => A('
	{ utf_A81,	utf_A8, utf_s },		//	A(' => A(s
	{ utf_A82,	utf_A81 },				//	A(` => A('
	{ utf_A83,	utf_A81 },				//	A(? => A('
	{ utf_A84,	utf_A81 },				//	A(~ => A('
	{ utf_A85,	utf_A81 },				//	A(. => A('
	{ utf_a8,	utf_a81 },				//	a( => a('
	{ utf_a81,	utf_a8, utf_s },		//	a(' => a(s
	{ utf_a82,	utf_a81 },				//	a(` => a('
	{ utf_a83,	utf_a81 },				//	a(? => a('
	{ utf_a84,	utf_a81 },				//	a(~ => a('
	{ utf_a85,	utf_a81 },				//	a(. => a('

	{ utf_E,	utf_E1 },				//	E => E'
	{ utf_E1,	utf_E, utf_s },			//	E' => Es
	{ utf_E2,	utf_E1 },				//	E` => E'
	{ utf_E3,	utf_E1 },				//	E? => E'
	{ utf_E4,	utf_E1 },				//	E~ => E'
	{ utf_E5,	utf_E1 },				//	E. => E'
	{ utf_e,	utf_e1 },				//	e => e'
	{ utf_e1,	utf_e, utf_s },			//	e' => es
	{ utf_e2,	utf_e1 },				//	e` => e'
	{ utf_e3,	utf_e1 },				//	e? => e'
	{ utf_e4,	utf_e1 },				//	e~ => e'
	{ utf_e5,	utf_e1 },				//	e. => e'

	{ utf_E6,	utf_E61 },				//	E^ => E^'
	{ utf_E61,	utf_E6, utf_s },		//	E^' => E^s
	{ utf_E62,	utf_E61 },				//	E^` => E^'
	{ utf_E63,	utf_E61 },				//	E^? => E^'
	{ utf_E64,	utf_E61 },				//	E^~ => E^'
	{ utf_E65,	utf_E61 },				//	E^. => E^'
	{ utf_e6,	utf_e61 },				//	e^ => e^'
	{ utf_e61,	utf_e6, utf_s },		//	e^' => e^s
	{ utf_e62,	utf_e61 },				//	e^` => e^'
	{ utf_e63,	utf_e61 },				//	e^? => e^'
	{ utf_e64,	utf_e61 },				//	e^~ => e^'
	{ utf_e65,	utf_e61 },				//	e^. => e^'

	{ utf_O,	utf_O1 },				//	O => O'
	{ utf_O1,	utf_O, utf_s },			//	O' => Os
	{ utf_O2,	utf_O1 },				//	O` => O'
	{ utf_O3,	utf_O1 },				//	O? => O'
	{ utf_O4,	utf_O1 },				//	O~ => O'
	{ utf_O5,	utf_O1 },				//	O. => O'
	{ utf_o,	utf_o1 },				//	o => o'
	{ utf_o1,	utf_o, utf_s },			//	o' => os
	{ utf_o2,	utf_o1 },				//	o` => o'
	{ utf_o3,	utf_o1 },				//	o? => o'
	{ utf_o4,	utf_o1 },				//	o~ => o'
	{ utf_o5,	utf_o1 },				//	o. => o'

	{ utf_O6,	utf_O61 },				//	O^ => O^'
	{ utf_O61,	utf_O6, utf_s },		//	O^' => O^s
	{ utf_O62,	utf_O61 },				//	O^` => O^'
	{ utf_O63,	utf_O61 },				//	O^? => O^'
	{ utf_O64,	utf_O61 },				//	O^~ => O^'
	{ utf_O65,	utf_O61 },				//	O^. => O^'
	{ utf_o6,	utf_o61 },				//	o^ => o^'
	{ utf_o61,	utf_o6, utf_s },		//	o^' => o^s
	{ utf_o62,	utf_o61 },				//	o^` => o^'
	{ utf_o63,	utf_o61 },				//	o^? => o^'
	{ utf_o64,	utf_o61 },				//	o^~ => o^'
	{ utf_o65,	utf_o61 },				//	o^. => o^'

	{ utf_O7,	utf_O71 },				//	O+ => O+'
	{ utf_O71,	utf_O7, utf_s },		//	O+' => O+s
	{ utf_O72,	utf_O71 },				//	O+` => O+'
	{ utf_O73,	utf_O71 },				//	O+? => O+'
	{ utf_O74,	utf_O71 },				//	O+~ => O+'
	{ utf_O75,	utf_O71 },				//	O+. => O+'
	{ utf_o7,	utf_o71 },				//	o+ => o+'
	{ utf_o71,	utf_o7, utf_s },		//	o+' => o+s
	{ utf_o72,	utf_o71 },				//	o+` => o+'
	{ utf_o73,	utf_o71 },				//	o+? => o+'
	{ utf_o74,	utf_o71 },				//	o+~ => o+'
	{ utf_o75,	utf_o71 },				//	o+. => o+'

	{ utf_U,	utf_U1 },				//	U => U'
	{ utf_U1,	utf_U, utf_s },			//	U' => Us
	{ utf_U2,	utf_U1 },				//	U` => U'
	{ utf_U3,	utf_U1 },				//	U? => U'
	{ utf_U4,	utf_U1 },				//	U~ => U'
	{ utf_U5,	utf_U1 },				//	U. => U'
	{ utf_u,	utf_u1 },				//	u => u'
	{ utf_u1,	utf_u, utf_s },			//	u' => us
	{ utf_u2,	utf_u1 },				//	u` => u'
	{ utf_u3,	utf_u1 },				//	u? => u'
	{ utf_u4,	utf_u1 },				//	u~ => u'
	{ utf_u5,	utf_u1 },				//	u. => u'

	{ utf_U7,	utf_U71 },				//	U+ => U+'
	{ utf_U71,	utf_U7, utf_s },		//	U+' => U+s
	{ utf_U72,	utf_U71 },				//	U+` => U+'
	{ utf_U73,	utf_U71 },				//	U+? => U+'
	{ utf_U74,	utf_U71 },				//	U+~ => U+'
	{ utf_U75,	utf_U71 },				//	U+. => U+'
	{ utf_u7,	utf_u71 },				//	u+ => u+'
	{ utf_u71,	utf_u7, utf_s },		//	u+' => u+s
	{ utf_u72,	utf_u71 },				//	u+` => u+'
	{ utf_u73,	utf_u71 },				//	u+? => u+'
	{ utf_u74,	utf_u71 },				//	u+~ => u+'
	{ utf_u75,	utf_u71 },				//	u+. => u+'

	{ utf_I,	utf_I1 },				//	I => I'
	{ utf_I1,	utf_I, utf_s },			//	I' => Is
	{ utf_I2,	utf_I1 },				//	I` => I'
	{ utf_I3,	utf_I1 },				//	I? => I'
	{ utf_I4,	utf_I1 },				//	I~ => I'
	{ utf_I5,	utf_I1 },				//	I. => I'
	{ utf_i,	utf_i1 },				//	i => i'
	{ utf_i1,	utf_i, utf_s },			//	i' => is
	{ utf_i2,	utf_i1 },				//	i` => i'
	{ utf_i3,	utf_i1 },				//	i? => i'
	{ utf_i4,	utf_i1 },				//	i~ => i'
	{ utf_i5,	utf_i1 },				//	i. => i'

	{ utf_Y,	utf_Y1 },				//	Y => Y'
	{ utf_Y1,	utf_Y, utf_s },			//	Y' => Ys
	{ utf_Y2,	utf_Y1 },				//	Y` => Y'
	{ utf_Y3,	utf_Y1 },				//	Y? => Y'
	{ utf_Y4,	utf_Y1 },				//	Y~ => Y'
	{ utf_Y5,	utf_Y1 },				//	Y. => Y'
	{ utf_y,	utf_y1 },				//	y => y'
	{ utf_y1,	utf_y, utf_s },			//	y' => ys
	{ utf_y2,	utf_y1 },				//	y` => y'
	{ utf_y3,	utf_y1 },				//	y? => y'
	{ utf_y4,	utf_y1 },				//	y~ => y'
	{ utf_y5,	utf_y1 },				//	y. => y'
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_F[] =
{
	{ utf_A,	utf_A2 },				//	A => A`
	{ utf_A1,	utf_A2 },				//	A' => A`
	{ utf_A2,	utf_A, utf_F },			//	A` => AF
	{ utf_A3,	utf_A2 },				//	A? => A`
	{ utf_A4,	utf_A2 },				//	A~ => A`
	{ utf_A5,	utf_A2 },				//	A. => A`
	{ utf_a,	utf_a2 },				//	a => a`
	{ utf_a1,	utf_a2 },				//	a' => a`
	{ utf_a2,	utf_a, utf_F },			//	a` => aF
	{ utf_a3,	utf_a2 },				//	a? => a`
	{ utf_a4,	utf_a2 },				//	a~ => a`
	{ utf_a5,	utf_a2 },				//	a. => a`

	{ utf_A6,	utf_A62 },				//	A^ => A^`
	{ utf_A61,	utf_A62 },				//	A^' => A^`
	{ utf_A62,	utf_A6, utf_F },		//	A^` => A^F
	{ utf_A63,	utf_A62 },				//	A^? => A^`
	{ utf_A64,	utf_A62 },				//	A^~ => A^`
	{ utf_A65,	utf_A62 },				//	A^. => A^`
	{ utf_a6,	utf_a62 },				//	a^ => a^`
	{ utf_a61,	utf_a62 },				//	a^' => a^`
	{ utf_a62,	utf_a6, utf_F },		//	a^` => a^F
	{ utf_a63,	utf_a62 },				//	a^? => a^`
	{ utf_a64,	utf_a62 },				//	a^~ => a^`
	{ utf_a65,	utf_a62 },				//	a^. => a^`

	{ utf_A8,	utf_A82 },				//	A( => A(`
	{ utf_A81,	utf_A82 },				//	A(' => A(`
	{ utf_A82,	utf_A8, utf_F },		//	A(` => A(F
	{ utf_A83,	utf_A82 },				//	A(? => A(`
	{ utf_A84,	utf_A82 },				//	A(~ => A(`
	{ utf_A85,	utf_A82 },				//	A(. => A(`
	{ utf_a8,	utf_a82 },				//	a( => a(`
	{ utf_a81,	utf_a82 },				//	a(' => a(`
	{ utf_a82,	utf_a8, utf_F },		//	a(` => a(F
	{ utf_a83,	utf_a82 },				//	a(? => a(`
	{ utf_a84,	utf_a82 },				//	a(~ => a(`
	{ utf_a85,	utf_a82 },				//	a(. => a(`

	{ utf_E,	utf_E2 },				//	E => E`
	{ utf_E1,	utf_E2 },				//	E' => E`
	{ utf_E2,	utf_E, utf_F },			//	E` => EF
	{ utf_E3,	utf_E2 },				//	E? => E`
	{ utf_E4,	utf_E2 },				//	E~ => E`
	{ utf_E5,	utf_E2 },				//	E. => E`
	{ utf_e,	utf_e2 },				//	e => e`
	{ utf_e1,	utf_e2 },				//	e' => e`
	{ utf_e2,	utf_e, utf_F },			//	e` => eF
	{ utf_e3,	utf_e2 },				//	e? => e`
	{ utf_e4,	utf_e2 },				//	e~ => e`
	{ utf_e5,	utf_e2 },				//	e. => e`

	{ utf_E6,	utf_E62 },				//	E^ => E^`
	{ utf_E61,	utf_E62 },				//	E^' => E^`
	{ utf_E62,	utf_E6, utf_F },		//	E^` => E^F
	{ utf_E63,	utf_E62 },				//	E^? => E^`
	{ utf_E64,	utf_E62 },				//	E^~ => E^`
	{ utf_E65,	utf_E62 },				//	E^. => E^`
	{ utf_e6,	utf_e62 },				//	e^ => e^`
	{ utf_e61,	utf_e62 },				//	e^' => e^`
	{ utf_e62,	utf_e6, utf_F },		//	e^` => e^F
	{ utf_e63,	utf_e62 },				//	e^? => e^`
	{ utf_e64,	utf_e62 },				//	e^~ => e^`
	{ utf_e65,	utf_e62 },				//	e^. => e^`

	{ utf_O,	utf_O2 },				//	O => O`
	{ utf_O1,	utf_O2 },				//	O' => O`
	{ utf_O2,	utf_O, utf_F },			//	O` => OF
	{ utf_O3,	utf_O2 },				//	O? => O`
	{ utf_O4,	utf_O2 },				//	O~ => O`
	{ utf_O5,	utf_O2 },				//	O. => O`
	{ utf_o,	utf_o2 },				//	o => o`
	{ utf_o1,	utf_o2 },				//	o' => o`
	{ utf_o2,	utf_o, utf_F },			//	o` => oF
	{ utf_o3,	utf_o2 },				//	o? => o`
	{ utf_o4,	utf_o2 },				//	o~ => o`
	{ utf_o5,	utf_o2 },				//	o. => o`

	{ utf_O6,	utf_O62 },				//	O^ => O^`
	{ utf_O61,	utf_O62 },				//	O^' => O^`
	{ utf_O62,	utf_O6, utf_F },		//	O^` => O^F
	{ utf_O63,	utf_O62 },				//	O^? => O^`
	{ utf_O64,	utf_O62 },				//	O^~ => O^`
	{ utf_O65,	utf_O62 },				//	O^. => O^`
	{ utf_o6,	utf_o62 },				//	o^ => o^`
	{ utf_o61,	utf_o62 },				//	o^' => o^`
	{ utf_o62,	utf_o6, utf_F },		//	o^` => o^F
	{ utf_o63,	utf_o62 },				//	o^? => o^`
	{ utf_o64,	utf_o62 },				//	o^~ => o^`
	{ utf_o65,	utf_o62 },				//	o^. => o^`

	{ utf_O7,	utf_O72 },				//	O+ => O+`
	{ utf_O71,	utf_O72 },				//	O+' => O+`
	{ utf_O72,	utf_O7, utf_F },		//	O+` => O+F
	{ utf_O73,	utf_O72 },				//	O+? => O+`
	{ utf_O74,	utf_O72 },				//	O+~ => O+`
	{ utf_O75,	utf_O72 },				//	O+. => O+`
	{ utf_o7,	utf_o72 },				//	o+ => o+`
	{ utf_o71,	utf_o72 },				//	o+' => o+`
	{ utf_o72,	utf_o7, utf_F },		//	o+` => o+F
	{ utf_o73,	utf_o72 },				//	o+? => o+`
	{ utf_o74,	utf_o72 },				//	o+~ => o+`
	{ utf_o75,	utf_o72 },				//	o+. => o+`

	{ utf_U,	utf_U2 },				//	U => U`
	{ utf_U1,	utf_U2 },				//	U' => U`
	{ utf_U2,	utf_U, utf_F },			//	U` => UF
	{ utf_U3,	utf_U2 },				//	U? => U`
	{ utf_U4,	utf_U2 },				//	U~ => U`
	{ utf_U5,	utf_U2 },				//	U. => U`
	{ utf_u,	utf_u2 },				//	u => u`
	{ utf_u1,	utf_u2 },				//	u' => u`
	{ utf_u2,	utf_u, utf_F },			//	u` => uF
	{ utf_u3,	utf_u2 },				//	u? => u`
	{ utf_u4,	utf_u2 },				//	u~ => u`
	{ utf_u5,	utf_u2 },				//	u. => u`

	{ utf_U7,	utf_U72 },				//	U+ => U+`
	{ utf_U71,	utf_U72 },				//	U+' => U+`
	{ utf_U72,	utf_U7, utf_F },		//	U+` => U+F
	{ utf_U73,	utf_U72 },				//	U+? => U+`
	{ utf_U74,	utf_U72 },				//	U+~ => U+`
	{ utf_U75,	utf_U72 },				//	U+. => U+`
	{ utf_u7,	utf_u72 },				//	u+ => u+`
	{ utf_u71,	utf_u72 },				//	u+' => u+`
	{ utf_u72,	utf_u7, utf_F },		//	u+` => u+F
	{ utf_u73,	utf_u72 },				//	u+? => u+`
	{ utf_u74,	utf_u72 },				//	u+~ => u+`
	{ utf_u75,	utf_u72 },				//	u+. => u+`

	{ utf_I,	utf_I2 },				//	I => I`
	{ utf_I1,	utf_I2 },				//	I' => I`
	{ utf_I2,	utf_I, utf_F },			//	I` => IF
	{ utf_I3,	utf_I2 },				//	I? => I`
	{ utf_I4,	utf_I2 },				//	I~ => I`
	{ utf_I5,	utf_I2 },				//	I. => I`
	{ utf_i,	utf_i2 },				//	i => i`
	{ utf_i1,	utf_i2 },				//	i' => i`
	{ utf_i2,	utf_i, utf_F },			//	i` => iF
	{ utf_i3,	utf_i2 },				//	i? => i`
	{ utf_i4,	utf_i2 },				//	i~ => i`
	{ utf_i5,	utf_i2 },				//	i. => i`

	{ utf_Y,	utf_Y2 },				//	Y => Y`
	{ utf_Y1,	utf_Y2 },				//	Y' => Y`
	{ utf_Y2,	utf_Y, utf_F },			//	Y` => YF
	{ utf_Y3,	utf_Y2 },				//	Y? => Y`
	{ utf_Y4,	utf_Y2 },				//	Y~ => Y`
	{ utf_Y5,	utf_Y2 },				//	Y. => Y`
	{ utf_y,	utf_y2 },				//	y => y`
	{ utf_y1,	utf_y2 },				//	y' => y`
	{ utf_y2,	utf_y, utf_F },			//	y` => yF
	{ utf_y3,	utf_y2 },				//	y? => y`
	{ utf_y4,	utf_y2 },				//	y~ => y`
	{ utf_y5,	utf_y2 },				//	y. => y`
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_f[] =
{
	{ utf_A,	utf_A2 },				//	A => A`
	{ utf_A1,	utf_A2 },				//	A' => A`
	{ utf_A2,	utf_A, utf_f },			//	A` => Af
	{ utf_A3,	utf_A2 },				//	A? => A`
	{ utf_A4,	utf_A2 },				//	A~ => A`
	{ utf_A5,	utf_A2 },				//	A. => A`
	{ utf_a,	utf_a2 },				//	a => a`
	{ utf_a1,	utf_a2 },				//	a' => a`
	{ utf_a2,	utf_a, utf_f },			//	a` => af
	{ utf_a3,	utf_a2 },				//	a? => a`
	{ utf_a4,	utf_a2 },				//	a~ => a`
	{ utf_a5,	utf_a2 },				//	a. => a`

	{ utf_A6,	utf_A62 },				//	A^ => A^`
	{ utf_A61,	utf_A62 },				//	A^' => A^`
	{ utf_A62,	utf_A6, utf_f },		//	A^` => A^f
	{ utf_A63,	utf_A62 },				//	A^? => A^`
	{ utf_A64,	utf_A62 },				//	A^~ => A^`
	{ utf_A65,	utf_A62 },				//	A^. => A^`
	{ utf_a6,	utf_a62 },				//	a^ => a^`
	{ utf_a61,	utf_a62 },				//	a^' => a^`
	{ utf_a62,	utf_a6, utf_f },		//	a^` => a^f
	{ utf_a63,	utf_a62 },				//	a^? => a^`
	{ utf_a64,	utf_a62 },				//	a^~ => a^`
	{ utf_a65,	utf_a62 },				//	a^. => a^`

	{ utf_A8,	utf_A82 },				//	A( => A(`
	{ utf_A81,	utf_A82 },				//	A(' => A(`
	{ utf_A82,	utf_A8, utf_f },		//	A(` => A(f
	{ utf_A83,	utf_A82 },				//	A(? => A(`
	{ utf_A84,	utf_A82 },				//	A(~ => A(`
	{ utf_A85,	utf_A82 },				//	A(. => A(`
	{ utf_a8,	utf_a82 },				//	a( => a(`
	{ utf_a81,	utf_a82 },				//	a(' => a(`
	{ utf_a82,	utf_a8, utf_f },		//	a(` => a(f
	{ utf_a83,	utf_a82 },				//	a(? => a(`
	{ utf_a84,	utf_a82 },				//	a(~ => a(`
	{ utf_a85,	utf_a82 },				//	a(. => a(`

	{ utf_E,	utf_E2 },				//	E => E`
	{ utf_E1,	utf_E2 },				//	E' => E`
	{ utf_E2,	utf_E, utf_f },			//	E` => Ef
	{ utf_E3,	utf_E2 },				//	E? => E`
	{ utf_E4,	utf_E2 },				//	E~ => E`
	{ utf_E5,	utf_E2 },				//	E. => E`
	{ utf_e,	utf_e2 },				//	e => e`
	{ utf_e1,	utf_e2 },				//	e' => e`
	{ utf_e2,	utf_e, utf_f },			//	e` => ef
	{ utf_e3,	utf_e2 },				//	e? => e`
	{ utf_e4,	utf_e2 },				//	e~ => e`
	{ utf_e5,	utf_e2 },				//	e. => e`

	{ utf_E6,	utf_E62 },				//	E^ => E^`
	{ utf_E61,	utf_E62 },				//	E^' => E^`
	{ utf_E62,	utf_E6, utf_f },		//	E^` => E^f
	{ utf_E63,	utf_E62 },				//	E^? => E^`
	{ utf_E64,	utf_E62 },				//	E^~ => E^`
	{ utf_E65,	utf_E62 },				//	E^. => E^`
	{ utf_e6,	utf_e62 },				//	e^ => e^`
	{ utf_e61,	utf_e62 },				//	e^' => e^`
	{ utf_e62,	utf_e6, utf_f },		//	e^` => e^f
	{ utf_e63,	utf_e62 },				//	e^? => e^`
	{ utf_e64,	utf_e62 },				//	e^~ => e^`
	{ utf_e65,	utf_e62 },				//	e^. => e^`

	{ utf_O,	utf_O2 },				//	O => O`
	{ utf_O1,	utf_O2 },				//	O' => O`
	{ utf_O2,	utf_O, utf_f },			//	O` => Of
	{ utf_O3,	utf_O2 },				//	O? => O`
	{ utf_O4,	utf_O2 },				//	O~ => O`
	{ utf_O5,	utf_O2 },				//	O. => O`
	{ utf_o,	utf_o2 },				//	o => o`
	{ utf_o1,	utf_o2 },				//	o' => o`
	{ utf_o2,	utf_o, utf_f },			//	o` => of
	{ utf_o3,	utf_o2 },				//	o? => o`
	{ utf_o4,	utf_o2 },				//	o~ => o`
	{ utf_o5,	utf_o2 },				//	o. => o`

	{ utf_O6,	utf_O62 },				//	O^ => O^`
	{ utf_O61,	utf_O62 },				//	O^' => O^`
	{ utf_O62,	utf_O6, utf_f },		//	O^` => O^f
	{ utf_O63,	utf_O62 },				//	O^? => O^`
	{ utf_O64,	utf_O62 },				//	O^~ => O^`
	{ utf_O65,	utf_O62 },				//	O^. => O^`
	{ utf_o6,	utf_o62 },				//	o^ => o^`
	{ utf_o61,	utf_o62 },				//	o^' => o^`
	{ utf_o62,	utf_o6, utf_f },		//	o^` => o^f
	{ utf_o63,	utf_o62 },				//	o^? => o^`
	{ utf_o64,	utf_o62 },				//	o^~ => o^`
	{ utf_o65,	utf_o62 },				//	o^. => o^`

	{ utf_O7,	utf_O72 },				//	O+ => O+`
	{ utf_O71,	utf_O72 },				//	O+' => O+`
	{ utf_O72,	utf_O7, utf_f },		//	O+` => O+f
	{ utf_O73,	utf_O72 },				//	O+? => O+`
	{ utf_O74,	utf_O72 },				//	O+~ => O+`
	{ utf_O75,	utf_O72 },				//	O+. => O+`
	{ utf_o7,	utf_o72 },				//	o+ => o+`
	{ utf_o71,	utf_o72 },				//	o+' => o+`
	{ utf_o72,	utf_o7, utf_f },		//	o+` => o+f
	{ utf_o73,	utf_o72 },				//	o+? => o+`
	{ utf_o74,	utf_o72 },				//	o+~ => o+`
	{ utf_o75,	utf_o72 },				//	o+. => o+`

	{ utf_U,	utf_U2 },				//	U => U`
	{ utf_U1,	utf_U2 },				//	U' => U`
	{ utf_U2,	utf_U, utf_f },			//	U` => Uf
	{ utf_U3,	utf_U2 },				//	U? => U`
	{ utf_U4,	utf_U2 },				//	U~ => U`
	{ utf_U5,	utf_U2 },				//	U. => U`
	{ utf_u,	utf_u2 },				//	u => u`
	{ utf_u1,	utf_u2 },				//	u' => u`
	{ utf_u2,	utf_u, utf_f },			//	u` => uf
	{ utf_u3,	utf_u2 },				//	u? => u`
	{ utf_u4,	utf_u2 },				//	u~ => u`
	{ utf_u5,	utf_u2 },				//	u. => u`

	{ utf_U7,	utf_U72 },				//	U+ => U+`
	{ utf_U71,	utf_U72 },				//	U+' => U+`
	{ utf_U72,	utf_U7, utf_f },		//	U+` => U+f
	{ utf_U73,	utf_U72 },				//	U+? => U+`
	{ utf_U74,	utf_U72 },				//	U+~ => U+`
	{ utf_U75,	utf_U72 },				//	U+. => U+`
	{ utf_u7,	utf_u72 },				//	u+ => u+`
	{ utf_u71,	utf_u72 },				//	u+' => u+`
	{ utf_u72,	utf_u7, utf_f },		//	u+` => u+f
	{ utf_u73,	utf_u72 },				//	u+? => u+`
	{ utf_u74,	utf_u72 },				//	u+~ => u+`
	{ utf_u75,	utf_u72 },				//	u+. => u+`

	{ utf_I,	utf_I2 },				//	I => I`
	{ utf_I1,	utf_I2 },				//	I' => I`
	{ utf_I2,	utf_I, utf_f },			//	I` => If
	{ utf_I3,	utf_I2 },				//	I? => I`
	{ utf_I4,	utf_I2 },				//	I~ => I`
	{ utf_I5,	utf_I2 },				//	I. => I`
	{ utf_i,	utf_i2 },				//	i => i`
	{ utf_i1,	utf_i2 },				//	i' => i`
	{ utf_i2,	utf_i, utf_f },			//	i` => if
	{ utf_i3,	utf_i2 },				//	i? => i`
	{ utf_i4,	utf_i2 },				//	i~ => i`
	{ utf_i5,	utf_i2 },				//	i. => i`

	{ utf_Y,	utf_Y2 },				//	Y => Y`
	{ utf_Y1,	utf_Y2 },				//	Y' => Y`
	{ utf_Y2,	utf_Y, utf_f },			//	Y` => Yf
	{ utf_Y3,	utf_Y2 },				//	Y? => Y`
	{ utf_Y4,	utf_Y2 },				//	Y~ => Y`
	{ utf_Y5,	utf_Y2 },				//	Y. => Y`
	{ utf_y,	utf_y2 },				//	y => Y`
	{ utf_y1,	utf_y2 },				//	y' => y`
	{ utf_y2,	utf_y, utf_f },			//	y` => yf
	{ utf_y3,	utf_y2 },				//	y? => y`
	{ utf_y4,	utf_y2 },				//	y~ => y`
	{ utf_y5,	utf_y2 },				//	y. => y`
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_R[] =
{
	{ utf_A,	utf_A3 },				//	A => A?
	{ utf_A1,	utf_A3 },				//	A' => A?
	{ utf_A2,	utf_A3 },				//	A` => A?
	{ utf_A3,	utf_A, utf_R },			//	A? => AR
	{ utf_A4,	utf_A3 },				//	A~ => A?
	{ utf_A5,	utf_A3 },				//	A. => A?
	{ utf_a,	utf_a3 },				//	a => a?
	{ utf_a1,	utf_a3 },				//	a' => a?
	{ utf_a2,	utf_a3 },				//	a` => a?
	{ utf_a3,	utf_a, utf_R },			//	a? => aR
	{ utf_a4,	utf_a3 },				//	a~ => a?
	{ utf_a5,	utf_a3 },				//	a. => a?

	{ utf_A6,	utf_A63 },				//	A^ => A^?
	{ utf_A61,	utf_A63 },				//	A^' => A^?
	{ utf_A62,	utf_A63 },				//	A^` => A^?
	{ utf_A63,	utf_A6, utf_R },		//	A^? => A^R
	{ utf_A64,	utf_A63 },				//	A^~ => A^?
	{ utf_A65,	utf_A63 },				//	A^. => A^?
	{ utf_a6,	utf_a63 },				//	a^ => a^?
	{ utf_a61,	utf_a63 },				//	a^' => a^?
	{ utf_a62,	utf_a63 },				//	a^` => a^?
	{ utf_a63,	utf_a6, utf_R },		//	a^? => a^R
	{ utf_a64,	utf_a63 },				//	a^~ => a^?
	{ utf_a65,	utf_a63 },				//	a^. => a^?

	{ utf_A8,	utf_A83 },				//	A( => A(?
	{ utf_A81,	utf_A83 },				//	A(' => A(?
	{ utf_A82,	utf_A83 },				//	A(` => A(?
	{ utf_A83,	utf_A8, utf_R },		//	A(? => A(R
	{ utf_A84,	utf_A83 },				//	A(~ => A(?
	{ utf_A85,	utf_A83 },				//	A(. => A(?
	{ utf_a8,	utf_a83 },				//	a( => a(?
	{ utf_a81,	utf_a83 },				//	a(' => a(?
	{ utf_a82,	utf_a83 },				//	a(` => a(?
	{ utf_a83,	utf_a8, utf_R },		//	a(? => a(R
	{ utf_a84,	utf_a83 },				//	a(~ => a(?
	{ utf_a85,	utf_a83 },				//	a(. => a(?

	{ utf_E,	utf_E3 },				//	E => E?
	{ utf_E1,	utf_E3 },				//	E' => E?
	{ utf_E2,	utf_E3 },				//	E` => E?
	{ utf_E3,	utf_E, utf_R },			//	E? => ER
	{ utf_E4,	utf_E3 },				//	E~ => E?
	{ utf_E5,	utf_E3 },				//	E. => E?
	{ utf_e,	utf_e3 },				//	e => e?
	{ utf_e1,	utf_e3 },				//	e' => e?
	{ utf_e2,	utf_e3 },				//	e` => e?
	{ utf_e3,	utf_e, utf_R },			//	e? => eR
	{ utf_e4,	utf_e3 },				//	e~ => e?
	{ utf_e5,	utf_e3 },				//	e. => e?

	{ utf_E6,	utf_E63 },				//	E^ => E^?
	{ utf_E61,	utf_E63 },				//	E^' => E^?
	{ utf_E62,	utf_E63 },				//	E^` => E^?
	{ utf_E63,	utf_E6, utf_R },		//	E^? => E^R
	{ utf_E64,	utf_E63 },				//	E^~ => E^?
	{ utf_E65,	utf_E63 },				//	E^. => E^?
	{ utf_e6,	utf_e63 },				//	e^ => e^?
	{ utf_e61,	utf_e63 },				//	e^' => e^?
	{ utf_e62,	utf_e63 },				//	e^` => e^?
	{ utf_e63,	utf_e6, utf_R },		//	e^? => e^R
	{ utf_e64,	utf_e63 },				//	e^~ => e^?
	{ utf_e65,	utf_e63 },				//	e^. => e^?

	{ utf_O,	utf_O3 },				//	O => O?
	{ utf_O1,	utf_O3 },				//	O' => O?
	{ utf_O2,	utf_O3 },				//	O` => O?
	{ utf_O3,	utf_O, utf_R },			//	O? => OR
	{ utf_O4,	utf_O3 },				//	O~ => O?
	{ utf_O5,	utf_O3 },				//	O. => O?
	{ utf_o,	utf_o3 },				//	o => o?
	{ utf_o1,	utf_o3 },				//	o' => o?
	{ utf_o2,	utf_o3 },				//	o` => o?
	{ utf_o3,	utf_o, utf_R },			//	o? => oR
	{ utf_o4,	utf_o3 },				//	o~ => o?
	{ utf_o5,	utf_o3 },				//	o. => o?

	{ utf_O6,	utf_O63 },				//	O^ => O^?
	{ utf_O61,	utf_O63 },				//	O^' => O^?
	{ utf_O62,	utf_O63 },				//	O^` => O^?
	{ utf_O63,	utf_O6, utf_R },		//	O^? => O^R
	{ utf_O64,	utf_O63 },				//	O^~ => O^?
	{ utf_O65,	utf_O63 },				//	O^. => O^?
	{ utf_o6,	utf_o63 },				//	o^ => o^?
	{ utf_o61,	utf_o63 },				//	o^' => o^?
	{ utf_o62,	utf_o63 },				//	o^` => o^?
	{ utf_o63,	utf_o6, utf_R },		//	o^? => o^R
	{ utf_o64,	utf_o63 },				//	o^~ => o^?
	{ utf_o65,	utf_o63 },				//	o^. => o^?

	{ utf_O7,	utf_O73 },				//	O+ => O+?
	{ utf_O71,	utf_O73 },				//	O+' => O+?
	{ utf_O72,	utf_O73 },				//	O+` => O+?
	{ utf_O73,	utf_O7, utf_R },		//	O+? => O+R
	{ utf_O74,	utf_O73 },				//	O+~ => O+?
	{ utf_O75,	utf_O73 },				//	O+. => O+?
	{ utf_o7,	utf_o73 },				//	o+ => o+?
	{ utf_o71,	utf_o73 },				//	o+' => o+?
	{ utf_o72,	utf_o73 },				//	o+` => o+?
	{ utf_o73,	utf_o7, utf_R },		//	o+? => o+R
	{ utf_o74,	utf_o73 },				//	o+~ => o+?
	{ utf_o75,	utf_o73 },				//	o+. => o+?

	{ utf_U,	utf_U3 },				//	U => U?
	{ utf_U1,	utf_U3 },				//	U' => U?
	{ utf_U2,	utf_U3 },				//	U` => U?
	{ utf_U3,	utf_U, utf_R },			//	U? => UR
	{ utf_U4,	utf_U3 },				//	U~ => U?
	{ utf_U5,	utf_U3 },				//	U. => U?
	{ utf_u,	utf_u3 },				//	u => u?
	{ utf_u1,	utf_u3 },				//	u' => u?
	{ utf_u2,	utf_u3 },				//	u` => u?
	{ utf_u3,	utf_u, utf_R },			//	u? => uR
	{ utf_u4,	utf_u3 },				//	u~ => u?
	{ utf_u5,	utf_u3 },				//	u. => u?

	{ utf_U7,	utf_U73 },				//	U+ => U+?
	{ utf_U71,	utf_U73 },				//	U+' => U+?
	{ utf_U72,	utf_U73 },				//	U+` => U+?
	{ utf_U73,	utf_U7, utf_R },		//	U+? => U+R
	{ utf_U74,	utf_U73 },				//	U+~ => U+?
	{ utf_U75,	utf_U73 },				//	U+. => U+?
	{ utf_u7,	utf_u73 },				//	u+ => u+?
	{ utf_u71,	utf_u73 },				//	u+' => u+?
	{ utf_u72,	utf_u73 },				//	u+` => u+?
	{ utf_u73,	utf_u7, utf_R },		//	u+? => u+R
	{ utf_u74,	utf_u73 },				//	u+~ => u+?
	{ utf_u75,	utf_u73 },				//	u+. => u+?

	{ utf_I,	utf_I3 },				//	I => I?
	{ utf_I1,	utf_I3 },				//	I' => I?
	{ utf_I2,	utf_I3 },				//	I` => I?
	{ utf_I3,	utf_I, utf_R },			//	I? => IR
	{ utf_I4,	utf_I3 },				//	I~ => I?
	{ utf_I5,	utf_I3 },				//	I. => I?
	{ utf_i,	utf_i3 },				//	i => i?
	{ utf_i1,	utf_i3 },				//	i' => i?
	{ utf_i2,	utf_i3 },				//	i` => i?
	{ utf_i3,	utf_i, utf_R },			//	i? => iR
	{ utf_i4,	utf_i3 },				//	i~ => i?
	{ utf_i5,	utf_i3 },				//	i. => i?

	{ utf_Y,	utf_Y3 },				//	Y => Y?
	{ utf_Y1,	utf_Y3 },				//	Y' => Y?
	{ utf_Y2,	utf_Y3 },				//	Y` => Y?
	{ utf_Y3,	utf_Y, utf_R },			//	Y? => YR
	{ utf_Y4,	utf_Y3 },				//	Y~ => Y?
	{ utf_Y5,	utf_Y3 },				//	Y. => Y?
	{ utf_y,	utf_y3 },				//	y => y?
	{ utf_y1,	utf_y3 },				//	y' => y?
	{ utf_y2,	utf_y3 },				//	y` => y?
	{ utf_y3,	utf_y, utf_R },			//	y? => yR
	{ utf_y4,	utf_y3 },				//	y~ => y?
	{ utf_y5,	utf_y3 },				//	y. => y?
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_r[] =
{
	{ utf_A,	utf_A3 },				//	A => A?
	{ utf_A1,	utf_A3 },				//	A' => A?
	{ utf_A2,	utf_A3 },				//	A` => A?
	{ utf_A3,	utf_A, utf_r },			//	A? => Ar
	{ utf_A4,	utf_A3 },				//	A~ => A?
	{ utf_A5,	utf_A3 },				//	A. => A?
	{ utf_a,	utf_a3 },				//	a => a?
	{ utf_a1,	utf_a3 },				//	a' => a?
	{ utf_a2,	utf_a3 },				//	a` => a?
	{ utf_a3,	utf_a, utf_r },			//	a? => ar
	{ utf_a4,	utf_a3 },				//	a~ => a?
	{ utf_a5,	utf_a3 },				//	a. => a?

	{ utf_A6,	utf_A63 },				//	A^ => A^?
	{ utf_A61,	utf_A63 },				//	A^' => A^?
	{ utf_A62,	utf_A63 },				//	A^` => A^?
	{ utf_A63,	utf_A6, utf_r },		//	A^? => A^r
	{ utf_A64,	utf_A63 },				//	A^~ => A^?
	{ utf_A65,	utf_A63 },				//	A^. => A^?
	{ utf_a6,	utf_a63 },				//	a^ => a^?
	{ utf_a61,	utf_a63 },				//	a^' => a^?
	{ utf_a62,	utf_a63 },				//	a^` => a^?
	{ utf_a63,	utf_a6, utf_r },		//	a^? => a^r
	{ utf_a64,	utf_a63 },				//	a^~ => a^?
	{ utf_a65,	utf_a63 },				//	a^. => a^?

	{ utf_A8,	utf_A83 },				//	A( => A(?
	{ utf_A81,	utf_A83 },				//	A(' => A(?
	{ utf_A82,	utf_A83 },				//	A(` => A(?
	{ utf_A83,	utf_A8, utf_r },		//	A(? => A(r
	{ utf_A84,	utf_A83 },				//	A(~ => A(?
	{ utf_A85,	utf_A83 },				//	A(. => A(?
	{ utf_a8,	utf_a83 },				//	a( => a(?
	{ utf_a81,	utf_a83 },				//	a(' => a(?
	{ utf_a82,	utf_a83 },				//	a(` => a(?
	{ utf_a83,	utf_a8, utf_r },		//	a(? => a(r
	{ utf_a84,	utf_a83 },				//	a(~ => a(?
	{ utf_a85,	utf_a83 },				//	a(. => a(?

	{ utf_E,	utf_E3 },				//	E => E?
	{ utf_E1,	utf_E3 },				//	E' => E?
	{ utf_E2,	utf_E3 },				//	E` => E?
	{ utf_E3,	utf_E, utf_r },			//	E? => Er
	{ utf_E4,	utf_E3 },				//	E~ => E?
	{ utf_E5,	utf_E3 },				//	E. => E?
	{ utf_e,	utf_e3 },				//	e => e?
	{ utf_e1,	utf_e3 },				//	e' => e?
	{ utf_e2,	utf_e3 },				//	e` => e?
	{ utf_e3,	utf_e, utf_r },			//	e? => er
	{ utf_e4,	utf_e3 },				//	e~ => e?
	{ utf_e5,	utf_e3 },				//	e. => e?

	{ utf_E6,	utf_E63 },				//	E^ => E^?
	{ utf_E61,	utf_E63 },				//	E^' => E^?
	{ utf_E62,	utf_E63 },				//	E^` => E^?
	{ utf_E63,	utf_E6, utf_r },		//	E^? => E^r
	{ utf_E64,	utf_E63 },				//	E^~ => E^?
	{ utf_E65,	utf_E63 },				//	E^. => E^?
	{ utf_e6,	utf_e63 },				//	e^ => e^?
	{ utf_e61,	utf_e63 },				//	e^' => e^?
	{ utf_e62,	utf_e63 },				//	e^` => e^?
	{ utf_e63,	utf_e6, utf_r },		//	e^? => e^r
	{ utf_e64,	utf_e63 },				//	e^~ => e^?
	{ utf_e65,	utf_e63 },				//	e^. => e^?

	{ utf_O,	utf_O3 },				//	O => O?
	{ utf_O1,	utf_O3 },				//	O' => O?
	{ utf_O2,	utf_O3 },				//	O` => O?
	{ utf_O3,	utf_O, utf_r },			//	O? => Or
	{ utf_O4,	utf_O3 },				//	O~ => O?
	{ utf_O5,	utf_O3 },				//	O. => O?
	{ utf_o,	utf_o3 },				//	o => o?
	{ utf_o1,	utf_o3 },				//	o' => o?
	{ utf_o2,	utf_o3 },				//	o` => o?
	{ utf_o3,	utf_o, utf_r },			//	o? => or
	{ utf_o4,	utf_o3 },				//	o~ => o?
	{ utf_o5,	utf_o3 },				//	o. => o?

	{ utf_O6,	utf_O63 },				//	O^ => O^?
	{ utf_O61,	utf_O63 },				//	O^' => O^?
	{ utf_O62,	utf_O63 },				//	O^` => O^?
	{ utf_O63,	utf_O6, utf_r },		//	O^? => O^r
	{ utf_O64,	utf_O63 },				//	O^~ => O^?
	{ utf_O65,	utf_O63 },				//	O^. => O^?
	{ utf_o6,	utf_o63 },				//	o^ => o^?
	{ utf_o61,	utf_o63 },				//	o^' => o^?
	{ utf_o62,	utf_o63 },				//	o^` => o^?
	{ utf_o63,	utf_o6, utf_r },		//	o^? => o^r
	{ utf_o64,	utf_o63 },				//	o^~ => o^?
	{ utf_o65,	utf_o63 },				//	o^. => o^?

	{ utf_O7,	utf_O73 },				//	O+ => O+?
	{ utf_O71,	utf_O73 },				//	O+' => O+?
	{ utf_O72,	utf_O73 },				//	O+` => O+?
	{ utf_O73,	utf_O7, utf_r },		//	O+? => O+r
	{ utf_O74,	utf_O73 },				//	O+~ => O+?
	{ utf_O75,	utf_O73 },				//	O+. => O+?
	{ utf_o7,	utf_o73 },				//	o+ => o+?
	{ utf_o71,	utf_o73 },				//	o+' => o+?
	{ utf_o72,	utf_o73 },				//	o+` => o+?
	{ utf_o73,	utf_o7, utf_r },		//	o+? => o+r
	{ utf_o74,	utf_o73 },				//	o+~ => o+?
	{ utf_o75,	utf_o73 },				//	o+. => o+?

	{ utf_U,	utf_U3 },				//	U => U?
	{ utf_U1,	utf_U3 },				//	U' => U?
	{ utf_U2,	utf_U3 },				//	U` => U?
	{ utf_U3,	utf_U, utf_r },			//	U? => Ur
	{ utf_U4,	utf_U3 },				//	U~ => U?
	{ utf_U5,	utf_U3 },				//	U. => U?
	{ utf_u,	utf_u3 },				//	u => u?
	{ utf_u1,	utf_u3 },				//	u' => u?
	{ utf_u2,	utf_u3 },				//	u` => u?
	{ utf_u3,	utf_u, utf_r },			//	u? => ur
	{ utf_u4,	utf_u3 },				//	u~ => u?
	{ utf_u5,	utf_u3 },				//	u. => u?

	{ utf_U7,	utf_U73 },				//	U+ => U+?
	{ utf_U71,	utf_U73 },				//	U+' => U+?
	{ utf_U72,	utf_U73 },				//	U+` => U+?
	{ utf_U73,	utf_U7, utf_r },		//	U+? => U+r
	{ utf_U74,	utf_U73 },				//	U+~ => U+?
	{ utf_U75,	utf_U73 },				//	U+. => U+?
	{ utf_u7,	utf_u73 },				//	u+ => u+?
	{ utf_u71,	utf_u73 },				//	u+' => u+?
	{ utf_u72,	utf_u73 },				//	u+` => u+?
	{ utf_u73,	utf_u7, utf_r },		//	u+? => u+r
	{ utf_u74,	utf_u73 },				//	u+~ => u+?
	{ utf_u75,	utf_u73 },				//	u+. => u+?

	{ utf_I,	utf_I3 },				//	I => I?
	{ utf_I1,	utf_I3 },				//	I' => I?
	{ utf_I2,	utf_I3 },				//	I` => I?
	{ utf_I3,	utf_I, utf_r },			//	I? => Ir
	{ utf_I4,	utf_I3 },				//	I~ => I?
	{ utf_I5,	utf_I3 },				//	I. => I?
	{ utf_i,	utf_i3 },				//	i => i?
	{ utf_i1,	utf_i3 },				//	i' => i?
	{ utf_i2,	utf_i3 },				//	i` => i?
	{ utf_i3,	utf_i, utf_r },			//	i? => ir
	{ utf_i4,	utf_i3 },				//	i~ => i?
	{ utf_i5,	utf_i3 },				//	i. => i?

	{ utf_Y,	utf_Y3 },				//	Y => Y?
	{ utf_Y1,	utf_Y3 },				//	Y' => Y?
	{ utf_Y2,	utf_Y3 },				//	Y` => Y?
	{ utf_Y3,	utf_Y, utf_r },			//	Y? => Yr
	{ utf_Y4,	utf_Y3 },				//	Y~ => Y?
	{ utf_Y5,	utf_Y3 },				//	Y. => Y?
	{ utf_y,	utf_y3 },				//	y => Y?
	{ utf_y1,	utf_y3 },				//	y' => y?
	{ utf_y2,	utf_y3 },				//	y` => y?
	{ utf_y3,	utf_y, utf_r },			//	y? => yr
	{ utf_y4,	utf_y3 },				//	y~ => y?
	{ utf_y5,	utf_y3 },				//	y. => y?
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_X[] =
{
	{ utf_A,	utf_A4 },				//	A => A~
	{ utf_A1,	utf_A4 },				//	A' => A~
	{ utf_A2,	utf_A4 },				//	A` => A~
	{ utf_A3,	utf_A4 },				//	A? => A~
	{ utf_A4,	utf_A, utf_X },			//	A~ => AX
	{ utf_A5,	utf_A4 },				//	A. => A~
	{ utf_a,	utf_a4 },				//	a => a~
	{ utf_a1,	utf_a4 },				//	a' => a~
	{ utf_a2,	utf_a4 },				//	a` => a~
	{ utf_a3,	utf_a4 },				//	a? => a~
	{ utf_a4,	utf_a, utf_X },			//	a~ => aX
	{ utf_a5,	utf_a4 },				//	a. => a~

	{ utf_A6,	utf_A64 },				//	A^ => A^~
	{ utf_A61,	utf_A64 },				//	A^' => A^~
	{ utf_A62,	utf_A64 },				//	A^` => A^~
	{ utf_A63,	utf_A64 },				//	A^? => A^~
	{ utf_A64,	utf_A6, utf_X },		//	A^~ => A^X
	{ utf_A65,	utf_A64 },				//	A^. => A^~
	{ utf_a6,	utf_a64 },				//	a^ => a^~
	{ utf_a61,	utf_a64 },				//	a^' => a^~
	{ utf_a62,	utf_a64 },				//	a^` => a^~
	{ utf_a63,	utf_a64 },				//	a^? => a^~
	{ utf_a64,	utf_a6, utf_X },		//	a^~ => a^X
	{ utf_a65,	utf_a64 },				//	a^. => a^~

	{ utf_A8,	utf_A84 },				//	A( => A(~
	{ utf_A81,	utf_A84 },				//	A(' => A(~
	{ utf_A82,	utf_A84 },				//	A(` => A(~
	{ utf_A83,	utf_A84 },				//	A(? => A(~
	{ utf_A84,	utf_A8, utf_X },		//	A(~ => A(X
	{ utf_A85,	utf_A84 },				//	A(. => A(~
	{ utf_a8,	utf_a84 },				//	a( => a(~
	{ utf_a81,	utf_a84 },				//	a(' => a(~
	{ utf_a82,	utf_a84 },				//	a(` => a(~
	{ utf_a83,	utf_a84 },				//	a(? => a(~
	{ utf_a84,	utf_a8, utf_X },		//	a(~ => a(X
	{ utf_a85,	utf_a84 },				//	a(. => a(~

	{ utf_E,	utf_E4 },				//	E => E~
	{ utf_E1,	utf_E4 },				//	E' => E~
	{ utf_E2,	utf_E4 },				//	E` => E~
	{ utf_E3,	utf_E4 },				//	E? => E~
	{ utf_E4,	utf_E, utf_X },			//	E~ => EX
	{ utf_E5,	utf_E4 },				//	E. => E~
	{ utf_e,	utf_e4 },				//	e => e~
	{ utf_e1,	utf_e4 },				//	e' => e~
	{ utf_e2,	utf_e4 },				//	e` => e~
	{ utf_e3,	utf_e4 },				//	e? => e~
	{ utf_e4,	utf_e, utf_X },			//	e~ => eX
	{ utf_e5,	utf_e4 },				//	e. => e~

	{ utf_E6,	utf_E64 },				//	E^ => E^~
	{ utf_E61,	utf_E64 },				//	E^' => E^~
	{ utf_E62,	utf_E64 },				//	E^` => E^~
	{ utf_E63,	utf_E64 },				//	E^? => E^~
	{ utf_E64,	utf_E6, utf_X },		//	E^~ => E^X
	{ utf_E65,	utf_E64 },				//	E^. => E^~
	{ utf_e6,	utf_e64 },				//	e^ => e^~
	{ utf_e61,	utf_e64 },				//	e^' => e^~
	{ utf_e62,	utf_e64 },				//	e^` => e^~
	{ utf_e63,	utf_e64 },				//	e^? => e^~
	{ utf_e64,	utf_e6, utf_X },		//	e^~ => e^X
	{ utf_e65,	utf_e64 },				//	e^. => e^~

	{ utf_O,	utf_O4 },				//	O => O~
	{ utf_O1,	utf_O4 },				//	O' => O~
	{ utf_O2,	utf_O4 },				//	O` => O~
	{ utf_O3,	utf_O4 },				//	O? => O~
	{ utf_O4,	utf_O, utf_X },			//	O~ => OX
	{ utf_O5,	utf_O4 },				//	O. => O~
	{ utf_o,	utf_o4 },				//	o => o~
	{ utf_o1,	utf_o4 },				//	o' => o~
	{ utf_o2,	utf_o4 },				//	o` => o~
	{ utf_o3,	utf_o4 },				//	o? => o~
	{ utf_o4,	utf_o, utf_X },			//	o~ => oX
	{ utf_o5,	utf_o4 },				//	o. => o~

	{ utf_O6,	utf_O64 },				//	O^ => O^~
	{ utf_O61,	utf_O64 },				//	O^' => O^~
	{ utf_O62,	utf_O64 },				//	O^` => O^~
	{ utf_O63,	utf_O64 },				//	O^? => O^~
	{ utf_O64,	utf_O6, utf_X },		//	O^~ => O^X
	{ utf_O65,	utf_O64 },				//	O^. => O^~
	{ utf_o6,	utf_o64 },				//	o^ => o^~
	{ utf_o61,	utf_o64 },				//	o^' => o^~
	{ utf_o62,	utf_o64 },				//	o^` => o^~
	{ utf_o63,	utf_o64 },				//	o^? => o^~
	{ utf_o64,	utf_o6, utf_X },		//	o^~ => o^X
	{ utf_o65,	utf_o64 },				//	o^. => o^~

	{ utf_O7,	utf_O74 },				//	O+ => O+~
	{ utf_O71,	utf_O74 },				//	O+' => O+~
	{ utf_O72,	utf_O74 },				//	O+` => O+~
	{ utf_O73,	utf_O74 },				//	O+? => O+~
	{ utf_O74,	utf_O7, utf_X },		//	O+~ => O+X
	{ utf_O75,	utf_O74 },				//	O+. => O+~
	{ utf_o7,	utf_o74 },				//	o+ => o+~
	{ utf_o71,	utf_o74 },				//	o+' => o+~
	{ utf_o72,	utf_o74 },				//	o+` => o+~
	{ utf_o73,	utf_o74 },				//	o+? => o+~
	{ utf_o74,	utf_o7, utf_X },		//	o+~ => o+X
	{ utf_o75,	utf_o74 },				//	o+. => o+~

	{ utf_U,	utf_U4 },				//	U => U~
	{ utf_U1,	utf_U4 },				//	U' => U~
	{ utf_U2,	utf_U4 },				//	U` => U~
	{ utf_U3,	utf_U4 },				//	U? => U~
	{ utf_U4,	utf_U, utf_X },			//	U~ => UX
	{ utf_U5,	utf_U4 },				//	U. => U~
	{ utf_u,	utf_u4 },				//	u => u~
	{ utf_u1,	utf_u4 },				//	u' => u~
	{ utf_u2,	utf_u4 },				//	u` => u~
	{ utf_u3,	utf_u4 },				//	u? => u~
	{ utf_u4,	utf_u, utf_X },			//	u~ => uX
	{ utf_u5,	utf_u4 },				//	u. => u~

	{ utf_U7,	utf_U74 },				//	U+ => U+~
	{ utf_U71,	utf_U74 },				//	U+' => U+~
	{ utf_U72,	utf_U74 },				//	U+` => U+~
	{ utf_U73,	utf_U74 },				//	U+? => U+~
	{ utf_U74,	utf_U7, utf_X },		//	U+~ => U+X
	{ utf_U75,	utf_U74 },				//	U+. => U+~
	{ utf_u7,	utf_u74 },				//	u+ => u+~
	{ utf_u71,	utf_u74 },				//	u+' => u+~
	{ utf_u72,	utf_u74 },				//	u+` => u+~
	{ utf_u73,	utf_u74 },				//	u+? => u+~
	{ utf_u74,	utf_u7, utf_X },		//	u+~ => u+X
	{ utf_u75,	utf_U74 },				//	u+. => U+~

	{ utf_I,	utf_I4 },				//	I => I~
	{ utf_I1,	utf_I4 },				//	I' => I~
	{ utf_I2,	utf_I4 },				//	I` => I~
	{ utf_I3,	utf_I4 },				//	I? => I~
	{ utf_I4,	utf_I, utf_X },			//	I~ => IX
	{ utf_I5,	utf_I4 },				//	I. => I~
	{ utf_i,	utf_i4 },				//	i => i~
	{ utf_i1,	utf_i4 },				//	i' => i~
	{ utf_i2,	utf_i4 },				//	i` => i~
	{ utf_i3,	utf_i4 },				//	i? => i~
	{ utf_i4,	utf_i, utf_X },			//	i~ => iX
	{ utf_i5,	utf_i4 },				//	i. => i~

	{ utf_Y,	utf_Y4 },				//	Y => Y~
	{ utf_Y1,	utf_Y4 },				//	Y' => Y~
	{ utf_Y2,	utf_Y4 },				//	Y` => Y~
	{ utf_Y3,	utf_Y4 },				//	Y? => Y~
	{ utf_Y4,	utf_Y, utf_X },			//	Y~ => YX
	{ utf_Y5,	utf_Y4 },				//	Y. => Y~
	{ utf_y,	utf_y4 },				//	y => y~
	{ utf_y1,	utf_y4 },				//	y' => y~
	{ utf_y2,	utf_y4 },				//	y` => y~
	{ utf_y3,	utf_y4 },				//	y? => y~
	{ utf_y4,	utf_y, utf_X },			//	y~ => yX
	{ utf_y5,	utf_y4 },				//	y. => y~
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_x[] =
{
	{ utf_A,	utf_A4 },				//	A => A~
	{ utf_A1,	utf_A4 },				//	A' => A~
	{ utf_A2,	utf_A4 },				//	A` => A~
	{ utf_A3,	utf_A4 },				//	A? => A~
	{ utf_A4,	utf_A, utf_x },			//	A~ => Ax
	{ utf_A5,	utf_A4 },				//	A. => A~
	{ utf_a,	utf_a4 },				//	a => a~
	{ utf_a1,	utf_a4 },				//	a' => a~
	{ utf_a2,	utf_a4 },				//	a` => a~
	{ utf_a3,	utf_a4 },				//	a? => a~
	{ utf_a4,	utf_a, utf_x },			//	a~ => ax
	{ utf_a5,	utf_a4 },				//	a. => a~

	{ utf_A6,	utf_A64 },				//	A^ => A^~
	{ utf_A61,	utf_A64 },				//	A^' => A^~
	{ utf_A62,	utf_A64 },				//	A^` => A^~
	{ utf_A63,	utf_A64 },				//	A^? => A^~
	{ utf_A64,	utf_A6, utf_x },		//	A^~ => A^x
	{ utf_A65,	utf_A64 },				//	A^. => A^~
	{ utf_a6,	utf_a64 },				//	a^ => a^~
	{ utf_a61,	utf_a64 },				//	a^' => a^~
	{ utf_a62,	utf_a64 },				//	a^` => a^~
	{ utf_a63,	utf_a64 },				//	a^? => a^~
	{ utf_a64,	utf_a6, utf_x },		//	a^~ => a^x
	{ utf_a65,	utf_a64 },				//	a^. => a^~

	{ utf_A8,	utf_A84 },				//	A( => A(~
	{ utf_A81,	utf_A84 },				//	A(' => A(~
	{ utf_A82,	utf_A84 },				//	A(` => A(~
	{ utf_A83,	utf_A84 },				//	A(? => A(~
	{ utf_A84,	utf_A8, utf_x },		//	A(~ => A(x
	{ utf_A85,	utf_A84 },				//	A(. => A(~
	{ utf_a8,	utf_a84 },				//	a( => a(~
	{ utf_a81,	utf_a84 },				//	a(' => a(~
	{ utf_a82,	utf_a84 },				//	a(` => a(~
	{ utf_a83,	utf_a84 },				//	a(? => a(~
	{ utf_a84,	utf_a8, utf_x },		//	a(~ => a(x
	{ utf_a85,	utf_a84 },				//	a(. => a(~

	{ utf_E,	utf_E4 },				//	E => E~
	{ utf_E1,	utf_E4 },				//	E' => E~
	{ utf_E2,	utf_E4 },				//	E` => E~
	{ utf_E3,	utf_E4 },				//	E? => E~
	{ utf_E4,	utf_E, utf_x },			//	E~ => Ex
	{ utf_E5,	utf_E4 },				//	E. => E~
	{ utf_e,	utf_e4 },				//	e => e~
	{ utf_e1,	utf_e4 },				//	e' => e~
	{ utf_e2,	utf_e4 },				//	e` => e~
	{ utf_e3,	utf_e4 },				//	e? => e~
	{ utf_e4,	utf_e, utf_x },			//	e~ => ex
	{ utf_e5,	utf_e4 },				//	e. => e~

	{ utf_E6,	utf_E64 },				//	E^ => E^~
	{ utf_E61,	utf_E64 },				//	E^' => E^~
	{ utf_E62,	utf_E64 },				//	E^` => E^~
	{ utf_E63,	utf_E64 },				//	E^? => E^~
	{ utf_E64,	utf_E6, utf_x },		//	E^~ => E^x
	{ utf_E65,	utf_E64 },				//	E^. => E^~
	{ utf_e6,	utf_e64 },				//	e^ => e^~
	{ utf_e61,	utf_e64 },				//	e^' => e^~
	{ utf_e62,	utf_e64 },				//	e^` => e^~
	{ utf_e63,	utf_e64 },				//	e^? => e^~
	{ utf_e64,	utf_e6, utf_x },		//	e^~ => e^x
	{ utf_e65,	utf_e64 },				//	e^. => e^~

	{ utf_O,	utf_O4 },				//	O => O~
	{ utf_O1,	utf_O4 },				//	O' => O~
	{ utf_O2,	utf_O4 },				//	O` => O~
	{ utf_O3,	utf_O4 },				//	O? => O~
	{ utf_O4,	utf_O, utf_x },			//	O~ => Ox
	{ utf_O5,	utf_O4 },				//	O. => O~
	{ utf_o,	utf_o4 },				//	o => o~
	{ utf_o1,	utf_o4 },				//	o' => o~
	{ utf_o2,	utf_o4 },				//	o` => o~
	{ utf_o3,	utf_o4 },				//	o? => o~
	{ utf_o4,	utf_o, utf_x },			//	o~ => ox
	{ utf_o5,	utf_o4 },				//	o. => o~

	{ utf_O6,	utf_O64 },				//	O^ => O^~
	{ utf_O61,	utf_O64 },				//	O^' => O^~
	{ utf_O62,	utf_O64 },				//	O^` => O^~
	{ utf_O63,	utf_O64 },				//	O^? => O^~
	{ utf_O64,	utf_O6, utf_x },		//	O^~ => O^x
	{ utf_O65,	utf_O64 },				//	O^. => O^~
	{ utf_o6,	utf_o64 },				//	o^ => o^~
	{ utf_o61,	utf_o64 },				//	o^' => o^~
	{ utf_o62,	utf_o64 },				//	o^` => o^~
	{ utf_o63,	utf_o64 },				//	o^? => o^~
	{ utf_o64,	utf_o6, utf_x },		//	o^~ => o^x
	{ utf_o65,	utf_o64 },				//	o^. => o^~

	{ utf_O7,	utf_O74 },				//	O+ => O+~
	{ utf_O71,	utf_O74 },				//	O+' => O+~
	{ utf_O72,	utf_O74 },				//	O+` => O+~
	{ utf_O73,	utf_O74 },				//	O+? => O+~
	{ utf_O74,	utf_O7, utf_x },		//	O+~ => O+x
	{ utf_O75,	utf_O74 },				//	O+. => O+~
	{ utf_o7,	utf_o74 },				//	o+ => o+~
	{ utf_o71,	utf_o74 },				//	o+' => o+~
	{ utf_o72,	utf_o74 },				//	o+` => o+~
	{ utf_o73,	utf_o74 },				//	o+? => o+~
	{ utf_o74,	utf_o7, utf_x },		//	o+~ => o+x
	{ utf_o75,	utf_o74 },				//	o+. => o+~

	{ utf_U,	utf_U4 },				//	U => U~
	{ utf_U1,	utf_U4 },				//	U' => U~
	{ utf_U2,	utf_U4 },				//	U` => U~
	{ utf_U3,	utf_U4 },				//	U? => U~
	{ utf_U4,	utf_U, utf_x },			//	U~ => Ux
	{ utf_U5,	utf_U4 },				//	U. => U~
	{ utf_u,	utf_u4 },				//	u => u~
	{ utf_u1,	utf_u4 },				//	u' => u~
	{ utf_u2,	utf_u4 },				//	u` => u~
	{ utf_u3,	utf_u4 },				//	u? => u~
	{ utf_u4,	utf_u, utf_x },			//	u~ => ux
	{ utf_u5,	utf_u4 },				//	u. => u~

	{ utf_U7,	utf_U74 },				//	U+ => U+~
	{ utf_U71,	utf_U74 },				//	U+' => U+~
	{ utf_U72,	utf_U74 },				//	U+` => U+~
	{ utf_U73,	utf_U74 },				//	U+? => U+~
	{ utf_U74,	utf_U7, utf_x },		//	U+~ => U+x
	{ utf_U75,	utf_U74 },				//	U+. => U+~
	{ utf_u7,	utf_u74 },				//	u+ => u+~
	{ utf_u71,	utf_u74 },				//	u+' => u+~
	{ utf_u72,	utf_u74 },				//	u+` => u+~
	{ utf_u73,	utf_u74 },				//	u+? => u+~
	{ utf_u74,	utf_u7, utf_x },		//	u+~ => u+x
	{ utf_u75,	utf_u74 },				//	u+. => u+~

	{ utf_I,	utf_I4 },				//	I => I~
	{ utf_I1,	utf_I4 },				//	I' => I~
	{ utf_I2,	utf_I4 },				//	I` => I~
	{ utf_I3,	utf_I4 },				//	I? => I~
	{ utf_I4,	utf_I, utf_x },			//	I~ => Ix
	{ utf_I5,	utf_I4 },				//	I. => I~
	{ utf_i,	utf_i4 },				//	i => i~
	{ utf_i1,	utf_i4 },				//	i' => i~
	{ utf_i2,	utf_i4 },				//	i` => i~
	{ utf_i3,	utf_i4 },				//	i? => i~
	{ utf_i4,	utf_i, utf_x },			//	i~ => ix
	{ utf_i5,	utf_i4 },				//	i. => i~

	{ utf_Y,	utf_Y4 },				//	Y => Y~
	{ utf_Y1,	utf_Y4 },				//	Y' => Y~
	{ utf_Y2,	utf_Y4 },				//	Y` => Y~
	{ utf_Y3,	utf_Y4 },				//	Y? => Y~
	{ utf_Y4,	utf_Y, utf_x },			//	Y~ => Yx
	{ utf_Y5,	utf_Y4 },				//	Y. => Y~
	{ utf_y,	utf_y4 },				//	y => Y~
	{ utf_y1,	utf_y4 },				//	y' => y~
	{ utf_y2,	utf_y4 },				//	y` => y~
	{ utf_y3,	utf_y4 },				//	y? => y~
	{ utf_y4,	utf_y, utf_x },			//	y~ => yx
	{ utf_y5,	utf_y4 },				//	y. => y~
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_J[] =
{
	{ utf_A,	utf_A5 },				//	A => A.
	{ utf_A1,	utf_A5 },				//	A' => A.
	{ utf_A2,	utf_A5 },				//	A` => A.
	{ utf_A3,	utf_A5 },				//	A? => A.
	{ utf_A4,	utf_A5 },				//	A~ => A.
	{ utf_A5,	utf_A, utf_J },			//	A. => AJ
	{ utf_a,	utf_a5 },				//	a => a.
	{ utf_a1,	utf_a5 },				//	a' => a.
	{ utf_a2,	utf_a5 },				//	a` => a.
	{ utf_a3,	utf_a5 },				//	a? => a.
	{ utf_a4,	utf_a5 },				//	a~ => a.
	{ utf_a5,	utf_a, utf_J },			//	a. => aJ

	{ utf_A6,	utf_A65 },				//	A^ => A^.
	{ utf_A61,	utf_A65 },				//	A^' => A^.
	{ utf_A62,	utf_A65 },				//	A^` => A^.
	{ utf_A63,	utf_A65 },				//	A^? => A^.
	{ utf_A64,	utf_A65 },				//	A^~ => A^.
	{ utf_A65,	utf_A6, utf_J },		//	A^. => A^J
	{ utf_a6,	utf_a65 },				//	a^ => a^.
	{ utf_a61,	utf_a65 },				//	a^' => a^.
	{ utf_a62,	utf_a65 },				//	a^` => a^.
	{ utf_a63,	utf_a65 },				//	a^? => a^.
	{ utf_a64,	utf_a65 },				//	a^~ => a^.
	{ utf_a65,	utf_a6, utf_J },		//	a^. => a^J

	{ utf_A8,	utf_A85 },				//	A( => A(.
	{ utf_A81,	utf_A85 },				//	A(' => A(.
	{ utf_A82,	utf_A85 },				//	A(` => A(.
	{ utf_A83,	utf_A85 },				//	A(? => A(.
	{ utf_A84,	utf_A85 },				//	A(~ => A(.
	{ utf_A85,	utf_A8, utf_J },		//	A(. => A(J
	{ utf_a8,	utf_a85 },				//	a( => a(.
	{ utf_a81,	utf_a85 },				//	a(' => a(.
	{ utf_a82,	utf_a85 },				//	a(` => a(.
	{ utf_a83,	utf_a85 },				//	a(? => a(.
	{ utf_a84,	utf_a85 },				//	a(~ => a(.
	{ utf_a85,	utf_a8, utf_J },		//	a(. => a(J

	{ utf_E,	utf_E5 },				//	E => E.
	{ utf_E1,	utf_E5 },				//	E' => E.
	{ utf_E2,	utf_E5 },				//	E` => E.
	{ utf_E3,	utf_E5 },				//	E? => E.
	{ utf_E4,	utf_E5 },				//	E~ => E.
	{ utf_E5,	utf_E, utf_J },			//	E. => EJ
	{ utf_e,	utf_e5 },				//	e => e.
	{ utf_e1,	utf_e5 },				//	e' => e.
	{ utf_e2,	utf_e5 },				//	e` => e.
	{ utf_e3,	utf_e5 },				//	e? => e.
	{ utf_e4,	utf_e5 },				//	e~ => e.
	{ utf_e5,	utf_e, utf_J },			//	e. => eJ

	{ utf_E6,	utf_E65 },				//	E^ => E^.
	{ utf_E61,	utf_E65 },				//	E^' => E^.
	{ utf_E62,	utf_E65 },				//	E^` => E^.
	{ utf_E63,	utf_E65 },				//	E^? => E^.
	{ utf_E64,	utf_E65 },				//	E^~ => E^.
	{ utf_E65,	utf_E6, utf_J },		//	E^. => E^J
	{ utf_e6,	utf_e65 },				//	e^ => e^.
	{ utf_e61,	utf_e65 },				//	e^' => e^.
	{ utf_e62,	utf_e65 },				//	e^` => e^.
	{ utf_e63,	utf_e65 },				//	e^? => e^.
	{ utf_e64,	utf_e65 },				//	e^~ => e^.
	{ utf_e65,	utf_e6, utf_J },		//	e^. => e^J

	{ utf_O,	utf_O5 },				//	O => O.
	{ utf_O1,	utf_O5 },				//	O' => O.
	{ utf_O2,	utf_O5 },				//	O` => O.
	{ utf_O3,	utf_O5 },				//	O? => O.
	{ utf_O4,	utf_O5 },				//	O~ => O.
	{ utf_O5,	utf_O, utf_J },			//	O. => OJ
	{ utf_o,	utf_o5 },				//	o => o.
	{ utf_o1,	utf_o5 },				//	o' => o.
	{ utf_o2,	utf_o5 },				//	o` => o.
	{ utf_o3,	utf_o5 },				//	o? => o.
	{ utf_o4,	utf_o5 },				//	o~ => o.
	{ utf_o5,	utf_o, utf_J },			//	o. => oJ

	{ utf_O6,	utf_O65 },				//	O^ => O^.
	{ utf_O61,	utf_O65 },				//	O^' => O^.
	{ utf_O62,	utf_O65 },				//	O^` => O^.
	{ utf_O63,	utf_O65 },				//	O^? => O^.
	{ utf_O64,	utf_O65 },				//	O^~ => O^.
	{ utf_O65,	utf_O6, utf_J },		//	O^. => O^J
	{ utf_o6,	utf_o65 },				//	o^ => o^.
	{ utf_o61,	utf_o65 },				//	o^' => o^.
	{ utf_o62,	utf_o65 },				//	o^` => o^.
	{ utf_o63,	utf_o65 },				//	o^? => o^.
	{ utf_o64,	utf_o65 },				//	o^~ => o^.
	{ utf_o65,	utf_o6, utf_J },		//	o^. => o^J

	{ utf_O7,	utf_O75 },				//	O+ => O+.
	{ utf_O71,	utf_O75 },				//	O+' => O+.
	{ utf_O72,	utf_O75 },				//	O+` => O+.
	{ utf_O73,	utf_O75 },				//	O+? => O+.
	{ utf_O74,	utf_O75 },				//	O+~ => O+.
	{ utf_O75,	utf_O7, utf_J },		//	O+. => O+J
	{ utf_o7,	utf_o75 },				//	o+ => o+.
	{ utf_o71,	utf_o75 },				//	o+' => o+.
	{ utf_o72,	utf_o75 },				//	o+` => o+.
	{ utf_o73,	utf_o75 },				//	o+? => o+.
	{ utf_o74,	utf_o75 },				//	o+~ => o+.
	{ utf_o75,	utf_o7, utf_J },		//	o+. => o+J

	{ utf_U,	utf_U5 },				//	U => U.
	{ utf_U1,	utf_U5 },				//	U' => U.
	{ utf_U2,	utf_U5 },				//	U` => U.
	{ utf_U3,	utf_U5 },				//	U? => U.
	{ utf_U4,	utf_U5 },				//	U~ => U.
	{ utf_U5,	utf_U, utf_J },			//	U. => UJ
	{ utf_u,	utf_u5 },				//	u => u.
	{ utf_u1,	utf_u5 },				//	u' => u.
	{ utf_u2,	utf_u5 },				//	u` => u.
	{ utf_u3,	utf_u5 },				//	u? => u.
	{ utf_u4,	utf_u5 },				//	u~ => u.
	{ utf_u5,	utf_u, utf_J },			//	u. => uJ

	{ utf_U7,	utf_U75 },				//	U+ => U+.
	{ utf_U71,	utf_U75 },				//	U+' => U+.
	{ utf_U72,	utf_U75 },				//	U+` => U+.
	{ utf_U73,	utf_U75 },				//	U+? => U+.
	{ utf_U74,	utf_U75 },				//	U+~ => U+.
	{ utf_U75,	utf_U7, utf_J },		//	U+. => U+J
	{ utf_u7,	utf_u75 },				//	u+ => u+.
	{ utf_u71,	utf_u75 },				//	u+' => u+.
	{ utf_u72,	utf_u75 },				//	u+` => u+.
	{ utf_u73,	utf_u75 },				//	u+? => u+.
	{ utf_u74,	utf_u75 },				//	u+~ => u+.
	{ utf_u75,	utf_u7, utf_J },		//	u+. => u+J

	{ utf_I,	utf_I5 },				//	I => I.
	{ utf_I1,	utf_I5 },				//	I' => I.
	{ utf_I2,	utf_I5 },				//	I` => I.
	{ utf_I3,	utf_I5 },				//	I? => I.
	{ utf_I4,	utf_I5 },				//	I~ => I.
	{ utf_I5,	utf_I, utf_J },			//	I. => IJ
	{ utf_i,	utf_i5 },				//	i => i.
	{ utf_i1,	utf_i5 },				//	i' => i.
	{ utf_i2,	utf_i5 },				//	i` => i.
	{ utf_i3,	utf_i5 },				//	i? => i.
	{ utf_i4,	utf_i5 },				//	i~ => i.
	{ utf_i5,	utf_i, utf_J },			//	i. => iJ

	{ utf_Y,	utf_Y5 },				//	Y => Y.
	{ utf_Y1,	utf_Y5 },				//	Y' => Y.
	{ utf_Y2,	utf_Y5 },				//	Y` => Y.
	{ utf_Y3,	utf_Y5 },				//	Y? => Y.
	{ utf_Y4,	utf_Y5 },				//	Y~ => Y.
	{ utf_Y5,	utf_Y, utf_J },			//	Y. => YJ
	{ utf_y,	utf_y5 },				//	y => y.
	{ utf_y1,	utf_y5 },				//	y' => y.
	{ utf_y2,	utf_y5 },				//	y` => y.
	{ utf_y3,	utf_y5 },				//	y? => y.
	{ utf_y4,	utf_y5 },				//	y~ => y.
	{ utf_y5,	utf_y, utf_J },			//	y. => yJ
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_j[] =
{
	{ utf_A,	utf_A5 },				//	A => A.
	{ utf_A1,	utf_A5 },				//	A' => A.
	{ utf_A2,	utf_A5 },				//	A` => A.
	{ utf_A3,	utf_A5 },				//	A? => A.
	{ utf_A4,	utf_A5 },				//	A~ => A.
	{ utf_A5,	utf_A, utf_j },			//	A. => Aj
	{ utf_a,	utf_a5 },				//	a => a.
	{ utf_a1,	utf_a5 },				//	a' => a.
	{ utf_a2,	utf_a5 },				//	a` => a.
	{ utf_a3,	utf_a5 },				//	a? => a.
	{ utf_a4,	utf_a5 },				//	a~ => a.
	{ utf_a5,	utf_a, utf_j },			//	a. => aj

	{ utf_A6,	utf_A65 },				//	A^ => A^.
	{ utf_A61,	utf_A65 },				//	A^' => A^.
	{ utf_A62,	utf_A65 },				//	A^` => A^.
	{ utf_A63,	utf_A65 },				//	A^? => A^.
	{ utf_A64,	utf_A65 },				//	A^~ => A^.
	{ utf_A65,	utf_A6, utf_j },		//	A^. => A^j
	{ utf_a6,	utf_a65 },				//	a^ => a^.
	{ utf_a61,	utf_a65 },				//	a^' => a^.
	{ utf_a62,	utf_a65 },				//	a^` => a^.
	{ utf_a63,	utf_a65 },				//	a^? => a^.
	{ utf_a64,	utf_a65 },				//	a^~ => a^.
	{ utf_a65,	utf_a6, utf_j },		//	a^. => a^j

	{ utf_A8,	utf_A85 },				//	A( => A(.
	{ utf_A81,	utf_A85 },				//	A(' => A(.
	{ utf_A82,	utf_A85 },				//	A(` => A(.
	{ utf_A83,	utf_A85 },				//	A(? => A(.
	{ utf_A84,	utf_A85 },				//	A(~ => A(.
	{ utf_A85,	utf_A8, utf_j },		//	A(. => A(j
	{ utf_a8,	utf_a85 },				//	a( => a(.
	{ utf_a81,	utf_a85 },				//	a(' => a(.
	{ utf_a82,	utf_a85 },				//	a(` => a(.
	{ utf_a83,	utf_a85 },				//	a(? => a(.
	{ utf_a84,	utf_a85 },				//	a(~ => a(.
	{ utf_a85,	utf_a8, utf_j },		//	a(. => a(j

	{ utf_E,	utf_E5 },				//	E => E.
	{ utf_E1,	utf_E5 },				//	E' => E.
	{ utf_E2,	utf_E5 },				//	E` => E.
	{ utf_E3,	utf_E5 },				//	E? => E.
	{ utf_E4,	utf_E5 },				//	E~ => E.
	{ utf_E5,	utf_E, utf_j },			//	E. => Ej
	{ utf_e,	utf_e5 },				//	e => e.
	{ utf_e1,	utf_e5 },				//	e' => e.
	{ utf_e2,	utf_e5 },				//	e` => e.
	{ utf_e3,	utf_e5 },				//	e? => e.
	{ utf_e4,	utf_e5 },				//	e~ => e.
	{ utf_e5,	utf_e, utf_j },			//	e. => ej

	{ utf_E6,	utf_E65 },				//	E^ => E^.
	{ utf_E61,	utf_E65 },				//	E^' => E^.
	{ utf_E62,	utf_E65 },				//	E^` => E^.
	{ utf_E63,	utf_E65 },				//	E^? => E^.
	{ utf_E64,	utf_E65 },				//	E^~ => E^.
	{ utf_E65,	utf_E6, utf_j },		//	E^. => E^j
	{ utf_e6,	utf_e65 },				//	e^ => e^.
	{ utf_e61,	utf_e65 },				//	e^' => e^.
	{ utf_e62,	utf_e65 },				//	e^` => e^.
	{ utf_e63,	utf_e65 },				//	e^? => e^.
	{ utf_e64,	utf_e65 },				//	e^~ => e^.
	{ utf_e65,	utf_e6, utf_j },		//	e^. => e^j

	{ utf_O,	utf_O5 },				//	O => O.
	{ utf_O1,	utf_O5 },				//	O' => O.
	{ utf_O2,	utf_O5 },				//	O` => O.
	{ utf_O3,	utf_O5 },				//	O? => O.
	{ utf_O4,	utf_O5 },				//	O~ => O.
	{ utf_O5,	utf_O, utf_j },			//	O. => Oj
	{ utf_o,	utf_o5 },				//	o => o.
	{ utf_o1,	utf_o5 },				//	o' => o.
	{ utf_o2,	utf_o5 },				//	o` => o.
	{ utf_o3,	utf_o5 },				//	o? => o.
	{ utf_o4,	utf_o5 },				//	o~ => o.
	{ utf_o5,	utf_o, utf_j },			//	o. => oj

	{ utf_O6,	utf_O65 },				//	O^ => O^.
	{ utf_O61,	utf_O65 },				//	O^' => O^.
	{ utf_O62,	utf_O65 },				//	O^` => O^.
	{ utf_O63,	utf_O65 },				//	O^? => O^.
	{ utf_O64,	utf_O65 },				//	O^~ => O^.
	{ utf_O65,	utf_O6, utf_j },		//	O^. => O^j
	{ utf_o6,	utf_o65 },				//	o^ => o^.
	{ utf_o61,	utf_o65 },				//	o^' => o^.
	{ utf_o62,	utf_o65 },				//	o^` => o^.
	{ utf_o63,	utf_o65 },				//	o^? => o^.
	{ utf_o64,	utf_o65 },				//	o^~ => o^.
	{ utf_o65,	utf_o6, utf_j },		//	o^. => o^j

	{ utf_O7,	utf_O75 },				//	O+ => O+.
	{ utf_O71,	utf_O75 },				//	O+' => O+.
	{ utf_O72,	utf_O75 },				//	O+` => O+.
	{ utf_O73,	utf_O75 },				//	O+? => O+.
	{ utf_O74,	utf_O75 },				//	O+~ => O+.
	{ utf_O75,	utf_O7, utf_j },		//	O+. => O+j
	{ utf_o7,	utf_o75 },				//	o+ => o+.
	{ utf_o71,	utf_o75 },				//	o+' => o+.
	{ utf_o72,	utf_o75 },				//	o+` => o+.
	{ utf_o73,	utf_o75 },				//	o+? => o+.
	{ utf_o74,	utf_o75 },				//	o+~ => o+.
	{ utf_o75,	utf_o7, utf_j },		//	o+. => o+j

	{ utf_U,	utf_U5 },				//	U => U.
	{ utf_U1,	utf_U5 },				//	U' => U.
	{ utf_U2,	utf_U5 },				//	U` => U.
	{ utf_U3,	utf_U5 },				//	U? => U.
	{ utf_U4,	utf_U5 },				//	U~ => U.
	{ utf_U5,	utf_U, utf_j },			//	U. => Uj
	{ utf_u,	utf_u5 },				//	u => u.
	{ utf_u1,	utf_u5 },				//	u' => u.
	{ utf_u2,	utf_u5 },				//	u` => u.
	{ utf_u3,	utf_u5 },				//	u? => u.
	{ utf_u4,	utf_u5 },				//	u~ => u.
	{ utf_u5,	utf_u, utf_j },			//	u. => uj

	{ utf_U7,	utf_U75 },				//	U+ => U+.
	{ utf_U71,	utf_U75 },				//	U+' => U+.
	{ utf_U72,	utf_U75 },				//	U+` => U+.
	{ utf_U73,	utf_U75 },				//	U+? => U+.
	{ utf_U74,	utf_U75 },				//	U+~ => U+.
	{ utf_U75,	utf_U7, utf_j },		//	U+. => U+j
	{ utf_u7,	utf_u75 },				//	u+ => u+.
	{ utf_u71,	utf_u75 },				//	u+' => u+.
	{ utf_u72,	utf_u75 },				//	u+` => u+.
	{ utf_u73,	utf_u75 },				//	u+? => u+.
	{ utf_u74,	utf_u75 },				//	u+~ => u+.
	{ utf_u75,	utf_u7, utf_j },		//	u+. => u+j

	{ utf_I,	utf_I5 },				//	I => I.
	{ utf_I1,	utf_I5 },				//	I' => I.
	{ utf_I2,	utf_I5 },				//	I` => I.
	{ utf_I3,	utf_I5 },				//	I? => I.
	{ utf_I4,	utf_I5 },				//	I~ => I.
	{ utf_I5,	utf_I, utf_j },			//	I. => Ij
	{ utf_i,	utf_i5 },				//	i => i.
	{ utf_i1,	utf_i5 },				//	i' => i.
	{ utf_i2,	utf_i5 },				//	i` => i.
	{ utf_i3,	utf_i5 },				//	i? => i.
	{ utf_i4,	utf_i5 },				//	i~ => i.
	{ utf_i5,	utf_i, utf_j },			//	i. => ij

	{ utf_Y,	utf_Y5 },				//	Y => Y.
	{ utf_Y1,	utf_Y5 },				//	Y' => Y.
	{ utf_Y2,	utf_Y5 },				//	Y` => Y.
	{ utf_Y3,	utf_Y5 },				//	Y? => Y.
	{ utf_Y4,	utf_Y5 },				//	Y~ => Y.
	{ utf_Y5,	utf_Y, utf_j },			//	Y. => Yj
	{ utf_y,	utf_y5 },				//	y => Y.
	{ utf_y1,	utf_y5 },				//	y' => y.
	{ utf_y2,	utf_y5 },				//	y` => y.
	{ utf_y3,	utf_y5 },				//	y? => y.
	{ utf_y4,	utf_y5 },				//	y~ => y.
	{ utf_y5,	utf_y, utf_j },			//	y. => yj
	{ 0 }
};
/*----------------------------------------------------------------------------*/
#endif
