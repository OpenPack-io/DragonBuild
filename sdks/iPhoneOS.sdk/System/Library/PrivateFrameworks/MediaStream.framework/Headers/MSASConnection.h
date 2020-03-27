//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaStream/XPCNSClientConnectionDelegate-Protocol.h>

@class NSMutableDictionary, XPCNSClientConnection;
@protocol OS_dispatch_queue;

@interface MSASConnection : NSObject <XPCNSClientConnectionDelegate>
{
    XPCNSClientConnection *_connection;
    XPCNSClientConnection *_noWakeConnection;
    NSMutableDictionary *_foregroundPingTimerContextByPersonID;
    NSMutableDictionary *_focusAlbumTimerByPersonID;
    NSMutableDictionary *_focusAlbumGUIDByPersonID;
    NSMutableDictionary *_serverSideConfigurationDictionaryByPersonID;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

+ (id)sharedConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSMutableDictionary *serverSideConfigurationDictionaryByPersonID; // @synthesize serverSideConfigurationDictionaryByPersonID=_serverSideConfigurationDictionaryByPersonID;
@property(retain, nonatomic) NSMutableDictionary *focusAlbumGUIDByPersonID; // @synthesize focusAlbumGUIDByPersonID=_focusAlbumGUIDByPersonID;
@property(retain, nonatomic) NSMutableDictionary *focusAlbumTimerByPersonID; // @synthesize focusAlbumTimerByPersonID=_focusAlbumTimerByPersonID;
@property(retain, nonatomic) NSMutableDictionary *foregroundPingTimerContextByPersonID; // @synthesize foregroundPingTimerContextByPersonID=_foregroundPingTimerContextByPersonID;
@property(retain, nonatomic) XPCNSClientConnection *noWakeConnection; // @synthesize noWakeConnection=_noWakeConnection;
@property(retain, nonatomic) XPCNSClientConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)XPCNSClientConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)forgetEverythingAboutPersonID:(id)arg1;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3;
- (void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)markAsSpamAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)markAsSpamInvitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)markAsSpamInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(id /* CDUnknownBlockType */)arg5;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(id /* CDUnknownBlockType */)arg5;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(BOOL)arg3 info:(id)arg4;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2;
- (void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)addAlbum:(id)arg1 personID:(id)arg2;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3;
- (void)refreshResetSync:(BOOL)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshResetSync:(BOOL)arg1 personID:(id)arg2;
- (void)serverSideConfigurationDictionaryForPersonID:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)commentWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)commentGUIDsForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)isAssetCollectionWithGUID:(id)arg1 markedAsUnviewedPersonID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(NSUInteger)arg2 personID:(id)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (void)videoURLForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)assetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)assetCollectionGUIDsInAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)invitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)invitationGUIDsForPersonID:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)accessControlWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)accessControlGUIDsForAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)albumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)albumGUIDsForPersonID:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAlbum:(id)arg1 forPersonID:(id)arg2;
- (void)setIsUIForeground:(BOOL)arg1 forPersonID:(id)arg2;
- (void)timerPingQueueForegroundPingTimerExpiredContext:(id)arg1 personID:(id)arg2;
- (void)pingForeground;
- (void)timerPingQueueSendSetUIForeground:(BOOL)arg1 personID:(id)arg2;
- (void)activityIsThrottledByLackOfDiskSpacePersonID:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)assetsInDownloadQueueCountForPersonID:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)isBusyCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)handlePushNotificationForPersonID:(id)arg1;
- (void)cancelActivitiesForPersonID:(id)arg1;
- (void)retryOutstandingActivitiesForPersonID:(id)arg1;
- (void)retryOutstandingActivities;
- (void)isInRetryStateHandler:(id /* CDUnknownBlockType */)arg1;
- (void)nextActivityDateHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_cloneArray:(id)arg1;
- (void)_sendMessageReliably:(id)arg1;
- (id)_communicationFailureError;
- (void)_sendMessageReliably:(id)arg1 data:(id)arg2 successHandler:(id /* CDUnknownBlockType */)arg3 failureHandler:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end

