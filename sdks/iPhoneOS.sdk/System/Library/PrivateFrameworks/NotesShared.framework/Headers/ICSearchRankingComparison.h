//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ICSearchRankingComparison : NSObject
{
    NSMutableArray *_rankingValues;
}

@property(retain, nonatomic) NSMutableArray *rankingValues; // @synthesize rankingValues=_rankingValues;
// - (void).cxx_destruct;
- (id)description;
@property(nonatomic) NSUInteger preSubBucketRankingResult;
@property(nonatomic) NSUInteger preSubRecencyRankingResult;
@property(nonatomic) NSUInteger preSubBitFieldsRankingResult;
- (BOOL)allRanksHigherThan:(NSUInteger)arg1;
- (void)logStrength;
- (BOOL)applyOffsetWithSelectedPosition:(NSUInteger)arg1;
- (void)logComparisonForSelectedPosition:(NSUInteger)arg1 totalResultCountInSection:(NSUInteger)arg2;
- (id)init;

@end

