//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REDailyRoutineRelevanceProvider : RERelevanceProvider
{
    NSUInteger _type;
}

+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
- (id)description;
- (NSUInteger)_hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDailyRoutineType:(NSUInteger)arg1;
- (id)init;

@end

