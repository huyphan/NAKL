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

#import "AppDelegate.h"

@implementation AppDelegate

@synthesize window = _window;
@synthesize preferencesController;
@synthesize eventTap;

uint64_t controlKeys = kCGEventFlagMaskCommand | kCGEventFlagMaskAlternate | kCGEventFlagMaskControl | kCGEventFlagMaskSecondaryFn | kCGEventFlagMaskHelp;

static char *separators[] = {
	"",										// VKM_OFF
	"!@#$%&)|\\-{}[]:\";<>,/'`~?.^*(+=",		// VKM_VNI
	"!@#$%&)|\\-:\";<>,/'`~?.^*(+="			// VKM_TELEX
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

    [AppData loadUserPrefs];
    [AppData loadHotKeys];
    [AppData loadShortcuts];
    
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
    [statusItem setHighlightMode: YES];    

    
    NSSize imageSize;
    imageSize.width = 16;
    imageSize.height = 16;        
    
    NSBundle *bundle = [NSBundle mainBundle];    
    viStatusImage = [[NSImage alloc] initWithContentsOfFile: [bundle pathForResource: @"icon24" ofType: @"png"]];
    [viStatusImage setSize:imageSize];
    
    enStatusImage = [[NSImage alloc] initWithContentsOfFile: [bundle pathForResource: @"icon_blue_24" ofType: @"png"]];
    [enStatusImage setSize:imageSize];
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

    if (flag & NAKL_MAGIC_NUMBER) {
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

		case kCGEventTapDisabledByTimeout:
			CGEventTapEnable(((AppDelegate*) refcon).eventTap , TRUE);
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
                    
                    [((AppDelegate*) refcon) updateCheckedItem];
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
                        [((AppDelegate*) refcon) updateCheckedItem];                        
                        [((AppDelegate*) refcon) updateStatusItem];                                        
                    }
                }     

                [kbHandler clearBuffer];
                break;
            } 
 
            /* TODO: Use keycode instead of value of character */
            switch (keycode) {
                case KC_Return:
                case KC_Return_Num:
                case KC_Home:
                case KC_Left:
                case KC_Up:
                case KC_Right:
                case KC_Down:
                case KC_End:
                case KC_Tab:
                case KC_BackSpace:
                case KC_Delete:
                case KC_Page_Up:
                case KC_Page_Down:
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
                        {
                            x = kbHandler.kbBuffer+BACKSPACE_BUFFER-kbHandler.kbPLength;
                            for (i = 0;i<kbHandler.kbBLength + kbHandler.kbPLength;i++,x++) {
                                CGEventRef keyEventDown = CGEventCreateKeyboardEvent( NULL, 1, true);
                                CGEventRef keyEventUp = CGEventCreateKeyboardEvent(NULL, 1, false);                            

                                int flag = CGEventGetFlags(keyEventDown);
                                CGEventSetFlags(keyEventDown, NAKL_MAGIC_NUMBER | flag);
                                
                                flag = CGEventGetFlags(keyEventUp);
                                CGEventSetFlags(keyEventUp,NAKL_MAGIC_NUMBER | flag);                                
                                if (*x == '\b') {
                                    CGEventSetIntegerValueField(keyEventDown, kCGKeyboardEventKeycode, 0x33);
                                    CGEventSetIntegerValueField(keyEventUp, kCGKeyboardEventKeycode, 0x33);                                    
                                } else {
                                    CGEventKeyboardSetUnicodeString(keyEventDown, 1, x);
                                    CGEventKeyboardSetUnicodeString(keyEventUp, 1, x);                                    
                                }

                                CGEventTapPostEvent(proxy, keyEventDown);
                                CGEventTapPostEvent(proxy, keyEventUp);                                
                                
                                CFRelease(keyEventDown);
                                CFRelease(keyEventUp);
                            }
                            return NULL;  
                        }
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

- (void) updateCheckedItem {
    int method = kbHandler.kbMethod;
    for (id object in [statusMenu itemArray]) {
        [(NSMenuItem*) object setState:((NSMenuItem*) object).tag == method];
    }    
}

- (void) updateStatusItem {
    int method = kbHandler.kbMethod;
    switch (method) {
        case VKM_VNI:       
        case VKM_TELEX:
            [statusItem setImage:viStatusImage];
            break;
            
        default:
            [statusItem setImage:enStatusImage];
            break;
    }
}

-(IBAction)showPreferences:(id)sender{
    if(!self.preferencesController)
        self.preferencesController = [[PreferencesController alloc] initWithWindowNibName:@"Preferences"];

    [NSApp activateIgnoringOtherApps:YES];
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