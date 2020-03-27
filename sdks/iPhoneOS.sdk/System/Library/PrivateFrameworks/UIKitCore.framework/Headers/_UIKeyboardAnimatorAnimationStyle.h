//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIInputViewAnimationStyle.h"

@class _UIKeyboardAnimator;
@protocol UIInputViewAnimationHost;

__attribute__((visibility("hidden")))
@interface _UIKeyboardAnimatorAnimationStyle : UIInputViewAnimationStyle
{
    _UIKeyboardAnimator *_animator;
    id <UIInputViewAnimationHost> _currentHost;
    BOOL _currentFromPosition;
}

+ (id)animationStyleWithAnimator:(id)arg1;
// - (void).cxx_destruct;
- (void)defaultLaunchAnimation:(id /* CDUnknownBlockType */)arg1 afterStarted:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)launchAnimation:(id /* CDUnknownBlockType */)arg1 afterStarted:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;

@end

