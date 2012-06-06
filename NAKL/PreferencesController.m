//
//  PreferencesController.m
//  NAKL
//
//  Created by Huy Phan on 26/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "PreferencesController.h"
#import "ShortcutRecorder/SRRecorderControl.h"
#import "PTHotKeyCenter.h"
#import "PTHotKey.h"

@implementation PreferencesController

@synthesize toggleHotKey = _toggleHotKey;
@synthesize switchMethodHotKey = _switchMethodHotKey;
@synthesize versionString;
@synthesize shortcuts;

-(id)init {
    if (![super initWithWindowNibName:@"Preferences"])
        return nil;
    NSString *version = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"];
    
    NSString *buildNumber = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleVersion"];

    self.versionString = [NSString stringWithFormat:@"Version %@ (build %@)", version, buildNumber];

    return self;
}

- (void)windowDidLoad {
    [super windowDidLoad];
    [self.toggleHotKey setKeyCombo: [AppData sharedAppData].toggleCombo];    
    [self.switchMethodHotKey setKeyCombo: [AppData sharedAppData].switchMethodCombo];
    
    [self.shortcuts setContent:[AppData sharedAppData].shortcuts];
}

- (BOOL)shortcutRecorder:(SRRecorderControl *)aRecorder isKeyCode:(NSInteger)keyCode andFlagsTaken:(NSUInteger)flags reason:(NSString **)aReason
{
    return NO;
}

- (void)shortcutRecorder:(SRRecorderControl *)aRecorder keyComboDidChange:(KeyCombo)newKeyCombo
{
    PTKeyCombo *keyCombo = [[PTKeyCombo alloc] initWithKeyCode:newKeyCombo.code modifiers:newKeyCombo.flags];    
    if (aRecorder == self.toggleHotKey) {
        [[AppData sharedAppData].userPrefs setObject:[keyCombo plistRepresentation] forKey:NAKL_TOGGLE_HOTKEY];
        [AppData sharedAppData].toggleCombo = newKeyCombo;
    } else {
        [[AppData sharedAppData].userPrefs setObject:[keyCombo plistRepresentation] forKey:NAKL_SWITCH_METHOD_HOTKEY];
        [AppData sharedAppData].switchMethodCombo = newKeyCombo;
    }
}

- (void) addAppsAsLoginItem 
{
	NSString * appPath = [[NSBundle mainBundle] bundlePath];
    
	CFURLRef url = (CFURLRef)[NSURL fileURLWithPath:appPath]; 
    
	LSSharedFileListRef loginItems = LSSharedFileListCreate(NULL,
                                                            kLSSharedFileListSessionLoginItems, NULL);
	if (loginItems) {
		//Insert an item to the list.
		LSSharedFileListItemRef item = LSSharedFileListInsertItemURL(loginItems,
                                                                     kLSSharedFileListItemLast, NULL, NULL,
                                                                     url, NULL, NULL);
		if (item){
			CFRelease(item);
        }
	}	
    
	CFRelease(loginItems);    
}

-(void) removeAppFromLoginItem
{
	NSString * appPath = [[NSBundle mainBundle] bundlePath];
    
	CFURLRef url = (CFURLRef)[NSURL fileURLWithPath:appPath]; 
    
	LSSharedFileListRef loginItems = LSSharedFileListCreate(NULL,
                                                            kLSSharedFileListSessionLoginItems, NULL);
    
	if (loginItems) {
		UInt32 seedValue;
		NSArray  *loginItemsArray = (NSArray *)LSSharedFileListCopySnapshot(loginItems, &seedValue);
		int i = 0;
		for( ; i< [loginItemsArray count]; i++){
			LSSharedFileListItemRef itemRef = (LSSharedFileListItemRef)[loginItemsArray
                                                                        objectAtIndex:i];
			if (LSSharedFileListItemResolve(itemRef, 0, (CFURLRef*) &url, NULL) == noErr) {
				NSString * urlPath = [(NSURL*)url path];
				if ([urlPath compare:appPath] == NSOrderedSame){
					LSSharedFileListItemRemove(loginItems,itemRef);
				}
			}
		}
		[loginItemsArray release];
	}
}

- (IBAction) startupOptionClick:(id)sender 
{
    if (((NSButton*) sender).state == NSOnState) {
        [self addAppsAsLoginItem];
    } else {
        [self removeAppFromLoginItem];
    }
}

- (void) saveSetting
{
    NSString *filePath = [self getShortcutSettingsFullFilePath:@"shorcuts"];
    NSData *theData = [NSKeyedArchiver archivedDataWithRootObject:[AppData sharedAppData].shortcuts];
    [NSKeyedArchiver archiveRootObject:theData toFile:filePath]; 
}


@end
