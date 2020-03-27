//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ATXCacheReader, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ATXClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSUInteger _consumerType;
    ATXCacheReader *_cacheReader;
}

+ (id)clientForConsumerType:(NSUInteger)arg1 cacheBasePath:(id)arg2;
+ (id)clientForConsumerType:(NSUInteger)arg1;
+ (id)clientForConsumerType:(NSUInteger)arg1 cachePath:(const char )arg2;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
// - (void).cxx_destruct;
- (id)getAppPredictorAssetMappingDescription;
- (BOOL)forceCacheUpdateForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4;
- (void)logUserFeedback:(id)arg1 aprResponse:(id)arg2 consumerSubType:(unsigned char)arg3 engagementType:(NSUInteger)arg4 bundleIdentifier:(id)arg5 bundleIdsShown:(id)arg6;
- (id)appPredictionsForConsumerSubType:(unsigned char)arg1 blackList:(id)arg2 limit:(int)arg3 runningDiagnostics:(BOOL)arg4;
- (id)_predicateForBlacklist:(id)arg1;
- (id)appPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2;
- (id)_simulatorResponse;
- (void)sortAppsByLaunches:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (id)_syncProxy;
- (id)_asyncProxy;
- (id)_getConnection;
- (void)dealloc;
- (id)init;
- (id)initWithConsumerType:(NSUInteger)arg1 cacheBasePath:(id)arg2;

@end

