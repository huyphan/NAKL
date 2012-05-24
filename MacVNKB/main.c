
#include "main.h"
#include "data.h"
#include "keymap.h"
#include "macvnkb.h"

static char *separators[] = {
	" ",										// VKM_OFF
	" !@#$%&)|\\-{}[]:\";<>,/'`~?.^*(+=",		// VKM_VNI
	" !@#$%&)|\\-:\";<>,/'`~?.^*(+=",			// VKM_TELEX
	" !@#$%&)|\\-{}[]:\";<>,/"				// VKM_VIQR
};

int kbMethod = VKM_VNI;

static char rk = 0;
static char bs = 0;
static int bk = 0;
bool dirty;

CGEventRef KeyHandler(CGEventTapProxy proxy, CGEventType type, CGEventRef event, void *refcon)
{
    UniCharCount actualStringLength;
    UniCharCount maxStringLength = 1;    
    UniChar chars[3];

    long i, len;

    CGEventKeyboardGetUnicodeString(event, maxStringLength, &actualStringLength, chars);
    
    char key = chars[0];

    if (type == kCGEventKeyUp) {
        if (rk == key) {
            chars[0] = XK_BackSpace;
            CGEventKeyboardSetUnicodeString(event, actualStringLength, chars);
            rk = 0;
        }        
        
        return event;
    } else {
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
                ClearBuffer();
                break;

            default:

                if (kbMethod == VKM_OFF) {
                    break;
                }

                char *sp = strchr(separators[kbMethod], key);
                if (sp) {
                    ClearBuffer();
                    break;
                }

                switch( i = AddKey(key) ) {
                    case -1:

                        break;

                    default:
                        printf("%d %d\n",kbBLength, kbPLength);
//                        kbBuffer[1] = kbBuffer[0];
//                        kbBuffer[0] = '\b';
//                        CGEventKeyboardSetUnicodeString(event, 2, kbBuffer);
                        CGEventKeyboardSetUnicodeString(event, kbBLength+kbPLength, kbBuffer+BACKSPACE_BUFFER-kbPLength);                        
                        break;
                }
        }
    }
/*
    if ((key == VK_SPACE) || (key == VK_ENTER)) {
        ClearBuffer();
    } else if ((key > VK_SPACE) && (key < VK_LIMIT)) {
        if (dirty) {
            UpdateBuffer();
        }

        if (AddKey(key)) {
            
        }
    } else {
        dirty = true;
    }
*/
//    printf("%d %d\n", type, chars[0]);

/*    if(chars[0] == 's') { 
        chars[0] = 0x00E1;
        CGEventKeyboardSetUnicodeString(event, 1, chars);
        CGEventPost(kCGSessionEventTap, event);
        chars[0] = '\b';
        CGEventKeyboardSetUnicodeString(event, actualStringLength, chars);
    }
  */  

    // We must return the event for it to be useful.
    return event;
}

int main(void)
{    
    IsValidModifier('a', '1');
    exit(0);    
    CFMachPortRef      eventTap;
    CGEventMask        eventMask;
    CFRunLoopSourceRef runLoopSource;
    
    for (int i=0;i<BACKSPACE_BUFFER;i++) kbBuffer[i] = '\b';
    
    // Create an event tap. We are interested in key presses.
    eventMask = ((1 << kCGEventKeyDown) | (1 << kCGEventKeyUp));
    eventTap = CGEventTapCreate(kCGSessionEventTap, kCGHeadInsertEventTap, 0,
                                eventMask, KeyHandler, NULL);
    if (!eventTap) {
        fprintf(stderr, "failed to create event tap\n");
        exit(1);
    }

    // Create a run loop source.
    runLoopSource = CFMachPortCreateRunLoopSource(
                                                  kCFAllocatorDefault, eventTap, 0);
    
    // Add to the current run loop.
    CFRunLoopAddSource(CFRunLoopGetCurrent(), runLoopSource,
                       kCFRunLoopCommonModes);
    
    // Enable the event tap.
    CGEventTapEnable(eventTap, true);
    
    // Set it all running.
    CFRunLoopRun();
    
    // In a real program, one would have arranged for cleaning up.
    
    exit(0);
}