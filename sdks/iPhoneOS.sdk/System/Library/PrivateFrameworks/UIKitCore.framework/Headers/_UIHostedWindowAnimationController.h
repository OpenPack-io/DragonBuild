//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIWindowAnimationController.h>

__attribute__((visibility("hidden")))
@interface _UIHostedWindowAnimationController : _UIWindowAnimationController
{
    id /* CDUnknownBlockType */ _transitionActions;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) id /* CDUnknownBlockType */ transitionActions; // @synthesize transitionActions=_transitionActions;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

