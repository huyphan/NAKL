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

@implementation ShortcutTableViewController

- (id)init
{
    self = [super init];
    if (self) {
        list = [[NSMutableArray alloc] init];
        [tableView usesAlternatingRowBackgroundColors];
    }
    return self;
}

- (NSInteger)numberOfRowsInTableView:(NSTableView *)tableView {
    return [list count];
}

- (id)tableView:(NSTableView *)tableView objectValueForTableColumn:(NSTableColumn *)tableColumn row:(NSInteger)row {
    ShortcutSetting *p = [list objectAtIndex:row];
    NSString *identifier = [tableColumn identifier];
    return [p valueForKey:identifier];
}

- (IBAction)add:(id)sender {
    ShortcutSetting *shortcut = [[ShortcutSetting alloc] init];
    [list addObject:shortcut];
    [tableView reloadData];
    [tableView editColumn:0 row:([list count] - 1) withEvent:nil select:YES];
    [shortcut release];
}

@end
