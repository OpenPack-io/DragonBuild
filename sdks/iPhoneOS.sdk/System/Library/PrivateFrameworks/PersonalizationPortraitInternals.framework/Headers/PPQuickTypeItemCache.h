//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface PPQuickTypeItemCache : NSObject
{
    NSMutableOrderedSet *_keys;
    NSMutableDictionary *_entries;
}

// - (void).cxx_destruct;
- (void)clear;
- (void)setEntry:(id)arg1 key:(id)arg2;
- (id)entryWithKey:(id)arg1;
- (id)init;

@end

