//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIWindowAnimationController.h>

__attribute__((visibility("hidden")))
@interface _UIWindowRotationAnimationController : _UIWindowAnimationController
{
    BOOL _skipCallbacks;
    BOOL _updateStatusBarIfNecessary;
    id /* CDUnknownBlockType */ _animations;
    double _duration;
}

@property(nonatomic) BOOL updateStatusBarIfNecessary; // @synthesize updateStatusBarIfNecessary=_updateStatusBarIfNecessary;
@property(nonatomic) BOOL skipCallbacks; // @synthesize skipCallbacks=_skipCallbacks;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) id /* CDUnknownBlockType */ animations; // @synthesize animations=_animations;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;

@end

