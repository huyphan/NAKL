//
//  main.h
//  Test
//
//  Created by Huy Phan on 18/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <CoreFoundation/CoreFoundation.h>
#include <ApplicationServices/ApplicationServices.h>

#ifndef __MACVNKB_MAIN_H
#define __MACVNKB_MAIN_H


CGEventRef KeyHandler(CGEventTapProxy proxy, CGEventType type, CGEventRef event, void *refcon);

#endif