//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface OITSUDelayTimer : NSObject
{
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    BOOL _cancelled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

@property(nonatomic, getter=_isCancelled, setter=_setCancelled:) BOOL _cancelled; // @synthesize _cancelled;
@property(retain, nonatomic, setter=_setDispatchTimer:) NSObject<OS_dispatch_source> *_dispatchTimer; // @synthesize _dispatchTimer;
@property(retain, nonatomic, setter=_setDispatchQueue:) NSObject<OS_dispatch_queue> *_dispatchQueue; // @synthesize _dispatchQueue;
@property(nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processBlock:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)initWithTargetSerialQueue:(id)arg1;
- (id)init;

@end

