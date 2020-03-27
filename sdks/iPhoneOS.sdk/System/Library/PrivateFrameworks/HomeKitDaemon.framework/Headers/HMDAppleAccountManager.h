//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/APSConnectionDelegate-Protocol.h>
#import <HomeKitDaemon/HMDAccountManager-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/IDSAccountDelegate-Protocol.h>
#import <HomeKitDaemon/IDSAccountRegistrationDelegate-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class ACAccountStore, APSConnection, HMDAccount, HMDAppleAccountContext, HMDAppleAccountSettings, HMDBackingStore, HMDCloudCache, HMDDevice, HMFExponentialBackoffTimer, HMFTimer, HMFUnfairLock, IDSService, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAppleAccountManager : HMFObject <APSConnectionDelegate, HMDAccountManager, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, IDSServiceDelegate>
{
    HMFUnfairLock *_lock;
    BOOL _monitoring;
    BOOL _rapportIdentitiesChangedNotificationTokenValid;
    int _rapportIdentitiesChangedNotificationToken;
    HMDAccount *_account;
    HMDAppleAccountContext *_accountContext;
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_clientQueue;
    APSConnection *_pushConnection;
    HMFExponentialBackoffTimer *_accountChangeBackoffTimer;
    HMFTimer *_devicesChangeBackoffTimer;
    IDSService *_service;
    HMDBackingStore *_backingStore;
    HMDCloudCache *_cloudCache;
}

+ (id)logCategory;
+ (id)sharedManager;
@property(retain, nonatomic) HMDCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(retain, nonatomic) HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic, getter=isRapportIdentitiesChangedNotificationTokenValid) BOOL rapportIdentitiesChangedNotificationTokenValid; // @synthesize rapportIdentitiesChangedNotificationTokenValid=_rapportIdentitiesChangedNotificationTokenValid;
@property(nonatomic) int rapportIdentitiesChangedNotificationToken; // @synthesize rapportIdentitiesChangedNotificationToken=_rapportIdentitiesChangedNotificationToken;
@property(nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer; // @synthesize devicesChangeBackoffTimer=_devicesChangeBackoffTimer;
@property(readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer; // @synthesize accountChangeBackoffTimer=_accountChangeBackoffTimer;
@property(readonly, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
// - (void).cxx_destruct;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(BOOL)arg2;
- (void)timerDidFire:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
@property(readonly, nonatomic) HMDAppleAccountSettings *settings;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;
- (void)processAccountModel:(id)arg1 message:(id)arg2;
- (BOOL)isModelCurrentAccount:(id)arg1;
- (id)primaryHandleForAccount:(id)arg1;
- (BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;
- (BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
- (BOOL)shouldSyncDevice:(id)arg1;
- (BOOL)shouldSyncAccount:(id)arg1;
- (BOOL)shouldCacheAccount:(id)arg1;
@property(readonly) HMDDevice *device;
- (void)__deviceRemovedFromCurrentAccount:(id)arg1;
- (void)__deviceAddedToCurrentAccount:(id)arg1;
@property(retain) HMDAccount *account; // @synthesize account=_account;
@property(readonly) HMDAppleAccountContext *accountContext; // @synthesize accountContext=_accountContext;
- (void)__handleMigrationUpdated:(id)arg1;
- (void)__handleUpdatedName:(id)arg1;
- (void)__handleRemovedAccount:(id)arg1;
- (void)__handleModifiedAccount:(id)arg1;
- (void)__localDataReset:(id)arg1;
- (void)stop;
- (void)start;
- (void)_deregisterForRapportNotifications;
- (void)_registerForRapportNotifications;
- (id)initWithIDSService:(id)arg1;
- (id)init;

@end

