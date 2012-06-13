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
}

@property (readwrite,assign) NSMutableArray *list;

- (IBAction) add:(id)sender;
- (IBAction) remove:(id)sender;

@end
