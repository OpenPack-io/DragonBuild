//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/FCTagRanking-Protocol.h>

@class FCFeedPersonalizedItems, NSArray, NSMapTable, NSString;
@protocol FCFeedPersonalizingItem;

@protocol FCFeedPersonalizing <FCTagRanking>
- (double)decayedPublisherDiversificationPenalty;
- (NSUInteger)whitelistLevelForTagID:(NSString *)arg1;
- (void)prepareForUseWithCompletionHandler:(void (^)(void))arg1;
- (NSArray *)limitItemsByFlowRate:(NSArray *)arg1 timeInterval:(double)arg2 publisherCount:(NSUInteger)arg3;
- (NSArray *)limitItemsByMinimumItemQuality:(NSArray *)arg1;
- (NSArray *)diversifyItems:(NSArray *)arg1 limit:(NSUInteger)arg2 preselectedItems:(NSArray *)arg3;
- (NSArray *)diversifyItems:(NSArray *)arg1 limit:(NSUInteger)arg2;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 options:(long long)arg2;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1;

@optional
- (void)fetchAggregateMapForPersonalizingItem:(id <FCFeedPersonalizingItem>)arg1 completion:(void (^)(NSDictionary *))arg2;
- (NSArray *)bestOfGroupFromItems:(NSArray *)arg1 configurationSet:(long long)arg2;
- (double)personalizedScoreForFeatureWithIdentifier:(NSString *)arg1 items:(NSArray *)arg2;
- (NSMapTable *)scoreProfilesForItems:(NSArray *)arg1 configurationSet:(long long)arg2;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 configurationSet:(long long)arg2;
- (void)prepareFavorites:(void (^)(void))arg1;
@end

