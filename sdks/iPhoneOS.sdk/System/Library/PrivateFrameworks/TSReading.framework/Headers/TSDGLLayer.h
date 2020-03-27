//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAEAGLLayer.h>

@class CADisplayLink, NSObject;
@protocol TSDGLLayerContext, TSDGLLayerDelegate;

@interface TSDGLLayer : CAEAGLLayer
{
    NSObject<TSDGLLayerDelegate> *mDelegate;
    id <TSDGLLayerContext> mContext;
    CADisplayLink *mDisplayLink;
}

@property(nonatomic) NSObject<TSDGLLayerDelegate> *animationDelegate; // @synthesize animationDelegate=mDelegate;
- (void)displayAtCurrentLayerTime;
- (void)unlock;
- (void)lock;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setCurrentContext;
- (void)p_drawFrameFromDisplayLink:(id)arg1;
- (void)p_drawFrameAtLayerTime:(double)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 isOpaque:(BOOL)arg2 delegate:(id)arg3;

@end

