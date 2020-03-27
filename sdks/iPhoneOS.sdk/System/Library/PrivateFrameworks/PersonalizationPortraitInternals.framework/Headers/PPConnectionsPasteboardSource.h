//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

#import <PersonalizationPortraitInternals/PPConnectionsLocationSource-Protocol.h>

@class NSCache, NSLocale, NSObject, NSOperationQueue;
@protocol OS_dispatch_semaphore;

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource>
{
    NSUInteger _pasteboardNotificationState;
    NSCache *_cache;
    id _pasteboardObserver;
    NSObject<OS_dispatch_semaphore> *_init_sem;
    NSOperationQueue *_pbQueue;
    NSLocale *_testLocale;
}

+ (id)identifier;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(NSUInteger)arg4 consumer:(NSUInteger)arg5 explanationSet:(id)arg6;
- (id)supportedSemanticTags;
- (id)validUTTypes;
- (id)addressPasteboardTextItemFromNotification:(BOOL)arg1;
- (id)fetchedPasteboardItem;
- (void)refreshMostRecentPasteboardItemFromNotification:(BOOL)arg1 explanationSet:(id)arg2;
- (void)_setMostRecentPasteboardItem:(id)arg1;
- (id)_mostRecentPasteboardItem;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2;
- (id)cacheValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setTestLocale:(id)arg1;
- (void)unsetPasteboardTextForTestingAndClearCache;
- (void)setPasteboardTextForTesting:(id)arg1;

@end

