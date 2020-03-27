//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/MFContactsSearchConsumer-Protocol.h>

@class MFContactsSearchManager, NSMutableArray, NSNumber;
@protocol AAUIContactsSearchDelegate;

@interface FAContactsSearchController : NSObject <MFContactsSearchConsumer>
{
    MFContactsSearchManager *_searchManager;
    long long _countOfPendingResultBatches;
    BOOL _didFindResults;
    NSNumber *_searchTaskID;
    id <AAUIContactsSearchDelegate> _delegate;
    NSMutableArray *_resultsArray;
}

// - (void).cxx_destruct;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)_endSearch;
- (void)_cancelSearchAndNotify:(BOOL)arg1;
- (void)cancelSearch;
- (void)beginSearchWithString:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

