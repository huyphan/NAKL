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

#import "PreferencesController.h"
#import "ShortcutRecorder/SRRecorderControl.h"
#import "PTHotKeyCenter.h"
#import "PTHotKey.h"
#import "NSFileManager+DirectoryLocations.h"

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

- (void)windowWillClose :(NSNotification *)notification
{
    [self saveSetting];
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
    NSString *filePath = [[[NSFileManager defaultManager] applicationSupportDirectory] stringByAppendingPathComponent:@"shortcuts.setting"];
    NSData *theData = [NSKeyedArchiver archivedDataWithRootObject:[AppData sharedAppData].shortcuts];
    [NSKeyedArchiver archiveRootObject:theData toFile:filePath];
    
    [[AppData sharedAppData].shortcutDictionary removeAllObjects];
    for (ShortcutSetting *s in [AppData sharedAppData].shortcuts) {
        [[AppData sharedAppData].shortcutDictionary setObject:s.text forKey:s.shortcut];
    }    
}

- (void) dealloc {
    [shortcutsTableView release];
    [super dealloc];
}

@end