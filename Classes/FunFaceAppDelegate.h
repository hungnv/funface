//
//  FunFaceAppDelegate.h
//  FunFace
//
//  Created by Nguyen Van Hung on 5/13/11.
//  Copyright 2011 roxwin.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FunFaceViewController;

@interface FunFaceAppDelegate : NSObject <UIApplicationDelegate> {
    IBOutlet UIWindow *window;
    IBOutlet FunFaceViewController *viewController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) FunFaceViewController *viewController;
@end