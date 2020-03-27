//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDRateLimiting-Protocol.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface _CDRateLimiter : NSObject <_CDRateLimiting>
{
    NSDate *_lastRecorded;
    long long _balance;
    NSObject<OS_dispatch_queue> *_queue;
    double _period;
    long long _count;
}

+ (id)sharedRateLimiter;
@property(readonly) long long count; // @synthesize count=_count;
@property(readonly) double period; // @synthesize period=_period;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)resetRateLimitWithTimeStamp:(id)arg1;
- (void)recordTimeAndRefillIfNeeded;
- (BOOL)debited;
- (BOOL)credit;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;
- (id)init;

@end

