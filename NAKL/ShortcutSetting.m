//
//  ShortcutSettings.m
//  NAKL
//
//  Created by Huy Phan on 1/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "ShortcutSetting.h"

@implementation ShortcutSetting

@synthesize shortcut;
@synthesize text;

- (id) init
{
    self = [super init];
    if (self) {
//        shortcut = @"";
//        text = @"";        
    }
    
    return self;
}

- (void) encodeWithCoder:(NSCoder *)coder {
    [coder encodeObject:self.shortcut forKey:@"shortcut"];
    [coder encodeObject:self.text forKey:@"text"];    
}

- (id) initWithCoder:(NSCoder *)coder {
	if ((self = [super init]))
	{
        self.shortcut = [[coder decodeObjectForKey:@"shortcut"] retain];  
        self.text = [[coder decodeObjectForKey:@"text"] retain];          
 	}
	return self;
}

@end
