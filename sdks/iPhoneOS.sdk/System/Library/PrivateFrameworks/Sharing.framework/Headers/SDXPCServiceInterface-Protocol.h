//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSUUID, SFEventMessage, SFRequestMessage, SFResponseMessage, SFService;

@protocol SDXPCServiceInterface
- (void)serviceSendResponse:(SFResponseMessage *)arg1;
- (void)serviceSendRequest:(SFRequestMessage *)arg1;
- (void)serviceSendFrameType:(unsigned char)arg1 data:(NSData *)arg2 peer:(NSUUID *)arg3;
- (void)serviceSendEvent:(SFEventMessage *)arg1;
- (void)serviceUpdate:(SFService *)arg1;
- (void)serviceActivate:(SFService *)arg1 completion:(void (^)(NSError *))arg2;
@end

