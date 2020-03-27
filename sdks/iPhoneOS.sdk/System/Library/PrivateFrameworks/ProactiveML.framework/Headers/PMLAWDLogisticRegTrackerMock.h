//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLProtoBufTracker.h>

@class NSArray, PMLTrackerMockAdapter;

@interface PMLAWDLogisticRegTrackerMock : PMLProtoBufTracker
{
    PMLTrackerMockAdapter *_adapter;
}

+ (id)mockTrackerForPlanId:(NSString )arg1;
+ (id)mockTracker;
// - (void).cxx_destruct;
@property(readonly) NSArray *trackedWeights; // @dynamic trackedWeights;
@property(readonly) NSArray *trackedGradients; // @dynamic trackedGradients;
- (void)clearTrackedMessages;
- (id)initWithModel:(id)arg1;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;

@end

