//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/FMFSessionDelegate-Protocol.h>

@class FMFSession, NAFuture, NSHashTable;

@interface HULocationDeviceManager : NSObject <FMFSessionDelegate>
{
    FMFSession *_fmfSession;
    NAFuture *_activeFMFDeviceFuture;
    NAFuture *_availableFMFDevicesFuture;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NAFuture *availableFMFDevicesFuture; // @synthesize availableFMFDevicesFuture=_availableFMFDevicesFuture;
@property(retain, nonatomic) NAFuture *activeFMFDeviceFuture; // @synthesize activeFMFDeviceFuture=_activeFMFDeviceFuture;
@property(readonly, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
// - (void).cxx_destruct;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (void)_updateActiveFMFDevice:(id)arg1;
- (id)updateActiveLocationDevice:(id)arg1;
@property(readonly, nonatomic) NAFuture *availableLocationDevicesFuture;
@property(readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

