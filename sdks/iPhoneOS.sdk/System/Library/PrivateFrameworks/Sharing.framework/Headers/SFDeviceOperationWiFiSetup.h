//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUBonjourBrowser, CUReachabilityMonitor, NSString, SFSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationWiFiSetup : NSObject
{
    CUBonjourBrowser *_bonjourBrowser;
    NSString *_bonjourTestID;
    NSObject<OS_dispatch_source> *_bonjourTimer;
    BOOL _invalidateCalled;
    BOOL _reachabilityEnabled;
    CUReachabilityMonitor *_reachabilityMonitor;
    NSUInteger _startTicks;
    NSUInteger _startBonjourTestTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    int _bonjourTestState;
    unsigned int _repairFlags;
    unsigned int _setupFlags;
    id /* CDUnknownBlockType */ _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricBonjourTestSeconds;
    double _metricTotalSeconds;
    double _metricWiFiSetupSeconds;
    SFSession *_sfSession;
}

@property(retain, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;
@property(nonatomic) unsigned int setupFlags; // @synthesize setupFlags=_setupFlags;
@property(nonatomic) unsigned int repairFlags; // @synthesize repairFlags=_repairFlags;
@property(readonly, nonatomic) double metricWiFiSetupSeconds; // @synthesize metricWiFiSetupSeconds=_metricWiFiSetupSeconds;
@property(readonly, nonatomic) double metricTotalSeconds; // @synthesize metricTotalSeconds=_metricTotalSeconds;
@property(readonly, nonatomic) double metricBonjourTestSeconds; // @synthesize metricBonjourTestSeconds=_metricBonjourTestSeconds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) int bonjourTestState; // @synthesize bonjourTestState=_bonjourTestState;
// - (void).cxx_destruct;
- (void)_setupResponse:(id)arg1;
- (void)_complete:(id)arg1;
- (void)_bonjourTestTimeout;
- (void)_bonjourTestFoundDevice:(id)arg1;
- (void)_bonjourTestStart;
- (void)invalidate;
- (void)_activate2;
- (void)_activate;
- (void)activate;
- (id)init;

@end

