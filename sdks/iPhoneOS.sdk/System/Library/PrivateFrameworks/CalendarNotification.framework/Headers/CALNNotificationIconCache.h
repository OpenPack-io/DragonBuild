//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CALNNotificationIconProvider, OS_dispatch_queue;

@interface CALNNotificationIconCache : NSObject
{
    id <CALNNotificationIconProvider> _notificationIconProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_iconCacheDirectory;
+ (id)_pathForCachedIconWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id <CALNNotificationIconProvider> notificationIconProvider; // @synthesize notificationIconProvider=_notificationIconProvider;
// - (void).cxx_destruct;
- (BOOL)_createCacheDirectoryIfNeeded;
- (BOOL)_addIconWithIdentifier:(id)arg1 toCacheAtPath:(id)arg2;
- (id)iconIdentifierForCachedIconPath:(id)arg1;
- (id)cachedIconPathForIconIdentifier:(id)arg1;
- (id)initWithNotificationIconProvider:(id)arg1;

@end

