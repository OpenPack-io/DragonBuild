//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKXPCServiceDelegate-Protocol.h>

@class NSHashTable, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate>
{
    NSHashTable *_acquiredAssertions;
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_removeAssertionWithIdentifier:(id)arg1;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_remoteObjectProxy;
- (void)remoteServiceDidSuspend:(id)arg1;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)isAssertionValid:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)assertion:(id)arg1 shouldInvalidateWhenBackgrounded:(BOOL)arg2;
- (void)invalidateAssertion:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)acquireAssertionOfType:(NSUInteger)arg1 withReason:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;
- (id)initSharedInstance;

@end

