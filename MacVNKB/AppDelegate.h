//
//  AppDelegate.h
//  MacVNKB
//
//  Created by Huy Phan on 20/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
    IBOutlet NSMenu *statusMenu;
    NSStatusItem * statusItem;    
    NSImage *statusImage;
    NSImage *statusHighlightImage;
}

- (IBAction) methodSelected:(id)sender;
    
@property (assign) IBOutlet NSWindow *window;

@end
