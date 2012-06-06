//
//  ShortcutSettings.h
//  NAKL
//
//  Created by Huy Phan on 1/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ShortcutSetting : NSObject<NSCoding> {
    NSString *shortcut;
    NSString *text;
}

@property (nonatomic, readwrite, retain) NSString *shortcut;
@property (nonatomic, readwrite, retain) NSString *text;

@end
