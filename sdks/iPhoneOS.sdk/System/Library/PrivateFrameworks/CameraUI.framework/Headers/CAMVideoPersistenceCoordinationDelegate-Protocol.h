//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAMCaptureCoordinationInfo, CAMCaptureRequest, CAMVideoLocalPersistenceResult, CAMVideoPersistenceCoordinator;

@protocol CAMVideoPersistenceCoordinationDelegate <NSObject>
- (void)videoPersistenceCoordinator:(CAMVideoPersistenceCoordinator *)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(CAMCaptureCoordinationInfo *)arg2 request:(CAMCaptureRequest *)arg3;
- (void)videoPersistenceCoordinator:(CAMVideoPersistenceCoordinator *)arg1 requestsRemotePersistenceForLocalPersistenceResult:(CAMVideoLocalPersistenceResult *)arg2 spatialOverCaptureResult:(CAMVideoLocalPersistenceResult *)arg3 captureRequest:(CAMCaptureRequest *)arg4 powerAssertionReason:(unsigned int)arg5;
@end

