//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PIStatisticsElapsedTime : NSObject
{
    double _elapsedTime;
    double _elapsedStart;
    long long _elapsedCounter;
    double _lastBeginTransactionTime;
    double _lastEndTransactionTime;
}

- (BOOL)isTransactionPending;
- (double)elapsedTimeSinceLastEndTransaction;
- (double)elapsedTimeSinceLastBeginTransaction;
- (double)elapsedTime;
- (void)end;
- (void)begin;
- (void)dealloc;
- (id)init;

@end

