//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariFoundation/SFAutoFillHelperProtocol-Protocol.h>

@class NSXPCConnection;

@interface SFAutoFillHelperProxy : NSObject <SFAutoFillHelperProtocol>
{
    NSXPCConnection *_connection;
}

// - (void).cxx_destruct;
- (void)getRemoteAutoFillAvailabilityWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg1 confirmPasswordRules:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

