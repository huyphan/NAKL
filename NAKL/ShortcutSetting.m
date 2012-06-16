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

#import "ShortcutSetting.h"

@implementation ShortcutSetting

@synthesize shortcut;
@synthesize text;

- (id) init
{
    self = [super init];
    if (self) {

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
