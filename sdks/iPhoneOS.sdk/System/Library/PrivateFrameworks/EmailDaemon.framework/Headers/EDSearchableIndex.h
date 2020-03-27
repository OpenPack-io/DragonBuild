//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/CSSearchableIndexDelegate-Protocol.h>
#import <EmailDaemon/EDSearchableIndexSchedulable-Protocol.h>
#import <EmailDaemon/EDSearchableIndexVerifierDataSource-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EFSignpostable-Protocol.h>
#import <EmailDaemon/EMSearchableIndexInterface-Protocol.h>

@class CSSearchableIndex, EFCancelationToken, EFFuture, EFLazyCache, EFObservable, NSMutableArray, NSMutableSet, NSString, _EMSearchableIndexPendingRemovals;
@protocol EDSearchableIndexDataSource, EDSearchableIndexReasonProvider, EDSearchableIndexSchedulableDelegate, EFScheduler, OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

@interface EDSearchableIndex : NSObject <CSSearchableIndexDelegate, EDSearchableIndexVerifierDataSource, EFLoggable, EFSignpostable, EDSearchableIndexSchedulable, EMSearchableIndexInterface>
{
    NSString *_indexName;
    EFCancelationToken *_cancelationToken;
    NSObject<OS_dispatch_queue> *_stateTransitionQueue;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    long long _resumeCount;
    long long _transaction;
    NSUInteger _throttledIndexingBatchSize;
    NSUInteger _throttledDataSourceBatchSize;
    NSUInteger _currentMaximumBatchSize;
    NSObject<OS_os_activity> *_batchIndexingActivity;
    NSMutableSet *_removedIdentifiers;
    NSMutableArray *_preparingItems;
    NSMutableArray *_pendingItems;
    NSMutableArray *_preprocessingItems;
    NSMutableArray *_processingItems;
    NSMutableSet *_pendingDomainRemovals;
    _EMSearchableIndexPendingRemovals *_pendingIdentifierRemovals;
    NSObject<OS_dispatch_queue> *_indexingQueue;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    id <EFScheduler> _preprocessingScheduler;
//     struct os_unfair_lock_s _mainThreadAccessibleIvarLock;
    id <EFScheduler> _indexingBatchScheduler;
    EFLazyCache *_searchResultsCache;
    BOOL _isActive;
    BOOL _needsRefresh;
    BOOL _needsVerification;
    BOOL _coalesceTimerFired;
    BOOL _scheduledProcessing;
    BOOL _scheduledRefresh;
    BOOL _scheduledVerification;
    BOOL _indexImmediately;
    _Atomic long long _countOfBlocksAffectingDataSourceAndIndex;
    BOOL _dataSourceIndexingPermitted;
    BOOL _persistenceAvailable;
    BOOL _skipIndexExclusionCheck;
    BOOL _clientStateFetched;
    BOOL _enableSpotlightVerification;
    id <EDSearchableIndexDataSource> _dataSource;
    id <EDSearchableIndexReasonProvider> _reasonProvider;
    id <EDSearchableIndexSchedulableDelegate> _schedulableDelegate;
    CSSearchableIndex *_csIndex;
    NSString *_searchableIndexBundleID;
    double _coalescingDelaySeconds;
    double _dataSourceUpdateTimeLimit;
    EFFuture *_delayDataSourceAssignmentFuture;
}

+ (void)_saveLocalClientState:(id)arg1;
+ (id)_localClientState;
+ (id)_localClientStateURL;
+ (id)userHandle;
+ (BOOL)isIncrementalIndexingType:(long long)arg1;
+ (BOOL)isValidTransaction:(long long)arg1;
+ (id)signpostLog;
+ (id)log;
@property(retain, nonatomic) EFFuture *delayDataSourceAssignmentFuture; // @synthesize delayDataSourceAssignmentFuture=_delayDataSourceAssignmentFuture;
@property(nonatomic) double dataSourceUpdateTimeLimit; // @synthesize dataSourceUpdateTimeLimit=_dataSourceUpdateTimeLimit;
@property(nonatomic) double coalescingDelaySeconds; // @synthesize coalescingDelaySeconds=_coalescingDelaySeconds;
@property(copy, nonatomic) NSString *searchableIndexBundleID; // @synthesize searchableIndexBundleID=_searchableIndexBundleID;
@property(nonatomic) BOOL enableSpotlightVerification; // @synthesize enableSpotlightVerification=_enableSpotlightVerification;
@property(nonatomic) BOOL clientStateFetched; // @synthesize clientStateFetched=_clientStateFetched;
@property(nonatomic) BOOL skipIndexExclusionCheck; // @synthesize skipIndexExclusionCheck=_skipIndexExclusionCheck;
@property(retain, nonatomic) CSSearchableIndex *csIndex; // @synthesize csIndex=_csIndex;
@property(nonatomic) __weak id <EDSearchableIndexSchedulableDelegate> schedulableDelegate; // @synthesize schedulableDelegate=_schedulableDelegate;
@property(nonatomic) __weak id <EDSearchableIndexReasonProvider> reasonProvider; // @synthesize reasonProvider=_reasonProvider;
@property(nonatomic) __weak id <EDSearchableIndexDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isDataSourceIndexingPermitted) BOOL dataSourceIndexingPermitted; // @synthesize dataSourceIndexingPermitted=_dataSourceIndexingPermitted;
// - (void).cxx_destruct;
- (void)waitForAsynchronousWork;
- (id)currentReasons;
- (id)exclusionReasons;
- (id)purgeReasons;
- (id)dataSourceRefreshReasons;
@property(readonly, nonatomic) BOOL canIndexAttachments;
- (void)removeSearchQueryCancelable:(id)arg1;
- (void)addSearchQueryCancelable:(id)arg1;
@property(readonly, nonatomic) BOOL shouldCancelSearchQuery;
@property(readonly, nonatomic, getter=isPluggedIn) BOOL pluggedIn;
@property(readonly, nonatomic) EFObservable *powerObservable;
- (void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2;
- (void)markMessagesAsPrinted:(id)arg1;
- (void)indexMessages:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3;
- (void)indexAttachmentsForMessageWithIdentifier:(id)arg1;
- (void)removeMessages:(id)arg1;
- (BOOL)_preprocessItemIfNecessary:(id)arg1 fromRefresh:(BOOL)arg2;
- (id)identifiersMatchingCriterion:(id)arg1;
- (id)messageIDsMatchingQuery:(id)arg1;
- (void)removeAllItemsWithAcknowledgementHandler:(id /* CDUnknownBlockType */)arg1;
- (void)removeAllItems;
- (void)removeItemsForDomainIdentifier:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2 fromRefresh:(BOOL)arg3;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)_indexItems:(id)arg1 fromRefresh:(BOOL)arg2 immediately:(BOOL)arg3;
- (void)indexItems:(id)arg1 fromRefresh:(BOOL)arg2 immediately:(BOOL)arg3;
- (void)indexItems:(id)arg1 immediately:(BOOL)arg2;
- (void)indexItems:(id)arg1;
- (void)reindexAllItemsWithOptions:(NSUInteger)arg1 acknowledgementHandler:(id /* CDUnknownBlockType */)arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* CDUnknownBlockType */)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_invalidateItemsInTransactions:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* CDUnknownBlockType */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* CDUnknownBlockType */)arg3;
- (id)indexedEmptySubjectIdentifers;
- (id)issueDiagnosticsRequestForMessageRowId:(id)arg1;
- (void)_processSpotlightVerificationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_processRefreshRequestWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)_pendingIdentifiers;
- (void)_processIdentifierRemovals:(id)arg1;
- (id)_processDomainRemovals:(id)arg1;
- (BOOL)_processIndexingBatch:(id)arg1 clientState:(id)arg2 itemsNotIndexed:(id)arg3;
- (void)_getDomainRemovals:(id )arg1 identifierRemovals:(id )arg2;
- (id)_identifiersStringForItems:(id)arg1 maxLength:(NSUInteger)arg2;
- (id)_identifiersForItems:(id)arg1;
- (id)_consumeBatchOfSize:(NSUInteger)arg1;
@property(readonly, getter=isPerformingBlockAffectingDataSourceAndIndex) BOOL performingBlockAffectingDataSourceAndIndex;
- (void)performBlockAffectingDataSourceAndIndex:(id /* CDUnknownBlockType */)arg1;
- (void)endUpdatesAffectingDataSourceAndIndex;
- (void)beginUpdatesAffectingDataSourceAndIndex;
- (void)_scheduleDataSourceRefresh;
- (void)_scheduleProcessPendingItemsFromRefresh:(BOOL)arg1;
- (void)_logSignpostForIndexingBatchCompletedWithItemsIndexedCount:(id)arg1;
- (void)_logSignpostForIndexingBatchAssignedUpdatesWithItemsIndexedCount:(NSUInteger)arg1;
- (void)_logSignpostForIndexingBatchAssignedDomainRemovalCount:(NSUInteger)arg1;
- (void)_logSignpostForIndexingBatchStartWithPendingItemsCount:(id)arg1;
- (void)_queueTransitionActive:(BOOL)arg1 fromRefresh:(BOOL)arg2;
- (NSUInteger)_countOfItemsInPendingQueues;
- (void)_queueRefresh;
- (void)_queueConsumeBudgetItemCount:(NSUInteger)arg1;
- (void)_queueConsumeBudgetElapsedPeriod:(double)arg1;
- (void)_transitionWithBudgetTimeUsed:(double)arg1;
- (void)_coalescingTimerFired;
- (void)_stopCoalescingTimer;
- (void)_startCoalescingTimer;
- (id)searchableIndexForSearchableIndexVerifier:(id)arg1;
- (id)dataSamplesForSearchableIndexVerifier:(id)arg1 searchableIndex:(id)arg2 count:(NSUInteger)arg3;
- (id)bundleIdentifierForSearchableIndexVerifier:(id)arg1;
- (void)_dataSourcePrepareToIndexItems:(id)arg1 fromRefresh:(BOOL)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)_dataSourceVerifyRepresentativeSampleWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_dataSourceRequestNeededUpdatesExcludingIdentifiers:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_dataSourceScheduleWork:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_queueContentsAllowsRefresh;
@property(readonly) long long resumeCount;
@property(readonly, getter=isActive) BOOL active;
@property(getter=isPersistenceAvailable) BOOL persistenceAvailable; // @synthesize persistenceAvailable=_persistenceAvailable;
- (void)refresh;
- (void)resume;
- (void)_resume;
- (void)suspend;
- (void)_suspend;
- (id)_eventDataForTransitionState:(id)arg1;
- (void)_invalidateCache;
- (long long)_nextTransaction;
@property(readonly, getter=_transaction) long long transaction;
- (void)_noteNeedsLastClientStateFetch;
- (void)_fetchLastClientState;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (void)setForeground:(BOOL)arg1;
- (double)_throttleRequestedSize:(NSUInteger )arg1 targetTime:(double)arg2 action:(id /* CDUnknownBlockType */)arg3;
- (void)_handleFailingTransactionIDs:(id)arg1 sampleCount:(NSUInteger)arg2;
- (void)_verifySpotlightIndex;
- (void)_registerDistantFutureSpotlightVerification;
- (void)_scheduleSpotlightVerificationOnIndexingQueueWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_scheduleSpotlightVerification;
@property(readonly, copy, nonatomic) NSString *indexName;
@property(readonly, nonatomic) NSUInteger pendingIndexItemsCount;
- (void)_powerStateChanged;
@property(readonly, copy, nonatomic) NSString *copyDiagnosticInformation;
- (void)scheduleRecurringActivity;
- (void)dealloc;
- (id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3;
@property(readonly) NSUInteger signpostID;

@end

