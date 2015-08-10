/*******************************************************************************
 * Copyright (c) 2012 Huy Phan <dachuy@gmail.com>
 * This file is part of NAKL project.
 *
 * NAKL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * NAKL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with NAKL.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/


#import "KeyboardHandler.h"
#import "utf.h"
#import "AppData.h"
#import "keymap.h"

@implementation KeyboardHandler

#define chr_A   'A'
#define chr_a   'a'
#define chr_D   'D'
#define chr_d   'd'
#define chr_U   'U'
#define chr_u   'u'
#define chr_G   'G'
#define chr_g   'g'
#define chr_Q   'Q'
#define chr_q   'q'

#define LookupChar(t, c) for( ; *t && *t!=c; t++ )

const char *vowels = "AIUEOYaiueoy";
const char *consonants = "BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz";

@synthesize kbBuffer;
@synthesize kbBLength;
@synthesize kbPLength;
@synthesize kbMethod;
@synthesize vowelsMap;

//UniChar kbBuffer[256];
UniChar backup[WORDSIZE];
UniChar word[WORDSIZE], *pw;

int kbOff;
int count;

int vp = -1;
int vpc = 0;
int vps[WORDSIZE];
char lvs[WORDSIZE];
int tempoff = 0;
bool hasVowel = false;
bool hasSpaceBar = false;

-(id)init
{
    if (self = [super init]) {
        for (int i=0;i<BACKSPACE_BUFFER;i++) {
            self.kbBuffer[i] = '\b';
        }
    }
    
    UniChar groupA[] = {
        utf_a,  utf_a1,  utf_a2,  utf_a3,  utf_a4,  utf_a5,
        utf_a6, utf_a61, utf_a62, utf_a63, utf_a64, utf_a65,
        utf_a8, utf_a81, utf_a82, utf_a83, utf_a84, utf_a85,
        utf_A,  utf_A1,  utf_A2,  utf_A3,  utf_A4,  utf_A5,
        utf_A6, utf_A61, utf_A62, utf_A63, utf_A64, utf_A65,
        utf_A8, utf_A81, utf_A82, utf_A83, utf_A84, utf_A85,
        0
    };
    
    UniChar groupE[] = {
        utf_e,  utf_e1,  utf_e2,  utf_e3,  utf_e4,  utf_e5,
        utf_e6, utf_e61, utf_e62, utf_e63, utf_e64, utf_e65,
        utf_E,  utf_E1,  utf_E2,  utf_E3,  utf_E4,  utf_E5,
        utf_E6, utf_E61, utf_E62, utf_E63, utf_E64, utf_E65,
        0
    };
    
    UniChar groupI[] = {
        utf_i,  utf_i1,  utf_i2,  utf_i3,  utf_i4,  utf_i5,
        utf_I,  utf_I1,  utf_I2,  utf_I3,  utf_I4,  utf_I5,
        0
    };
    
    UniChar groupO[] = {
        utf_o,  utf_o1,  utf_o2,  utf_o3,  utf_o4,  utf_o5,
        utf_o6, utf_o61, utf_o62, utf_o63, utf_o64, utf_o65,
        utf_o7, utf_o71, utf_o72, utf_o73, utf_o74, utf_o75,
        utf_O,  utf_O1,  utf_O2,  utf_O3,  utf_O4,  utf_O5,
        utf_O6, utf_O61, utf_O62, utf_O63, utf_O64, utf_O65,
        utf_O7, utf_O71, utf_O72, utf_O73, utf_O74, utf_O75,
        0
    };
    
    UniChar groupU[] = {
        utf_u,  utf_u1,  utf_u2,  utf_u3,  utf_u4,  utf_u5,
        utf_u7, utf_u71, utf_u72, utf_u73, utf_u74, utf_u75,
        utf_U,  utf_U1,  utf_U2,  utf_U3,  utf_U4,  utf_U5,
        utf_U7, utf_U71, utf_U72, utf_U73, utf_U74, utf_U75,
        0
    };
    
    UniChar groupY[] = {
        utf_y,  utf_y1,  utf_y2,  utf_y3,  utf_y4,  utf_y5,
        utf_Y,  utf_Y1,  utf_Y2,  utf_Y3,  utf_Y4,  utf_Y5,
        0
    };
    
    UniChar groupD[] = {
        utf_d,
        utf_D,
        utf_d9,
        utf_D9,
        utf_vnd,
        0
    };
    
    self.vowelsMap = [NSArray arrayWithObjects:[NSString stringWithCharacters:groupA length:sizeof(groupA)/sizeof(UniChar)],
                      [NSString stringWithCharacters:groupE length:sizeof(groupE)/sizeof(UniChar)],
                      [NSString stringWithCharacters:groupI length:sizeof(groupI)/sizeof(UniChar)],
                      [NSString stringWithCharacters:groupO length:sizeof(groupO)/sizeof(UniChar)],
                      [NSString stringWithCharacters:groupU length:sizeof(groupU)/sizeof(UniChar)],
                      [NSString stringWithCharacters:groupY length:sizeof(groupY)/sizeof(UniChar)],
                      [NSString stringWithCharacters:groupD length:sizeof(groupD)/sizeof(UniChar)], nil
                      ];
    
    return self;
}

- (void)setKbBuffer :(UniChar *)buffer
{
    memcpy(_kbBuffer, buffer, 256*sizeof(UniChar));
}

- (UniChar*) kbBuffer
{
    return _kbBuffer;
}

- (void) mapToCharset :(UniChar *)w :(int)count
{
    UniChar *s;
    for( s = _kbBuffer+BACKSPACE_BUFFER, pw = w; count>0; count--, w++ ) {
        *s++ = *w;
    }
    *s = 0;
    
    self.kbBLength = s - _kbBuffer - BACKSPACE_BUFFER;
}

- (int) uiGroup: (ushort) u
{
    static ushort UI[] = {
        utf_U,  utf_U1,  utf_U2,  utf_U3,  utf_U4,  utf_U5,
        utf_u,  utf_u1,  utf_u2,  utf_u3,  utf_u4,  utf_u5,
        utf_U7, utf_U71, utf_U72, utf_U73, utf_U74, utf_U75,
        utf_u7, utf_u71, utf_u72, utf_u73, utf_u74, utf_u75,
        utf_I,  utf_I1,  utf_I2,  utf_I3,  utf_I4,  utf_I5,
        utf_i,  utf_i1,  utf_i2,  utf_i3,  utf_i4,  utf_i5, 0
    };
    register ushort *ui = UI;
    while( *ui ) {
        if( u==*ui++ ) {
            return ui - UI;
        }
    }
    return 0;
}

- (int) utfVnCmp :(ushort)u1 :(ushort) u2
{
    static ushort V[] = {
        utf_a, utf_A, utf_a1, utf_A1, utf_a2, utf_A2,
        utf_a3, utf_A3, utf_a4, utf_A4, utf_a5, utf_A5,
        utf_a6, utf_A6, utf_a61, utf_A61, utf_a62, utf_A62,
        utf_a63, utf_A63, utf_a64, utf_A64, utf_a65, utf_A65,
        utf_a8, utf_A8, utf_a81, utf_A81, utf_a82, utf_A82,
        utf_a83, utf_A83, utf_a84, utf_A84, utf_a85, utf_A85,
        utf_e, utf_E, utf_e1, utf_E1, utf_e2, utf_E2,
        utf_e3, utf_E3, utf_e4, utf_E4, utf_e5, utf_E5,
        utf_e6, utf_E6, utf_e61, utf_E61, utf_e62, utf_E62,
        utf_e63, utf_E63, utf_e64, utf_E64, utf_e65, utf_E65,
        utf_o, utf_O, utf_o1, utf_O1, utf_o2, utf_O2,
        utf_o3, utf_O3, utf_o4, utf_O4, utf_o5, utf_O5,
        utf_o6, utf_O6, utf_o61, utf_O61, utf_o62, utf_O62,
        utf_o63, utf_O63, utf_o64, utf_O64, utf_o65, utf_O65,
        utf_o7, utf_O7, utf_o71, utf_O71, utf_o72, utf_O72,
        utf_o73, utf_O73, utf_o74, utf_O74, utf_o75, utf_O75,
        utf_y, utf_Y, utf_y1, utf_Y1, utf_y2, utf_Y2,
        utf_y3, utf_Y3, utf_y4, utf_Y4, utf_y5, utf_Y5,
        utf_u, utf_U, utf_u1, utf_U1, utf_u2, utf_U2,
        utf_u3, utf_U3, utf_u4, utf_U4, utf_u5, utf_U5,
        utf_u7, utf_U7, utf_u71, utf_U71, utf_u72, utf_U72,
        utf_u73, utf_U73, utf_u74, utf_U74, utf_u75, utf_U75,
        utf_i, utf_I, utf_i1, utf_I1, utf_i2, utf_I2,
        utf_i3, utf_I3, utf_i4, utf_I4, utf_i5, utf_I5,
        utf_d9, utf_D9, 0
    };
    register int i = -1, j = -1;
    register ushort *v = V;
    
    LookupChar(v, u1);
    
    if( *v ) {
        i = v - V;
    }
    v = V;
    LookupChar(v, u2);
    
    if( *v ) {
        j = v - V;
    }
    
    return i-j;
}

//----------------------------------------------------------------------------
//  Clear internal buffer & Speller status
//----------------------------------------------------------------------------
- (void) clearBuffer
{
    tempoff = 0;
    count = 0;
    *word = 0;
    hasVowel = NO;
    hasSpaceBar = NO;
    //    Speller.Clear();
}

- (void) updateBuffer
{
    return;
}

- (void) shiftBuffer
{
    kbOff = 0;
    word[0] = word[count-1];
    count = 1;
}

- (void) append :(ushort)lastkey :(UniChar)key
{
    static char *spchk = "AIUEOYaiueoy|BDFJKLQSVWXZbdfjklqsvwxz|'`~?.^*+=";
    static char *vwchk = "|ia|ua|oa|ai|ui|oi|au|iu|eu|ie|ue|oe|ye|ao|uo|eo|ay|uy|uu|ou|io|";
    char *sp = strchr(spchk, (char) key);
    int kp = sp ? (sp - spchk) : -1;
    
    if( !count ) {
        if( kp>=0 && kp<12 ) {
            vpc = 1;
            vps[vp = 0] = -1;
            lvs[0] = key;
        } else {
            if( kp==12 || kp>37 ) {
                return;
            } else {
                vp = -1;
                vpc = 0;
            }
        }
    }
    else {
        if( kp==12 || kp>37 ) {
            [self clearBuffer];
            return;
        }
        else
            if( kp>12 ) // b, d, f,...
                tempoff = count;
            else
                if( kp>=0 ) { // vowels
                    if (!hasVowel) {
                        hasVowel = YES;
                    } else {
                        char *lsp = strchr(spchk, (char) lastkey);
                        int lkp = sp ? (lsp - spchk) : -1;
                        if ( (lastkey < 127) && (lkp > 12) && (lkp < 37) ) {
                            tempoff = count;
                        }
                    }
                    if( vp<0 ) {
                        vps[vpc++] = vp;
                        vp = count;
                        lvs[0] = key;
                    }
                    else
                        if( count-vp>1 )
                            tempoff = count;
                        else {
#define lower(c) ((c) <= 'Z' ? (c) + 'a' - 'A' : c)
                            static char w[5] = { '|', 0, 0, '|', 0 };
                            w[1] = lower(lvs[vpc-1]);
                            w[2] = lower(key);
                            if( !strstr(vwchk, w) )
                                tempoff = count;
                            else {
                                lvs[vpc] = key;
                                vps[vpc++] = vp;
                                vp = count;
                            }
#undef lower
                        }
                }
                else
                    switch( key ) {
                        case 'h':
                        case 'H': // [cgknpt]h
                            if( lastkey>127 || !strchr("CGKNPTcgknpt", lastkey) )
                                tempoff = count;
                            break;
                        case 'g':
                        case 'G': // [n]g
                            if( lastkey!='n' && lastkey!='N' )
                                tempoff = count;
                            break;
                        case 'r':
                        case 'R': // [t]r
                            if( lastkey!='t' && lastkey!='T' )
                                tempoff = count;
                            break;
                        default:
                            if( strchr(consonants, lastkey) )
                                tempoff = count;
                            break;
                    }
    }
    word[count++] = (ushort)key;
}

- (bool) isValidModifier :(UniChar)c :(char)key
{
    char *m = modifierKeys[self.kbMethod - 1];
    if ( (65<=key) && (key<=90)) {
        key += 32;
    }
    char* p;
    if ( (p = strchr(m, key)) == NULL) {
        return NULL;
    }
    
    for (NSString* s in vowelsMap) {
        NSString *cString = [NSString stringWithCharacters:&c length:1];
        if ([s rangeOfString:cString].location != NSNotFound) {
            ushort v = modifiersMap[self.kbMethod - 1][strchr(modifiedChars,[(NSString*) s characterAtIndex:0]) - modifiedChars];
            return 1L&(v>>(p-m));
        }
    }
    
    return NO;
}

- (int) checkShortcut
{
    NSString *lastWord = [NSString stringWithCharacters:word length:count];
    NSString* text = [[AppData sharedAppData].shortcutDictionary objectForKey:lastWord];
    if (text != nil) {
        int i=0;
        for (;i<text.length;i++) {
            word[i] = [text characterAtIndex:i];
        }
        word[i] = XK_SpaceBar;
        kbPLength = count;
        [self mapToCharset:word:[text length]+1];
        
        return count;
    }
    
    return -1;
}

- (int) addKey: (UniChar) key
{
    if (key == XK_SpaceBar) {
        int p = -1;
        
        if (hasSpaceBar) {
            p = [self checkShortcut];
        }
        
        [self clearBuffer];
        hasSpaceBar = YES;
        return p;
    }
    
    int p = -1;
    int i, j = -1;
    ushort c = 0;
    ushort cc;
    modifier_t *m = modes[ self.kbMethod - 1 ];
    vietcode_t *v = NULL;
    
    if( !count || tempoff ) {
        [self append:c:key];
        return -1;
    }
    
    c = word[p = count - 1];
    
    for (i=0; m[i].modifier; i++) {
        if (key == m[i].modifier) {
            v = m[j = i].code;
        }
    }
    
    if (!v) {
        [self append:c:key];
        return -1;
    }
    
    i = p;
    
    /* Loop back to search for the closest character that can match with current key */
    
    while ((i >= 0) && ![self isValidModifier:word[i]:key] ) {
        i--;
    }
    
    if( i < 0 ) {
        [self append:c:key];
        return -1;
    }
    
    /* If there's other character that can match with current key, we modify it first  */
    while ( (i-1 >= 0) &&
           (strchr(vowels, word[i-1]) || (word[i-1] > 0x80) )
           && ([self utfVnCmp:word[i-1]:word[i]] < 0)
           && [self isValidModifier:word[i-1]:key]
           ) {
        i--;
    }
    
    if( i == count-1 && i-1 >= 0 && (j = [self uiGroup:word[i-1]]) > 0 ) {
        switch( word[i] ) {
            case chr_a:
            case chr_A:
                
                if (( i-2 < 0 || (
                                  (
                                   (j < 24 && word[i-2] != chr_q && word[i-2] != chr_Q) ||
                                   (j > 24 && word[i-2] != chr_g && word[i-2] != chr_G)
                                   )
                                  )
                     ) && [self isValidModifier:word[i-1]:key] )
                    i = i - 1;
                break;
            case chr_u:
            case chr_U:
                if( i-2 < 0 ||  (word[i-2] != chr_g && word[i-2] != chr_G) )
                    i = i - 1;
                break;
        }
    }
    
    /* Try to prevent modifying long words (probably when typing foreign language)
     TODO: this code is *hacky*, it needs to be replaced by a proper spellcheck.
     */
    if (p - i >= BACKSPACE_BUFFER) {
        [self append:c:key];
        return -1;
    }
    
    c = word[p = i];
    
    for( i = 0; (cc = v[i].c) != 0 && c != cc; i++ );
    
    if( !cc ) {
        [self append:c:key];
        return -1;
    }
    
    kbPLength = count - p;
    if( !v[i].r2 ) {
        word[ p ] = v[i].r1;
        backup[ p ] = c;
    } else {
        word[ tempoff = count++ ] = (ushort)key;
        word[ p ] = backup[ p ];
    }
    
    [self mapToCharset:&word[p]:count-p];
    return p;
}

- (void) dealloc {
    [super dealloc];
}

@end
