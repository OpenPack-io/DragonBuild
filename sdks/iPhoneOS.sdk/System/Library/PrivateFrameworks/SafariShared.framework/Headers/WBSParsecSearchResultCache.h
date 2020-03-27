//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface WBSParsecSearchResultCache : NSObject
{
    NSMutableDictionary *_resultSetCache;
    NSMutableDictionary *_resultSetsByPrefix;
    NSUInteger _cachedQueriesLimit;
}

// - (void).cxx_destruct;
- (BOOL)_resultSet:(id)arg1 isMatchForQuery:(id)arg2;
- (BOOL)_shouldCacheResultSetForQueryMatching:(id)arg1;
@property(readonly, nonatomic) NSArray *allCachedQueries;
- (id)resultSetWithQuery:(id)arg1;
- (id)bestResultSetForQuery:(id)arg1;
- (void)cacheResultSet:(id)arg1;
- (void)cacheResultSetsFromSearchResponse:(id)arg1;
- (id)initWithCachedQueriesLimit:(NSUInteger)arg1;

@end

