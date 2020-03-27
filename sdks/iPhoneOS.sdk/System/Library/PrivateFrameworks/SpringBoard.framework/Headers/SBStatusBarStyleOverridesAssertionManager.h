//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBStatusBarStyleOverridesAssertionServer-Protocol.h>

@class FBWorkspaceEventQueue, NSMapTable, NSMutableArray, NSString, NSXPCListener, SBStatusBarTapManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding>
{
    NSMutableArray *_runningUpdateTransactions;
    int _statusBarStyleOverrides;
    int _exclusiveStatusBarStyleOverrides;
    NSXPCListener *_xpcListener;
    NSMapTable *_assertionsByIdentifierByClientConnection;
    NSMapTable *_assertionsByStyleOverride;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_coordinatorConnectionsByStyleOverride;
    NSObject<OS_dispatch_source> *_assertionTimerSource;
    FBWorkspaceEventQueue *_eventQueue;
    SBStatusBarTapManager *_statusBarTapManager;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) SBStatusBarTapManager *statusBarTapManager; // @synthesize statusBarTapManager=_statusBarTapManager;
@property(retain, nonatomic) FBWorkspaceEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimerSource; // @synthesize assertionTimerSource=_assertionTimerSource;
@property(retain, nonatomic) NSMutableArray *coordinatorConnectionsByStyleOverride; // @synthesize coordinatorConnectionsByStyleOverride=_coordinatorConnectionsByStyleOverride;
@property(nonatomic) int exclusiveStatusBarStyleOverrides; // @synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides;
@property(nonatomic) int statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMapTable *assertionsByStyleOverride; // @synthesize assertionsByStyleOverride=_assertionsByStyleOverride;
@property(retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection; // @synthesize assertionsByIdentifierByClientConnection=_assertionsByIdentifierByClientConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
// - (void).cxx_destruct;
- (void)_postStatusStringsByStyle:(id)arg1;
- (id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg1 inactiveAssertionsByStyleOverride:(id)arg2;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)arg1 removedStyleOverrides:(int)arg2;
- (void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (int)_internalQueue_removeAssertionByStyleOverrides:(id)arg1;
- (int)_internalQueue_addAssertionByStyleOverrides:(id)arg1;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplicationSceneHandles:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (void)unregisterCoordinatorRegistrationForStyleOverrides:(id)arg1;
- (void)setRegisteredOverrides:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (BOOL)handleTapForStatusBarStyleOverride:(int)arg1;
- (id)_internalQueue_coordinatorClientForConnection:(id)arg1;
- (id)_internalQueue_coordinatorClientForStyleOverrides:(int)arg1;
- (BOOL)_verifyCoordinatorEntitlementForStyleOverride:(id)arg1 onConnection:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)updateForegroundApplicationSceneHandles:(id)arg1 withOptions:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)invalidateStatusBarStyleOverridesAssertions:(id)arg1;
- (id)init;

@end

