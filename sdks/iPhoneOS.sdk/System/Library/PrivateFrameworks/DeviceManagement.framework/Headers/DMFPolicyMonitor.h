//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface DMFPolicyMonitor : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_registrationCallbackQueue;
    NSMutableDictionary *_notificationTokensByPolicyMonitorIdentifier;
}

+ (id)remoteInterface;
+ (id)policyMonitor;
@property(readonly, nonatomic) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier; // @synthesize notificationTokensByPolicyMonitorIdentifier=_notificationTokensByPolicyMonitorIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // @synthesize registrationCallbackQueue=_registrationCallbackQueue;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
// - (void).cxx_destruct;
- (id)requestPoliciesForTypes:(id)arg1 withError:(id )arg2;
- (void)requestPoliciesForTypes:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)addRegistration:(id)arg1 forPolicyMonitorIdentifier:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)invalidatePolicyMonitor:(id)arg1;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)init;

@end

