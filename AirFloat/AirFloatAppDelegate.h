//
//  AirFloatAppDelegate.h
//  AirFloat
//
//  Created by Kristian Trenskow on 7/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AirFloatServerController.h"

@class AirFloatViewController;

@interface AirFloatAppDelegate : NSObject <UIApplicationDelegate> {

    AirFloatServerController* _serverController;
    
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet AirFloatViewController *viewController;

@property (nonatomic ,readonly) AirFloatServerController* serverController;

@end