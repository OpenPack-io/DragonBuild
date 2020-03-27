//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, _CDInteractionPolicy;

@interface _CDInteractionPolicies : NSObject
{
    NSUInteger _maxNumberOfInteractions;
    NSUInteger _maxNumberOfInteractionsDeletedInBatch;
    double _maxLifespanInSeconds;
    NSDictionary *_specialPoliciesForBundleIds;
    NSDictionary *_specialPoliciesForMechanisms;
    _CDInteractionPolicy *_defaultPolicy;
}

+ (id)limitArray:(id)arg1 toMaxCount:(NSUInteger)arg2;
+ (id)modifyDate:(id)arg1 usingPolicy:(id)arg2;
+ (id)interactionPolicies;
// - (void).cxx_destruct;
- (void)readConfigurationPlist;
- (void)setupDefaultHardcodedPolicies;
- (id)description;
- (id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(BOOL)arg2 enforcePrivacy:(BOOL)arg3;
- (id)dateOfOldestAllowedInteractionForMechanism:(long long)arg1;
- (id)dateOfOldestAllowedInteractionForWhitelistedFirstPartyBundleIds;
@property(readonly) NSDate *dateOfOldestAllowedInteraction;
@property(readonly) NSUInteger maxNumberOfInteractionsDeleted;
@property(readonly) NSUInteger maxNumberOfInteractionsStored;
- (id)policyForMechanism:(long long)arg1;
- (id)whitelistedFirstPartyBundleIds;
- (id)init;

@end

