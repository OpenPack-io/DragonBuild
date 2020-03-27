//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol SASLockStateMonitorDelegate;

@interface SASLockStateMonitor : NSObject
{
    BOOL _unlockedByTouchID;
    id <SASLockStateMonitorDelegate> _delegate;
    NSUInteger _lockState;
    NSNumber *_assistantIsEnabled;
}

@property(retain, nonatomic) NSNumber *assistantIsEnabled; // @synthesize assistantIsEnabled=_assistantIsEnabled;
@property(nonatomic) BOOL unlockedByTouchID; // @synthesize unlockedByTouchID=_unlockedByTouchID;
@property(nonatomic) NSUInteger lockState; // @synthesize lockState=_lockState;
@property(nonatomic) __weak id <SASLockStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (NSUInteger)_currentLockState;
- (BOOL)isScreenOn;
- (BOOL)hasUnlockedSinceBoot;
- (BOOL)isBlocked;
- (void)dealloc;
- (id)init;

@end

