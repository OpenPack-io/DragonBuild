//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CADSyntheticRouteHypothesizerCache : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_eventExternalURLToSyntheticRouteHypothesizerMap;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *eventExternalURLToSyntheticRouteHypothesizerMap; // @synthesize eventExternalURLToSyntheticRouteHypothesizerMap=_eventExternalURLToSyntheticRouteHypothesizerMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
// - (void).cxx_destruct;
- (void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)arg1;
- (void)addSyntheticRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2;
- (id)syntheticRouteHypothesizerForEventExternalURL:(id)arg1;
- (id)_init;

@end

