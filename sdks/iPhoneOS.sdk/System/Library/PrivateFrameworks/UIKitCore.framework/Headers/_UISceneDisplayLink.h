//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class CADisplayLink, NSMutableArray, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneDisplayLink : NSObject <_UISceneComponentProviding>
{
    NSMutableArray *_targetsAndActions;
    CADisplayLink *_displayLink;
    UIScene *_scene;
}

+ (id)sceneDisplayLinkForWindowScene:(id)arg1;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
// - (void).cxx_destruct;
- (void)_displayLinkTick:(id)arg1;
- (void)_updateStatus;
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(NSUInteger)arg3;
- (void)unregisterTarget:(id)arg1 action:(SEL)arg2;
- (void)registerTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithScene:(id)arg1;

@end

