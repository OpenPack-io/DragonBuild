//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PMLSessionDescriptor, _PASRng;

@interface PMLPlanSimulator : NSObject
{
    NSArray *_stores;
    PMLSessionDescriptor *_sessionDescriptor;
    _PASRng *_rng;
}

+ (id)simulatorWithDbPaths:(id)arg1 sessionDescriptor:(id)arg2 sessionsInBatch:(NSUInteger)arg3 maxSessionsLimit:(NSUInteger)arg4 seed:(NSUInteger)arg5;
// - (void).cxx_destruct;
- (id)runParallelPlansWithPlanId:(id)arg1 tracker:(id)arg2 noiseScaleFactors:(CDStruct_cd4a7bf5)arg3 noiseMinimumMagnitude:(float)arg4 weights:(id)arg5 serverIteration:(NSUInteger)arg6 useIntercept:(BOOL)arg7 noiseMechanism:(long long)arg8 usingRandomlySelected:(NSUInteger)arg9;
- (id)_randomStores:(NSUInteger)arg1;
- (id)_randomStore;
- (id)initWithStores:(id)arg1 sessionDescriptor:(id)arg2 seed:(NSUInteger)arg3;
- (id)init;

@end

