//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray;

@interface TIRollingLog : NSObject <NSCopying>
{
    NSMutableArray *_entries;
    NSUInteger _nextIndex;
    NSUInteger _count;
    NSUInteger _maxCount;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *currentEntries;
- (void)addEntries:(id)arg1;
- (void)addEntry:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithMaxCount:(NSUInteger)arg1;

@end

