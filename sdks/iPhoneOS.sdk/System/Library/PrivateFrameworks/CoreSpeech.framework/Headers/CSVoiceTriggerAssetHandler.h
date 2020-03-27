//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

+ (id)sharedHandler;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)notifyObservers:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)defaultFallbackModelIfNil:(id)arg1;
- (void)getVoiceTriggerAsset:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

