//
//  FunFaceAppDelegate.m
//  FunFace
//
//  Created by Nguyen Van Hung on 5/13/11.
//  Copyright 2011 roxwin.com. All rights reserved.
//

#import "FunFaceAppDelegate.h"
#import "FunFaceViewController.h"

@implementation FunFaceAppDelegate
@synthesize window;
@synthesize viewController;

- (void)applicationDidFinishLaunching:(UIApplication *)application {
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}

- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}
@end