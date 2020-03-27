//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TUDynamicBarAnimator;

@protocol TUDynamicBarAnimatorDelegate <NSObject>
- (void)dynamicBarAnimatorWillLeaveSteadyState:(TUDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(TUDynamicBarAnimator *)arg1;
- (BOOL)dynamicBarAnimator:(TUDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(TUDynamicBarAnimator *)arg1;
@end

