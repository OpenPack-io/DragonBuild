//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSString, NSUUID, _DKObject;
@protocol OS_dispatch_queue;

@protocol _DKKnowledgeSynchronizing
- (NSUUID *)deviceUUID;
- (NSString *)sourceDeviceIdentityWithError:(id )arg1;
- (NSString *)sourceDeviceIdentityFromObject:(_DKObject *)arg1 error:(id )arg2;
- (BOOL)deleteRemoteState:(id )arg1;
- (void)synchronizeWithUrgency:(NSUInteger)arg1 client:(NSString *)arg2 responseQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSError *))arg4;
- (BOOL)synchronizeWithUrgency:(NSUInteger)arg1 client:(NSString *)arg2 error:(id )arg3;
- (BOOL)synchronizeWithError:(id )arg1;
@end

