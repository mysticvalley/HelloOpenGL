//
//  OpenGLView.h
//  HelloOpenGL
//
//  Created by Rajan Maharjan on 11/29/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface OpenGLView : UIView {
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    GLuint _colorRenderBuffer;
}

- (void) setupLayer;
- (void) setupContext;           
- (void) setupRenderBuffer;
- (void) setupFrameBuffer;
- (void) render;


@end
