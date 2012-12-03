//
//  AppDelegate.h
//  TrackMix
//
//  Created by Malick Oumar Sy on 13/11/2012.
//  Copyright (c) 2012 Malick Oumar Sy. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSButton *mute;
@property (weak) IBOutlet id test2;
- (IBAction)volume:(id)sender;
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSView *est2;
@property (weak) IBOutlet NSButton *test5;
@property (weak) IBOutlet NSButton *reees;

@end
