//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICDelegationConsumerService : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_activeSessions;
}

// - (void).cxx_destruct;
- (void)performRequest:(id)arg1 withResponseHandler:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

