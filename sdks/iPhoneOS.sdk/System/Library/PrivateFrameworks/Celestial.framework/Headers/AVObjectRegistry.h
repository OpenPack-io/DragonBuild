//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSRecursiveLock;

@interface AVObjectRegistry : NSObject
{
    NSHashTable *_registeredObjects;
    NSRecursiveLock *_lock;
}

+ (id)defaultObjectRegistry;
- (void)safePostDelayedNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4;
- (void)safePostNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4;
- (void)safePerformOnThread:(id)arg1 target:(id)arg2 selector:(SEL)arg3 object:(id)arg4;
- (void)safePostNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)safePostDelayedNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;
- (void)safePerformTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;
- (void)safeInvokeWithDescriptionDelayed:(id)arg1;
- (void)safeInvokeWithDescription:(id)arg1;
- (void)unregisterObject:(id)arg1;
- (void)registerObject:(id)arg1;
- (BOOL)safeRetainObject:(id)arg1;
- (void)registerObjectForSafeRetain:(id)arg1;
- (void)dealloc;
- (id)init;

@end

