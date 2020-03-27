//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWEventStatistics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _timerResumed;
    NSUInteger _lastLogTime;
    NSDate *_lastLogDate;
    NSMutableDictionary *_stats;
}

+ (id)sharedStatistics;
// - (void).cxx_destruct;
- (void)logEvent:(NSUInteger)arg1;
- (id)init;

@end

