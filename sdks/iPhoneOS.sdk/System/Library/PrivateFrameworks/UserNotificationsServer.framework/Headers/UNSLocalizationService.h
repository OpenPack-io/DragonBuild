//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface UNSLocalizationService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_bundleIdentifierToBundle;
    NSMutableDictionary *_bundleIdentifierToBundleURL;
}

// - (void).cxx_destruct;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;
- (id)_queue_bundleWithIdentifier:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (id)bundleWithIdentifier:(id)arg1;
- (id)init;

@end

