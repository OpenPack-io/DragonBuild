//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFUnfairLock.h>

__attribute__((visibility("hidden")))
@interface __HMFOSUnfairLock : HMFUnfairLock
{
//     struct os_unfair_lock_s _internal;
    unsigned int _internalOptions;
}

- (void)performBlock:(id /* CDUnknownBlockType */)arg1;
- (void)assertNotOwner;
- (void)assertOwner;
- (void)unlock;
- (void)lock;
- (id)initWithOptions:(NSUInteger)arg1;

@end

