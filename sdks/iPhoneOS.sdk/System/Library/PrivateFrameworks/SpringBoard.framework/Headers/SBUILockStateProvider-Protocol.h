//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBCoverSheetPresentationManager, SBLockScreenUnlockRequest;

@protocol SBUILockStateProvider <NSObject>
- (void)coverSheetPresentationManager:(SBCoverSheetPresentationManager *)arg1 unlockWithRequest:(SBLockScreenUnlockRequest *)arg2 completion:(void (^)(BOOL))arg3;
- (BOOL)isUILocked;
@end

