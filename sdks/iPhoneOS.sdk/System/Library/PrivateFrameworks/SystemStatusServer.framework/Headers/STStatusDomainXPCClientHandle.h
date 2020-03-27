//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatusServer/STStatusDomainClientHandle-Protocol.h>
#import <SystemStatusServer/STStatusDomainXPCServer-Protocol.h>

@class BSMutableIntegerMap, NSMutableSet, NSSet, NSXPCConnection;
@protocol OS_dispatch_queue, STStatusDomainServerHandle;

@interface STStatusDomainXPCClientHandle : NSObject <STStatusDomainXPCServer, STStatusDomainClientHandle>
{
    id <STStatusDomainServerHandle> _serverHandle;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientXPCConnection;
    BSMutableIntegerMap *_dataByDomain;
    NSSet *_entitledDomains;
    NSMutableSet *_observingDomains;
}

@property(readonly, copy, nonatomic) NSMutableSet *observingDomains; // @synthesize observingDomains=_observingDomains;
@property(readonly, copy, nonatomic) NSSet *entitledDomains; // @synthesize entitledDomains=_entitledDomains;
@property(readonly, nonatomic) BSMutableIntegerMap *dataByDomain; // @synthesize dataByDomain=_dataByDomain;
@property(readonly, nonatomic) NSXPCConnection *clientXPCConnection; // @synthesize clientXPCConnection=_clientXPCConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) __weak id <STStatusDomainServerHandle> serverHandle; // @synthesize serverHandle=_serverHandle;
// - (void).cxx_destruct;
- (void)_internalQueue_observeData:(id)arg1 forDomain:(NSUInteger)arg2 dataSendBlock:(id /* CDUnknownBlockType */)arg3 diffSendBlock:(id /* CDUnknownBlockType */)arg4;
- (void)observeData:(id)arg1 forDomain:(NSUInteger)arg2;
- (void)stopObservingDomains:(id)arg1;
- (void)observeDomains:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;

@end

