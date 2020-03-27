//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADBackgroundTaskRequest, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface ADAppUsageVectorManager : NSObject
{
    NSString *_version;
    NSArray *_lookbackPeriods;
    NSNumber *_maxQueryElements;
    NSDictionary *_appUsageEvents;
    NSMutableDictionary *_appUsageVectors;
    NSMutableDictionary *_vectorWeightTotals;
    NSMutableDictionary *_adamIDtoBundleID;
    ADBackgroundTaskRequest *_task;
}

@property(retain, nonatomic) ADBackgroundTaskRequest *task; // @synthesize task=_task;
@property(retain, nonatomic) NSMutableDictionary *adamIDtoBundleID; // @synthesize adamIDtoBundleID=_adamIDtoBundleID;
@property(retain, nonatomic) NSMutableDictionary *vectorWeightTotals; // @synthesize vectorWeightTotals=_vectorWeightTotals;
@property(retain, nonatomic) NSMutableDictionary *appUsageVectors; // @synthesize appUsageVectors=_appUsageVectors;
@property(retain, nonatomic) NSDictionary *appUsageEvents; // @synthesize appUsageEvents=_appUsageEvents;
@property(retain, nonatomic) NSNumber *maxQueryElements; // @synthesize maxQueryElements=_maxQueryElements;
@property(retain, nonatomic) NSArray *lookbackPeriods; // @synthesize lookbackPeriods=_lookbackPeriods;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
// - (void).cxx_destruct;
- (id)adamIDForBundleID:(id)arg1;
- (id)bundleIdForAdamId:(id)arg1;
- (void)buildBundleIDtoAdamIDCache:(id)arg1;
- (id)appUsageEventsBetween:(id)arg1 and:(id)arg2 withLimit:(NSUInteger)arg3;
- (id)appUsageEventsForLookbackPeriod:(double)arg1;
- (id)updateVector:(id)arg1 withVector:(id)arg2 usingWeight:(float)arg3;
- (float)weightForEvents:(id)arg1 amongEvents:(id)arg2 inLookbackPeriod:(id)arg3;
- (id)pullUsageEvents;
- (id)normalizedAppUsageVectors;
- (void)updateUsageVectorsWithAppVector:(id)arg1;
- (id)initWithAppUsageVectors:(id)arg1 weightTotals:(id)arg2 maxQueryElements:(id)arg3;
- (id)initWithVersion:(id)arg1 lookbackPeriods:(id)arg2 maxQueryElements:(id)arg3 bgTask:(id)arg4;
- (id)initWithVersion:(id)arg1 lookbackPeriods:(id)arg2 maxQueryElements:(id)arg3;

@end

