//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFAssertion.h>

@class NSObject;
@protocol OS_os_transaction;

@interface HMFMemoryAssertion : HMFAssertion
{
    NSObject<OS_os_transaction> *_internal;
}

@property(retain, nonatomic) NSObject<OS_os_transaction> *internal; // @synthesize internal=_internal;
// - (void).cxx_destruct;
- (void)mark;
- (void)invalidate;
- (id)initWithName:(id)arg1;

@end

