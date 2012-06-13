/*******************************************************************************
 * Copyright (c) 2012 Huy Phan <dachuy@gmail.com>
 * This file is part of NAKL project.
 * 
 * NAKL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * NAKL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with NAKL.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/

#import <Foundation/Foundation.h>

#ifndef WORDSIZE
#define WORDSIZE	32
#endif

#define BACKSPACE_BUFFER 20

@interface KeyboardHandler : NSObject {
    int kbBLength, kbPLength;
    int kbMethod;
    UniChar _kbBuffer[256];
    UniChar* kbBuffer;
    NSArray *vowelsMap;
    UniChar word[WORDSIZE];
}

@property(nonatomic, assign) UniChar* kbBuffer;
@property(nonatomic) int kbBLength; 
@property(nonatomic) int kbPLength;
@property(nonatomic) int kbMethod;
@property(nonatomic, retain) NSArray *vowelsMap;

-(id)init;
- (void) mapToCharset: (ushort*) w: (int) count;
- (int) uiGroup: (ushort) u;
- (int) utfVnCmp: (ushort) u1: (ushort) u2;

- (bool) isValidModifier: (UniChar) c: (char) key;
- (void) append: (ushort) lastkey: (UniChar) key;
- (void) clearBuffer;
- (void) shiftBuffer;
- (void) updateBuffer;
- (int) addKey: (UniChar) key;

@end
