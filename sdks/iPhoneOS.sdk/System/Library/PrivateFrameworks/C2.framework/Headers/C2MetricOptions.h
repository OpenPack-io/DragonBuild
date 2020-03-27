//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString, NSURL;

@interface C2MetricOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _anonymous;
    BOOL _pushTrigger;
    unsigned int _reportFrequencyRandomValue;
    NSURL *_c2MetricsEndpoint;
    NSUInteger _reportFrequency;
    NSUInteger _reportFrequencyBase;
    NSUInteger _reportClientOperationFrequency;
    NSUInteger _reportClientOperationFrequencyBase;
    NSUInteger _reportOperationGroupFrequency;
    NSUInteger _reportOperationGroupFrequencyBase;
    NSString *_clientProcessVersion;
    NSString *_clientProcessBundleId;
    NSString *_container;
    NSString *_environment;
    NSArray *_operationGroups;
    NSArray *_clientOperations;
    id /* CDUnknownBlockType */ _didCompleteWithError;
    id /* CDUnknownBlockType */ _testBehavior_reportMetric;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) id /* CDUnknownBlockType */ testBehavior_reportMetric; // @synthesize testBehavior_reportMetric=_testBehavior_reportMetric;
@property(nonatomic) unsigned int reportFrequencyRandomValue; // @synthesize reportFrequencyRandomValue=_reportFrequencyRandomValue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didCompleteWithError; // @synthesize didCompleteWithError=_didCompleteWithError;
@property(nonatomic) BOOL pushTrigger; // @synthesize pushTrigger=_pushTrigger;
@property(copy, nonatomic) NSArray *clientOperations; // @synthesize clientOperations=_clientOperations;
@property(copy, nonatomic) NSArray *operationGroups; // @synthesize operationGroups=_operationGroups;
@property(nonatomic) BOOL anonymous; // @synthesize anonymous=_anonymous;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *container; // @synthesize container=_container;
@property(copy, nonatomic) NSString *clientProcessBundleId; // @synthesize clientProcessBundleId=_clientProcessBundleId;
@property(copy, nonatomic) NSString *clientProcessVersion; // @synthesize clientProcessVersion=_clientProcessVersion;
@property(nonatomic) NSUInteger reportOperationGroupFrequencyBase; // @synthesize reportOperationGroupFrequencyBase=_reportOperationGroupFrequencyBase;
@property(nonatomic) NSUInteger reportOperationGroupFrequency; // @synthesize reportOperationGroupFrequency=_reportOperationGroupFrequency;
@property(nonatomic) NSUInteger reportClientOperationFrequencyBase; // @synthesize reportClientOperationFrequencyBase=_reportClientOperationFrequencyBase;
@property(nonatomic) NSUInteger reportClientOperationFrequency; // @synthesize reportClientOperationFrequency=_reportClientOperationFrequency;
@property(nonatomic) NSUInteger reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property(nonatomic) NSUInteger reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property(copy, nonatomic) NSURL *c2MetricsEndpoint; // @synthesize c2MetricsEndpoint=_c2MetricsEndpoint;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)operationGroupTriggered:(id)arg1;
- (BOOL)clientOperationTriggered:(id)arg1;
@property(readonly, nonatomic) NSString *headerValueForTriggers;
- (int)generateTriggerWithResponseHeader:(unsigned char)arg1;
- (id)generateCloudKitInfo;
- (void)rollReportFrequencyRandomValue;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

