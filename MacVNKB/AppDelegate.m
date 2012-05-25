//
//  AppDelegate.m
//  MacVNKB
//
//  Created by Huy Phan on 20/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "AppDelegate.h"
#include "KeyboardHandler.h"
#include "keymap.h"

#define VK_MAGIC_NUMBER 0xCAFEBABE

@implementation AppDelegate

@synthesize window = _window;

static char *separators[] = {
	" ",										// VKM_OFF
	" !@#$%&)|\\-{}[]:\";<>,/'`~?.^*(+=",		// VKM_VNI
	" !@#$%&)|\\-:\";<>,/'`~?.^*(+=",			// VKM_TELEX
	" !@#$%&)|\\-{}[]:\";<>,/"				// VKM_VIQR
};

KeyboardHandler *kbHandler;
CGEventSourceRef eventSource;
static char rk = 0;
bool dirty;


CGEventRef KeyHandler(CGEventTapProxy proxy, CGEventType type, CGEventRef event, void *refcon)
{
    UniCharCount actualStringLength;
    UniCharCount maxStringLength = 1;    
    UniChar chars[3];
    UniChar *x;
    long i;

    CGEventKeyboardGetUnicodeString(event, maxStringLength, &actualStringLength, chars);

    uint64_t magic = CGEventGetIntegerValueField(event, kCGEventSourceUserData);
    if (magic == VK_MAGIC_NUMBER) {
        return event;
    }

    UniChar key = chars[0];    
    
    switch (type) {
        case kCGEventKeyUp:
            if (rk == key) {
                chars[0] = XK_BackSpace;
                CGEventKeyboardSetUnicodeString(event, actualStringLength, chars);
                rk = 0;
            }
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
                    
                    if (kbHandler.kbMethod == VKM_OFF) {
                        break;
                    }
                    
                    char *sp = strchr(separators[kbHandler.kbMethod], key);
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

                                CGEventRef keyEventDown = CGEventCreateKeyboardEvent(eventSource, 1, true);
                                CGEventRef keyEventUp = CGEventCreateKeyboardEvent(eventSource, 1, false);                            
                                
                                CGEventSetFlags(keyEventDown, CGEventGetFlags(event));
                                CGEventSetFlags(keyEventUp, CGEventGetFlags(event));
                                    
                                CGEventKeyboardSetUnicodeString(keyEventDown, 1, x);
                                CGEventKeyboardSetUnicodeString(keyEventUp, 1, x);
                                
                                if (*x == '\b') {
                                    CGEventSetIntegerValueField(keyEventDown, kCGKeyboardEventKeycode, 0x33);                                        
                                    CGEventSetIntegerValueField(keyEventUp, kCGKeyboardEventKeycode, 0x33);        
                                }
                                
                                CGEventPost(kCGSessionEventTap, keyEventDown);                                
                                CGEventPost(kCGSessionEventTap, keyEventUp);

                                CFRelease(keyEventDown);                                
                                CFRelease(keyEventUp);
                            }
                            return NULL;
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
}

- (void)applicationWillFinishLaunching:(NSNotification *)aNotification
{
    kbHandler = [[KeyboardHandler alloc] init];
    kbHandler.kbMethod = VKM_VNI;
    [statusItem setTitle:@"vni"];
    
    eventSource = CGEventSourceCreate(kCGEventSourceStateHIDSystemState);
    CGEventSourceSetUserData(eventSource, VK_MAGIC_NUMBER);

    [self performSelectorInBackground:@selector(eventLoop) withObject:nil];
}

-(void)awakeFromNib {
    statusItem = [[[NSStatusBar systemStatusBar] statusItemWithLength:NSVariableStatusItemLength] retain];
    [statusItem setMenu:statusMenu];
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
        [statusItem setTitle:@"vni"];
    } else if ([[(NSMenuItem*) sender title] compare:@"Telex"] == 0) {
        kbHandler.kbMethod = VKM_TELEX;        
        [statusItem setTitle:@"telex"];        
    } else {
        kbHandler.kbMethod = VKM_OFF;
        [statusItem setTitle:@"en"];        
    }
}

- (IBAction) quit:(id)sender {
    CFRunLoopRef rl = (CFRunLoopRef)CFRunLoopGetCurrent();
    CFRunLoopStop(rl);
    [NSApp terminate:self];
}

@end
