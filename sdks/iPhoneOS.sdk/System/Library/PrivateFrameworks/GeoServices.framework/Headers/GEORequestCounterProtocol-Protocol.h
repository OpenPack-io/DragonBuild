//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSObject, NSString;
@protocol GEORequestCounterTicket, OS_dispatch_queue;

@protocol GEORequestCounterProtocol <NSObject>
@property(nonatomic) BOOL countersEnabled;
- (void)fetchAnalyticsHandlingDataFrom:(NSDate *)arg1 completion:(void (^)(NSArray *))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(NSDate *)arg3;
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(NSDate *)arg3;
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 at:(NSDate *)arg4;
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(NSDate *)arg3;
- (void)readProactiveTileDownloadsSince:(NSDate *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)finishedProactiveTileDownloadForIdentifier:(NSString *)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(NSUInteger)arg7;
- (void)startedProactiveTileDownloadForIdentifier:(NSString *)arg1 policy:(unsigned char)arg2;
- (void)fetchTrafficProbeCollectionsStartingFrom:(NSDate *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)recordTrafficProbeCollectionAt:(NSDate *)arg1 tripId:(NSString *)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)clearCounters;
- (void)startPowerLogSessionWithName:(NSString *)arg1;
- (void)readRequestLogsSince:(NSDate *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)readRequestsPerAppSince:(NSDate *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (id <GEORequestCounterTicket>)requestCounterTicketForType:(unsigned char)arg1 appId:(NSString *)arg2;
@end

