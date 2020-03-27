//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KNAnimatedSlideView, KNPlaybackSession;

__attribute__((visibility("hidden")))
@interface KNOffscreenController : NSObject
{
    KNAnimatedSlideView *_animatedSlideView;
    KNPlaybackSession *_session;
    CGSize _outputSize;
}

@property(readonly, nonatomic) CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) KNPlaybackSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak KNAnimatedSlideView *animatedSlideView; // @synthesize animatedSlideView=_animatedSlideView;
// - (void).cxx_destruct;
- (void)drawCurrentEventIntoContext:(CGContext )arg1 intoRect:(CGRect)arg2 ignoreBuildVisibility:(BOOL)arg3;
- (void)generateImageOfCurrentEventWithCompletonHandler:(id /* CDUnknownBlockType */)arg1;
- (CGImage )copyImageOfCurrentEventIgnoringBuildVisilibity:(BOOL)arg1;
- (BOOL)gotoSlideNode:(id)arg1 andEvent:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2 outputSize:(CGSize)arg3;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2;

@end

