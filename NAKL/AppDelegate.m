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

#import "AppDelegate.h"

@implementation AppDelegate

@synthesize window = _window;
@synthesize preferencesController;

uint64_t controlKeys = kCGEventFlagMaskCommand | kCGEventFlagMaskAlternate | kCGEventFlagMaskControl | kCGEventFlagMaskSecondaryFn | kCGEventFlagMaskHelp;

static char *separators[] = {
	" ",										// VKM_OFF
	" !@#$%&)|\\-{}[]:\";<>,/'`~?.^*(+=",		// VKM_VNI
	" !@#$%&)|\\-:\";<>,/'`~?.^*(+="			// VKM_TELEX
};


KeyboardHandler *kbHandler;

static char rk = 0;
bool dirty;

#pragma mark Initialization

+(void)initialize
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    NSMutableDictionary *appDefs = [NSMutableDictionary dictionary];
    [appDefs setObject:[NSNumber numberWithInt:1] forKey:NAKL_KEYBOARD_METHOD];
    [defaults registerDefaults:appDefs];
}

- (void)applicationWillFinishLaunching:(NSNotification *)aNotification
{
    preferencesController = [[PreferencesController alloc] init];

    /* Read user preferences from plist */
    [AppData sharedAppData].userPrefs = [NSUserDefaults standardUserDefaults];        

    /* Update 'toggle' Hot Key */
    NSDictionary *dictionary = [[AppData sharedAppData].userPrefs dictionaryForKey:NAKL_TOGGLE_HOTKEY];
    PTKeyCombo *keyCombo = [[PTKeyCombo alloc] initWithPlistRepresentation:dictionary];
    [AppData sharedAppData].toggleCombo = SRMakeKeyCombo([keyCombo keyCode], [keyCombo modifiers]);
    [keyCombo release];
    
    
    /* Update 'switch method' Hot Key */    
    dictionary = [[AppData sharedAppData].userPrefs dictionaryForKey:NAKL_SWITCH_METHOD_HOTKEY];
    keyCombo = [[PTKeyCombo alloc] initWithPlistRepresentation:dictionary];
    [AppData sharedAppData].switchMethodCombo = SRMakeKeyCombo([keyCombo keyCode], [keyCombo modifiers]);
    [keyCombo release];    
    
    
    int method = [[AppData sharedAppData].userPrefs integerForKey:NAKL_KEYBOARD_METHOD];
    for (id object in [statusMenu itemArray]) {
        [(NSMenuItem*) object setState:((NSMenuItem*) object).tag == method];
    }

    kbHandler = [[KeyboardHandler alloc] init];
    kbHandler.kbMethod = method;
    [self performSelectorInBackground:@selector(eventLoop) withObject:nil];    
    
    [self updateStatusItem];
}

-(void)awakeFromNib {
    [super awakeFromNib];    
    statusItem = [[[NSStatusBar systemStatusBar] statusItemWithLength:NSVariableStatusItemLength] retain];
    [statusItem setMenu:statusMenu];
    [statusItem setAction:@selector(menuItemClicked)];
}

#pragma mark Keyboard Handler

CGEventRef KeyHandler(CGEventTapProxy proxy, CGEventType type, CGEventRef event, void *refcon)
{
    UniCharCount actualStringLength;
    UniCharCount maxStringLength = 1;    
    UniChar chars[3];
    UniChar *x;
    long i;
    
    uint64_t flag = CGEventGetFlags(event);
    
    if (flag == NAKL_MAGIC_NUMBER) {
        return event;
    }

    CGEventKeyboardGetUnicodeString(event, maxStringLength, &actualStringLength, chars);    
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
        {   
            ushort keycode = CGEventGetIntegerValueField(event, kCGKeyboardEventKeycode);
            
            if (flag & (controlKeys)) {

                if (((flag & controlKeys) == [AppData sharedAppData].toggleCombo.flags) && (keycode == [AppData sharedAppData].toggleCombo.code) )
                {
                    if (kbHandler.kbMethod == VKM_OFF) {
                        kbHandler.kbMethod = [[AppData sharedAppData].userPrefs integerForKey:NAKL_KEYBOARD_METHOD];
                    } else {
                        kbHandler.kbMethod = VKM_OFF;
                    }
                    
                    [((AppDelegate*) refcon) updateStatusItem];                    
                }
                
                if (((flag & controlKeys) == [AppData sharedAppData].switchMethodCombo.flags) && (keycode == [AppData sharedAppData].switchMethodCombo.code) ){
                    if (kbHandler.kbMethod == VKM_VNI) {
                        kbHandler.kbMethod = VKM_TELEX;
                    } else if (kbHandler.kbMethod == VKM_TELEX) {
                        kbHandler.kbMethod = VKM_VNI;
                    } 
                    
                    if (kbHandler.kbMethod != VKM_OFF) {
                        [[AppData sharedAppData].userPrefs setValue:[NSNumber numberWithInt:kbHandler.kbMethod] forKey:NAKL_KEYBOARD_METHOD];                    
                        [((AppDelegate*) refcon) updateStatusItem];                                        
                    }
                }     

                [kbHandler clearBuffer];
                break;
            }
            
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
                                CGEventRef keyEventDown = CGEventCreateKeyboardEvent( NULL, 1, true);
                                CGEventRef keyEventUp = CGEventCreateKeyboardEvent(NULL, 1, false);                            
                                
                                CGEventSetFlags(keyEventDown, CGEventGetFlags(event));
                                CGEventSetFlags(keyEventUp, CGEventGetFlags(event));
                                
                                CGEventKeyboardSetUnicodeString(keyEventDown, 1, x);
                                CGEventKeyboardSetUnicodeString(keyEventUp, 1, x);
                                
                                CGEventSetFlags(keyEventDown,NAKL_MAGIC_NUMBER);
                                CGEventSetFlags(keyEventUp,NAKL_MAGIC_NUMBER);                                
                                
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
        }
            
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
                                eventMask, KeyHandler, self);
    if (!eventTap) {
        fprintf(stderr, "failed to create event tap\n");
        exit(1);
    }
    
    runLoopSource = CFMachPortCreateRunLoopSource(kCFAllocatorDefault, eventTap, 0);
    CFRunLoopAddSource(CFRunLoopGetCurrent(), runLoopSource, kCFRunLoopCommonModes);    
    CGEventTapEnable(eventTap, true);
    CFRunLoopRun();
}

#pragma mark GUI

- (void) updateStatusItem {
    int method = kbHandler.kbMethod;
    switch (method) {
        case VKM_VNI:
            [statusItem setTitle:@"vni"];
            break;            
            
        case VKM_TELEX:
            [statusItem setTitle:@"telex"];
            break;
            
        default:
            [statusItem setTitle:@"en"];
            break;
    }
}

-(IBAction)showPreferences:(id)sender{
    if(!self.preferencesController)
        self.preferencesController = [[PreferencesController alloc] initWithWindowNibName:@"Preferences"];

    [self.preferencesController showWindow:self];
    [self.preferencesController.window center];
}

- (IBAction) methodSelected:(id)sender {
    for (id object in [statusMenu itemArray]) {
        [(NSMenuItem*) object setState:NSOffState];
    }

    [(NSMenuItem*) sender setState:NSOnState];

    int method;

    if ([[(NSMenuItem*) sender title] compare:@"VNI"] == 0) 
    {
        method = VKM_VNI;
    } 
    else if ([[(NSMenuItem*) sender title] compare:@"Telex"] == 0) 
    {
        method = VKM_TELEX;
    } 
    else 
    {
        method = VKM_OFF;
    }

    kbHandler.kbMethod = method;
    if (method != VKM_OFF) 
    {
        [[AppData sharedAppData].userPrefs setValue:[NSNumber numberWithInt:method] forKey:NAKL_KEYBOARD_METHOD];
    }

    [self updateStatusItem];
}

#pragma mark -

- (IBAction) quit:(id)sender 
{
    CFRunLoopRef rl = (CFRunLoopRef)CFRunLoopGetCurrent();
    CFRunLoopStop(rl);
    [NSApp terminate:self];
}

- (void)dealloc {
    [preferencesController release];
    [super dealloc];
}

@end