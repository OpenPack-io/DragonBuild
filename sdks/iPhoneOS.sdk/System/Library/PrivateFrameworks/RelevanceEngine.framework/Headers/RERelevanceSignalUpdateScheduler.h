//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class NSDate, NSMutableDictionary, NSObject, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface RERelevanceSignalUpdateScheduler : RESingleton
{
    NSMutableDictionary *_updateBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextTimer *_timer;
    NSDate *_lastFireDate;
    BOOL _alreadyScheduled;
}

// - (void).cxx_destruct;
- (void)_queue_updateBlocks;
- (void)_updateBlocks;
- (void)_rescheduleTimer;
- (void)unscheduleEventWithIdentifier:(id)arg1;
- (void)scheduleEventWithIdentifier:(id)arg1 updateFrequency:(double)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;
- (id)_init;

@end

