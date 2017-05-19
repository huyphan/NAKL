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

#import <Foundation/Foundation.h>
#import "ShortcutRecorder/SRRecorderControl.h"
#import "CWLSynthesizeSingleton.h"

#define NAKL_HOTKEY_TOGGLE 10
#define NAKL_HOTKEY_SWITCH_METHOD 20

#define NAKL_KEYBOARD_METHOD @"NAKLKeyboardMethod"
#define NAKL_LOAD_AT_LOGIN @"NAKLLoadAtLogin"
#define NAKL_TOGGLE_HOTKEY @"NAKLToggleHotKey"
#define NAKL_SWITCH_METHOD_HOTKEY @"NAKLSwitchMethodHotKey"
#define NAKL_EXCLUDED_APPS @"NAKLExcludedAppBundleIds"

@interface AppData : NSObject {
    NSUserDefaults *userPrefs;
    KeyCombo toggleCombo;
    KeyCombo switchMethodCombo;
    NSMutableArray *shortcuts;
    NSMutableDictionary *shortcutDictionary;
    NSMutableDictionary *excludedApps;
}

CWL_DECLARE_SINGLETON_FOR_CLASS(AppData)

@property (readwrite,assign) NSUserDefaults *userPrefs;
@property (readwrite,assign) KeyCombo toggleCombo;
@property (readwrite,assign) KeyCombo switchMethodCombo;
@property (readwrite,assign) NSMutableArray *shortcuts;
@property (readwrite,assign) NSMutableDictionary *shortcutDictionary;
@property (readwrite,assign) NSMutableDictionary *excludedApps;

+ (void) loadUserPrefs;
+ (void) loadHotKeys;
+ (void) loadShortcuts;
+ (void) loadExcludedApps;

@end
