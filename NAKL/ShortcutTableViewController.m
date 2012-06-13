//
//  ShortcutTableView.m
//  NAKL
//
//  Created by Huy Phan on 1/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "ShortcutTableViewController.h"
#import "AppData.h"
#import "ShortcutSetting.h"
#import "NSFileManager+DirectoryLocations.h"

@implementation ShortcutTableViewController

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