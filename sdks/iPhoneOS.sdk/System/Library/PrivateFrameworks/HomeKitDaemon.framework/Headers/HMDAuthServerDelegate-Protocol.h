//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HAPAccessoryInfo, NSData, NSError;

@protocol HMDAuthServerDelegate <NSObject>
- (void)didFinishActivation:(NSError *)arg1 context:(id)arg2;
- (void)handleActivationResponse:(NSData *)arg1 context:(id)arg2;
- (void)handlePPIDInfoResponse:(HAPAccessoryInfo *)arg1 context:(id)arg2 error:(NSError *)arg3;
@end

