//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface WFAccountCache : NSObject
{
    NSCache *_cache;
}

@property(readonly, nonatomic) NSCache *cache; // @synthesize cache=_cache;
// - (void).cxx_destruct;
- (void)clearCacheForService:(id)arg1;
- (void)setAccounts:(id)arg1 forService:(id)arg2;
- (void)setNumberOfAccounts:(id)arg1 forService:(id)arg2;
- (id)accountsForService:(id)arg1;
- (id)numberOfAccountsForService:(id)arg1;
- (id)init;

@end

