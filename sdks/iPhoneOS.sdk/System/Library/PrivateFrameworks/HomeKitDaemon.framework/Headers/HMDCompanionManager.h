//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDDevice, IDSService, NSObject;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDCompanionManager : HMFObject <HMFLogging, IDSServiceDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDDevice *_companion;
    IDSService *_service;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)isCompatibleCompanionDevice:(id)arg1;
+ (id)sharedManager;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
// - (void).cxx_destruct;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
@property(readonly) HMDDevice *companion; // @synthesize companion=_companion;
- (void)__initializeConnectedDevices;
- (id)attributeDescriptions;
- (id)init;

@end

