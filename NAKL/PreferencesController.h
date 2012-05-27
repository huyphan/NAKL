//
//  PreferencesController.h
//  NAKL
//
//  Created by Huy Phan on 26/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppData.h"
@class SRRecorderControl;

@interface PreferencesController : NSWindowController {
    SRRecorderControl *_toggleHotKey;
    SRRecorderControl *_switchMethodHotKey;    
}

@property (nonatomic, readwrite, retain) IBOutlet SRRecorderControl *toggleHotKey;
@property (nonatomic, readwrite, retain) IBOutlet SRRecorderControl *switchMethodHotKey;

- (IBAction) startupOptionClick:(id)sender;

@end