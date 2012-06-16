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

#import "ShortcutTableViewController.h"
#import "AppData.h"
#import "ShortcutSetting.h"
#import "NSFileManager+DirectoryLocations.h"

@implementation ShortcutTableViewController

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
    return [[AppData sharedAppData].shortcuts count];
}

- (id)tableView:(NSTableView *)tableView objectValueForTableColumn:(NSTableColumn *)tableColumn row:(NSInteger)row 
{
    ShortcutSetting *p = [[AppData sharedAppData].shortcuts objectAtIndex:row];
    NSString *identifier = [tableColumn identifier];
    return [p valueForKey:identifier];
}

- (void)tableView:(NSTableView *)tableView setObjectValue:(id)object forTableColumn:(NSTableColumn *)tableColumn row:(NSInteger)row
{
    ShortcutSetting *s = [[AppData sharedAppData].shortcuts objectAtIndex:row];
    NSString *identifier = [tableColumn identifier];
    [s setValue:object forKey:identifier];
}

- (IBAction)add:(id)sender 
{
    ShortcutSetting *shortcut = [[ShortcutSetting alloc] init];
    [[AppData sharedAppData].shortcuts addObject:shortcut];
    [tableView reloadData];
    [tableView editColumn:0 row:([[AppData sharedAppData].shortcuts count] - 1) withEvent:nil select:YES];
    [shortcut release];
}

- (IBAction)remove:(id)sender 
{
    NSInteger row = [tableView selectedRow];
    [tableView abortEditing];
    if (row != -1) {
        [[AppData sharedAppData].shortcuts removeObjectAtIndex:row];
    }
    [tableView reloadData];
}

- (void) dealloc 
{
    [super dealloc];
}

@end