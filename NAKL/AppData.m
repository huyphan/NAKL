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

#import "AppData.h"
#import "PTHotKey.h"
#import "NSFileManager+DirectoryLocations.h"

@implementation AppData

@synthesize userPrefs;
@synthesize toggleCombo;
@synthesize switchMethodCombo;
@synthesize shortcuts;

CWL_SYNTHESIZE_SINGLETON_FOR_CLASS(AppData);

+ (void) loadUserPrefs
{
    [AppData sharedAppData].userPrefs = [NSUserDefaults standardUserDefaults];           
}

+ (void) loadHotKeys
{
    NSDictionary *dictionary = [[AppData sharedAppData].userPrefs dictionaryForKey:NAKL_TOGGLE_HOTKEY];
    PTKeyCombo *keyCombo = [[PTKeyCombo alloc] initWithPlistRepresentation:dictionary];
    [AppData sharedAppData].toggleCombo = SRMakeKeyCombo([keyCombo keyCode], [keyCombo modifiers]);
    [keyCombo release];
    
    dictionary = [[AppData sharedAppData].userPrefs dictionaryForKey:NAKL_SWITCH_METHOD_HOTKEY];
    keyCombo = [[PTKeyCombo alloc] initWithPlistRepresentation:dictionary];
    [AppData sharedAppData].switchMethodCombo = SRMakeKeyCombo([keyCombo keyCode], [keyCombo modifiers]);
    [keyCombo release];    
}

+ (void) loadShortcuts
{
    NSString *filePath = [[[NSFileManager defaultManager] applicationSupportDirectory] stringByAppendingPathComponent:@"shortcuts.setting"];
    NSData *data = [NSKeyedUnarchiver unarchiveObjectWithFile:filePath];
    if (data != nil) 
    {
        NSArray *savedArray = [NSKeyedUnarchiver unarchiveObjectWithData:data];
        if (savedArray != nil) 
        {
            [AppData sharedAppData].shortcuts = [[NSMutableArray alloc] initWithArray:savedArray];
        } else
        {
            [AppData sharedAppData].shortcuts = [[NSMutableArray alloc] init];        
        }
    } else {
        [AppData sharedAppData].shortcuts = [[NSMutableArray alloc] init];
    }
}

@end