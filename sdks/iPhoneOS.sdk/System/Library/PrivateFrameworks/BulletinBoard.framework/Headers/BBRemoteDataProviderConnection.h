//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderConnectionServerProxy-Protocol.h>
#import <BulletinBoard/BBDataProviderStore-Protocol.h>
#import <BulletinBoard/BBRemoteDataProviderDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol BBRemoteDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBRemoteDataProviderConnection : NSObject <BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore>
{
    BOOL _connected;
    id <BBRemoteDataProviderStoreDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_dataProvidersByUniversalSectionID;
    BOOL _clientReady;
    NSString *_serviceName;
    NSString *_bundleID;
}

@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
// - (void).cxx_destruct;
- (void)performBlockOnDataProviders:(id /* CDUnknownBlockType */)arg1;
- (void)removeDataProvider:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)loadAllDataProviders;
- (void)clientIsReady:(id /* CDUnknownBlockType */)arg1;
- (void)addParentSectionFactory:(id)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;
- (void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_queue_removeDataProvider:(id)arg1;
- (void)setConnected:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) BOOL isConnected;
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(NSUInteger)arg1;
- (id)initWithServiceName:(id)arg1 bundleID:(id)arg2 delegate:(id)arg3;

@end

