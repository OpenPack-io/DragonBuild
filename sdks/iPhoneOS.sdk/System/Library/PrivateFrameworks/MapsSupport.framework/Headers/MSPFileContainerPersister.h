//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPContainerPersister.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface MSPFileContainerPersister : MSPContainerPersister
{
    NSURL *_persistenceFileURL;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(readonly, nonatomic) NSURL *persistenceFileURL; // @synthesize persistenceFileURL=_persistenceFileURL;
// - (void).cxx_destruct;
- (id)stateSnapshotFromData:(id)arg1;
- (BOOL)getSnapshot:(out id )arg1 data:(out id )arg2 mergingCurrentState:(id)arg3 withState:(id)arg4 mergeOptions:(id)arg5 error:(out id )arg6;
- (BOOL)getSnapshot:(out id )arg1 data:(out id )arg2 forNewContents:(id)arg3 edits:(id)arg4 appliedToOldContents:(id)arg5 error:(out id )arg6;
- (void)eraseWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)commitByCreatingStateSnapshotAndDataWithCreationHandler:(id /* CDUnknownBlockType */)arg1 error:(out id )arg2;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)fetchStateSnapshotWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)newStateSnapshot;
- (id)initWithPersistenceFileAtURL:(id)arg1;
- (id)init;

@end

