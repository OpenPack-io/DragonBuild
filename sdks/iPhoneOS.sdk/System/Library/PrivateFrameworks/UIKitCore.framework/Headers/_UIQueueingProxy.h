//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITargetedProxy.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIQueueingProxy : _UITargetedProxy
{
//     struct os_unfair_lock_s _lock;
    NSUInteger _suspensionCount;
    NSMutableArray *_queuedInvocations;
    id /* CDUnknownBlockType */ _shouldSuspendInvocationBlock;
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(id /* CDUnknownBlockType */)arg2;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)removeAllEnqueuedInvocations;
- (void)resume;
- (void)_dispatchSuspendedMessages;
- (void)suspend;
- (void)forwardInvocation:(id)arg1;

@end

