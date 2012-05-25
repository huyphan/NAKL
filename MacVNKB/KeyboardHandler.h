//
//  KeyboardHandler.h
//  MacVNKB
//
//  Created by Huy Phan on 20/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef WORDSIZE
#define WORDSIZE	32
#endif

#define BACKSPACE_BUFFER 3

typedef enum {
    VKM_OFF, VKM_VNI, VKM_TELEX, VKM_VIQR
} vk_methods;

typedef enum {
    VKC_TCVN, VKC_VNI, VKC_VIQR, VKC_VISCII, VKC_VPS, VKC_UTF8
} vk_charsets;

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
- (void) append: (ushort) lastkey: (char) key;
- (void) clearBuffer;
- (void) shiftBuffer;
- (void) updateBuffer;
- (long) backspaceDelete;
- (int) addKey: (UniChar) key;

@end
