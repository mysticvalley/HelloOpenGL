//
//  AppDelegate.h
//  HelloOpenGL
//
//  Created by Rajan Maharjan on 11/29/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) IBOutlet OpenGLView *glview;

@end
