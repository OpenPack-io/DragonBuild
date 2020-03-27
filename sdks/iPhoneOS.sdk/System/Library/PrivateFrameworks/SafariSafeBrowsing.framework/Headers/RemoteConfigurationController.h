//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, ProviderConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface RemoteConfigurationController : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_currentConfiguration;
    NSObject<OS_dispatch_source> *_updateTimer;
    BOOL _googleConfigurationDidChange;
    BOOL _tencentConfigurationDidChange;
    ProviderConfiguration *_googleProviderConfiguration;
    ProviderConfiguration *_tencentProviderConfiguration;
}

+ (id)sharedController;
@property(readonly, nonatomic) ProviderConfiguration *tencentProviderConfiguration; // @synthesize tencentProviderConfiguration=_tencentProviderConfiguration;
@property(readonly, nonatomic) ProviderConfiguration *googleProviderConfiguration; // @synthesize googleProviderConfiguration=_googleProviderConfiguration;
// - (void).cxx_destruct;
- (BOOL)forceUpdateConfigurationFromServer;
- (BOOL)forceLoadConfigurationFromDisk;
- (void)_scheduleConfigurationUpdateDaily;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (id)_lastConfigurationUpdateAttemptDate;
- (BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1;
- (void)_didReceiveConfigurationData:(id)arg1;
- (void)_updateConfigurationIfNecessary;
- (void)_downloadConfigurationWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_notifyProviderConfigurationsDidChangeIfNecessary;
- (void)_setCurrentConfiguration:(id)arg1;
- (void)_writeConfigurationToDisk:(id)arg1;
- (void)_loadConfigurationFromDiskIfNecessary;
- (id)_urlOfDownloadedConfiguration;
- (void)_resetProviderConfigurationsDidChange;
- (void)_initializeProviderConfigurationsWithConfiguration:(id)arg1;
- (void)_simplifyProviderConfigurations;
- (void)_initializeToDefaultProviderConfigurations;
- (id)_providerToTurnOffFromProviderDictionary:(id)arg1;
@property(readonly, nonatomic, getter=isSafeBrowsingOff) BOOL safeBrowsingOff;
- (void)dealloc;
- (id)init;

@end

