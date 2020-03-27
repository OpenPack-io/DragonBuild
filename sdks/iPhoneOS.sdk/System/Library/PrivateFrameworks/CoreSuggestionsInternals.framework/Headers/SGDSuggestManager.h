//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGDSuggestManagerAllProtocol-Protocol.h>

@class CNContactStore, EKEventStore, NSDictionary, NSLock, NSOperationQueue, NSString, NSXPCConnection, SGDManagerForCTS, SGFuture, SGSearchableItemIdTriple, SGServiceContext, SGSqlEntityStore, SGSuggestHistory, SGXpcTransaction, _PASLock, _PASNotificationToken;

@interface SGDSuggestManager : NSObject <SGDSuggestManagerAllProtocol>
{
    SGSqlEntityStore *_harvestStore;
    NSXPCConnection *_connection;
    SGSuggestHistory *_history;
    _PASNotificationToken *_assetUpdateToken;
    NSOperationQueue *_messageHarvestQueue;
    SGDManagerForCTS *_ctsManager;
    EKEventStore *_ekStore;
    CNContactStore *_contactStore;
    NSDictionary *_bundleIdToPET;
    NSLock *_dirtyLock;
    SGXpcTransaction *_dirtyTransaction;
    SGSearchableItemIdTriple *_lastSuggestionsFromMessageRequest;
    SGFuture *_lastSuggestionsFromMessageResponse;
    NSLock *_lastSuggestionsFromMessageLock;
    int _settingsChangeToken;
    _PASLock *_recentlyHarvestedDetailLock;
    SGServiceContext *_context;
    NSString *_clientName;
}

+ (void)clearChangeHistory:(id)arg1;
+ (id)fetchChangeHistory;
+ (void)initialize;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic) SGServiceContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)foundInStringForRecordId:(id)arg1 style:(unsigned char)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(unsigned int)arg4 withCompletion:(id /* CDUnknownBlockType */)arg5;
- (void)recentURLsWithLimit:(unsigned int)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)ipsosMessagesWithSearchableItems:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)_foundInAppsStringWithoutContactForAppName:(id)arg1;
- (id)_foundInAppsStringCompactVersionWithContactName:(id)arg1;
- (id)_foundInAppsStringLongVersionForAppName:(id)arg1 contactName:(id)arg2;
- (id)_showInFormatStringWithLocalization:(id)arg1;
- (id)_maybeFormatString;
- (void)deleteCloudKitZoneWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)clearContactAggregatorConversation:(id)arg1;
- (void)clearContactAggregator;
- (void)sleepWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)daemonExitWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEntity:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (id)entityFromUniqueKey:(id)arg1;
- (void)logSuggestionInteractionForRecordId:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForRealtimeEvent:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1;
- (void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logUnknownContactInformationShownCount:(NSUInteger)arg1 notShownCount:(NSUInteger)arg2 bundleId:(id)arg3;
- (struct SGMContactDetailUsedApp_)_appEnumForBundleId:(id)arg1;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)noopWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)keepDirty:(BOOL)arg1;
- (void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(id /* CDUnknownBlockType */)arg5;
- (void)geocodeEnrichmentsInPipelineEntity:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(id /* CDUnknownBlockType */)arg4;
- (void)isEventCandidateForURL:(id)arg1 title:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)schemaOrgToEvents:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)registerForCoreSpotlightIndexing;
- (void)drainQueueCompletelyWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)addSearchableItems:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)enqueueSearchableItems:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isSearchableItemPartOfReimport:(id)arg1;
- (void)planReceivedFromServerWithPayload:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)sendRTCLogsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)resetConfirmationAndRejectionHistory:(id /* CDUnknownBlockType */)arg1;
- (void)rejectContact:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)rejectCuratedContactDetail:(id)arg1 from:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)rejectContactDetailRecord:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmContactDetailRecord:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)rejectRecord:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmRecord:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3 withParentConfirmation:(BOOL)arg4;
- (void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_performAction:(id)arg1 onContactDetailRecord:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)confirmContact:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)rejectEventByRecordId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)rejectEvent:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmEventByRecordId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmEvent:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)originFromRecordId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 ignoreUserActivitySupport:(BOOL)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (id)createLaunchIntentForStorageEvent:(id)arg1;
- (void)eventFromUniqueId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveFullDownloadRequests:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)fullDownloadRequestBatch:(NSUInteger)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)updateMessages:(id)arg1 state:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)messagesToRefreshWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)namesForDetailCacheSnapshotsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)namesForDetail:(id)arg1 limitTo:(NSUInteger)arg2 prependMaybe:(BOOL)arg3 onlySignificant:(BOOL)arg4 withCompletion:(id /* CDUnknownBlockType */)arg5;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)realtimeContactsFromEntity:(id)arg1 enrichments:(id)arg2 sourceTextMessage:(id)arg3 store:(id)arg4;
- (BOOL)_isContactInteresting:(id)arg1 emailEntity:(id)arg2 enrichments:(id)arg3 hasContactCard:(BOOL)arg4;
- (BOOL)containsNonCuratedData:(id)arg1;
- (BOOL)isSGEntity:(id)arg1 duplicateOfEKEvent:(id)arg2 withStore:(id)arg3;
- (id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg1 candidates:(id)arg2;
- (id)shortNamesAndRealtimeEventsFromEntity:(id)arg1 enrichments:(id)arg2 store:(id)arg3;
- (void)bumptTTLForNLEvent:(id)arg1;
- (id)filterPastEvents:(id)arg1;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(NSUInteger)arg4 withCompletion:(id /* CDUnknownBlockType */)arg5;
- (void)_suggestionsFromSearchableItem:(id)arg1 options:(NSUInteger)arg2 dissectIfNecessary:(BOOL)arg3 withCompletion:(id /* CDUnknownBlockType */)arg4;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)harvestedSuggestionsFromMessages:(id)arg1 bundleIdentifier:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)filterRealtimeEvents:(id)arg1;
- (void)suggestionsFromMessage:(id)arg1 options:(NSUInteger)arg2 fullCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)suggestionsFromMessage:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)suggestionsFromMessage:(id)arg1 options:(NSUInteger)arg2 completionDelivery:(NSUInteger)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4 fullCompletionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)_sendChatChangedNotificationWithDomainIdentifier:(id)arg1;
- (void)_suggestionsFromMessage:(id)arg1 options:(NSUInteger)arg2 dissectIfNecessary:(BOOL)arg3 completionDelivery:(NSUInteger)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)_suggestionsFromMessageWithIdentifier:(id)arg1 source:(id)arg2 options:(NSUInteger)arg3 completion:(id /* CDUnknownBlockType */)arg4 completionDelivery:(NSUInteger)arg5 providedBy:(id /* CDUnknownBlockType */)arg6 dissectIfNecessary:(BOOL)arg7;
- (void)_storeAndGeocodeEntity:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 store:(id)arg5 afterCallbackQueue:(id)arg6 finalize:(id /* CDUnknownBlockType */)arg7;
- (BOOL)_canBannerUseStoredDissection:(id)arg1 options:(NSUInteger)arg2;
- (id)cachedResultForKey:(id)arg1 generateResult:(id /* CDUnknownBlockType */)arg2 validateResults:(id /* CDUnknownBlockType */)arg3;
- (id)dissectMessage:(id)arg1 fromSource:(id)arg2 store:(id)arg3 context:(id)arg4;
- (id)dissectMessage:(id)arg1 fromSource:(id)arg2 store:(id)arg3;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(NSUInteger)arg3 withCompletion:(id /* CDUnknownBlockType */)arg4;
- (void)reminderTitleForContent:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)allRemindersLimitedTo:(NSUInteger)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)reminderAlarmTriggeredForRecordId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_rejectReminderByRecordId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)rejectRealtimeReminder:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)rejectReminderByRecordId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_confirmReminderByRecordId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmRealtimeReminder:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmReminderByRecordId:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)allEventsLimitedTo:(NSUInteger)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)eventsInFutureLimitTo:(NSUInteger)arg1 options:(unsigned int)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(NSUInteger)arg4 options:(unsigned int)arg5 withCompletion:(id /* CDUnknownBlockType */)arg6;
- (void)eventFromRecordId:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(NSUInteger)arg3 options:(unsigned int)arg4 withCompletion:(id /* CDUnknownBlockType */)arg5;
- (id)_mapToPseudoEvents:(id)arg1;
- (void)allContactsLimitedTo:(NSUInteger)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)contactMatchesWithMessagingPrefix:(id)arg1 limitTo:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)contactMatchesWithFullTextSearch:(id)arg1 limitTo:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (id)storageContactFromRecordId:(id)arg1;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)contactFromRecordId:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)isEnabledWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)clearCachesFully:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)prepareForRealtimeExtraction:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_clientIsMessages;
- (BOOL)_clientIsMail;
- (id)_pmlTraining;
- (void)dealloc;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 ctsManager:(id)arg2 ekStore:(id)arg3 contactStore:(id)arg4;
- (id)initWithMessagesConnection:(id)arg1 store:(id)arg2;
- (id)initWithConnection:(id)arg1 store:(id)arg2;
- (void)_onInteractionBlacklistUpdate:(id)arg1;
- (void)_setupHistoryObserver:(id)arg1;
- (void)setupManagerWithConnection:(id)arg1 store:(id)arg2 ctsManager:(id)arg3 ekStore:(id)arg4 contactStore:(id)arg5;

@end

