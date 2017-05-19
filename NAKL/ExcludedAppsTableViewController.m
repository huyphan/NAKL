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

#import "ExcludedAppsTableViewController.h"
#import "AppData.h"

@implementation ExcludedAppsTableViewController

@synthesize list;

- (id)init
{
    self = [super init];
    if (self) {
        [tableView usesAlternatingRowBackgroundColors];
    }
    return self;
}

- (NSInteger)numberOfRowsInTableView:(NSTableView *)tableView
{
    return [[AppData sharedAppData].excludedApps count];
}

- (id)tableView:(NSTableView *)tableView objectValueForTableColumn:(NSTableColumn *)tableColumn row:(NSInteger)row
{
    return [[AppData sharedAppData].excludedApps objectAtIndex:row];
}

- (NSString*)getRealAppName:(NSString*) appPath
{
    NSDictionary* plistData = [NSDictionary dictionaryWithContentsOfFile:[appPath stringByAppendingString:@"/Contents/Info.plist"]];
    return [plistData valueForKeyPath:@"CFBundleName"];
}

- (IBAction)add:(id)sender
{
    NSOpenPanel* dialog = [NSOpenPanel openPanel];
    [dialog setCanChooseFiles:YES];
    [dialog setAllowsMultipleSelection:YES];
    [dialog setCanChooseDirectories:NO];
    [dialog setDirectory:@"/Applications"];

    if ([dialog runModal] == NSOKButton) {
        NSArray* selectedPaths = [dialog filenames];
        for (NSString* path in selectedPaths) {
            NSString *appName = [self getRealAppName:path];
            if ((appName != nil) && ![[AppData sharedAppData].excludedApps containsObject:appName]) {
                [[AppData sharedAppData].excludedApps addObject:appName];
            }
        }
        [[AppData sharedAppData].excludedApps setArray:[[AppData sharedAppData].excludedApps sortedArrayUsingSelector:@selector(localizedCaseInsensitiveCompare:)]];
        [[AppData sharedAppData].userPrefs setObject:[AppData sharedAppData].excludedApps forKey:NAKL_EXCLUDED_APPS];
        [tableView reloadData];
    }
}

- (IBAction)remove:(id)sender
{
    NSInteger row = [tableView selectedRow];
    [tableView abortEditing];
    if (row != -1) {
        [[AppData sharedAppData].excludedApps removeObjectAtIndex:row];
    }
    [tableView reloadData];
    [[AppData sharedAppData].userPrefs setObject:[AppData sharedAppData].excludedApps forKey:NAKL_EXCLUDED_APPS];
}

- (void) dealloc
{
    [super dealloc];
}


@end
