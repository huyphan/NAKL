//
//  ShortcutTableView.h
//  NAKL
//
//  Created by Huy Phan on 1/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ShortcutTableViewController : NSObject <NSTableViewDataSource> {
    IBOutlet NSTableView *tableView;
    NSMutableArray *list;
}

- (IBAction) add:(id)sender;

@end
