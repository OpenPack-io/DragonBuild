//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, PKInAppPaymentService;
@protocol OS_dispatch_queue;

@interface PKAMPEnrollmentManager : NSObject
{
    PKInAppPaymentService *_service;
    NSMutableDictionary *_promiseMap;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
//     struct os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)performEnrollPaymentPass:(id)arg1 isDefault:(BOOL)arg2;
- (void)enrollPaymentPass:(id)arg1 isDefault:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)performCanEnrollPaymentPass:(id)arg1;
- (void)canEnrollPaymentPass:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)enrollmentStatusForPaymentPass:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2 progress:(id /* CDUnknownBlockType */)arg3;
- (id)init;

@end

