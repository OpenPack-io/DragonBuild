//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, STManagementState;
@protocol OS_dispatch_queue;

@interface STManagementStateObserver : NSObject
{
    int _screenTimeSettingsChangeNotifyToken;
    long long _contactManagementState;
    NSNumber *_dsid;
    STManagementState *_managementState;
    STManagementStateObserver *_me;
    NSObject<OS_dispatch_queue> *_screenTimeSettingsChangeQueue;
}

+ (void)createObserverWithDSID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly) int screenTimeSettingsChangeNotifyToken; // @synthesize screenTimeSettingsChangeNotifyToken=_screenTimeSettingsChangeNotifyToken;
@property(readonly) NSObject<OS_dispatch_queue> *screenTimeSettingsChangeQueue; // @synthesize screenTimeSettingsChangeQueue=_screenTimeSettingsChangeQueue;
@property(retain) STManagementStateObserver *me; // @synthesize me=_me;
@property(retain) STManagementState *managementState; // @synthesize managementState=_managementState;
@property(readonly, copy) NSNumber *dsid; // @synthesize dsid=_dsid;
@property long long contactManagementState; // @synthesize contactManagementState=_contactManagementState;
// - (void).cxx_destruct;
- (void)_screenTimeSettingsDidChange;
- (void)dealloc;
- (id)_initWithDSID:(id)arg1;

@end

