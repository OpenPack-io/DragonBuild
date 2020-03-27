//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroEventModifier : NSObject
{
    NSDictionary *_fieldFilters;
    NSString *_sampleSessionKey;
    NSDictionary *_metricsDictionary;
    NSDictionary *_overrideDictionary;
}

@property(readonly, nonatomic) NSDictionary *overrideDictionary; // @synthesize overrideDictionary=_overrideDictionary;
@property(readonly, nonatomic) NSDictionary *metricsDictionary; // @synthesize metricsDictionary=_metricsDictionary;
@property(readonly, nonatomic) NSString *sampleSessionKey; // @synthesize sampleSessionKey=_sampleSessionKey;
@property(readonly, nonatomic) NSDictionary *fieldFilters; // @synthesize fieldFilters=_fieldFilters;
// - (void).cxx_destruct;
- (id)_fieldFiltersFromOverrides:(id)arg1;
- (id)_createSampleSessionKey;
- (BOOL)_shouldSampleEvent:(id)arg1;
- (id)_overridePropertyForKey:(id)arg1;
- (BOOL)shouldSkipEvent:(id)arg1;
- (BOOL)shouldDropEvent:(id)arg1;
- (id)reportingURLForEvent:(id)arg1;
- (id)prepareEvent:(id)arg1;
- (BOOL)fieldFiltersMatchEvent:(id)arg1;
- (id)initWithMetricsDictionary:(id)arg1 matchedOverrideDictionary:(id)arg2;

@end

