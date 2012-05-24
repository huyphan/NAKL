//
//  AppDelegate.m
//  MacVNKB
//
//  Created by Huy Phan on 20/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "AppDelegate.h"
#include "KeyboardHandler.h"
#include "data.h"
#include "keymap.h"

@implementation AppDelegate

@synthesize window = _window;

static char *separators[] = {
	" ",										// VKM_OFF
	" !@#$%&)|\\-{}[]:\";<>,/'`~?.^*(+=",		// VKM_VNI
	" !@#$%&)|\\-:\";<>,/'`~?.^*(+=",			// VKM_TELEX
	" !@#$%&)|\\-{}[]:\";<>,/"				// VKM_VIQR
};

int kbMethod = VKM_VNI;

KeyboardHandler *kbHandler;

static char rk = 0;
static char bs = 0;
static int bk = 0;
bool dirty;

CGEventRef KeyHandler(CGEventTapProxy proxy, CGEventType type, CGEventRef event, void *refcon)
{
    UniCharCount actualStringLength;
    UniCharCount maxStringLength = 1;    
    UniChar chars[3];
    UniChar *x;
    long i, len;

    CGEventKeyboardGetUnicodeString(event, maxStringLength, &actualStringLength, chars);
    CGEventFlags f = CGEventGetFlags(event);

    UniChar key = chars[0];    

    if ((f>>29)&1) {
        return event;
    }

    switch (type) {
        case kCGEventKeyUp:
            if (rk == key) {
                chars[0] = XK_BackSpace;
                CGEventKeyboardSetUnicodeString(event, actualStringLength, chars);
                rk = 0;
            }        
            return event;            
            break;
            
        case kCGEventKeyDown:
            switch (key) {
                case XK_Linefeed:
                case XK_Clear:
                case XK_Return:
                case XK_Home:
                case XK_Left:
                case XK_Up:
                case XK_Right:
                case XK_Down:
                case XK_Page_Up:
                case XK_Page_Down:
                case XK_End:
                case XK_Begin:
                case XK_Tab:
                case XK_BackSpace:
                    [kbHandler clearBuffer];
                    break;
                    
                default:
                    
                    if (kbMethod == VKM_OFF) {
                        break;
                    }
                    
                    char *sp = strchr(separators[kbMethod], key);
                    if (sp) {
                        [kbHandler clearBuffer];
                        break;
                    }
                    
                    switch( i = [kbHandler addKey:key] ) {
                        case -1:
                            
                            break;
                            
                        default:
                            
                            x = kbHandler.kbBuffer+BACKSPACE_BUFFER-kbHandler.kbPLength;
                            for (i = 0;i<kbHandler.kbBLength + kbHandler.kbPLength;i++,x++) {
                                CGEventRef keyEventDown = CGEventCreateKeyboardEvent(NULL, 1, true);
                                CGEventRef keyEventUp = CGEventCreateKeyboardEvent(NULL, 1, false);                            
                                CGEventSetFlags(keyEventDown,1<<29);
                                CGEventSetFlags(keyEventUp,1<<29);
                                CGEventKeyboardSetUnicodeString(keyEventDown, 1, x);
                                CGEventPost(kCGSessionEventTap, keyEventDown);
                                CGEventKeyboardSetUnicodeString(keyEventUp, 1, x);
                                CGEventPost(kCGSessionEventTap, keyEventUp);
                            }
                            chars[0] = ' ';
                            CGEventKeyboardSetUnicodeString(event, 1, chars);
                            return nil;

                            break;            
                    }
            }
            break;
            
        case kCGEventLeftMouseDown:
        case kCGEventRightMouseDown:            
        case kCGEventOtherMouseDown:
            [kbHandler clearBuffer];
            break;
            
        default:
            break;
    }

    return event;
}

- (void) eventLoop {
    CFMachPortRef      eventTap;
    CGEventMask        eventMask;
    CFRunLoopSourceRef runLoopSource;
    
    eventMask = ((1 << kCGEventKeyDown) | (1 << kCGEventKeyUp) |
                 (1 << kCGEventLeftMouseDown) |
                 (1 << kCGEventRightMouseDown) |
                 (1 << kCGEventOtherMouseDown)
                 );

    eventTap = CGEventTapCreate(kCGSessionEventTap, kCGHeadInsertEventTap, 0,
                                eventMask, KeyHandler, NULL);
    if (!eventTap) {
        fprintf(stderr, "failed to create event tap\n");
        exit(1);
    }
    
    runLoopSource = CFMachPortCreateRunLoopSource(kCFAllocatorDefault, eventTap, 0);
    CFRunLoopAddSource(CFRunLoopGetCurrent(), runLoopSource, kCFRunLoopCommonModes);    
    CGEventTapEnable(eventTap, true);
    CFRunLoopRun();

    
    exit(0);    
}

- (void)applicationWillFinishLaunching:(NSNotification *)aNotification
{
    kbHandler = [[KeyboardHandler alloc] init];
    [self performSelectorInBackground:@selector(eventLoop) withObject:nil];
}

-(void)awakeFromNib {

    statusItem = [[[NSStatusBar systemStatusBar] statusItemWithLength:NSVariableStatusItemLength] retain];
    [statusItem setMenu:statusMenu];
    [statusItem setTitle:@"MacVNKB"];
    [statusItem setAction:@selector(menuItemClicked)];
}

- (IBAction) methodSelected:(id)sender {
    for (id object in [statusMenu itemArray]) {
        [(NSMenuItem*) object setState:NSOffState];
    }     
    
    [(NSMenuItem*) sender setState:NSOnState];
    [kbHandler clearBuffer];
    if ([[(NSMenuItem*) sender title] compare:@"VNI"] == 0) {
        kbHandler.kbMethod = VKM_VNI;
    } else if ([[(NSMenuItem*) sender title] compare:@"Telex"] == 0) {
        kbHandler.kbMethod = VKM_TELEX;        
    } else {
        kbHandler.kbMethod = VKM_OFF;
    }
}

@end
