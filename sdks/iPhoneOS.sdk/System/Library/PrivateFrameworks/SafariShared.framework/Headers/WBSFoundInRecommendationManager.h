//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SGSuggestionsServiceURLsProtocol;

@interface WBSFoundInRecommendationManager : NSObject
{
    NSObject<SGSuggestionsServiceURLsProtocol> *_suggestionsService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _changeNotificationToken;
}

+ (BOOL)isBundleIdentifierFromMessages:(id)arg1;
+ (BOOL)isBundleIdentifierFromCalendar:(id)arg1;
+ (NSUInteger)foundInSourceFromBundleIdentifier:(id)arg1;
+ (id)_linkRecommendationsFromSGSuggestions:(id)arg1 contactStoreProvider:(id /* CDUnknownBlockType */)arg2;
// - (void).cxx_destruct;
- (void)_createInternalQueueIfNecessary;
- (void)_recentURLRecommendationsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)recentRecommendationsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)stopListeningForURLSuggestionChanges;
- (void)beginListeningForURLSuggestionChanges;

@end

