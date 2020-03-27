//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/FCKeyedOperationQueueDelegate-Protocol.h>
#import <NewsUI/NUArticlePrefetcherType-Protocol.h>

@class FCKeyedOperationQueue, NSCountedSet, NSMutableDictionary, NSTimer;
@protocol NUArticleDataProviderFactory, NUArticleFactory;

@interface NUArticlePrefetcher : NSObject <FCKeyedOperationQueueDelegate, NUArticlePrefetcherType>
{
    id <NUArticleFactory> _articleFactory;
    id <NUArticleDataProviderFactory> _articleDataProviderFactory;
    FCKeyedOperationQueue *_prefetchQueue;
    NSMutableDictionary *_articleDataProviderCache;
    NSCountedSet *_interestedArticleIDs;
    NSMutableDictionary *_interestModificationDates;
    NSUInteger _highWaterMark;
    NSTimer *_reprocessTimer;
}

@property(retain, nonatomic) NSTimer *reprocessTimer; // @synthesize reprocessTimer=_reprocessTimer;
@property(nonatomic) NSUInteger highWaterMark; // @synthesize highWaterMark=_highWaterMark;
@property(retain, nonatomic) NSMutableDictionary *interestModificationDates; // @synthesize interestModificationDates=_interestModificationDates;
@property(retain, nonatomic) NSCountedSet *interestedArticleIDs; // @synthesize interestedArticleIDs=_interestedArticleIDs;
@property(retain, nonatomic) NSMutableDictionary *articleDataProviderCache; // @synthesize articleDataProviderCache=_articleDataProviderCache;
@property(retain, nonatomic) FCKeyedOperationQueue *prefetchQueue; // @synthesize prefetchQueue=_prefetchQueue;
@property(retain, nonatomic) id <NUArticleDataProviderFactory> articleDataProviderFactory; // @synthesize articleDataProviderFactory=_articleDataProviderFactory;
@property(retain, nonatomic) id <NUArticleFactory> articleFactory; // @synthesize articleFactory=_articleFactory;
// - (void).cxx_destruct;
- (void)_revisitSuspendedState;
- (void)_flushUnusedDataProvidersIfNeeded;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_reprocessInterestedArticleIDs;
- (void)_didChangeInterestedArticleIDs;
- (id)prefetchedArticleDataProviderForArticleID:(id)arg1;
- (void)removePrefetchInterestInArticleID:(id)arg1;
- (void)addPrefetchInterestInArticleID:(id)arg1;
- (id)init;
- (id)initWithArticleFactory:(id)arg1 articleDataProviderFactory:(id)arg2;

@end

