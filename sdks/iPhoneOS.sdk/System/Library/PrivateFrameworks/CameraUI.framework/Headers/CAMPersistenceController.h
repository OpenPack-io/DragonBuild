//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMCaptureService-Protocol.h>
#import <CameraUI/CAMStillImagePersistenceCoordinatorDelegate-Protocol.h>
#import <CameraUI/CAMVideoPersistenceCoordinationDelegate-Protocol.h>

@class CAMBurstController, CAMIrisVideoController, CAMLocationController, CAMPowerController, CAMProtectionController, CAMThumbnailGenerator, NSMapTable, NSMutableArray, NSMutableDictionary;
@protocol CAMPersistenceResultDelegate, OS_dispatch_queue;

@interface CAMPersistenceController : NSObject <CAMStillImagePersistenceCoordinatorDelegate, CAMVideoPersistenceCoordinationDelegate, CAMCaptureService>
{
    struct {
        BOOL respondsToDidCompleteAllLocalPersistenceForRequest;
    } _resultDelegateFlags;
    NSMutableArray *_pendingLocalPersistenceWrappers;
    NSMutableArray *_pendingRemotePersistenceWrappers;
    id <CAMPersistenceResultDelegate> _resultDelegate;
    NSObject<OS_dispatch_queue> *__localPersistenceQueue;
    NSObject<OS_dispatch_queue> *__remotePersistenceQueue;
    CAMThumbnailGenerator *__localPersistenceThumbnailGenerator;
    CAMThumbnailGenerator *__remotePersistenceThumbnailGenerator;
    CAMLocationController *__locationController;
    CAMProtectionController *__protectionController;
    CAMPowerController *__powerController;
    CAMBurstController *__burstController;
    CAMIrisVideoController *__irisVideoController;
    NSObject<OS_dispatch_queue> *__resultDelegateIsolationQueue;
    NSObject<OS_dispatch_queue> *__coordinationQueue;
    NSMapTable *__coordinationQueueGroupsByIdentifier;
    NSMutableDictionary *__coordinationQueue_stillImagePersistenceCoordinators;
    NSMutableDictionary *__coordinationQueue_videoPersistenceCoordinators;
}

+ (id)spatialOverCapturePathForPath:(id)arg1;
+ (id)uniquePathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3 usingIncomingDirectory:(BOOL)arg4;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3;
+ (id)_pathForIncomingDirectory;
+ (id)delimiterForIncomingAssetFilenames;
+ (id)clientVideoMetadataForRequest:(id)arg1 withCreationDate:(id)arg2 isEV0ForHDR:(BOOL)arg3 livePhotoIdentifierOverride:(id)arg4;
+ (id)clientVideoMetadataForLocation:(id)arg1 withCreationDate:(id)arg2;
+ (id)videoMetadataDateFormatter;
@property(readonly, nonatomic) NSMutableDictionary *_coordinationQueue_videoPersistenceCoordinators; // @synthesize _coordinationQueue_videoPersistenceCoordinators=__coordinationQueue_videoPersistenceCoordinators;
@property(readonly, nonatomic) NSMutableDictionary *_coordinationQueue_stillImagePersistenceCoordinators; // @synthesize _coordinationQueue_stillImagePersistenceCoordinators=__coordinationQueue_stillImagePersistenceCoordinators;
@property(readonly, nonatomic) NSMapTable *_coordinationQueueGroupsByIdentifier; // @synthesize _coordinationQueueGroupsByIdentifier=__coordinationQueueGroupsByIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_coordinationQueue; // @synthesize _coordinationQueue=__coordinationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_resultDelegateIsolationQueue; // @synthesize _resultDelegateIsolationQueue=__resultDelegateIsolationQueue;
@property(readonly, nonatomic) CAMIrisVideoController *_irisVideoController; // @synthesize _irisVideoController=__irisVideoController;
@property(readonly, nonatomic) CAMBurstController *_burstController; // @synthesize _burstController=__burstController;
@property(readonly, nonatomic) CAMPowerController *_powerController; // @synthesize _powerController=__powerController;
@property(readonly, nonatomic) CAMProtectionController *_protectionController; // @synthesize _protectionController=__protectionController;
@property(readonly, nonatomic) CAMLocationController *_locationController; // @synthesize _locationController=__locationController;
@property(readonly, nonatomic) CAMThumbnailGenerator *_remotePersistenceThumbnailGenerator; // @synthesize _remotePersistenceThumbnailGenerator=__remotePersistenceThumbnailGenerator;
@property(readonly, nonatomic) CAMThumbnailGenerator *_localPersistenceThumbnailGenerator; // @synthesize _localPersistenceThumbnailGenerator=__localPersistenceThumbnailGenerator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_remotePersistenceQueue; // @synthesize _remotePersistenceQueue=__remotePersistenceQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_localPersistenceQueue; // @synthesize _localPersistenceQueue=__localPersistenceQueue;
// - (void).cxx_destruct;
- (id)_jobDictionaryForTimelapsePlaceholderResult:(id)arg1;
- (void)persistPlaceholderTimelapseVideoWithResult:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)persistBurstWithIdentifier:(id)arg1 result:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_removeCoordinationGroupForIdentifier:(id)arg1;
- (id)_coordinationGroupForIdentifier:(id)arg1;
- (id)_ensureCoordinationGroupForIdentifier:(id)arg1;
- (void)performDeferredRemotePersistenceWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_remotelyPersistVideoJob:(id)arg1 forRequest:(id)arg2 withSendHandler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_handleCompletedVideoJobForRequest:(id)arg1 withReply:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3 error:(id)arg4;
- (void)_notifyDelegateOfCompletedVideoRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 error:(id)arg3;
- (id)_spatialOverCaptureIdentifierForVideoURL:(id)arg1;
- (id)_jobDictionaryForVideoLocalResult:(id)arg1 spatialOverCaptureLocalResult:(id)arg2 fromRequest:(id)arg3;
- (id)_persistVideoCaptureResult:(id)arg1 withRequest:(id)arg2;
- (id)_stillPersistenceUUIDForRequest:(id)arg1 withVideoResult:(id)arg2;
- (id)_videoPersistenceUUIDForRequest:(id)arg1 withResult:(id)arg2;
- (void)_dispatchRemotePersistenceForLocalVideoPersistenceResult:(id)arg1 spatialOverCaptureLocalVideoResult:(id)arg2 request:(id)arg3 powerAssertionReason:(unsigned int)arg4;
- (void)_coordinateRemotePersistenceForVideoLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3;
- (void)_locallyPersistVideoCaptureResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_notifyDelegateOfCompletedVideoLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (void)videoPersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3;
- (void)videoPersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 spatialOverCaptureResult:(id)arg3 captureRequest:(id)arg4 powerAssertionReason:(unsigned int)arg5;
- (void)_handleVideoPersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (void)_remotelyPersistStillImageJob:(id)arg1 forRequest:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_handleCompletedStillImageJobForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(NSUInteger)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4 error:(id)arg5;
- (void)_notifyDelegateOfCompletedStillImageRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(NSUInteger)arg3 error:(id)arg4;
- (id)_jobDictionaryForStillImageLocalResult:(id)arg1 fullsizeRenderLocalResult:(id)arg2 spatialOverCaptureLocalResult:(id)arg3 fromRequest:(id)arg4;
- (id)_xmpEncodedDiagnosticDataFromDictionary:(id)arg1;
- (id)_adjustmentsDataForRequest:(id)arg1 captureDimensions:(CDStruct_79c71658)arg2 portraitMetadata:(id)arg3;
- (BOOL)_writeDataToURL:(id)arg1 withData:(id)arg2 duringBurst:(BOOL)arg3 error:(out id )arg4;
- (BOOL)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(BOOL)arg5 error:(out id )arg6;
- (struct __CFWriteStream )_createOpenWriteStreamWithURL:(id)arg1 forBurst:(BOOL)arg2;
- (id)_persistStillImageCaptureSurfaceResult:(id)arg1 withRequest:(id)arg2;
- (id)_uniformTypeIdentifierForStillImageRequest:(id)arg1;
- (id)_extensionForUniformTypeIdentifier:(id)arg1;
- (void)_dispatchRemotePersistenceForLocalPersistenceResult:(id)arg1 fullsizeRenderLocalResult:(id)arg2 spatialOverCaptureLocalResult:(id)arg3 request:(id)arg4 powerAssertionReason:(unsigned int)arg5;
- (void)stillImagePersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3;
- (void)stillImagePersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 fullsizeRenderLocalResult:(id)arg3 spatialOverCaptureLocalResult:(id)arg4 request:(id)arg5 powerAssertionReason:(unsigned int)arg6;
- (void)_coordinateRemotePersistenceForStillImageLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3;
- (void)_locallyPersistStillImageResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_notifyDelegateOfCompletedStillImageLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (void)_handleStillImagePersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (unsigned int)_videoRemotePowerAssertionReasonForCoordinationInfo:(id)arg1;
- (unsigned int)_videoLocalPowerAssertionReasonForCoordinationInfo:(id)arg1;
- (unsigned int)_stillImageLocalPowerAssertionReasonForCoordinationInfo:(id)arg1;
- (void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2;
- (void)_mainThread_handleApplicationDidEnterBackground:(id)arg1;
@property(readonly, nonatomic) BOOL resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest;
@property(nonatomic) __weak id <CAMPersistenceResultDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(readonly, nonatomic) NSMutableArray *_pendingRemotePersistenceWrappers; // @synthesize _pendingRemotePersistenceWrappers;
@property(readonly, nonatomic) NSMutableArray *_pendingLocalPersistenceWrappers; // @synthesize _pendingLocalPersistenceWrappers;
- (void)dealloc;
- (id)init;
- (id)initWithLocationController:(id)arg1 burstController:(id)arg2 protectionController:(id)arg3 powerController:(id)arg4 irisVideoController:(id)arg5;

@end

