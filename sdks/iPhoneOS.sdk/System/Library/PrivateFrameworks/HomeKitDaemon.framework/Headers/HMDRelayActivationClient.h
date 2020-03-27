//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPRelayActivationClient.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDRelayActivationClient : HAPRelayActivationClient <HMFLogging>
{
    HMDAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_challengeIdentifier;
}

+ (id)logCategory;
@property(retain, nonatomic) NSString *challengeIdentifier; // @synthesize challengeIdentifier=_challengeIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
// - (void).cxx_destruct;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;
- (void)requestChallenge;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (void)open;
- (id)initWithAccessory:(id)arg1;

@end

