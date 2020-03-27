//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob
{
    NSString *_archiveFilename;
    BOOL _shouldPrioritize;
}

+ (id)recoveredEventsWithPathManager:(id)arg1;
@property(nonatomic) BOOL shouldPrioritize; // @synthesize shouldPrioritize=_shouldPrioritize;
// - (void).cxx_destruct;
- (void)runAndWaitForMessageToBeSent;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)deleteAllRecoveryEvents;
- (BOOL)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:(id)arg1;
@property(readonly, nonatomic) PLPhotoLibrary *transientPhotoLibrary;
- (id)serialOperationQueue;
- (id)initWithAssetsdClient:(id)arg1;

@end

