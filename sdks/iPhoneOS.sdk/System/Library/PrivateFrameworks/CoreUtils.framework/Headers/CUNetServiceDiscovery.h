//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUBonjourBrowser, CUNANSubscriber, NSSet, NSString, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue;

@interface CUNetServiceDiscovery : NSObject
{
    BOOL _activated;
    unsigned char _bleActionType;
    SFService *_bleAdvertiser;
    NSMutableDictionary _bleDevices;
    SFDeviceDiscovery *_bleDiscovery;
    NSString *_bleServiceIdentifier;
    NSMutableDictionary _endpoints;
    CUBonjourBrowser *_infraBonjourBrowser;
    NSMutableDictionary _infraBonjourDevices;
    unsigned int _infraBonjourBrowserID;
    NSMutableDictionary _nanEndpoints;
    CUNANSubscriber *_nanSubscriber;
    unsigned int _nanSubscriberID;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory _ucat;
    BOOL _updatePending;
    BOOL _blePeerFilterChanged;
    BOOL _serviceTypeChanged;
    int _awdlControl;
    unsigned int _bleDiscoveryFlags;
    unsigned int _changeFlags;
    int _infraControl;
    int _nanControl;
    NSSet *_blePeerFilter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_serviceType;
    id /* CDUnknownBlockType */ _endpointFoundHandler;
    id /* CDUnknownBlockType */ _endpointLostHandler;
    id /* CDUnknownBlockType */ _endpointChangedHandler;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endpointChangedHandler; // @synthesize endpointChangedHandler=_endpointChangedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) int nanControl; // @synthesize nanControl=_nanControl;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int infraControl; // @synthesize infraControl=_infraControl;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property(copy, nonatomic) NSSet *blePeerFilter; // @synthesize blePeerFilter=_blePeerFilter;
@property(nonatomic) unsigned int bleDiscoveryFlags; // @synthesize bleDiscoveryFlags=_bleDiscoveryFlags;
@property(nonatomic) int awdlControl; // @synthesize awdlControl=_awdlControl;
// - (void).cxx_destruct;
- (void)_nanEndpointChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_nanEndpointLost:(id)arg1;
- (void)_nanEndpointFound:(id)arg1;
- (void)_nanSubscriberEnsureStopped;
- (void)_nanSubscriberEnsureStarted;
- (void)_infraBonjourDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_infraBonjourDeviceLost:(id)arg1;
- (void)_infraBonjourDeviceFound:(id)arg1;
- (void)_infraBonjourBrowserEnsureStopped;
- (void)_infraBonjourBrowserEnsureStarted;
- (void)_bleTriggerDeviceLost:(id)arg1;
- (void)_bleTriggerDeviceFound:(id)arg1;
- (void)_bleTriggerEnsureStopped;
- (void)_bleTriggerEnsureStarted;
- (void)_bleScannerEnsureStopped;
- (void)_bleScannerEnsureStarted;
- (void)_updateLocked;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateSafeInvokeBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

