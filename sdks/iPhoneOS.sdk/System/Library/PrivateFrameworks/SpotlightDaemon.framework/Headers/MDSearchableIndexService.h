//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/CSSearchableIndexInterface-Protocol.h>
#import <SpotlightDaemon/CSSearchableIndexServiceInterface-Protocol.h>

@class CSIndexingQueue, NSString;
@protocol MDIndexer, OS_dispatch_queue, OS_xpc_object;

@interface MDSearchableIndexService : NSObject <CSSearchableIndexInterface, CSSearchableIndexServiceInterface>
{
    CSIndexingQueue *_activityQueue;
    BOOL _isInternal;
    BOOL _searchInternal;
    BOOL _quotaDisabled;
    BOOL _isPrivate;
    unsigned int _clientUID;
    NSObject<MDIndexer> *_indexer;
    NSObject<OS_xpc_object> *_clientConnection;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSString *_clientBundleID;
    NSString *_clientPersonaID;
    NSString *_protectionClass;
}

@property(nonatomic) BOOL isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) BOOL quotaDisabled; // @synthesize quotaDisabled=_quotaDisabled;
@property(nonatomic) BOOL searchInternal; // @synthesize searchInternal=_searchInternal;
@property(nonatomic) BOOL isInternal; // @synthesize isInternal=_isInternal;
@property(copy, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property(nonatomic) unsigned int clientUID; // @synthesize clientUID=_clientUID;
@property(copy, nonatomic) NSString *clientPersonaID; // @synthesize clientPersonaID=_clientPersonaID;
@property(copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain, nonatomic) NSObject<MDIndexer> *indexer; // @synthesize indexer=_indexer;
// - (void).cxx_destruct;
- (BOOL)handleCommand:(const char )arg1 info:(id)arg2;
- (BOOL)donateRelevantActions:(id)arg1;
- (BOOL)deleteAllInteractions:(id)arg1;
- (BOOL)_deleteInteractions:(id)arg1 forGroup:(BOOL)arg2;
- (BOOL)addInteraction:(id)arg1;
- (BOOL)processActivities:(id)arg1;
- (BOOL)deleteActionsWithIdentifiers:(id)arg1;
- (BOOL)deleteActionsBeforeTime:(id)arg1;
- (BOOL)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1;
- (BOOL)deleteAllUserActivities:(id)arg1;
- (BOOL)dataMigration:(id)arg1;
- (BOOL)changeState:(id)arg1;
- (BOOL)fetchAttributes:(id)arg1;
- (BOOL)fetchClientState:(id)arg1;
- (BOOL)issueCommand:(id)arg1;
- (BOOL)deleteSinceDate:(id)arg1;
- (BOOL)deleteBundle:(id)arg1;
- (BOOL)deleteDomains:(id)arg1;
- (BOOL)willModify:(id)arg1;
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(id /* CDUnknownBlockType */)arg10;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(id /* CDUnknownBlockType */)arg8;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(id /* CDUnknownBlockType */)arg7;
- (BOOL)processIndexData:(id)arg1;
- (BOOL)checkIn:(id)arg1;
- (void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 options:(long long)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 options:(long long)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
- (void)performDataMigrationWithTimeout:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_forceAppWithBundleID:(id)arg1 toPerformJob:(id)arg2;
- (void)deleteActionsWithIdentifiers:(id)arg1 options:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)deleteActionsBeforeTime:(double)arg1 options:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 options:(long long)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)deleteAllUserActivities:(id)arg1 options:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)performIndexJob:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(id /* CDUnknownBlockType */)arg3;
- (void)checkInWithProtectionClass:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)flushUserActivities;
- (void)_dispatchActivities:(id)arg1;
- (void)_dispatchActivities:(id)arg1 bundleID:(id)arg2;
- (void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6;
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 options:(long long)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)_issueCommand:(id)arg1 searchContext:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 includeParents:(BOOL)arg5 reply:(id)arg6 completionHandler:(id /* CDUnknownBlockType */)arg7;
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)_dispatchToReceiversWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 deletes:(id)arg7;
- (void)_processIndexDataForBundle:(id)arg1 protectionClass:(id)arg2 personaID:(id)arg3 options:(long long)arg4 items:(id)arg5 itemsText:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(id /* CDUnknownBlockType */)arg10;
- (BOOL)_canProcessIndexDataForBundle:(id)arg1 itemsDecoder:(id)arg2 deletesDecoder:(id)arg3 clientState:(id)arg4 clientStateName:(id)arg5 outError:(id )arg6;
- (BOOL)_jobForIndex:(long long)arg1;
- (id)_checkBundleIDHelper:(id)arg1;
- (id)_checkItems:(id)arg1 identifiers:(id)arg2 protectionClass:(id)arg3 bundleID:(id)arg4;
- (id)_checkNonEmptyBundle:(id)arg1 protectionClass:(id)arg2;
@property(readonly, nonatomic) CSIndexingQueue *activityQueue;
- (void)_makeActivityQueueIfNecessary;
@property(readonly, nonatomic) NSString *processDescription;

@end

