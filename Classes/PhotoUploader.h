//
//  Uploader.h
//  FunFace
//
//  Created by Nguyen Van Hung on 5/13/11.
//  Copyright 2011 roxwin.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PhotoUploader : NSObject
{
    NSURL *serverURL;
    NSString *filePath;
    id delegate;
    SEL doneSelector;
    SEL errorSelector;
    
    BOOL uploadDidSucceed;
}

- (id)initWithURL: (NSURL *)serverURL
         filePath: (NSString *)filePath
         delegate: (id)delegate
     doneSelector: (SEL)doneSelector
    errorSelector: (SEL)errorSelector;

- (NSString *)filePath;

@end
