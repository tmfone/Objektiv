//
//  ImageUtils.h
//  browser-selector
//
//  Created by Ankit Solanki on 17/12/12.
//  Copyright (c) 2012 nth loop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface ImageUtils : NSObject

+(ImageUtils*) sharedInstance;

+ (NSImage*) statusBarIconForAppId: (NSString*) applicationIdentifier;
+ (NSImage*) menuIconForAppId: (NSString*) applicationIdentifier;
+ (NSImage*) fullSizeIconForAppId: (NSString*) applicationIdentifier;

@end
