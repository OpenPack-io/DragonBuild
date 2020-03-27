//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderConnectionCheckinServer-Protocol.h>
#import <BulletinBoard/BBDataProviderStore-Protocol.h>
#import <BulletinBoard/BBRemoteDataProviderStoreDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSString, NSXPCListener;
@protocol BBDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_registerQueue;
    NSMutableDictionary *_dataProviderConnectionsByService;
    NSMutableDictionary *_dataProviderConnectionsBySectionID;
    NSMutableDictionary *_dataProviderConnectionsByUniversalSectionID;
    NSMutableDictionary *_xpcConnectionsByService;
    id <BBDataProviderStoreDelegate> _delegate;
    int _listeningToken;
    BKSApplicationStateMonitor *_appStateMonitor;
}

+ (id)xpcInterface;
+ (id)resolverWithDelegate:(id)arg1;
// - (void).cxx_destruct;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)performBlockOnDataProviders:(id /* CDUnknownBlockType */)arg1;
- (void)loadAllDataProviders;
- (void)removeDataProvider:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)wakeService:(id)arg1 bundleID:(id)arg2;
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;
- (void)_registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(NSUInteger)arg1;
- (void)dealloc;
- (void)_registerForPublicationNotification;
- (id)initWithDelegate:(id)arg1;

@end

