//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKWorkoutRoute;

@interface HDWorkoutRouteQueryServer : HDQueryServer
{
    NSUInteger _batchThreshold;
    HKWorkoutRoute *_locationSeries;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
// - (void).cxx_destruct;
- (void)_queue_start;
- (void)unitTest_setBatchThreshold:(NSUInteger)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

