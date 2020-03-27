//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SRSensorKitServiceServerReading
- (void)earliestEligibleTime:(void (^)(NSNumber *))arg1;
- (void)fetchAllDevicesIdOnly:(BOOL)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)stopRecordingWithErrorHandler:(void (^)(NSError *))arg1;
- (void)startRecordingWithErrorHandler:(void (^)(NSError *))arg1;
- (void)requestFileHandleForReadingAfterSegment:(NSString *)arg1 deviceId:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)requestFileHandleForReadingSample:(double)arg1 deviceId:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)startReadingForSensor:(NSString *)arg1 deviceId:(NSString *)arg2 bundleId:(NSString *)arg3 bypassHoldingPeriod:(BOOL)arg4 reply:(void (^)(void))arg5;
@end

