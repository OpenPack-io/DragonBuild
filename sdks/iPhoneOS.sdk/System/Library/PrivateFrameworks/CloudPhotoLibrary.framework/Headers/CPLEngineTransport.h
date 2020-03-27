//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>

@class CPLEngineLibrary, CPLPlatformObject;

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
}

+ (id)platformImplementationProtocol;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
// - (void).cxx_destruct;
- (id)createGroupForQueryUserIdentities;
- (id)createGroupForAcceptingMomentShare;
- (id)createGroupForFetchingMomentShare;
- (id)createGroupForPublishingMomentShare;
- (id)createGroupForPruningCheck;
- (id)createGroupForAnalysisDownload;
- (id)createGroupForMovieStreamingWithIntent:(NSUInteger)arg1;
- (id)createGroupForResourcesDownload;
- (id)createGroupForThumbnailsDownload;
- (id)createGroupForChangeDownload;
- (id)createGroupForChangeUpload;
- (id)createGroupForLibraryStateCheck;
- (id)createGroupForFeedback;
- (id)createGroupForFetchScopeListChanges;
- (id)createGroupForTransportScopeUpdate;
- (id)createGroupForTransportScopeDelete;
- (id)createGroupForSetup;
- (id)createGroupForThumbnailPrefetch;
- (id)createGroupForPrefetch;
- (id)createGroupForInitialDownload;
- (id)createGroupForResetSync;
- (id)createGroupForInitialUpload;
- (void)findPersistedInitialSyncSession:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isResourceDynamic:(id)arg1;
- (void)getPushEnvironmentWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getStatusWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)componentName;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)openWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;
- (id)scopeNameForTransportScope:(id)arg1;
- (id)descriptionForTransportScope:(id)arg1;
- (void)cancelBlockedTasksIncludingBackground:(BOOL)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(NSUInteger)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)simpleDescriptionForScopeListSyncAnchor:(NSData )arg1;
- (id)simpleDescriptionForSyncAnchor:(NSData )arg1;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)queryUserIdentitiesTaskForParticipants:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)acceptTaskForMomentShare:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)fetchTaskForMomentShareURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)publishTaskForMomentShare:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)inMemoryDownloadTaskForResource:(id)arg1 transportScope:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)resourcesDownloadTaskWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)rampingRequestTaskForResourceType:(NSUInteger)arg1 numRequested:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)resourceCheckTaskForResources:(id)arg1 transportScopes:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)getStreamingURLTaskForResource:(id)arg1 intent:(NSUInteger)arg2 hints:(id)arg3 transportScope:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)getCurrentSyncAnchorWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)getLibraryInfoAndStateWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 libraryInfo:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)fetchScopeListChangesForScopeListSyncAnchor:(NSData )arg1 progressHandler:(id /* CDUnknownBlockType */)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)downloadBatchTaskForSyncAnchor:(NSData )arg1 transportScope:(id)arg2 scope:(id)arg3 currentLibraryInfo:(id)arg4 progressHandler:(id /* CDUnknownBlockType */)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 transportScope:(id)arg3 scopeIdentifier:(id)arg4 progressHandler:(id /* CDUnknownBlockType */)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
- (id)uploadBatchTaskForBatch:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 progressHandler:(id /* CDUnknownBlockType */)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 transportScope:(id)arg3 scope:(id)arg4 additionalTransportScopes:(id)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
- (id)setupTaskUpdateDisabledFeatures:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) Class userIdentifierClass;
@property(readonly, nonatomic) Class transportGroupClass;
- (id)initWithEngineLibrary:(id)arg1;

@end

